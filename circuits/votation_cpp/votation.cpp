#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "circom.hpp"
#include "calcwit.hpp"
void Edwards2Montgomery_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Edwards2Montgomery_0_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMux3_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMux3_1_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryDouble_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryDouble_2_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryAdd_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryAdd_3_run(uint ctx_index,Circom_CalcWit* ctx);
void Window4_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Window4_4_run(uint ctx_index,Circom_CalcWit* ctx);
void Montgomery2Edwards_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Montgomery2Edwards_5_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_6_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_7_run(uint ctx_index,Circom_CalcWit* ctx);
void BabyAdd_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BabyAdd_8_run(uint ctx_index,Circom_CalcWit* ctx);
void Pedersen_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Pedersen_9_run(uint ctx_index,Circom_CalcWit* ctx);
void Segment_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Segment_10_run(uint ctx_index,Circom_CalcWit* ctx);
void Pedersen_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Pedersen_11_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_12_run(uint ctx_index,Circom_CalcWit* ctx);
void CommitmentHasher_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CommitmentHasher_13_run(uint ctx_index,Circom_CalcWit* ctx);
void DualMux_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void DualMux_14_run(uint ctx_index,Circom_CalcWit* ctx);
void MiMCFeistel_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MiMCFeistel_15_run(uint ctx_index,Circom_CalcWit* ctx);
void MiMCSponge_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MiMCSponge_16_run(uint ctx_index,Circom_CalcWit* ctx);
void HashLeftRight_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void HashLeftRight_17_run(uint ctx_index,Circom_CalcWit* ctx);
void MerkleTreeChecker_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MerkleTreeChecker_18_run(uint ctx_index,Circom_CalcWit* ctx);
void Withdraw_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Withdraw_19_run(uint ctx_index,Circom_CalcWit* ctx);
Circom_TemplateFunction _functionTable[20] = { 
Edwards2Montgomery_0_run,
MultiMux3_1_run,
MontgomeryDouble_2_run,
MontgomeryAdd_3_run,
Window4_4_run,
Montgomery2Edwards_5_run,
Segment_6_run,
Segment_7_run,
BabyAdd_8_run,
Pedersen_9_run,
Segment_10_run,
Pedersen_11_run,
Num2Bits_12_run,
CommitmentHasher_13_run,
DualMux_14_run,
MiMCFeistel_15_run,
MiMCSponge_16_run,
HashLeftRight_17_run,
MerkleTreeChecker_18_run,
Withdraw_19_run };
uint get_main_input_signal_start() {return 1;}

uint get_main_input_signal_no() {return 34;}

uint get_total_signal_no() {return 63376;}

uint get_number_of_components() {return 2332;}

uint get_size_of_input_hashmap() {return 256;}

uint get_size_of_witness() {return 31572;}

uint get_size_of_constants() {return 467;}

uint get_size_of_io_map() {return 3;}

// function declarations
// template declarations
void Edwards2Montgomery_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 0;
ctx->componentMemory[coffset].templateName = "Edwards2Montgomery";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Edwards2Montgomery_0_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 34
Fr_sub(&expaux[2],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 34
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 38
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&expaux[3]); // line circom 38
Fr_add(&expaux[2],&circuitConstants[1],&signalValues[mySignalStart + 3]); // line circom 38
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 39
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 0]); // line circom 39
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 39. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void MultiMux3_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 1;
ctx->componentMemory[coffset].templateName = "MultiMux3";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 19;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MultiMux3_1_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[10];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 37];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 19],&signalValues[mySignalStart + 18]); // line circom 38
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)];
// load src
Fr_sub(&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 7) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)]); // line circom 42
Fr_sub(&expaux[6],&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)]); // line circom 42
Fr_add(&expaux[5],&expaux[6],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 42
Fr_sub(&expaux[4],&expaux[5],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)]); // line circom 42
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 42
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 42
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 43
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 43
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 43
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 44
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 44
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 44
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 47
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 47
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 47
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 48
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 49
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)]); // line circom 52
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)]); // line circom 52
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)]); // line circom 52
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 20]); // line circom 52
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)]); // line circom 53
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)]); // line circom 53
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)]); // line circom 53
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 52
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
}
}

void MontgomeryDouble_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 2;
ctx->componentMemory[coffset].templateName = "MontgomeryDouble";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryDouble_2_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 5];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 2]); // line circom 135
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 4];
// load src
Fr_mul(&expaux[3],&circuitConstants[7],&signalValues[mySignalStart + 5]); // line circom 137
Fr_mul(&expaux[4],&circuitConstants[11],&signalValues[mySignalStart + 2]); // line circom 137
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 137
Fr_add(&expaux[1],&expaux[2],&circuitConstants[1]); // line circom 137
Fr_mul(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 137
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 138
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 138
Fr_mul(&expaux[4],&circuitConstants[7],&signalValues[mySignalStart + 5]); // line circom 138
Fr_mul(&expaux[5],&circuitConstants[11],&signalValues[mySignalStart + 2]); // line circom 138
Fr_add(&expaux[3],&expaux[4],&expaux[5]); // line circom 138
Fr_add(&expaux[2],&expaux[3],&circuitConstants[1]); // line circom 138
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 138
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 138. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[3],&circuitConstants[1],&signalValues[mySignalStart + 4]); // line circom 140
Fr_mul(&expaux[2],&expaux[3],&signalValues[mySignalStart + 4]); // line circom 140
Fr_sub(&expaux[1],&expaux[2],&circuitConstants[10]); // line circom 140
Fr_mul(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 2]); // line circom 140
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 140
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 141
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 141
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 141
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void MontgomeryAdd_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 3;
ctx->componentMemory[coffset].templateName = "MontgomeryAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryAdd_3_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 102
Fr_sub(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 102
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 102
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 103
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 103
Fr_sub(&expaux[2],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 103
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 103
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 103. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[4],&circuitConstants[1],&signalValues[mySignalStart + 6]); // line circom 105
Fr_mul(&expaux[3],&expaux[4],&signalValues[mySignalStart + 6]); // line circom 105
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[10]); // line circom 105
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 105
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 4]); // line circom 105
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 106
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 106
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 106
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void Window4_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 4;
ctx->componentMemory[coffset].templateName = "Window4";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 6;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[8];
}

void Window4_4_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+58;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mux";
mySubcomponents[aux_create+i] = aux_cmp_num;
MultiMux3_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 38 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+52;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl2";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+10;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr3";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+17;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr4";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+24;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr5";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+31;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr6";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+38;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr7";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+45;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr8";
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 18];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 19];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 20];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 10];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 11];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 12];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 13];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 14];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 15];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 16];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 17];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MultiMux3_1_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_neg(&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]); // line circom 108
Fr_mul(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 108
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 7]); // line circom 108
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]); // line circom 108
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void Montgomery2Edwards_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 5;
ctx->componentMemory[coffset].templateName = "Montgomery2Edwards";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Montgomery2Edwards_5_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 3]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 54
Fr_add(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 54
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 54
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 3]); // line circom 56
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 56
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 56. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_add(&expaux[3],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 57
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&expaux[3]); // line circom 57
Fr_sub(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[1]); // line circom 57
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 57
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 57. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Segment_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 6;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 202;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[199];
}

void Segment_6_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[12]);
}
{
uint aux_create = 0;
int aux_cmp_num = 147+ctx_index+1;
uint csoffset = mySignalStart+1135;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 149+ctx_index+1;
uint csoffset = mySignalStart+1143;
uint aux_dimensions[1] = {50};
for (uint i = 0; i < 50; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 51;
int aux_cmp_num = 49+ctx_index+1;
uint csoffset = mySignalStart+547;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 100;
int aux_cmp_num = 98+ctx_index+1;
uint csoffset = mySignalStart+841;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 149;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+204;
uint aux_dimensions[1] = {49};
for (uint i = 0; i < 49; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 198;
int aux_cmp_num = 148+ctx_index+1;
uint csoffset = mySignalStart+1139;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 202]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 203]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[12]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 51);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 51);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 100);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 51)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 100);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 51)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 100)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 100)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 149)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 149)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 149);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[12]); // line circom 130
}
{
uint cmp_index_ref = 198;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[197]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 198;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[197]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[198]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[198]].signalStart + 1]);
}
}

void Segment_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 7;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 98;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[95];
}

void Segment_7_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[14]);
}
{
uint aux_create = 0;
int aux_cmp_num = 69+ctx_index+1;
uint csoffset = mySignalStart+537;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 71+ctx_index+1;
uint csoffset = mySignalStart+545;
uint aux_dimensions[1] = {24};
for (uint i = 0; i < 24; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 25;
int aux_cmp_num = 23+ctx_index+1;
uint csoffset = mySignalStart+261;
uint aux_dimensions[1] = {23};
for (uint i = 0; i < 23; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 48;
int aux_cmp_num = 46+ctx_index+1;
uint csoffset = mySignalStart+399;
uint aux_dimensions[1] = {23};
for (uint i = 0; i < 23; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 71;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+100;
uint aux_dimensions[1] = {23};
for (uint i = 0; i < 23; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 94;
int aux_cmp_num = 70+ctx_index+1;
uint csoffset = mySignalStart+541;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 98]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 99]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[14]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 25);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 25);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 48);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 25)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 48);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 25)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 48)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 48)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 71;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 71;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 71);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 71)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 71);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 71)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 71);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 71);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[14]); // line circom 130
}
{
uint cmp_index_ref = 94;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[93]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 94;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[93]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[94]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[94]].signalStart + 1]);
}
}

void BabyAdd_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 8;
ctx->componentMemory[coffset].templateName = "BabyAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BabyAdd_8_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 5]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 7];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 3],&signalValues[mySignalStart + 4]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 8];
// load src
Fr_mul(&expaux[2],&circuitConstants[16],&signalValues[mySignalStart + 2]); // line circom 42
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + 3]); // line circom 42
Fr_add(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 5]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&expaux[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 9];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 45
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 45
Fr_add(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 45
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 46
Fr_add(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 46
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 0]); // line circom 46
Fr_add(&expaux[2],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 46
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 46
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 46. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_mul(&expaux[4],&circuitConstants[8],&signalValues[mySignalStart + 6]); // line circom 48
Fr_add(&expaux[2],&signalValues[mySignalStart + 8],&expaux[4]); // line circom 48
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 7]); // line circom 48
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 48
Fr_sub(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 48
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[9],&signalValues[mySignalStart + 9]); // line circom 49
Fr_sub(&expaux[2],&circuitConstants[1],&expaux[4]); // line circom 49
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 1]); // line circom 49
Fr_mul(&expaux[5],&circuitConstants[8],&signalValues[mySignalStart + 6]); // line circom 49
Fr_add(&expaux[3],&signalValues[mySignalStart + 8],&expaux[5]); // line circom 49
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + 7]); // line circom 49
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 49
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 49. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Pedersen_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 9;
ctx->componentMemory[coffset].templateName = "Pedersen";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 496;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[5];
}

void Pedersen_9_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[46];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
uint aux_create = 0;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+518;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 602+ctx_index+1;
uint csoffset = mySignalStart+6461;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 1202+ctx_index+1;
uint csoffset = mySignalStart+12404;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[2]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+498;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
BabyAdd_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[21],2);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[23],2);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[25],2);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[27],2);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[29],2);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[31],2);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[33],2);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[35],2);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[37],2);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[39],2);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[7]); // line circom 202
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 203
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[40]);
}
}else{
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
}
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_sub(&expaux[2],&lvar[44],&circuitConstants[1]); // line circom 204
Fr_idiv(&expaux[1],&expaux[2],&circuitConstants[6]); // line circom 204
Fr_add(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 204
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 0) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 1) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[43]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[1].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[42]) * 200) + Fr_toInt(&lvar[43]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
Fr_add(&expaux[0],&lvar[43],&circuitConstants[1]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&lvar[44]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[7]); // line circom 202
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 219
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[0]); // line circom 221
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[2]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[2]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 219
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
}

void Segment_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 10;
ctx->componentMemory[coffset].templateName = "Segment";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 50;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[47];
}

void Segment_10_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[42]);
}
{
uint aux_create = 0;
int aux_cmp_num = 33+ctx_index+1;
uint csoffset = mySignalStart+261;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
mySubcomponents[aux_create+i] = aux_cmp_num;
Edwards2Montgomery_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 35+ctx_index+1;
uint csoffset = mySignalStart+269;
uint aux_dimensions[1] = {12};
for (uint i = 0; i < 12; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
Window4_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 96 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 13;
int aux_cmp_num = 11+ctx_index+1;
uint csoffset = mySignalStart+129;
uint aux_dimensions[1] = {11};
for (uint i = 0; i < 11; i++) {
std::string new_cmp_name = "doublers1"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 24;
int aux_cmp_num = 22+ctx_index+1;
uint csoffset = mySignalStart+195;
uint aux_dimensions[1] = {11};
for (uint i = 0; i < 11; i++) {
std::string new_cmp_name = "doublers2"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryDouble_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 35;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+52;
uint aux_dimensions[1] = {11};
for (uint i = 0; i < 11; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MontgomeryAdd_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 46;
int aux_cmp_num = 34+ctx_index+1;
uint csoffset = mySignalStart+265;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
mySubcomponents[aux_create+i] = aux_cmp_num;
Montgomery2Edwards_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 50]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 51]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Edwards2Montgomery_0_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[42]); // line circom 130
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((4 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[1]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 132
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 135
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 13);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 141
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 13);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 142
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 24);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 143
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 13)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 24);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 144
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 13)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryDouble_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 146
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 24)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 147
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 24)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Window4_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 150
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 35;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 35;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 154
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 35);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 154
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 35)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 155
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 35);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 155
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 35)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 157
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 35);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 158
{
uint cmp_index_ref = ((1 * Fr_toInt(&expaux[0])) + 35);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MontgomeryAdd_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[42]); // line circom 130
}
{
uint cmp_index_ref = 46;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[45]].signalStart + 0]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 46;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[45]].signalStart + 1]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Montgomery2Edwards_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[46]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[46]].signalStart + 1]);
}
}

void Pedersen_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 11;
ctx->componentMemory[coffset].templateName = "Pedersen";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 248;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void Pedersen_11_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[46];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
uint aux_create = 0;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+260;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 601+ctx_index+1;
uint csoffset = mySignalStart+6203;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
mySubcomponents[aux_create+i] = aux_cmp_num;
Segment_10_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+250;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adders";
mySubcomponents[aux_create+i] = aux_cmp_num;
BabyAdd_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[18]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[20]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[22]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[24]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[26]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[28]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[30]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[32]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[34]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[36]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[21],2);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[23],2);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[25],2);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[27],2);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[29],2);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[31],2);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[33],2);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[35],2);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[37],2);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copyn(aux_dest,&lvar[39],2);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 202
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 203
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
}else{
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
}
{
PFrElement aux_dest = &lvar[45];
// load src
Fr_sub(&expaux[2],&lvar[44],&circuitConstants[1]); // line circom 204
Fr_idiv(&expaux[1],&expaux[2],&circuitConstants[6]); // line circom 204
Fr_add(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 204
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 0) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&lvar[(((2 * Fr_toInt(&lvar[42])) + 1) + 1)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[42])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[43]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[1].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[42]) * 200) + Fr_toInt(&lvar[43]))) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[43];
// load src
Fr_add(&expaux[0],&lvar[43],&circuitConstants[1]); // line circom 208
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[43],&lvar[44]); // line circom 208
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&lvar[44]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
Fr_add(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 202
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[2]); // line circom 202
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
BabyAdd_8_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[42],&circuitConstants[1]); // line circom 219
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
}

void Num2Bits_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 12;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_12_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[44]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[44]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 248],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[1]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[44]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 248]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void CommitmentHasher_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 13;
ctx->componentMemory[coffset].templateName = "CommitmentHasher";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4];
}

void CommitmentHasher_13_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+4;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "commitmentHasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
Pedersen_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 15253 ;
aux_cmp_num += 1491;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1492+ctx_index+1;
uint csoffset = mySignalStart+15506;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "nullifierHasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
Pedersen_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 7624 ;
aux_cmp_num += 746;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 1491+ctx_index+1;
uint csoffset = mySignalStart+15257;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "nullifierBits";
mySubcomponents[aux_create+i] = aux_cmp_num;
Num2Bits_12_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 249 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 2238+ctx_index+1;
uint csoffset = mySignalStart+23130;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "secretBits";
mySubcomponents[aux_create+i] = aux_cmp_num;
Num2Bits_12_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 249 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 248];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Num2Bits_12_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 248];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
Num2Bits_12_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[44]); // line circom 16
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Pedersen_11_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * (Fr_toInt(&lvar[0]) + 248)) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
Pedersen_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[1]); // line circom 16
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[44]); // line circom 16
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[45]);
}
Fr_geq(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 21
while(Fr_isTrue(&expaux[0])){
{
char* temp = Fr_element2str(&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
printf("%s",temp);
delete [] temp;
}
{
printf("\n");
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_sub(&expaux[0],&lvar[0],&circuitConstants[1]); // line circom 21
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_geq(&expaux[0],&lvar[0],&circuitConstants[0]); // line circom 21
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
{
char* temp = Fr_element2str(&signalValues[mySignalStart + 1]);
printf("%s",temp);
delete [] temp;
}
{
printf("\n");
}
}

void DualMux_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 14;
ctx->componentMemory[coffset].templateName = "DualMux";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void DualMux_14_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
Fr_sub(&expaux[3],&circuitConstants[1],&signalValues[mySignalStart + 4]); // line circom 23
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 23
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[0]); // line circom 23
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 23. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_sub(&expaux[2],&signalValues[mySignalStart + 3],&signalValues[mySignalStart + 2]); // line circom 24
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 4]); // line circom 24
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 24
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[2],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 3]); // line circom 25
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 4]); // line circom 25
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 25
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}

void MiMCFeistel_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 15;
ctx->componentMemory[coffset].templateName = "MiMCFeistel";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MiMCFeistel_15_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[223];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[48]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[50]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[52]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[54]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[56]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[60]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[62]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[64]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[66]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[68]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[70]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[72]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[74]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[76]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[78]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[82]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[84]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[86]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[88]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[90]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[92]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[94]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[96]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[98]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[100]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[102]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[104]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[106]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[108]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[110]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[112]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[114]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[116]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[118]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[120]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[122]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[124]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[126]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[128]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[132]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[134]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[136]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[138]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[140]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[142]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[144]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[146]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[148]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[150]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[152]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[154]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[156]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[158]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[160]);
}
{
PFrElement aux_dest = &lvar[66];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[162]);
}
{
PFrElement aux_dest = &lvar[67];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[164]);
}
{
PFrElement aux_dest = &lvar[68];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[166]);
}
{
PFrElement aux_dest = &lvar[69];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[168]);
}
{
PFrElement aux_dest = &lvar[70];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[170]);
}
{
PFrElement aux_dest = &lvar[71];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[172]);
}
{
PFrElement aux_dest = &lvar[72];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[174]);
}
{
PFrElement aux_dest = &lvar[73];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[176]);
}
{
PFrElement aux_dest = &lvar[74];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[178]);
}
{
PFrElement aux_dest = &lvar[75];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[180]);
}
{
PFrElement aux_dest = &lvar[76];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[182]);
}
{
PFrElement aux_dest = &lvar[77];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[184]);
}
{
PFrElement aux_dest = &lvar[78];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[186]);
}
{
PFrElement aux_dest = &lvar[79];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[188]);
}
{
PFrElement aux_dest = &lvar[80];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[190]);
}
{
PFrElement aux_dest = &lvar[81];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[192]);
}
{
PFrElement aux_dest = &lvar[82];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[194]);
}
{
PFrElement aux_dest = &lvar[83];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[196]);
}
{
PFrElement aux_dest = &lvar[84];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[198]);
}
{
PFrElement aux_dest = &lvar[85];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[200]);
}
{
PFrElement aux_dest = &lvar[86];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[202]);
}
{
PFrElement aux_dest = &lvar[87];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[204]);
}
{
PFrElement aux_dest = &lvar[88];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[206]);
}
{
PFrElement aux_dest = &lvar[89];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[208]);
}
{
PFrElement aux_dest = &lvar[90];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[210]);
}
{
PFrElement aux_dest = &lvar[91];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[212]);
}
{
PFrElement aux_dest = &lvar[92];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[214]);
}
{
PFrElement aux_dest = &lvar[93];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[216]);
}
{
PFrElement aux_dest = &lvar[94];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[218]);
}
{
PFrElement aux_dest = &lvar[95];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[220]);
}
{
PFrElement aux_dest = &lvar[96];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[222]);
}
{
PFrElement aux_dest = &lvar[97];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[223]);
}
{
PFrElement aux_dest = &lvar[98];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[225]);
}
{
PFrElement aux_dest = &lvar[99];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[227]);
}
{
PFrElement aux_dest = &lvar[100];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[229]);
}
{
PFrElement aux_dest = &lvar[101];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[231]);
}
{
PFrElement aux_dest = &lvar[102];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[233]);
}
{
PFrElement aux_dest = &lvar[103];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[235]);
}
{
PFrElement aux_dest = &lvar[104];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[237]);
}
{
PFrElement aux_dest = &lvar[105];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[239]);
}
{
PFrElement aux_dest = &lvar[106];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[241]);
}
{
PFrElement aux_dest = &lvar[107];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[243]);
}
{
PFrElement aux_dest = &lvar[108];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[245]);
}
{
PFrElement aux_dest = &lvar[109];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[247]);
}
{
PFrElement aux_dest = &lvar[110];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[249]);
}
{
PFrElement aux_dest = &lvar[111];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[251]);
}
{
PFrElement aux_dest = &lvar[112];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[253]);
}
{
PFrElement aux_dest = &lvar[113];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[255]);
}
{
PFrElement aux_dest = &lvar[114];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[257]);
}
{
PFrElement aux_dest = &lvar[115];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[259]);
}
{
PFrElement aux_dest = &lvar[116];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[261]);
}
{
PFrElement aux_dest = &lvar[117];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[263]);
}
{
PFrElement aux_dest = &lvar[118];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[265]);
}
{
PFrElement aux_dest = &lvar[119];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[267]);
}
{
PFrElement aux_dest = &lvar[120];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[269]);
}
{
PFrElement aux_dest = &lvar[121];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[271]);
}
{
PFrElement aux_dest = &lvar[122];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[273]);
}
{
PFrElement aux_dest = &lvar[123];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[275]);
}
{
PFrElement aux_dest = &lvar[124];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[277]);
}
{
PFrElement aux_dest = &lvar[125];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[279]);
}
{
PFrElement aux_dest = &lvar[126];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[281]);
}
{
PFrElement aux_dest = &lvar[127];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[283]);
}
{
PFrElement aux_dest = &lvar[128];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[285]);
}
{
PFrElement aux_dest = &lvar[129];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[287]);
}
{
PFrElement aux_dest = &lvar[130];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[289]);
}
{
PFrElement aux_dest = &lvar[131];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[291]);
}
{
PFrElement aux_dest = &lvar[132];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[293]);
}
{
PFrElement aux_dest = &lvar[133];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[295]);
}
{
PFrElement aux_dest = &lvar[134];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[297]);
}
{
PFrElement aux_dest = &lvar[135];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[299]);
}
{
PFrElement aux_dest = &lvar[136];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[301]);
}
{
PFrElement aux_dest = &lvar[137];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[303]);
}
{
PFrElement aux_dest = &lvar[138];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[305]);
}
{
PFrElement aux_dest = &lvar[139];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[307]);
}
{
PFrElement aux_dest = &lvar[140];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[309]);
}
{
PFrElement aux_dest = &lvar[141];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[311]);
}
{
PFrElement aux_dest = &lvar[142];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[313]);
}
{
PFrElement aux_dest = &lvar[143];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[315]);
}
{
PFrElement aux_dest = &lvar[144];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[317]);
}
{
PFrElement aux_dest = &lvar[145];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[319]);
}
{
PFrElement aux_dest = &lvar[146];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[321]);
}
{
PFrElement aux_dest = &lvar[147];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[323]);
}
{
PFrElement aux_dest = &lvar[148];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[325]);
}
{
PFrElement aux_dest = &lvar[149];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[327]);
}
{
PFrElement aux_dest = &lvar[150];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[329]);
}
{
PFrElement aux_dest = &lvar[151];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[331]);
}
{
PFrElement aux_dest = &lvar[152];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[333]);
}
{
PFrElement aux_dest = &lvar[153];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[335]);
}
{
PFrElement aux_dest = &lvar[154];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[337]);
}
{
PFrElement aux_dest = &lvar[155];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[339]);
}
{
PFrElement aux_dest = &lvar[156];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[341]);
}
{
PFrElement aux_dest = &lvar[157];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[343]);
}
{
PFrElement aux_dest = &lvar[158];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[345]);
}
{
PFrElement aux_dest = &lvar[159];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[347]);
}
{
PFrElement aux_dest = &lvar[160];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[349]);
}
{
PFrElement aux_dest = &lvar[161];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[351]);
}
{
PFrElement aux_dest = &lvar[162];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[353]);
}
{
PFrElement aux_dest = &lvar[163];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[355]);
}
{
PFrElement aux_dest = &lvar[164];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[357]);
}
{
PFrElement aux_dest = &lvar[165];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[359]);
}
{
PFrElement aux_dest = &lvar[166];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[361]);
}
{
PFrElement aux_dest = &lvar[167];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[363]);
}
{
PFrElement aux_dest = &lvar[168];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[365]);
}
{
PFrElement aux_dest = &lvar[169];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[367]);
}
{
PFrElement aux_dest = &lvar[170];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[369]);
}
{
PFrElement aux_dest = &lvar[171];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[371]);
}
{
PFrElement aux_dest = &lvar[172];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[373]);
}
{
PFrElement aux_dest = &lvar[173];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[375]);
}
{
PFrElement aux_dest = &lvar[174];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[377]);
}
{
PFrElement aux_dest = &lvar[175];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[379]);
}
{
PFrElement aux_dest = &lvar[176];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[381]);
}
{
PFrElement aux_dest = &lvar[177];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[383]);
}
{
PFrElement aux_dest = &lvar[178];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[385]);
}
{
PFrElement aux_dest = &lvar[179];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[387]);
}
{
PFrElement aux_dest = &lvar[180];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[389]);
}
{
PFrElement aux_dest = &lvar[181];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[391]);
}
{
PFrElement aux_dest = &lvar[182];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[393]);
}
{
PFrElement aux_dest = &lvar[183];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[395]);
}
{
PFrElement aux_dest = &lvar[184];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[397]);
}
{
PFrElement aux_dest = &lvar[185];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[399]);
}
{
PFrElement aux_dest = &lvar[186];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[401]);
}
{
PFrElement aux_dest = &lvar[187];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[403]);
}
{
PFrElement aux_dest = &lvar[188];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[405]);
}
{
PFrElement aux_dest = &lvar[189];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[407]);
}
{
PFrElement aux_dest = &lvar[190];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[409]);
}
{
PFrElement aux_dest = &lvar[191];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[411]);
}
{
PFrElement aux_dest = &lvar[192];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[413]);
}
{
PFrElement aux_dest = &lvar[193];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[415]);
}
{
PFrElement aux_dest = &lvar[194];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[417]);
}
{
PFrElement aux_dest = &lvar[195];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[419]);
}
{
PFrElement aux_dest = &lvar[196];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[421]);
}
{
PFrElement aux_dest = &lvar[197];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[423]);
}
{
PFrElement aux_dest = &lvar[198];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[425]);
}
{
PFrElement aux_dest = &lvar[199];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[427]);
}
{
PFrElement aux_dest = &lvar[200];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[429]);
}
{
PFrElement aux_dest = &lvar[201];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[430]);
}
{
PFrElement aux_dest = &lvar[202];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[432]);
}
{
PFrElement aux_dest = &lvar[203];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[434]);
}
{
PFrElement aux_dest = &lvar[204];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[436]);
}
{
PFrElement aux_dest = &lvar[205];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[438]);
}
{
PFrElement aux_dest = &lvar[206];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[440]);
}
{
PFrElement aux_dest = &lvar[207];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[442]);
}
{
PFrElement aux_dest = &lvar[208];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[444]);
}
{
PFrElement aux_dest = &lvar[209];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[446]);
}
{
PFrElement aux_dest = &lvar[210];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[448]);
}
{
PFrElement aux_dest = &lvar[211];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[450]);
}
{
PFrElement aux_dest = &lvar[212];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[452]);
}
{
PFrElement aux_dest = &lvar[213];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[454]);
}
{
PFrElement aux_dest = &lvar[214];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[456]);
}
{
PFrElement aux_dest = &lvar[215];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[458]);
}
{
PFrElement aux_dest = &lvar[216];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[460]);
}
{
PFrElement aux_dest = &lvar[217];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[462]);
}
{
PFrElement aux_dest = &lvar[218];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[464]);
}
{
PFrElement aux_dest = &lvar[219];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[220];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[221];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[221],&circuitConstants[46]); // line circom 275
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[1],&lvar[221],&circuitConstants[0]); // line circom 276
Fr_eq(&expaux[2],&lvar[221],&circuitConstants[465]); // line circom 276
Fr_lor(&expaux[0],&expaux[1],&expaux[2]); // line circom 276
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[220];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
}else{
{
PFrElement aux_dest = &lvar[220];
// load src
Fr_sub(&expaux[0],&lvar[221],&circuitConstants[1]); // line circom 279
// end load src
Fr_copy(aux_dest,&lvar[((1 * Fr_toInt(&expaux[0])) + 1)]);
}
}
Fr_eq(&expaux[0],&lvar[221],&circuitConstants[0]); // line circom 281
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[219];
// load src
Fr_add(&expaux[0],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 281
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &lvar[219];
// load src
Fr_sub(&expaux[3],&lvar[221],&circuitConstants[1]); // line circom 281
Fr_add(&expaux[1],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[3])) + 445)]); // line circom 281
Fr_add(&expaux[0],&expaux[1],&lvar[220]); // line circom 281
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 5)];
// load src
Fr_mul(&expaux[0],&lvar[219],&lvar[219]); // line circom 282
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 225)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 5)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 5)]); // line circom 283
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[221],&circuitConstants[465]); // line circom 284
if(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[221],&circuitConstants[0]); // line circom 285
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[222];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
}else{
{
PFrElement aux_dest = &lvar[222];
// load src
Fr_sub(&expaux[0],&lvar[221],&circuitConstants[1]); // line circom 285
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 664)]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 445)];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 225)],&lvar[219]); // line circom 286
Fr_add(&expaux[0],&lvar[222],&expaux[2]); // line circom 286
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_eq(&expaux[0],&lvar[221],&circuitConstants[0]); // line circom 287
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 664)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[221])) + 664)];
// load src
Fr_sub(&expaux[0],&lvar[221],&circuitConstants[1]); // line circom 287
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[0])) + 445)]);
}
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + 444],&lvar[219]); // line circom 289
Fr_add(&expaux[0],&signalValues[mySignalStart + 882],&expaux[2]); // line circom 289
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 663]);
}
}
{
PFrElement aux_dest = &lvar[221];
// load src
Fr_add(&expaux[0],&lvar[221],&circuitConstants[1]); // line circom 275
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[221],&circuitConstants[46]); // line circom 275
}
}

void MiMCSponge_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 16;
ctx->componentMemory[coffset].templateName = "MiMCSponge";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3];
}

void MiMCSponge_16_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[4];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[46]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+5;
uint aux_dimensions[1] = {3};
for (uint i = 0; i < 3; i++) {
std::string new_cmp_name = "S"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
MiMCFeistel_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 883 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 16
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
Fr_eq(&expaux[0],&lvar[3],&circuitConstants[0]); // line circom 19
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_add(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0],&signalValues[mySignalStart + 3]); // line circom 23
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 16
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 16
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 30
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MiMCFeistel_15_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 30
}
}

void HashLeftRight_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 17;
ctx->componentMemory[coffset].templateName = "HashLeftRight";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1];
}

void HashLeftRight_17_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[2];
FrElement lvar[0];
uint sub_component_aux;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
MiMCSponge_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 2654 ;
aux_cmp_num += 4;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
MiMCSponge_16_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
}

void MerkleTreeChecker_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 18;
ctx->componentMemory[coffset].templateName = "MerkleTreeChecker";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 32;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[30];
}

void MerkleTreeChecker_18_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
uint aux_create = 0;
int aux_cmp_num = 75+ctx_index+1;
uint csoffset = mySignalStart+39887;
uint aux_dimensions[1] = {15};
for (uint i = 0; i < 15; i++) {
std::string new_cmp_name = "selectors"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
DualMux_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 5 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 15;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+32;
uint aux_dimensions[1] = {15};
for (uint i = 0; i < 15; i++) {
std::string new_cmp_name = "hashers"+ctx->generate_position_array(aux_dimensions, 1, i);
mySubcomponents[aux_create+i] = aux_cmp_num;
HashLeftRight_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 2657 ;
aux_cmp_num += 5;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[65]); // line circom 39
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[0]); // line circom 41
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
DualMux_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 41
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 15)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
DualMux_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 2)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
DualMux_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 17)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
DualMux_14_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 15);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 0)]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
HashLeftRight_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 15);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 0)]].signalStart + 1]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
HashLeftRight_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 39
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[65]); // line circom 39
}
Fr_eq(&expaux[0],&signalValues[mySignalStart + 1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[29]].signalStart + 0]); // line circom 50
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 50. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
}

void Withdraw_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 19;
ctx->componentMemory[coffset].templateName = "Withdraw";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 34;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2];
}

void Withdraw_19_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[2];
uint sub_component_aux;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+34;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hasher";
mySubcomponents[aux_create+i] = aux_cmp_num;
CommitmentHasher_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 23379 ;
aux_cmp_num += 2240;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 2240+ctx_index+1;
uint csoffset = mySignalStart+23413;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "tree";
mySubcomponents[aux_create+i] = aux_cmp_num;
MerkleTreeChecker_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
csoffset += 39962 ;
aux_cmp_num += 91;
}
}
{
char* temp = Fr_element2str(&signalValues[mySignalStart + 2]);
printf("%s",temp);
delete [] temp;
}
{
printf("\n");
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// need to run sub component
assert(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter));
CommitmentHasher_13_run(mySubcomponents[cmp_index_ref],ctx);
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1],&signalValues[mySignalStart + 1]); // line circom 40
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 40. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MerkleTreeChecker_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MerkleTreeChecker_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[65]); // line circom 44
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 4)]);
}
// no need to run sub component
assert(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 17)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 19)]);
}
// run sub component if needed
if(!(--ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter)){
MerkleTreeChecker_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[65]); // line circom 44
}
}

void run(Circom_CalcWit* ctx){
Withdraw_19_create(1,0,ctx,"main",0);
Withdraw_19_run(0,ctx);
}

