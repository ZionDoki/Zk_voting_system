const circomlib = require("circomlibjs");
const fs = require("fs");
const merkleTree = require("../lib/MerkleTree");
const MERKLE_TREE_HEIGHT = 15;
const bigInt = require("big-integer");
const ffjavascript = require("ffjavascript");
const leInt2Buff = ffjavascript.utils.leInt2Buff;
const leBuff2int = ffjavascript.utils.leBuff2int;
const stringifyBigInts = ffjavascript.utils.stringifyBigInts;

class MimcSpongeHasher {
  hash(level, left, right) {
    return micmsponge
      .multiHash([bigInt(left), bigInt(right)])
      .join("")
      .trim();
  }
}

let babyJub;
let pedersenAlg;
let pedersenHash;
let micmsponge;
let input = {};

function createDeposit(nullifier, secret) {
  let deposit = { nullifier, secret };
  deposit.preimage = Buffer.concat([
    leInt2Buff(deposit.nullifier),
    leInt2Buff(deposit.secret),
  ]);
  deposit.commitment = pedersenHash(deposit.preimage);
  deposit.nullifierHash = pedersenHash(leInt2Buff(deposit.nullifier));
  return deposit;
}

// function buff2hex(buff) {
//   function i2hex(i) {
//     return ("0" + i.toString(16)).slice(-2);
//   }
//   return Array.from(buff).map(i2hex).join("");
// }
// const numberConverter = (number) => {
//   return new ffjavascript.ZqField(ffjavascript.Scalar.fromString(number));
// };
const F = new ffjavascript.ZqField(
  ffjavascript.Scalar.fromString(
    "21888242871839275222246405745257275088548364400416034343698204186575808495617"
  )
);
async function main() {
  babyJub = await circomlib.buildBabyjub();
  pedersenAlg = await circomlib.buildPedersenHash();
  micmsponge = await circomlib.buildMimcSponge();
  pedersenHash = (data) => babyJub.unpackPoint(pedersenAlg.hash(data))[0];
  let nullifier1 = Buffer.from("5521312211235521312211235521312");
  nullifier1 = leBuff2int(nullifier1);
  let secret1 = Buffer.from("5521312211235521312211235521313");
  secret1 = leBuff2int(secret1);
  const createdDeposit1 = createDeposit(nullifier1, secret1);
  //input.commitment = Array.from(createdDeposit1.commitment);
  input.nullifier = nullifier1.toString();
  input.nullifierHash = stringifyBigInts(
    F.fromRprLEM(createdDeposit1.nullifierHash)
  );
  input.secret = secret1.toString();
  console.log(input.nullifierHash);

  let nullifier2 = Buffer.from("5521312211235521312211235521322");
  nullifier2 = leBuff2int(nullifier2);
  let secret2 = Buffer.from("5521312211235521312211235521212");
  secret2 = leBuff2int(secret2);
  const createdDeposit2 = createDeposit(nullifier2, secret2);

  let hasher = new MimcSpongeHasher();
  //Array.from(createdDeposit.commitment.values()
  const tree = new merkleTree(
    MERKLE_TREE_HEIGHT,
    [
      Array.from(createdDeposit1.commitment).join(""),
      Array.from(createdDeposit2.commitment).join(""),
    ],
    undefined,
    undefined,
    hasher
  );

  //Now we are going to find the merkle tree proof that is computed for the 1st
  //commitment that was inserted in the tree (createdDeposit1.commmitment, that has an index 0 inside the tree)
  const { root, path_elements, path_index } = await tree.path(0);
  input.root = root;
  input.pathElements = path_elements;
  input.pathIndices = path_index;
  console.log(input);
  fs.writeFileSync("./input.json", JSON.stringify(input));
}

main().catch((error) => {
  console.error(error);
  process.exitCode = 1;
});

/**
 * @param root --> Merkle tree root
 * @param nullifier --> value created by the user
 * @param secret --> value created by the user
 * @param nullifierHash --> nullifier hashed with pedersen alg
 * @param path_elements --> merkle tree proof elements
 * @param path_indices --> merkle tree proof elements
 */