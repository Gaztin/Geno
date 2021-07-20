/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass X86MCRegisterClasses[];

namespace X86 {
enum {
  NoRegister,
  AH = 1,
  AL = 2,
  AX = 3,
  BH = 4,
  BL = 5,
  BP = 6,
  BPH = 7,
  BPL = 8,
  BX = 9,
  CH = 10,
  CL = 11,
  CS = 12,
  CX = 13,
  DF = 14,
  DH = 15,
  DI = 16,
  DIH = 17,
  DIL = 18,
  DL = 19,
  DS = 20,
  DX = 21,
  EAX = 22,
  EBP = 23,
  EBX = 24,
  ECX = 25,
  EDI = 26,
  EDX = 27,
  EFLAGS = 28,
  EIP = 29,
  EIZ = 30,
  ES = 31,
  ESI = 32,
  ESP = 33,
  FPCW = 34,
  FPSW = 35,
  FS = 36,
  GS = 37,
  HAX = 38,
  HBP = 39,
  HBX = 40,
  HCX = 41,
  HDI = 42,
  HDX = 43,
  HIP = 44,
  HSI = 45,
  HSP = 46,
  IP = 47,
  MXCSR = 48,
  RAX = 49,
  RBP = 50,
  RBX = 51,
  RCX = 52,
  RDI = 53,
  RDX = 54,
  RIP = 55,
  RIZ = 56,
  RSI = 57,
  RSP = 58,
  SI = 59,
  SIH = 60,
  SIL = 61,
  SP = 62,
  SPH = 63,
  SPL = 64,
  SS = 65,
  SSP = 66,
  TMMCFG = 67,
  BND0 = 68,
  BND1 = 69,
  BND2 = 70,
  BND3 = 71,
  CR0 = 72,
  CR1 = 73,
  CR2 = 74,
  CR3 = 75,
  CR4 = 76,
  CR5 = 77,
  CR6 = 78,
  CR7 = 79,
  CR8 = 80,
  CR9 = 81,
  CR10 = 82,
  CR11 = 83,
  CR12 = 84,
  CR13 = 85,
  CR14 = 86,
  CR15 = 87,
  DR0 = 88,
  DR1 = 89,
  DR2 = 90,
  DR3 = 91,
  DR4 = 92,
  DR5 = 93,
  DR6 = 94,
  DR7 = 95,
  DR8 = 96,
  DR9 = 97,
  DR10 = 98,
  DR11 = 99,
  DR12 = 100,
  DR13 = 101,
  DR14 = 102,
  DR15 = 103,
  FP0 = 104,
  FP1 = 105,
  FP2 = 106,
  FP3 = 107,
  FP4 = 108,
  FP5 = 109,
  FP6 = 110,
  FP7 = 111,
  K0 = 112,
  K1 = 113,
  K2 = 114,
  K3 = 115,
  K4 = 116,
  K5 = 117,
  K6 = 118,
  K7 = 119,
  MM0 = 120,
  MM1 = 121,
  MM2 = 122,
  MM3 = 123,
  MM4 = 124,
  MM5 = 125,
  MM6 = 126,
  MM7 = 127,
  R8 = 128,
  R9 = 129,
  R10 = 130,
  R11 = 131,
  R12 = 132,
  R13 = 133,
  R14 = 134,
  R15 = 135,
  ST0 = 136,
  ST1 = 137,
  ST2 = 138,
  ST3 = 139,
  ST4 = 140,
  ST5 = 141,
  ST6 = 142,
  ST7 = 143,
  TMM0 = 144,
  TMM1 = 145,
  TMM2 = 146,
  TMM3 = 147,
  TMM4 = 148,
  TMM5 = 149,
  TMM6 = 150,
  TMM7 = 151,
  XMM0 = 152,
  XMM1 = 153,
  XMM2 = 154,
  XMM3 = 155,
  XMM4 = 156,
  XMM5 = 157,
  XMM6 = 158,
  XMM7 = 159,
  XMM8 = 160,
  XMM9 = 161,
  XMM10 = 162,
  XMM11 = 163,
  XMM12 = 164,
  XMM13 = 165,
  XMM14 = 166,
  XMM15 = 167,
  XMM16 = 168,
  XMM17 = 169,
  XMM18 = 170,
  XMM19 = 171,
  XMM20 = 172,
  XMM21 = 173,
  XMM22 = 174,
  XMM23 = 175,
  XMM24 = 176,
  XMM25 = 177,
  XMM26 = 178,
  XMM27 = 179,
  XMM28 = 180,
  XMM29 = 181,
  XMM30 = 182,
  XMM31 = 183,
  YMM0 = 184,
  YMM1 = 185,
  YMM2 = 186,
  YMM3 = 187,
  YMM4 = 188,
  YMM5 = 189,
  YMM6 = 190,
  YMM7 = 191,
  YMM8 = 192,
  YMM9 = 193,
  YMM10 = 194,
  YMM11 = 195,
  YMM12 = 196,
  YMM13 = 197,
  YMM14 = 198,
  YMM15 = 199,
  YMM16 = 200,
  YMM17 = 201,
  YMM18 = 202,
  YMM19 = 203,
  YMM20 = 204,
  YMM21 = 205,
  YMM22 = 206,
  YMM23 = 207,
  YMM24 = 208,
  YMM25 = 209,
  YMM26 = 210,
  YMM27 = 211,
  YMM28 = 212,
  YMM29 = 213,
  YMM30 = 214,
  YMM31 = 215,
  ZMM0 = 216,
  ZMM1 = 217,
  ZMM2 = 218,
  ZMM3 = 219,
  ZMM4 = 220,
  ZMM5 = 221,
  ZMM6 = 222,
  ZMM7 = 223,
  ZMM8 = 224,
  ZMM9 = 225,
  ZMM10 = 226,
  ZMM11 = 227,
  ZMM12 = 228,
  ZMM13 = 229,
  ZMM14 = 230,
  ZMM15 = 231,
  ZMM16 = 232,
  ZMM17 = 233,
  ZMM18 = 234,
  ZMM19 = 235,
  ZMM20 = 236,
  ZMM21 = 237,
  ZMM22 = 238,
  ZMM23 = 239,
  ZMM24 = 240,
  ZMM25 = 241,
  ZMM26 = 242,
  ZMM27 = 243,
  ZMM28 = 244,
  ZMM29 = 245,
  ZMM30 = 246,
  ZMM31 = 247,
  R8B = 248,
  R9B = 249,
  R10B = 250,
  R11B = 251,
  R12B = 252,
  R13B = 253,
  R14B = 254,
  R15B = 255,
  R8BH = 256,
  R9BH = 257,
  R10BH = 258,
  R11BH = 259,
  R12BH = 260,
  R13BH = 261,
  R14BH = 262,
  R15BH = 263,
  R8D = 264,
  R9D = 265,
  R10D = 266,
  R11D = 267,
  R12D = 268,
  R13D = 269,
  R14D = 270,
  R15D = 271,
  R8W = 272,
  R9W = 273,
  R10W = 274,
  R11W = 275,
  R12W = 276,
  R13W = 277,
  R14W = 278,
  R15W = 279,
  R8WH = 280,
  R9WH = 281,
  R10WH = 282,
  R11WH = 283,
  R12WH = 284,
  R13WH = 285,
  R14WH = 286,
  R15WH = 287,
  K0_K1 = 288,
  K2_K3 = 289,
  K4_K5 = 290,
  K6_K7 = 291,
  NUM_TARGET_REGS // 292
};
} // end namespace X86

// Register classes

namespace X86 {
enum {
  GR8RegClassID = 0,
  GRH8RegClassID = 1,
  GR8_NOREXRegClassID = 2,
  GR8_ABCD_HRegClassID = 3,
  GR8_ABCD_LRegClassID = 4,
  GRH16RegClassID = 5,
  GR16RegClassID = 6,
  GR16_NOREXRegClassID = 7,
  VK1RegClassID = 8,
  VK16RegClassID = 9,
  VK2RegClassID = 10,
  VK4RegClassID = 11,
  VK8RegClassID = 12,
  VK16WMRegClassID = 13,
  VK1WMRegClassID = 14,
  VK2WMRegClassID = 15,
  VK4WMRegClassID = 16,
  VK8WMRegClassID = 17,
  SEGMENT_REGRegClassID = 18,
  GR16_ABCDRegClassID = 19,
  FPCCRRegClassID = 20,
  VK16PAIRRegClassID = 21,
  VK1PAIRRegClassID = 22,
  VK2PAIRRegClassID = 23,
  VK4PAIRRegClassID = 24,
  VK8PAIRRegClassID = 25,
  VK16PAIR_with_sub_mask_0_in_VK16WMRegClassID = 26,
  FR32XRegClassID = 27,
  LOW32_ADDR_ACCESS_RBPRegClassID = 28,
  LOW32_ADDR_ACCESSRegClassID = 29,
  LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClassID = 30,
  DEBUG_REGRegClassID = 31,
  FR32RegClassID = 32,
  GR32RegClassID = 33,
  GR32_NOSPRegClassID = 34,
  LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClassID = 35,
  GR32_NOREXRegClassID = 36,
  VK32RegClassID = 37,
  GR32_NOREX_NOSPRegClassID = 38,
  RFP32RegClassID = 39,
  VK32WMRegClassID = 40,
  GR32_ABCDRegClassID = 41,
  GR32_TCRegClassID = 42,
  GR32_ABCD_and_GR32_TCRegClassID = 43,
  GR32_ADRegClassID = 44,
  GR32_BPSPRegClassID = 45,
  GR32_BSIRegClassID = 46,
  GR32_CBRegClassID = 47,
  GR32_DCRegClassID = 48,
  GR32_DIBPRegClassID = 49,
  GR32_SIDIRegClassID = 50,
  LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClassID = 51,
  CCRRegClassID = 52,
  DFCCRRegClassID = 53,
  GR32_ABCD_and_GR32_BSIRegClassID = 54,
  GR32_AD_and_GR32_DCRegClassID = 55,
  GR32_BPSP_and_GR32_DIBPRegClassID = 56,
  GR32_BPSP_and_GR32_TCRegClassID = 57,
  GR32_BSI_and_GR32_SIDIRegClassID = 58,
  GR32_CB_and_GR32_DCRegClassID = 59,
  GR32_DIBP_and_GR32_SIDIRegClassID = 60,
  LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClassID = 61,
  LOW32_ADDR_ACCESS_with_sub_32bitRegClassID = 62,
  RFP64RegClassID = 63,
  FR64XRegClassID = 64,
  GR64RegClassID = 65,
  CONTROL_REGRegClassID = 66,
  FR64RegClassID = 67,
  GR64_with_sub_8bitRegClassID = 68,
  GR64_NOSPRegClassID = 69,
  GR64_TCRegClassID = 70,
  GR64_NOREXRegClassID = 71,
  GR64_TCW64RegClassID = 72,
  GR64_TC_with_sub_8bitRegClassID = 73,
  GR64_NOSP_and_GR64_TCRegClassID = 74,
  GR64_TCW64_with_sub_8bitRegClassID = 75,
  GR64_TC_and_GR64_TCW64RegClassID = 76,
  GR64_with_sub_16bit_in_GR16_NOREXRegClassID = 77,
  VK64RegClassID = 78,
  VR64RegClassID = 79,
  GR64_NOREX_NOSPRegClassID = 80,
  GR64_NOREX_and_GR64_TCRegClassID = 81,
  GR64_NOSP_and_GR64_TCW64RegClassID = 82,
  GR64_TCW64_and_GR64_TC_with_sub_8bitRegClassID = 83,
  VK64WMRegClassID = 84,
  GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClassID = 85,
  GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClassID = 86,
  GR64_NOREX_NOSP_and_GR64_TCRegClassID = 87,
  GR64_NOREX_and_GR64_TCW64RegClassID = 88,
  GR64_ABCDRegClassID = 89,
  GR64_with_sub_32bit_in_GR32_TCRegClassID = 90,
  GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClassID = 91,
  GR64_ADRegClassID = 92,
  GR64_and_LOW32_ADDR_ACCESS_RBPRegClassID = 93,
  GR64_with_sub_32bit_in_GR32_BPSPRegClassID = 94,
  GR64_with_sub_32bit_in_GR32_BSIRegClassID = 95,
  GR64_with_sub_32bit_in_GR32_CBRegClassID = 96,
  GR64_with_sub_32bit_in_GR32_DCRegClassID = 97,
  GR64_with_sub_32bit_in_GR32_DIBPRegClassID = 98,
  GR64_with_sub_32bit_in_GR32_SIDIRegClassID = 99,
  GR64_and_LOW32_ADDR_ACCESSRegClassID = 100,
  GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClassID = 101,
  GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClassID = 102,
  GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClassID = 103,
  GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClassID = 104,
  GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClassID = 105,
  GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClassID = 106,
  GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClassID = 107,
  RSTRegClassID = 108,
  RFP80RegClassID = 109,
  RFP80_7RegClassID = 110,
  VR128XRegClassID = 111,
  VR128RegClassID = 112,
  BNDRRegClassID = 113,
  VR256XRegClassID = 114,
  VR256RegClassID = 115,
  VR512RegClassID = 116,
  VR512_0_15RegClassID = 117,
  TILECFGRegClassID = 118,
  TILERegClassID = 119,

};
} // end namespace X86


// Subregister indices

namespace X86 {
enum : uint16_t {
  NoSubRegister,
  sub_8bit,	// 1
  sub_8bit_hi,	// 2
  sub_8bit_hi_phony,	// 3
  sub_16bit,	// 4
  sub_16bit_hi,	// 5
  sub_32bit,	// 6
  sub_mask_0,	// 7
  sub_mask_1,	// 8
  sub_xmm,	// 9
  sub_ymm,	// 10
  NUM_TARGET_SUBREGS
};
} // end namespace X86

// Register pressure sets enum.
namespace X86 {
enum RegisterPressureSets {
  TILECFG = 0,
  BNDR = 1,
  SEGMENT_REG = 2,
  GR32_BPSP = 3,
  LOW32_ADDR_ACCESS_with_sub_32bit = 4,
  GR32_BSI = 5,
  GR32_SIDI = 6,
  GR32_DIBP_with_GR32_SIDI = 7,
  GR32_DIBP_with_LOW32_ADDR_ACCESS_with_sub_32bit = 8,
  RFP32 = 9,
  GR8_ABCD_H_with_GR32_BSI = 10,
  GR8_ABCD_L_with_GR32_BSI = 11,
  VK1 = 12,
  VR64 = 13,
  TILE = 14,
  GR8_NOREX = 15,
  GR32_TC = 16,
  GR32_BPSP_with_GR32_TC = 17,
  DEBUG_REG = 18,
  FR32 = 19,
  CONTROL_REG = 20,
  GR64_NOREX = 21,
  GR64_TCW64 = 22,
  GR32_BPSP_with_GR64_TCW64 = 23,
  GR8 = 24,
  GR8_with_GR32_DIBP = 25,
  GR8_with_GR32_BSI = 26,
  GR64_TC_with_GR64_TCW64 = 27,
  GR8_with_LOW32_ADDR_ACCESS_with_sub_32bit = 28,
  GR8_with_GR64_NOREX = 29,
  GR64_TC = 30,
  GR8_with_GR64_TCW64 = 31,
  GR8_with_GR64_TC = 32,
  FR32X = 33,
  GR16 = 34,
};
} // end namespace X86

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg X86RegDiffLists[] = {
  /* 0 */ 0, 1, 0,
  /* 3 */ 64845, 1, 1, 0,
  /* 7 */ 65253, 1, 1, 0,
  /* 11 */ 65391, 1, 1, 0,
  /* 15 */ 65466, 1, 1, 0,
  /* 19 */ 2, 1, 0,
  /* 22 */ 4, 1, 0,
  /* 25 */ 6, 1, 0,
  /* 28 */ 11, 1, 0,
  /* 31 */ 22, 1, 0,
  /* 34 */ 26, 1, 0,
  /* 37 */ 29, 1, 0,
  /* 40 */ 64821, 1, 0,
  /* 43 */ 65045, 1, 0,
  /* 46 */ 65360, 1, 0,
  /* 49 */ 65361, 1, 0,
  /* 52 */ 65362, 1, 0,
  /* 55 */ 65363, 1, 0,
  /* 58 */ 10, 3, 0,
  /* 61 */ 4, 0,
  /* 63 */ 5, 0,
  /* 65 */ 65282, 1, 7, 0,
  /* 69 */ 65417, 1, 7, 0,
  /* 73 */ 10, 3, 7, 0,
  /* 77 */ 65512, 8, 0,
  /* 80 */ 65334, 1, 11, 0,
  /* 84 */ 65340, 1, 11, 0,
  /* 88 */ 65442, 1, 11, 0,
  /* 92 */ 65448, 1, 11, 0,
  /* 96 */ 12, 0,
  /* 98 */ 65334, 1, 14, 0,
  /* 102 */ 65340, 1, 14, 0,
  /* 106 */ 65442, 1, 14, 0,
  /* 110 */ 65448, 1, 14, 0,
  /* 114 */ 21, 0,
  /* 116 */ 136, 8, 65512, 8, 24, 0,
  /* 122 */ 65534, 65507, 25, 0,
  /* 126 */ 65535, 65507, 25, 0,
  /* 130 */ 65534, 65509, 25, 0,
  /* 134 */ 65535, 65509, 25, 0,
  /* 138 */ 65523, 25, 0,
  /* 141 */ 65509, 65526, 2, 65535, 25, 0,
  /* 147 */ 65518, 26, 0,
  /* 150 */ 65521, 26, 0,
  /* 153 */ 2, 6, 27, 0,
  /* 157 */ 6, 6, 27, 0,
  /* 161 */ 65534, 10, 27, 0,
  /* 165 */ 65535, 10, 27, 0,
  /* 169 */ 2, 12, 27, 0,
  /* 173 */ 3, 12, 27, 0,
  /* 177 */ 4, 15, 27, 0,
  /* 181 */ 5, 15, 27, 0,
  /* 185 */ 65534, 17, 27, 0,
  /* 189 */ 65535, 17, 27, 0,
  /* 193 */ 1, 19, 27, 0,
  /* 197 */ 2, 19, 27, 0,
  /* 201 */ 65520, 27, 0,
  /* 204 */ 65509, 65530, 65534, 65532, 28, 0,
  /* 210 */ 30, 0,
  /* 212 */ 65509, 65524, 65534, 65535, 31, 0,
  /* 218 */ 32, 32, 0,
  /* 221 */ 65509, 65519, 2, 65535, 32, 0,
  /* 227 */ 65509, 65521, 65532, 65535, 36, 0,
  /* 233 */ 65509, 65517, 65535, 65535, 37, 0,
  /* 239 */ 172, 0,
  /* 241 */ 173, 0,
  /* 243 */ 174, 0,
  /* 245 */ 175, 0,
  /* 247 */ 176, 0,
  /* 249 */ 64799, 0,
  /* 251 */ 64870, 0,
  /* 253 */ 64893, 0,
  /* 255 */ 64900, 0,
  /* 257 */ 64989, 0,
  /* 259 */ 65520, 65400, 0,
  /* 262 */ 16, 65528, 65400, 0,
  /* 266 */ 24, 65528, 65400, 0,
  /* 270 */ 65427, 0,
  /* 272 */ 65429, 0,
  /* 274 */ 65461, 0,
  /* 276 */ 65493, 0,
  /* 278 */ 65504, 65504, 0,
  /* 281 */ 65509, 0,
  /* 283 */ 65511, 0,
  /* 285 */ 65513, 0,
  /* 287 */ 65511, 29, 2, 65535, 65519, 0,
  /* 293 */ 65511, 27, 2, 65535, 65521, 0,
  /* 299 */ 65525, 0,
  /* 301 */ 65530, 0,
  /* 303 */ 65531, 0,
  /* 305 */ 65534, 65532, 0,
  /* 308 */ 65510, 18, 65533, 0,
  /* 312 */ 65534, 0,
  /* 314 */ 2, 65535, 0,
  /* 317 */ 65532, 65535, 0,
  /* 320 */ 65534, 65535, 0,
  /* 323 */ 65535, 65535, 0,
};

extern const LaneBitmask X86LaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x0000000000000000), LaneBitmask::getAll(),
  /* 2 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000001), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000004), LaneBitmask::getAll(),
  /* 8 */ LaneBitmask(0x0000000000000002), LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000008), LaneBitmask::getAll(),
  /* 12 */ LaneBitmask(0x0000000000000001), LaneBitmask(0x0000000000000004), LaneBitmask(0x0000000000000008), LaneBitmask::getAll(),
  /* 16 */ LaneBitmask(0x0000000000000007), LaneBitmask(0x0000000000000008), LaneBitmask::getAll(),
  /* 19 */ LaneBitmask(0x0000000000000010), LaneBitmask(0x0000000000000020), LaneBitmask::getAll(),
  /* 22 */ LaneBitmask(0x0000000000000040), LaneBitmask::getAll(),
};

extern const uint16_t X86SubRegIdxLists[] = {
  /* 0 */ 1, 2, 0,
  /* 3 */ 1, 3, 0,
  /* 6 */ 6, 4, 1, 2, 5, 0,
  /* 12 */ 6, 4, 1, 3, 5, 0,
  /* 18 */ 6, 4, 5, 0,
  /* 22 */ 7, 8, 0,
  /* 25 */ 10, 9, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits X86SubRegIdxRanges[] = {
  { 65535, 65535 },
  { 0, 8 },	// sub_8bit
  { 8, 8 },	// sub_8bit_hi
  { 8, 8 },	// sub_8bit_hi_phony
  { 0, 16 },	// sub_16bit
  { 16, 16 },	// sub_16bit_hi
  { 0, 32 },	// sub_32bit
  { 0, 65535 },	// sub_mask_0
  { 65535, 65535 },	// sub_mask_1
  { 0, 128 },	// sub_xmm
  { 0, 256 },	// sub_ymm
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char X86RegStrings[] = {
  /* 0 */ "XMM10\0"
  /* 6 */ "YMM10\0"
  /* 12 */ "ZMM10\0"
  /* 18 */ "CR10\0"
  /* 23 */ "DR10\0"
  /* 28 */ "XMM20\0"
  /* 34 */ "YMM20\0"
  /* 40 */ "ZMM20\0"
  /* 46 */ "XMM30\0"
  /* 52 */ "YMM30\0"
  /* 58 */ "ZMM30\0"
  /* 64 */ "BND0\0"
  /* 69 */ "K0\0"
  /* 72 */ "TMM0\0"
  /* 77 */ "XMM0\0"
  /* 82 */ "YMM0\0"
  /* 87 */ "ZMM0\0"
  /* 92 */ "FP0\0"
  /* 96 */ "CR0\0"
  /* 100 */ "DR0\0"
  /* 104 */ "ST0\0"
  /* 108 */ "XMM11\0"
  /* 114 */ "YMM11\0"
  /* 120 */ "ZMM11\0"
  /* 126 */ "CR11\0"
  /* 131 */ "DR11\0"
  /* 136 */ "XMM21\0"
  /* 142 */ "YMM21\0"
  /* 148 */ "ZMM21\0"
  /* 154 */ "XMM31\0"
  /* 160 */ "YMM31\0"
  /* 166 */ "ZMM31\0"
  /* 172 */ "BND1\0"
  /* 177 */ "K0_K1\0"
  /* 183 */ "TMM1\0"
  /* 188 */ "XMM1\0"
  /* 193 */ "YMM1\0"
  /* 198 */ "ZMM1\0"
  /* 203 */ "FP1\0"
  /* 207 */ "CR1\0"
  /* 211 */ "DR1\0"
  /* 215 */ "ST1\0"
  /* 219 */ "XMM12\0"
  /* 225 */ "YMM12\0"
  /* 231 */ "ZMM12\0"
  /* 237 */ "CR12\0"
  /* 242 */ "DR12\0"
  /* 247 */ "XMM22\0"
  /* 253 */ "YMM22\0"
  /* 259 */ "ZMM22\0"
  /* 265 */ "BND2\0"
  /* 270 */ "K2\0"
  /* 273 */ "TMM2\0"
  /* 278 */ "XMM2\0"
  /* 283 */ "YMM2\0"
  /* 288 */ "ZMM2\0"
  /* 293 */ "FP2\0"
  /* 297 */ "CR2\0"
  /* 301 */ "DR2\0"
  /* 305 */ "ST2\0"
  /* 309 */ "XMM13\0"
  /* 315 */ "YMM13\0"
  /* 321 */ "ZMM13\0"
  /* 327 */ "CR13\0"
  /* 332 */ "DR13\0"
  /* 337 */ "XMM23\0"
  /* 343 */ "YMM23\0"
  /* 349 */ "ZMM23\0"
  /* 355 */ "BND3\0"
  /* 360 */ "K2_K3\0"
  /* 366 */ "TMM3\0"
  /* 371 */ "XMM3\0"
  /* 376 */ "YMM3\0"
  /* 381 */ "ZMM3\0"
  /* 386 */ "FP3\0"
  /* 390 */ "CR3\0"
  /* 394 */ "DR3\0"
  /* 398 */ "ST3\0"
  /* 402 */ "XMM14\0"
  /* 408 */ "YMM14\0"
  /* 414 */ "ZMM14\0"
  /* 420 */ "CR14\0"
  /* 425 */ "DR14\0"
  /* 430 */ "XMM24\0"
  /* 436 */ "YMM24\0"
  /* 442 */ "ZMM24\0"
  /* 448 */ "K4\0"
  /* 451 */ "TMM4\0"
  /* 456 */ "XMM4\0"
  /* 461 */ "YMM4\0"
  /* 466 */ "ZMM4\0"
  /* 471 */ "FP4\0"
  /* 475 */ "CR4\0"
  /* 479 */ "DR4\0"
  /* 483 */ "ST4\0"
  /* 487 */ "XMM15\0"
  /* 493 */ "YMM15\0"
  /* 499 */ "ZMM15\0"
  /* 505 */ "CR15\0"
  /* 510 */ "DR15\0"
  /* 515 */ "XMM25\0"
  /* 521 */ "YMM25\0"
  /* 527 */ "ZMM25\0"
  /* 533 */ "K4_K5\0"
  /* 539 */ "TMM5\0"
  /* 544 */ "XMM5\0"
  /* 549 */ "YMM5\0"
  /* 554 */ "ZMM5\0"
  /* 559 */ "FP5\0"
  /* 563 */ "CR5\0"
  /* 567 */ "DR5\0"
  /* 571 */ "ST5\0"
  /* 575 */ "XMM16\0"
  /* 581 */ "YMM16\0"
  /* 587 */ "ZMM16\0"
  /* 593 */ "XMM26\0"
  /* 599 */ "YMM26\0"
  /* 605 */ "ZMM26\0"
  /* 611 */ "K6\0"
  /* 614 */ "TMM6\0"
  /* 619 */ "XMM6\0"
  /* 624 */ "YMM6\0"
  /* 629 */ "ZMM6\0"
  /* 634 */ "FP6\0"
  /* 638 */ "CR6\0"
  /* 642 */ "DR6\0"
  /* 646 */ "ST6\0"
  /* 650 */ "XMM17\0"
  /* 656 */ "YMM17\0"
  /* 662 */ "ZMM17\0"
  /* 668 */ "XMM27\0"
  /* 674 */ "YMM27\0"
  /* 680 */ "ZMM27\0"
  /* 686 */ "K6_K7\0"
  /* 692 */ "TMM7\0"
  /* 697 */ "XMM7\0"
  /* 702 */ "YMM7\0"
  /* 707 */ "ZMM7\0"
  /* 712 */ "FP7\0"
  /* 716 */ "CR7\0"
  /* 720 */ "DR7\0"
  /* 724 */ "ST7\0"
  /* 728 */ "XMM18\0"
  /* 734 */ "YMM18\0"
  /* 740 */ "ZMM18\0"
  /* 746 */ "XMM28\0"
  /* 752 */ "YMM28\0"
  /* 758 */ "ZMM28\0"
  /* 764 */ "XMM8\0"
  /* 769 */ "YMM8\0"
  /* 774 */ "ZMM8\0"
  /* 779 */ "CR8\0"
  /* 783 */ "DR8\0"
  /* 787 */ "XMM19\0"
  /* 793 */ "YMM19\0"
  /* 799 */ "ZMM19\0"
  /* 805 */ "XMM29\0"
  /* 811 */ "YMM29\0"
  /* 817 */ "ZMM29\0"
  /* 823 */ "XMM9\0"
  /* 828 */ "YMM9\0"
  /* 833 */ "ZMM9\0"
  /* 838 */ "CR9\0"
  /* 842 */ "DR9\0"
  /* 846 */ "R10B\0"
  /* 851 */ "R11B\0"
  /* 856 */ "R12B\0"
  /* 861 */ "R13B\0"
  /* 866 */ "R14B\0"
  /* 871 */ "R15B\0"
  /* 876 */ "R8B\0"
  /* 880 */ "R9B\0"
  /* 884 */ "R10D\0"
  /* 889 */ "R11D\0"
  /* 894 */ "R12D\0"
  /* 899 */ "R13D\0"
  /* 904 */ "R14D\0"
  /* 909 */ "R15D\0"
  /* 914 */ "R8D\0"
  /* 918 */ "R9D\0"
  /* 922 */ "DF\0"
  /* 925 */ "TMMCFG\0"
  /* 932 */ "AH\0"
  /* 935 */ "R10BH\0"
  /* 941 */ "R11BH\0"
  /* 947 */ "R12BH\0"
  /* 953 */ "R13BH\0"
  /* 959 */ "R14BH\0"
  /* 965 */ "R15BH\0"
  /* 971 */ "R8BH\0"
  /* 976 */ "R9BH\0"
  /* 981 */ "CH\0"
  /* 984 */ "DH\0"
  /* 987 */ "DIH\0"
  /* 991 */ "SIH\0"
  /* 995 */ "BPH\0"
  /* 999 */ "SPH\0"
  /* 1003 */ "R10WH\0"
  /* 1009 */ "R11WH\0"
  /* 1015 */ "R12WH\0"
  /* 1021 */ "R13WH\0"
  /* 1027 */ "R14WH\0"
  /* 1033 */ "R15WH\0"
  /* 1039 */ "R8WH\0"
  /* 1044 */ "R9WH\0"
  /* 1049 */ "EDI\0"
  /* 1053 */ "HDI\0"
  /* 1057 */ "RDI\0"
  /* 1061 */ "ESI\0"
  /* 1065 */ "HSI\0"
  /* 1069 */ "RSI\0"
  /* 1073 */ "AL\0"
  /* 1076 */ "BL\0"
  /* 1079 */ "CL\0"
  /* 1082 */ "DL\0"
  /* 1085 */ "DIL\0"
  /* 1089 */ "SIL\0"
  /* 1093 */ "BPL\0"
  /* 1097 */ "SPL\0"
  /* 1101 */ "EBP\0"
  /* 1105 */ "HBP\0"
  /* 1109 */ "RBP\0"
  /* 1113 */ "EIP\0"
  /* 1117 */ "HIP\0"
  /* 1121 */ "RIP\0"
  /* 1125 */ "ESP\0"
  /* 1129 */ "HSP\0"
  /* 1133 */ "RSP\0"
  /* 1137 */ "SSP\0"
  /* 1141 */ "MXCSR\0"
  /* 1147 */ "CS\0"
  /* 1150 */ "DS\0"
  /* 1153 */ "ES\0"
  /* 1156 */ "FS\0"
  /* 1159 */ "EFLAGS\0"
  /* 1166 */ "SS\0"
  /* 1169 */ "R10W\0"
  /* 1174 */ "R11W\0"
  /* 1179 */ "R12W\0"
  /* 1184 */ "R13W\0"
  /* 1189 */ "R14W\0"
  /* 1194 */ "R15W\0"
  /* 1199 */ "R8W\0"
  /* 1203 */ "R9W\0"
  /* 1207 */ "FPCW\0"
  /* 1212 */ "FPSW\0"
  /* 1217 */ "EAX\0"
  /* 1221 */ "HAX\0"
  /* 1225 */ "RAX\0"
  /* 1229 */ "EBX\0"
  /* 1233 */ "HBX\0"
  /* 1237 */ "RBX\0"
  /* 1241 */ "ECX\0"
  /* 1245 */ "HCX\0"
  /* 1249 */ "RCX\0"
  /* 1253 */ "EDX\0"
  /* 1257 */ "HDX\0"
  /* 1261 */ "RDX\0"
  /* 1265 */ "EIZ\0"
  /* 1269 */ "RIZ\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterDesc X86RegDesc[] = { // Descriptors
  { 5, 0, 0, 0, 0, 0 },
  { 932, 2, 197, 2, 5041, 0 },
  { 1073, 2, 193, 2, 5041, 0 },
  { 1218, 323, 194, 0, 0, 2 },
  { 938, 2, 181, 2, 4993, 0 },
  { 1076, 2, 177, 2, 4993, 0 },
  { 1102, 314, 186, 3, 352, 5 },
  { 995, 2, 189, 2, 1008, 0 },
  { 1093, 2, 185, 2, 976, 0 },
  { 1230, 317, 178, 0, 304, 2 },
  { 981, 2, 173, 2, 4897, 0 },
  { 1079, 2, 169, 2, 4897, 0 },
  { 1147, 2, 2, 2, 4897, 0 },
  { 1242, 320, 170, 0, 400, 2 },
  { 922, 2, 2, 2, 4849, 0 },
  { 984, 2, 157, 2, 4849, 0 },
  { 1050, 314, 162, 3, 448, 5 },
  { 987, 2, 165, 2, 1536, 0 },
  { 1085, 2, 161, 2, 4530, 0 },
  { 1082, 2, 153, 2, 4817, 0 },
  { 1150, 2, 2, 2, 4817, 0 },
  { 1254, 305, 154, 0, 928, 2 },
  { 1217, 234, 155, 7, 1764, 8 },
  { 1101, 222, 155, 13, 1476, 12 },
  { 1229, 228, 155, 7, 1700, 8 },
  { 1241, 213, 155, 7, 1412, 8 },
  { 1049, 142, 155, 13, 1109, 12 },
  { 1253, 205, 155, 7, 1168, 8 },
  { 1159, 2, 2, 2, 1824, 0 },
  { 1113, 309, 148, 19, 496, 16 },
  { 1265, 2, 2, 2, 4817, 0 },
  { 1153, 2, 2, 2, 4817, 0 },
  { 1061, 294, 124, 13, 243, 12 },
  { 1125, 288, 124, 13, 243, 12 },
  { 1207, 2, 2, 2, 4993, 0 },
  { 1212, 2, 2, 2, 4993, 0 },
  { 1156, 2, 2, 2, 4993, 0 },
  { 1163, 2, 2, 2, 4993, 0 },
  { 1221, 2, 201, 2, 4561, 0 },
  { 1105, 2, 201, 2, 4561, 0 },
  { 1233, 2, 201, 2, 4561, 0 },
  { 1245, 2, 201, 2, 4561, 0 },
  { 1053, 2, 201, 2, 4561, 0 },
  { 1257, 2, 201, 2, 4561, 0 },
  { 1117, 2, 150, 2, 4323, 0 },
  { 1065, 2, 138, 2, 4355, 0 },
  { 1129, 2, 138, 2, 4355, 0 },
  { 1114, 2, 147, 2, 4094, 0 },
  { 1141, 2, 2, 2, 4094, 0 },
  { 1225, 233, 2, 6, 1636, 8 },
  { 1109, 221, 2, 12, 1348, 12 },
  { 1237, 227, 2, 6, 1572, 8 },
  { 1249, 212, 2, 6, 1284, 8 },
  { 1057, 141, 2, 12, 1045, 12 },
  { 1261, 204, 2, 6, 1168, 8 },
  { 1121, 308, 2, 18, 496, 16 },
  { 1269, 2, 2, 2, 3792, 0 },
  { 1069, 293, 2, 12, 179, 12 },
  { 1133, 287, 2, 12, 179, 12 },
  { 1062, 314, 131, 3, 544, 5 },
  { 991, 2, 134, 2, 2480, 0 },
  { 1089, 2, 130, 2, 2368, 0 },
  { 1126, 314, 123, 3, 592, 5 },
  { 999, 2, 126, 2, 3360, 0 },
  { 1097, 2, 122, 2, 4121, 0 },
  { 1166, 2, 2, 2, 4497, 0 },
  { 1137, 2, 2, 2, 4497, 0 },
  { 925, 2, 2, 2, 4497, 0 },
  { 64, 2, 2, 2, 4497, 0 },
  { 172, 2, 2, 2, 4497, 0 },
  { 265, 2, 2, 2, 4497, 0 },
  { 355, 2, 2, 2, 4497, 0 },
  { 96, 2, 2, 2, 4497, 0 },
  { 207, 2, 2, 2, 4497, 0 },
  { 297, 2, 2, 2, 4497, 0 },
  { 390, 2, 2, 2, 4497, 0 },
  { 475, 2, 2, 2, 4497, 0 },
  { 563, 2, 2, 2, 4497, 0 },
  { 638, 2, 2, 2, 4497, 0 },
  { 716, 2, 2, 2, 4497, 0 },
  { 779, 2, 2, 2, 4497, 0 },
  { 838, 2, 2, 2, 4497, 0 },
  { 18, 2, 2, 2, 4497, 0 },
  { 126, 2, 2, 2, 4497, 0 },
  { 237, 2, 2, 2, 4497, 0 },
  { 327, 2, 2, 2, 4497, 0 },
  { 420, 2, 2, 2, 4497, 0 },
  { 505, 2, 2, 2, 4497, 0 },
  { 100, 2, 2, 2, 4497, 0 },
  { 211, 2, 2, 2, 4497, 0 },
  { 301, 2, 2, 2, 4497, 0 },
  { 394, 2, 2, 2, 4497, 0 },
  { 479, 2, 2, 2, 4497, 0 },
  { 567, 2, 2, 2, 4497, 0 },
  { 642, 2, 2, 2, 4497, 0 },
  { 720, 2, 2, 2, 4497, 0 },
  { 783, 2, 2, 2, 4497, 0 },
  { 842, 2, 2, 2, 4497, 0 },
  { 23, 2, 2, 2, 4497, 0 },
  { 131, 2, 2, 2, 4497, 0 },
  { 242, 2, 2, 2, 4497, 0 },
  { 332, 2, 2, 2, 4497, 0 },
  { 425, 2, 2, 2, 4497, 0 },
  { 510, 2, 2, 2, 4497, 0 },
  { 92, 2, 2, 2, 4497, 0 },
  { 203, 2, 2, 2, 4497, 0 },
  { 293, 2, 2, 2, 4497, 0 },
  { 386, 2, 2, 2, 4497, 0 },
  { 471, 2, 2, 2, 4497, 0 },
  { 559, 2, 2, 2, 4497, 0 },
  { 634, 2, 2, 2, 4497, 0 },
  { 712, 2, 2, 2, 4497, 0 },
  { 69, 2, 247, 2, 4497, 0 },
  { 180, 2, 245, 2, 4497, 0 },
  { 270, 2, 245, 2, 4497, 0 },
  { 363, 2, 243, 2, 4497, 0 },
  { 448, 2, 243, 2, 4497, 0 },
  { 536, 2, 241, 2, 4497, 0 },
  { 611, 2, 241, 2, 4497, 0 },
  { 689, 2, 239, 2, 4497, 0 },
  { 73, 2, 2, 2, 4497, 0 },
  { 184, 2, 2, 2, 4497, 0 },
  { 274, 2, 2, 2, 4497, 0 },
  { 367, 2, 2, 2, 4497, 0 },
  { 452, 2, 2, 2, 4497, 0 },
  { 540, 2, 2, 2, 4497, 0 },
  { 615, 2, 2, 2, 4497, 0 },
  { 693, 2, 2, 2, 4497, 0 },
  { 780, 116, 2, 12, 115, 12 },
  { 839, 116, 2, 12, 115, 12 },
  { 19, 116, 2, 12, 115, 12 },
  { 127, 116, 2, 12, 115, 12 },
  { 238, 116, 2, 12, 115, 12 },
  { 328, 116, 2, 12, 115, 12 },
  { 421, 116, 2, 12, 115, 12 },
  { 506, 116, 2, 12, 115, 12 },
  { 104, 2, 2, 2, 4785, 0 },
  { 215, 2, 2, 2, 4785, 0 },
  { 305, 2, 2, 2, 4785, 0 },
  { 398, 2, 2, 2, 4785, 0 },
  { 483, 2, 2, 2, 4785, 0 },
  { 571, 2, 2, 2, 4785, 0 },
  { 646, 2, 2, 2, 4785, 0 },
  { 724, 2, 2, 2, 4785, 0 },
  { 72, 2, 2, 2, 4785, 0 },
  { 183, 2, 2, 2, 4785, 0 },
  { 273, 2, 2, 2, 4785, 0 },
  { 366, 2, 2, 2, 4785, 0 },
  { 451, 2, 2, 2, 4785, 0 },
  { 539, 2, 2, 2, 4785, 0 },
  { 614, 2, 2, 2, 4785, 0 },
  { 692, 2, 2, 2, 4785, 0 },
  { 77, 2, 218, 2, 4785, 0 },
  { 188, 2, 218, 2, 4785, 0 },
  { 278, 2, 218, 2, 4785, 0 },
  { 371, 2, 218, 2, 4785, 0 },
  { 456, 2, 218, 2, 4785, 0 },
  { 544, 2, 218, 2, 4785, 0 },
  { 619, 2, 218, 2, 4785, 0 },
  { 697, 2, 218, 2, 4785, 0 },
  { 764, 2, 218, 2, 4785, 0 },
  { 823, 2, 218, 2, 4785, 0 },
  { 0, 2, 218, 2, 4785, 0 },
  { 108, 2, 218, 2, 4785, 0 },
  { 219, 2, 218, 2, 4785, 0 },
  { 309, 2, 218, 2, 4785, 0 },
  { 402, 2, 218, 2, 4785, 0 },
  { 487, 2, 218, 2, 4785, 0 },
  { 575, 2, 218, 2, 4785, 0 },
  { 650, 2, 218, 2, 4785, 0 },
  { 728, 2, 218, 2, 4785, 0 },
  { 787, 2, 218, 2, 4785, 0 },
  { 28, 2, 218, 2, 4785, 0 },
  { 136, 2, 218, 2, 4785, 0 },
  { 247, 2, 218, 2, 4785, 0 },
  { 337, 2, 218, 2, 4785, 0 },
  { 430, 2, 218, 2, 4785, 0 },
  { 515, 2, 218, 2, 4785, 0 },
  { 593, 2, 218, 2, 4785, 0 },
  { 668, 2, 218, 2, 4785, 0 },
  { 746, 2, 218, 2, 4785, 0 },
  { 805, 2, 218, 2, 4785, 0 },
  { 46, 2, 218, 2, 4785, 0 },
  { 154, 2, 218, 2, 4785, 0 },
  { 82, 279, 219, 26, 4417, 22 },
  { 193, 279, 219, 26, 4417, 22 },
  { 283, 279, 219, 26, 4417, 22 },
  { 376, 279, 219, 26, 4417, 22 },
  { 461, 279, 219, 26, 4417, 22 },
  { 549, 279, 219, 26, 4417, 22 },
  { 624, 279, 219, 26, 4417, 22 },
  { 702, 279, 219, 26, 4417, 22 },
  { 769, 279, 219, 26, 4417, 22 },
  { 828, 279, 219, 26, 4417, 22 },
  { 6, 279, 219, 26, 4417, 22 },
  { 114, 279, 219, 26, 4417, 22 },
  { 225, 279, 219, 26, 4417, 22 },
  { 315, 279, 219, 26, 4417, 22 },
  { 408, 279, 219, 26, 4417, 22 },
  { 493, 279, 219, 26, 4417, 22 },
  { 581, 279, 219, 26, 4417, 22 },
  { 656, 279, 219, 26, 4417, 22 },
  { 734, 279, 219, 26, 4417, 22 },
  { 793, 279, 219, 26, 4417, 22 },
  { 34, 279, 219, 26, 4417, 22 },
  { 142, 279, 219, 26, 4417, 22 },
  { 253, 279, 219, 26, 4417, 22 },
  { 343, 279, 219, 26, 4417, 22 },
  { 436, 279, 219, 26, 4417, 22 },
  { 521, 279, 219, 26, 4417, 22 },
  { 599, 279, 219, 26, 4417, 22 },
  { 674, 279, 219, 26, 4417, 22 },
  { 752, 279, 219, 26, 4417, 22 },
  { 811, 279, 219, 26, 4417, 22 },
  { 52, 279, 219, 26, 4417, 22 },
  { 160, 279, 219, 26, 4417, 22 },
  { 87, 278, 2, 25, 4385, 22 },
  { 198, 278, 2, 25, 4385, 22 },
  { 288, 278, 2, 25, 4385, 22 },
  { 381, 278, 2, 25, 4385, 22 },
  { 466, 278, 2, 25, 4385, 22 },
  { 554, 278, 2, 25, 4385, 22 },
  { 629, 278, 2, 25, 4385, 22 },
  { 707, 278, 2, 25, 4385, 22 },
  { 774, 278, 2, 25, 4385, 22 },
  { 833, 278, 2, 25, 4385, 22 },
  { 12, 278, 2, 25, 4385, 22 },
  { 120, 278, 2, 25, 4385, 22 },
  { 231, 278, 2, 25, 4385, 22 },
  { 321, 278, 2, 25, 4385, 22 },
  { 414, 278, 2, 25, 4385, 22 },
  { 499, 278, 2, 25, 4385, 22 },
  { 587, 278, 2, 25, 4385, 22 },
  { 662, 278, 2, 25, 4385, 22 },
  { 740, 278, 2, 25, 4385, 22 },
  { 799, 278, 2, 25, 4385, 22 },
  { 40, 278, 2, 25, 4385, 22 },
  { 148, 278, 2, 25, 4385, 22 },
  { 259, 278, 2, 25, 4385, 22 },
  { 349, 278, 2, 25, 4385, 22 },
  { 442, 278, 2, 25, 4385, 22 },
  { 527, 278, 2, 25, 4385, 22 },
  { 605, 278, 2, 25, 4385, 22 },
  { 680, 278, 2, 25, 4385, 22 },
  { 758, 278, 2, 25, 4385, 22 },
  { 817, 278, 2, 25, 4385, 22 },
  { 58, 278, 2, 25, 4385, 22 },
  { 166, 278, 2, 25, 4385, 22 },
  { 876, 2, 266, 2, 4051, 0 },
  { 880, 2, 266, 2, 4051, 0 },
  { 846, 2, 266, 2, 4051, 0 },
  { 851, 2, 266, 2, 4051, 0 },
  { 856, 2, 266, 2, 4051, 0 },
  { 861, 2, 266, 2, 4051, 0 },
  { 866, 2, 266, 2, 4051, 0 },
  { 871, 2, 266, 2, 4051, 0 },
  { 971, 2, 262, 2, 4019, 0 },
  { 976, 2, 262, 2, 4019, 0 },
  { 935, 2, 262, 2, 4019, 0 },
  { 941, 2, 262, 2, 4019, 0 },
  { 947, 2, 262, 2, 4019, 0 },
  { 953, 2, 262, 2, 4019, 0 },
  { 959, 2, 262, 2, 4019, 0 },
  { 965, 2, 262, 2, 4019, 0 },
  { 914, 117, 260, 13, 51, 12 },
  { 918, 117, 260, 13, 51, 12 },
  { 884, 117, 260, 13, 51, 12 },
  { 889, 117, 260, 13, 51, 12 },
  { 894, 117, 260, 13, 51, 12 },
  { 899, 117, 260, 13, 51, 12 },
  { 904, 117, 260, 13, 51, 12 },
  { 909, 117, 260, 13, 51, 12 },
  { 1199, 77, 263, 3, 643, 5 },
  { 1203, 77, 263, 3, 643, 5 },
  { 1169, 77, 263, 3, 643, 5 },
  { 1174, 77, 263, 3, 643, 5 },
  { 1179, 77, 263, 3, 643, 5 },
  { 1184, 77, 263, 3, 643, 5 },
  { 1189, 77, 263, 3, 643, 5 },
  { 1194, 77, 263, 3, 643, 5 },
  { 1039, 2, 259, 2, 3987, 0 },
  { 1044, 2, 259, 2, 3987, 0 },
  { 1003, 2, 259, 2, 3987, 0 },
  { 1009, 2, 259, 2, 3987, 0 },
  { 1015, 2, 259, 2, 3987, 0 },
  { 1021, 2, 259, 2, 3987, 0 },
  { 1027, 2, 259, 2, 3987, 0 },
  { 1033, 2, 259, 2, 3987, 0 },
  { 177, 46, 2, 22, 690, 19 },
  { 360, 49, 2, 22, 690, 19 },
  { 533, 52, 2, 22, 690, 19 },
  { 686, 55, 2, 22, 690, 19 },
};

extern const MCPhysReg X86RegUnitRoots[][2] = {
  { X86::AH },
  { X86::AL },
  { X86::BH },
  { X86::BL },
  { X86::BPL },
  { X86::BPH },
  { X86::CH },
  { X86::CL },
  { X86::CS },
  { X86::DF },
  { X86::DH },
  { X86::DIL },
  { X86::DIH },
  { X86::DL },
  { X86::DS },
  { X86::HAX },
  { X86::HBP },
  { X86::HBX },
  { X86::HCX },
  { X86::HDI },
  { X86::HDX },
  { X86::EFLAGS },
  { X86::IP },
  { X86::HIP },
  { X86::EIZ },
  { X86::ES },
  { X86::SIL },
  { X86::SIH },
  { X86::HSI },
  { X86::SPL },
  { X86::SPH },
  { X86::HSP },
  { X86::FPCW },
  { X86::FPSW },
  { X86::FS },
  { X86::GS },
  { X86::MXCSR },
  { X86::RIZ },
  { X86::SS },
  { X86::SSP },
  { X86::TMMCFG },
  { X86::BND0 },
  { X86::BND1 },
  { X86::BND2 },
  { X86::BND3 },
  { X86::CR0 },
  { X86::CR1 },
  { X86::CR2 },
  { X86::CR3 },
  { X86::CR4 },
  { X86::CR5 },
  { X86::CR6 },
  { X86::CR7 },
  { X86::CR8 },
  { X86::CR9 },
  { X86::CR10 },
  { X86::CR11 },
  { X86::CR12 },
  { X86::CR13 },
  { X86::CR14 },
  { X86::CR15 },
  { X86::DR0 },
  { X86::DR1 },
  { X86::DR2 },
  { X86::DR3 },
  { X86::DR4 },
  { X86::DR5 },
  { X86::DR6 },
  { X86::DR7 },
  { X86::DR8 },
  { X86::DR9 },
  { X86::DR10 },
  { X86::DR11 },
  { X86::DR12 },
  { X86::DR13 },
  { X86::DR14 },
  { X86::DR15 },
  { X86::FP0 },
  { X86::FP1 },
  { X86::FP2 },
  { X86::FP3 },
  { X86::FP4 },
  { X86::FP5 },
  { X86::FP6 },
  { X86::FP7 },
  { X86::K0 },
  { X86::K1 },
  { X86::K2 },
  { X86::K3 },
  { X86::K4 },
  { X86::K5 },
  { X86::K6 },
  { X86::K7 },
  { X86::MM0 },
  { X86::MM1 },
  { X86::MM2 },
  { X86::MM3 },
  { X86::MM4 },
  { X86::MM5 },
  { X86::MM6 },
  { X86::MM7 },
  { X86::R8B },
  { X86::R8BH },
  { X86::R8WH },
  { X86::R9B },
  { X86::R9BH },
  { X86::R9WH },
  { X86::R10B },
  { X86::R10BH },
  { X86::R10WH },
  { X86::R11B },
  { X86::R11BH },
  { X86::R11WH },
  { X86::R12B },
  { X86::R12BH },
  { X86::R12WH },
  { X86::R13B },
  { X86::R13BH },
  { X86::R13WH },
  { X86::R14B },
  { X86::R14BH },
  { X86::R14WH },
  { X86::R15B },
  { X86::R15BH },
  { X86::R15WH },
  { X86::ST0 },
  { X86::ST1 },
  { X86::ST2 },
  { X86::ST3 },
  { X86::ST4 },
  { X86::ST5 },
  { X86::ST6 },
  { X86::ST7 },
  { X86::TMM0 },
  { X86::TMM1 },
  { X86::TMM2 },
  { X86::TMM3 },
  { X86::TMM4 },
  { X86::TMM5 },
  { X86::TMM6 },
  { X86::TMM7 },
  { X86::XMM0 },
  { X86::XMM1 },
  { X86::XMM2 },
  { X86::XMM3 },
  { X86::XMM4 },
  { X86::XMM5 },
  { X86::XMM6 },
  { X86::XMM7 },
  { X86::XMM8 },
  { X86::XMM9 },
  { X86::XMM10 },
  { X86::XMM11 },
  { X86::XMM12 },
  { X86::XMM13 },
  { X86::XMM14 },
  { X86::XMM15 },
  { X86::XMM16 },
  { X86::XMM17 },
  { X86::XMM18 },
  { X86::XMM19 },
  { X86::XMM20 },
  { X86::XMM21 },
  { X86::XMM22 },
  { X86::XMM23 },
  { X86::XMM24 },
  { X86::XMM25 },
  { X86::XMM26 },
  { X86::XMM27 },
  { X86::XMM28 },
  { X86::XMM29 },
  { X86::XMM30 },
  { X86::XMM31 },
};

namespace {     // Register classes...
  // GR8 Register Class...
  const MCPhysReg GR8[] = {
    X86::AL, X86::CL, X86::DL, X86::AH, X86::CH, X86::DH, X86::BL, X86::BH, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R14B, X86::R15B, X86::R12B, X86::R13B, 
  };

  // GR8 Bit set.
  const uint8_t GR8Bits[] = {
    0x36, 0x8d, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GRH8 Register Class...
  const MCPhysReg GRH8[] = {
    X86::SIH, X86::DIH, X86::BPH, X86::SPH, X86::R8BH, X86::R9BH, X86::R10BH, X86::R11BH, X86::R12BH, X86::R13BH, X86::R14BH, X86::R15BH, 
  };

  // GRH8 Bit set.
  const uint8_t GRH8Bits[] = {
    0x80, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR8_NOREX Register Class...
  const MCPhysReg GR8_NOREX[] = {
    X86::AL, X86::CL, X86::DL, X86::AH, X86::CH, X86::DH, X86::BL, X86::BH, 
  };

  // GR8_NOREX Bit set.
  const uint8_t GR8_NOREXBits[] = {
    0x36, 0x8c, 0x08, 
  };

  // GR8_ABCD_H Register Class...
  const MCPhysReg GR8_ABCD_H[] = {
    X86::AH, X86::CH, X86::DH, X86::BH, 
  };

  // GR8_ABCD_H Bit set.
  const uint8_t GR8_ABCD_HBits[] = {
    0x12, 0x84, 
  };

  // GR8_ABCD_L Register Class...
  const MCPhysReg GR8_ABCD_L[] = {
    X86::AL, X86::CL, X86::DL, X86::BL, 
  };

  // GR8_ABCD_L Bit set.
  const uint8_t GR8_ABCD_LBits[] = {
    0x24, 0x08, 0x08, 
  };

  // GRH16 Register Class...
  const MCPhysReg GRH16[] = {
    X86::HAX, X86::HCX, X86::HDX, X86::HSI, X86::HDI, X86::HBX, X86::HBP, X86::HSP, X86::HIP, X86::R8WH, X86::R9WH, X86::R10WH, X86::R11WH, X86::R12WH, X86::R13WH, X86::R14WH, X86::R15WH, 
  };

  // GRH16 Bit set.
  const uint8_t GRH16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR16 Register Class...
  const MCPhysReg GR16[] = {
    X86::AX, X86::CX, X86::DX, X86::SI, X86::DI, X86::BX, X86::BP, X86::SP, X86::R8W, X86::R9W, X86::R10W, X86::R11W, X86::R14W, X86::R15W, X86::R12W, X86::R13W, 
  };

  // GR16 Bit set.
  const uint8_t GR16Bits[] = {
    0x48, 0x22, 0x21, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR16_NOREX Register Class...
  const MCPhysReg GR16_NOREX[] = {
    X86::AX, X86::CX, X86::DX, X86::SI, X86::DI, X86::BX, X86::BP, X86::SP, 
  };

  // GR16_NOREX Bit set.
  const uint8_t GR16_NOREXBits[] = {
    0x48, 0x22, 0x21, 0x00, 0x00, 0x00, 0x00, 0x48, 
  };

  // VK1 Register Class...
  const MCPhysReg VK1[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK1 Bit set.
  const uint8_t VK1Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VK16 Register Class...
  const MCPhysReg VK16[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK16 Bit set.
  const uint8_t VK16Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VK2 Register Class...
  const MCPhysReg VK2[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK2 Bit set.
  const uint8_t VK2Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VK4 Register Class...
  const MCPhysReg VK4[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK4 Bit set.
  const uint8_t VK4Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VK8 Register Class...
  const MCPhysReg VK8[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK8 Bit set.
  const uint8_t VK8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VK16WM Register Class...
  const MCPhysReg VK16WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK16WM Bit set.
  const uint8_t VK16WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // VK1WM Register Class...
  const MCPhysReg VK1WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK1WM Bit set.
  const uint8_t VK1WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // VK2WM Register Class...
  const MCPhysReg VK2WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK2WM Bit set.
  const uint8_t VK2WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // VK4WM Register Class...
  const MCPhysReg VK4WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK4WM Bit set.
  const uint8_t VK4WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // VK8WM Register Class...
  const MCPhysReg VK8WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK8WM Bit set.
  const uint8_t VK8WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // SEGMENT_REG Register Class...
  const MCPhysReg SEGMENT_REG[] = {
    X86::CS, X86::DS, X86::SS, X86::ES, X86::FS, X86::GS, 
  };

  // SEGMENT_REG Bit set.
  const uint8_t SEGMENT_REGBits[] = {
    0x00, 0x10, 0x10, 0x80, 0x30, 0x00, 0x00, 0x00, 0x02, 
  };

  // GR16_ABCD Register Class...
  const MCPhysReg GR16_ABCD[] = {
    X86::AX, X86::CX, X86::DX, X86::BX, 
  };

  // GR16_ABCD Bit set.
  const uint8_t GR16_ABCDBits[] = {
    0x08, 0x22, 0x20, 
  };

  // FPCCR Register Class...
  const MCPhysReg FPCCR[] = {
    X86::FPSW, 
  };

  // FPCCR Bit set.
  const uint8_t FPCCRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // VK16PAIR Register Class...
  const MCPhysReg VK16PAIR[] = {
    X86::K0_K1, X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK16PAIR Bit set.
  const uint8_t VK16PAIRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // VK1PAIR Register Class...
  const MCPhysReg VK1PAIR[] = {
    X86::K0_K1, X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK1PAIR Bit set.
  const uint8_t VK1PAIRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // VK2PAIR Register Class...
  const MCPhysReg VK2PAIR[] = {
    X86::K0_K1, X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK2PAIR Bit set.
  const uint8_t VK2PAIRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // VK4PAIR Register Class...
  const MCPhysReg VK4PAIR[] = {
    X86::K0_K1, X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK4PAIR Bit set.
  const uint8_t VK4PAIRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // VK8PAIR Register Class...
  const MCPhysReg VK8PAIR[] = {
    X86::K0_K1, X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK8PAIR Bit set.
  const uint8_t VK8PAIRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // VK16PAIR_with_sub_mask_0_in_VK16WM Register Class...
  const MCPhysReg VK16PAIR_with_sub_mask_0_in_VK16WM[] = {
    X86::K2_K3, X86::K4_K5, X86::K6_K7, 
  };

  // VK16PAIR_with_sub_mask_0_in_VK16WM Bit set.
  const uint8_t VK16PAIR_with_sub_mask_0_in_VK16WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 
  };

  // FR32X Register Class...
  const MCPhysReg FR32X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // FR32X Bit set.
  const uint8_t FR32XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // LOW32_ADDR_ACCESS_RBP Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_RBP[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, X86::RIP, X86::RBP, 
  };

  // LOW32_ADDR_ACCESS_RBP Bit set.
  const uint8_t LOW32_ADDR_ACCESS_RBPBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // LOW32_ADDR_ACCESS Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, X86::RIP, 
  };

  // LOW32_ADDR_ACCESS Bit set.
  const uint8_t LOW32_ADDR_ACCESSBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_8bit Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_RBP_with_sub_8bit[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, X86::RBP, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_8bit Bit set.
  const uint8_t LOW32_ADDR_ACCESS_RBP_with_sub_8bitBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // DEBUG_REG Register Class...
  const MCPhysReg DEBUG_REG[] = {
    X86::DR0, X86::DR1, X86::DR2, X86::DR3, X86::DR4, X86::DR5, X86::DR6, X86::DR7, X86::DR8, X86::DR9, X86::DR10, X86::DR11, X86::DR12, X86::DR13, X86::DR14, X86::DR15, 
  };

  // DEBUG_REG Bit set.
  const uint8_t DEBUG_REGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // FR32 Register Class...
  const MCPhysReg FR32[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // FR32 Bit set.
  const uint8_t FR32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // GR32 Register Class...
  const MCPhysReg GR32[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32 Bit set.
  const uint8_t GR32Bits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR32_NOSP Register Class...
  const MCPhysReg GR32_NOSP[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::R8D, X86::R9D, X86::R10D, X86::R11D, X86::R14D, X86::R15D, X86::R12D, X86::R13D, 
  };

  // GR32_NOSP Bit set.
  const uint8_t GR32_NOSPBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, X86::RBP, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX Bit set.
  const uint8_t LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 0x00, 0x04, 
  };

  // GR32_NOREX Register Class...
  const MCPhysReg GR32_NOREX[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ESP, 
  };

  // GR32_NOREX Bit set.
  const uint8_t GR32_NOREXBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x03, 
  };

  // VK32 Register Class...
  const MCPhysReg VK32[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK32 Bit set.
  const uint8_t VK32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR32_NOREX_NOSP Register Class...
  const MCPhysReg GR32_NOREX_NOSP[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 
  };

  // GR32_NOREX_NOSP Bit set.
  const uint8_t GR32_NOREX_NOSPBits[] = {
    0x00, 0x00, 0xc0, 0x0f, 0x01, 
  };

  // RFP32 Register Class...
  const MCPhysReg RFP32[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP32 Bit set.
  const uint8_t RFP32Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  };

  // VK32WM Register Class...
  const MCPhysReg VK32WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK32WM Bit set.
  const uint8_t VK32WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // GR32_ABCD Register Class...
  const MCPhysReg GR32_ABCD[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::EBX, 
  };

  // GR32_ABCD Bit set.
  const uint8_t GR32_ABCDBits[] = {
    0x00, 0x00, 0x40, 0x0b, 
  };

  // GR32_TC Register Class...
  const MCPhysReg GR32_TC[] = {
    X86::EAX, X86::ECX, X86::EDX, X86::ESP, 
  };

  // GR32_TC Bit set.
  const uint8_t GR32_TCBits[] = {
    0x00, 0x00, 0x40, 0x0a, 0x02, 
  };

  // GR32_ABCD_and_GR32_TC Register Class...
  const MCPhysReg GR32_ABCD_and_GR32_TC[] = {
    X86::EAX, X86::ECX, X86::EDX, 
  };

  // GR32_ABCD_and_GR32_TC Bit set.
  const uint8_t GR32_ABCD_and_GR32_TCBits[] = {
    0x00, 0x00, 0x40, 0x0a, 
  };

  // GR32_AD Register Class...
  const MCPhysReg GR32_AD[] = {
    X86::EAX, X86::EDX, 
  };

  // GR32_AD Bit set.
  const uint8_t GR32_ADBits[] = {
    0x00, 0x00, 0x40, 0x08, 
  };

  // GR32_BPSP Register Class...
  const MCPhysReg GR32_BPSP[] = {
    X86::EBP, X86::ESP, 
  };

  // GR32_BPSP Bit set.
  const uint8_t GR32_BPSPBits[] = {
    0x00, 0x00, 0x80, 0x00, 0x02, 
  };

  // GR32_BSI Register Class...
  const MCPhysReg GR32_BSI[] = {
    X86::EBX, X86::ESI, 
  };

  // GR32_BSI Bit set.
  const uint8_t GR32_BSIBits[] = {
    0x00, 0x00, 0x00, 0x01, 0x01, 
  };

  // GR32_CB Register Class...
  const MCPhysReg GR32_CB[] = {
    X86::ECX, X86::EBX, 
  };

  // GR32_CB Bit set.
  const uint8_t GR32_CBBits[] = {
    0x00, 0x00, 0x00, 0x03, 
  };

  // GR32_DC Register Class...
  const MCPhysReg GR32_DC[] = {
    X86::EDX, X86::ECX, 
  };

  // GR32_DC Bit set.
  const uint8_t GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x0a, 
  };

  // GR32_DIBP Register Class...
  const MCPhysReg GR32_DIBP[] = {
    X86::EDI, X86::EBP, 
  };

  // GR32_DIBP Bit set.
  const uint8_t GR32_DIBPBits[] = {
    0x00, 0x00, 0x80, 0x04, 
  };

  // GR32_SIDI Register Class...
  const MCPhysReg GR32_SIDI[] = {
    X86::ESI, X86::EDI, 
  };

  // GR32_SIDI Bit set.
  const uint8_t GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x04, 0x01, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_32bit Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_RBP_with_sub_32bit[] = {
    X86::RIP, X86::RBP, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_32bit Bit set.
  const uint8_t LOW32_ADDR_ACCESS_RBP_with_sub_32bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 
  };

  // CCR Register Class...
  const MCPhysReg CCR[] = {
    X86::EFLAGS, 
  };

  // CCR Bit set.
  const uint8_t CCRBits[] = {
    0x00, 0x00, 0x00, 0x10, 
  };

  // DFCCR Register Class...
  const MCPhysReg DFCCR[] = {
    X86::DF, 
  };

  // DFCCR Bit set.
  const uint8_t DFCCRBits[] = {
    0x00, 0x40, 
  };

  // GR32_ABCD_and_GR32_BSI Register Class...
  const MCPhysReg GR32_ABCD_and_GR32_BSI[] = {
    X86::EBX, 
  };

  // GR32_ABCD_and_GR32_BSI Bit set.
  const uint8_t GR32_ABCD_and_GR32_BSIBits[] = {
    0x00, 0x00, 0x00, 0x01, 
  };

  // GR32_AD_and_GR32_DC Register Class...
  const MCPhysReg GR32_AD_and_GR32_DC[] = {
    X86::EDX, 
  };

  // GR32_AD_and_GR32_DC Bit set.
  const uint8_t GR32_AD_and_GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x08, 
  };

  // GR32_BPSP_and_GR32_DIBP Register Class...
  const MCPhysReg GR32_BPSP_and_GR32_DIBP[] = {
    X86::EBP, 
  };

  // GR32_BPSP_and_GR32_DIBP Bit set.
  const uint8_t GR32_BPSP_and_GR32_DIBPBits[] = {
    0x00, 0x00, 0x80, 
  };

  // GR32_BPSP_and_GR32_TC Register Class...
  const MCPhysReg GR32_BPSP_and_GR32_TC[] = {
    X86::ESP, 
  };

  // GR32_BPSP_and_GR32_TC Bit set.
  const uint8_t GR32_BPSP_and_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // GR32_BSI_and_GR32_SIDI Register Class...
  const MCPhysReg GR32_BSI_and_GR32_SIDI[] = {
    X86::ESI, 
  };

  // GR32_BSI_and_GR32_SIDI Bit set.
  const uint8_t GR32_BSI_and_GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // GR32_CB_and_GR32_DC Register Class...
  const MCPhysReg GR32_CB_and_GR32_DC[] = {
    X86::ECX, 
  };

  // GR32_CB_and_GR32_DC Bit set.
  const uint8_t GR32_CB_and_GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x02, 
  };

  // GR32_DIBP_and_GR32_SIDI Register Class...
  const MCPhysReg GR32_DIBP_and_GR32_SIDI[] = {
    X86::EDI, 
  };

  // GR32_DIBP_and_GR32_SIDI Bit set.
  const uint8_t GR32_DIBP_and_GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x04, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit[] = {
    X86::RBP, 
  };

  // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit Bit set.
  const uint8_t LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // LOW32_ADDR_ACCESS_with_sub_32bit Register Class...
  const MCPhysReg LOW32_ADDR_ACCESS_with_sub_32bit[] = {
    X86::RIP, 
  };

  // LOW32_ADDR_ACCESS_with_sub_32bit Bit set.
  const uint8_t LOW32_ADDR_ACCESS_with_sub_32bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  };

  // RFP64 Register Class...
  const MCPhysReg RFP64[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP64 Bit set.
  const uint8_t RFP64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  };

  // FR64X Register Class...
  const MCPhysReg FR64X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // FR64X Bit set.
  const uint8_t FR64XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // GR64 Register Class...
  const MCPhysReg GR64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, X86::RSP, X86::RIP, 
  };

  // GR64 Bit set.
  const uint8_t GR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // CONTROL_REG Register Class...
  const MCPhysReg CONTROL_REG[] = {
    X86::CR0, X86::CR1, X86::CR2, X86::CR3, X86::CR4, X86::CR5, X86::CR6, X86::CR7, X86::CR8, X86::CR9, X86::CR10, X86::CR11, X86::CR12, X86::CR13, X86::CR14, X86::CR15, 
  };

  // CONTROL_REG Bit set.
  const uint8_t CONTROL_REGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // FR64 Register Class...
  const MCPhysReg FR64[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // FR64 Bit set.
  const uint8_t FR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // GR64_with_sub_8bit Register Class...
  const MCPhysReg GR64_with_sub_8bit[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_8bit Bit set.
  const uint8_t GR64_with_sub_8bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR64_NOSP Register Class...
  const MCPhysReg GR64_NOSP[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::RBX, X86::R14, X86::R15, X86::R12, X86::R13, X86::RBP, 
  };

  // GR64_NOSP Bit set.
  const uint8_t GR64_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR64_TC Register Class...
  const MCPhysReg GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, X86::RIP, X86::RSP, 
  };

  // GR64_TC Bit set.
  const uint8_t GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // GR64_NOREX Register Class...
  const MCPhysReg GR64_NOREX[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, X86::RSP, X86::RIP, 
  };

  // GR64_NOREX Bit set.
  const uint8_t GR64_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x06, 
  };

  // GR64_TCW64 Register Class...
  const MCPhysReg GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R10, X86::R11, X86::RIP, X86::RSP, 
  };

  // GR64_TCW64 Bit set.
  const uint8_t GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd2, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // GR64_TC_with_sub_8bit Register Class...
  const MCPhysReg GR64_TC_with_sub_8bit[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, X86::RSP, 
  };

  // GR64_TC_with_sub_8bit Bit set.
  const uint8_t GR64_TC_with_sub_8bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // GR64_NOSP_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOSP_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_NOSP_and_GR64_TC Bit set.
  const uint8_t GR64_NOSP_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // GR64_TCW64_with_sub_8bit Register Class...
  const MCPhysReg GR64_TCW64_with_sub_8bit[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R10, X86::R11, X86::RSP, 
  };

  // GR64_TCW64_with_sub_8bit Bit set.
  const uint8_t GR64_TCW64_with_sub_8bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // GR64_TC_and_GR64_TCW64 Register Class...
  const MCPhysReg GR64_TC_and_GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R11, X86::RIP, X86::RSP, 
  };

  // GR64_TC_and_GR64_TCW64 Bit set.
  const uint8_t GR64_TC_and_GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd2, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // GR64_with_sub_16bit_in_GR16_NOREX Register Class...
  const MCPhysReg GR64_with_sub_16bit_in_GR16_NOREX[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_16bit_in_GR16_NOREX Bit set.
  const uint8_t GR64_with_sub_16bit_in_GR16_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x06, 
  };

  // VK64 Register Class...
  const MCPhysReg VK64[] = {
    X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK64 Bit set.
  const uint8_t VK64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // VR64 Register Class...
  const MCPhysReg VR64[] = {
    X86::MM0, X86::MM1, X86::MM2, X86::MM3, X86::MM4, X86::MM5, X86::MM6, X86::MM7, 
  };

  // VR64 Bit set.
  const uint8_t VR64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // GR64_NOREX_NOSP Register Class...
  const MCPhysReg GR64_NOREX_NOSP[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RBX, X86::RBP, 
  };

  // GR64_NOREX_NOSP Bit set.
  const uint8_t GR64_NOREX_NOSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x02, 
  };

  // GR64_NOREX_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOREX_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RSP, X86::RIP, 
  };

  // GR64_NOREX_and_GR64_TC Bit set.
  const uint8_t GR64_NOREX_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x06, 
  };

  // GR64_NOSP_and_GR64_TCW64 Register Class...
  const MCPhysReg GR64_NOSP_and_GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R10, X86::R11, 
  };

  // GR64_NOSP_and_GR64_TCW64 Bit set.
  const uint8_t GR64_NOSP_and_GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 
  };

  // GR64_TCW64_and_GR64_TC_with_sub_8bit Register Class...
  const MCPhysReg GR64_TCW64_and_GR64_TC_with_sub_8bit[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R11, X86::RSP, 
  };

  // GR64_TCW64_and_GR64_TC_with_sub_8bit Bit set.
  const uint8_t GR64_TCW64_and_GR64_TC_with_sub_8bitBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // VK64WM Register Class...
  const MCPhysReg VK64WM[] = {
    X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 
  };

  // VK64WM Bit set.
  const uint8_t VK64WMBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
  };

  // GR64_TC_and_GR64_NOSP_and_GR64_TCW64 Register Class...
  const MCPhysReg GR64_TC_and_GR64_NOSP_and_GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::R8, X86::R9, X86::R11, 
  };

  // GR64_TC_and_GR64_NOSP_and_GR64_TCW64 Bit set.
  const uint8_t GR64_TC_and_GR64_NOSP_and_GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 
  };

  // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX Register Class...
  const MCPhysReg GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::RSP, 
  };

  // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX Bit set.
  const uint8_t GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x06, 
  };

  // GR64_NOREX_NOSP_and_GR64_TC Register Class...
  const MCPhysReg GR64_NOREX_NOSP_and_GR64_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, 
  };

  // GR64_NOREX_NOSP_and_GR64_TC Bit set.
  const uint8_t GR64_NOREX_NOSP_and_GR64_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x02, 
  };

  // GR64_NOREX_and_GR64_TCW64 Register Class...
  const MCPhysReg GR64_NOREX_and_GR64_TCW64[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSP, X86::RIP, 
  };

  // GR64_NOREX_and_GR64_TCW64 Bit set.
  const uint8_t GR64_NOREX_and_GR64_TCW64Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd2, 0x04, 
  };

  // GR64_ABCD Register Class...
  const MCPhysReg GR64_ABCD[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RBX, 
  };

  // GR64_ABCD Bit set.
  const uint8_t GR64_ABCDBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 
  };

  // GR64_with_sub_32bit_in_GR32_TC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, X86::RSP, 
  };

  // GR64_with_sub_32bit_in_GR32_TC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x04, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC[] = {
    X86::RAX, X86::RCX, X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 
  };

  // GR64_AD Register Class...
  const MCPhysReg GR64_AD[] = {
    X86::RAX, X86::RDX, 
  };

  // GR64_AD Bit set.
  const uint8_t GR64_ADBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 
  };

  // GR64_and_LOW32_ADDR_ACCESS_RBP Register Class...
  const MCPhysReg GR64_and_LOW32_ADDR_ACCESS_RBP[] = {
    X86::RBP, X86::RIP, 
  };

  // GR64_and_LOW32_ADDR_ACCESS_RBP Bit set.
  const uint8_t GR64_and_LOW32_ADDR_ACCESS_RBPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_BPSP[] = {
    X86::RBP, X86::RSP, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_BPSPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 
  };

  // GR64_with_sub_32bit_in_GR32_BSI Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_BSI[] = {
    X86::RSI, X86::RBX, 
  };

  // GR64_with_sub_32bit_in_GR32_BSI Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_BSIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 
  };

  // GR64_with_sub_32bit_in_GR32_CB Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_CB[] = {
    X86::RCX, X86::RBX, 
  };

  // GR64_with_sub_32bit_in_GR32_CB Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_CBBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  };

  // GR64_with_sub_32bit_in_GR32_DC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_DC[] = {
    X86::RCX, X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_DC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 
  };

  // GR64_with_sub_32bit_in_GR32_DIBP Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_DIBP[] = {
    X86::RDI, X86::RBP, 
  };

  // GR64_with_sub_32bit_in_GR32_DIBP Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_DIBPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 
  };

  // GR64_with_sub_32bit_in_GR32_SIDI Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_SIDI[] = {
    X86::RSI, X86::RDI, 
  };

  // GR64_with_sub_32bit_in_GR32_SIDI Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 
  };

  // GR64_and_LOW32_ADDR_ACCESS Register Class...
  const MCPhysReg GR64_and_LOW32_ADDR_ACCESS[] = {
    X86::RIP, 
  };

  // GR64_and_LOW32_ADDR_ACCESS Bit set.
  const uint8_t GR64_and_LOW32_ADDR_ACCESSBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI[] = {
    X86::RBX, 
  };

  // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC[] = {
    X86::RDX, 
  };

  // GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP[] = {
    X86::RBP, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC[] = {
    X86::RSP, 
  };

  // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
  };

  // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI[] = {
    X86::RSI, 
  };

  // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  };

  // GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC[] = {
    X86::RCX, 
  };

  // GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI Register Class...
  const MCPhysReg GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI[] = {
    X86::RDI, 
  };

  // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI Bit set.
  const uint8_t GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 
  };

  // RST Register Class...
  const MCPhysReg RST[] = {
    X86::ST0, X86::ST1, X86::ST2, X86::ST3, X86::ST4, X86::ST5, X86::ST6, X86::ST7, 
  };

  // RST Bit set.
  const uint8_t RSTBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

  // RFP80 Register Class...
  const MCPhysReg RFP80[] = {
    X86::FP0, X86::FP1, X86::FP2, X86::FP3, X86::FP4, X86::FP5, X86::FP6, 
  };

  // RFP80 Bit set.
  const uint8_t RFP80Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  };

  // RFP80_7 Register Class...
  const MCPhysReg RFP80_7[] = {
    X86::FP7, 
  };

  // RFP80_7 Bit set.
  const uint8_t RFP80_7Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  };

  // VR128X Register Class...
  const MCPhysReg VR128X[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::XMM16, X86::XMM17, X86::XMM18, X86::XMM19, X86::XMM20, X86::XMM21, X86::XMM22, X86::XMM23, X86::XMM24, X86::XMM25, X86::XMM26, X86::XMM27, X86::XMM28, X86::XMM29, X86::XMM30, X86::XMM31, 
  };

  // VR128X Bit set.
  const uint8_t VR128XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // VR128 Register Class...
  const MCPhysReg VR128[] = {
    X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 
  };

  // VR128 Bit set.
  const uint8_t VR128Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // BNDR Register Class...
  const MCPhysReg BNDR[] = {
    X86::BND0, X86::BND1, X86::BND2, X86::BND3, 
  };

  // BNDR Bit set.
  const uint8_t BNDRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 
  };

  // VR256X Register Class...
  const MCPhysReg VR256X[] = {
    X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, X86::YMM16, X86::YMM17, X86::YMM18, X86::YMM19, X86::YMM20, X86::YMM21, X86::YMM22, X86::YMM23, X86::YMM24, X86::YMM25, X86::YMM26, X86::YMM27, X86::YMM28, X86::YMM29, X86::YMM30, X86::YMM31, 
  };

  // VR256X Bit set.
  const uint8_t VR256XBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // VR256 Register Class...
  const MCPhysReg VR256[] = {
    X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 
  };

  // VR256 Bit set.
  const uint8_t VR256Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // VR512 Register Class...
  const MCPhysReg VR512[] = {
    X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, 
  };

  // VR512 Bit set.
  const uint8_t VR512Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  };

  // VR512_0_15 Register Class...
  const MCPhysReg VR512_0_15[] = {
    X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, 
  };

  // VR512_0_15 Bit set.
  const uint8_t VR512_0_15Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
  };

  // TILECFG Register Class...
  const MCPhysReg TILECFG[] = {
    X86::TMMCFG, 
  };

  // TILECFG Bit set.
  const uint8_t TILECFGBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // TILE Register Class...
  const MCPhysReg TILE[] = {
    X86::TMM0, X86::TMM1, X86::TMM2, X86::TMM3, X86::TMM4, X86::TMM5, X86::TMM6, X86::TMM7, 
  };

  // TILE Bit set.
  const uint8_t TILEBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
  };

} // end anonymous namespace


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
extern const char X86RegClassStrings[] = {
  /* 0 */ "RFP80\0"
  /* 6 */ "VK1\0"
  /* 10 */ "VR512\0"
  /* 16 */ "VK32\0"
  /* 21 */ "RFP32\0"
  /* 27 */ "FR32\0"
  /* 32 */ "GR32\0"
  /* 37 */ "VK2\0"
  /* 41 */ "VK64\0"
  /* 46 */ "RFP64\0"
  /* 52 */ "FR64\0"
  /* 57 */ "GR64\0"
  /* 62 */ "VR64\0"
  /* 67 */ "GR64_TC_and_GR64_TCW64\0"
  /* 90 */ "GR64_TC_and_GR64_NOSP_and_GR64_TCW64\0"
  /* 127 */ "GR64_NOREX_and_GR64_TCW64\0"
  /* 153 */ "VK4\0"
  /* 157 */ "VR512_0_15\0"
  /* 168 */ "GRH16\0"
  /* 174 */ "VK16\0"
  /* 179 */ "GR16\0"
  /* 184 */ "VR256\0"
  /* 190 */ "RFP80_7\0"
  /* 198 */ "VR128\0"
  /* 204 */ "GRH8\0"
  /* 209 */ "VK8\0"
  /* 213 */ "GR8\0"
  /* 217 */ "GR64_with_sub_32bit_in_GR32_CB\0"
  /* 248 */ "GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC\0"
  /* 291 */ "GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC\0"
  /* 334 */ "GR64_with_sub_32bit_in_GR32_DC\0"
  /* 365 */ "GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC\0"
  /* 410 */ "GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC\0"
  /* 455 */ "GR64_with_sub_32bit_in_GR32_TC\0"
  /* 486 */ "GR64_NOSP_and_GR64_TC\0"
  /* 508 */ "GR64_NOREX_NOSP_and_GR64_TC\0"
  /* 536 */ "GR64_NOREX_and_GR64_TC\0"
  /* 559 */ "GR32_AD\0"
  /* 567 */ "GR64_AD\0"
  /* 575 */ "GR32_ABCD\0"
  /* 585 */ "GR64_ABCD\0"
  /* 595 */ "GR16_ABCD\0"
  /* 605 */ "TILE\0"
  /* 610 */ "DEBUG_REG\0"
  /* 620 */ "CONTROL_REG\0"
  /* 632 */ "SEGMENT_REG\0"
  /* 644 */ "TILECFG\0"
  /* 652 */ "GR8_ABCD_H\0"
  /* 663 */ "GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI\0"
  /* 709 */ "GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI\0"
  /* 756 */ "GR64_with_sub_32bit_in_GR32_SIDI\0"
  /* 789 */ "GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI\0"
  /* 835 */ "GR64_with_sub_32bit_in_GR32_BSI\0"
  /* 867 */ "GR8_ABCD_L\0"
  /* 878 */ "VK1WM\0"
  /* 884 */ "VK32WM\0"
  /* 891 */ "VK2WM\0"
  /* 897 */ "VK64WM\0"
  /* 904 */ "VK4WM\0"
  /* 910 */ "VK16PAIR_with_sub_mask_0_in_VK16WM\0"
  /* 945 */ "VK8WM\0"
  /* 951 */ "GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP\0"
  /* 998 */ "GR64_with_sub_32bit_in_GR32_DIBP\0"
  /* 1031 */ "GR64_and_LOW32_ADDR_ACCESS_RBP\0"
  /* 1062 */ "GR32_NOSP\0"
  /* 1072 */ "GR64_NOSP\0"
  /* 1082 */ "GR32_NOREX_NOSP\0"
  /* 1098 */ "GR64_NOREX_NOSP\0"
  /* 1114 */ "GR64_with_sub_32bit_in_GR32_BPSP\0"
  /* 1147 */ "DFCCR\0"
  /* 1153 */ "FPCCR\0"
  /* 1159 */ "BNDR\0"
  /* 1164 */ "VK1PAIR\0"
  /* 1172 */ "VK2PAIR\0"
  /* 1180 */ "VK4PAIR\0"
  /* 1188 */ "VK16PAIR\0"
  /* 1197 */ "VK8PAIR\0"
  /* 1205 */ "GR64_and_LOW32_ADDR_ACCESS\0"
  /* 1232 */ "RST\0"
  /* 1236 */ "FR32X\0"
  /* 1242 */ "FR64X\0"
  /* 1248 */ "VR256X\0"
  /* 1255 */ "VR128X\0"
  /* 1262 */ "GR32_NOREX\0"
  /* 1273 */ "GR64_NOREX\0"
  /* 1284 */ "GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX\0"
  /* 1330 */ "LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX\0"
  /* 1381 */ "GR8_NOREX\0"
  /* 1391 */ "LOW32_ADDR_ACCESS_RBP_with_sub_32bit\0"
  /* 1428 */ "LOW32_ADDR_ACCESS_with_sub_32bit\0"
  /* 1461 */ "LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit\0"
  /* 1512 */ "GR64_with_sub_8bit\0"
  /* 1531 */ "GR64_TCW64_with_sub_8bit\0"
  /* 1556 */ "GR64_TCW64_and_GR64_TC_with_sub_8bit\0"
  /* 1593 */ "LOW32_ADDR_ACCESS_RBP_with_sub_8bit\0"
};
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

extern const MCRegisterClass X86MCRegisterClasses[] = {
  { GR8, GR8Bits, 213, 20, sizeof(GR8Bits), X86::GR8RegClassID, 1, true },
  { GRH8, GRH8Bits, 204, 12, sizeof(GRH8Bits), X86::GRH8RegClassID, 1, false },
  { GR8_NOREX, GR8_NOREXBits, 1381, 8, sizeof(GR8_NOREXBits), X86::GR8_NOREXRegClassID, 1, true },
  { GR8_ABCD_H, GR8_ABCD_HBits, 652, 4, sizeof(GR8_ABCD_HBits), X86::GR8_ABCD_HRegClassID, 1, true },
  { GR8_ABCD_L, GR8_ABCD_LBits, 867, 4, sizeof(GR8_ABCD_LBits), X86::GR8_ABCD_LRegClassID, 1, true },
  { GRH16, GRH16Bits, 168, 17, sizeof(GRH16Bits), X86::GRH16RegClassID, 1, false },
  { GR16, GR16Bits, 179, 16, sizeof(GR16Bits), X86::GR16RegClassID, 1, true },
  { GR16_NOREX, GR16_NOREXBits, 1319, 8, sizeof(GR16_NOREXBits), X86::GR16_NOREXRegClassID, 1, true },
  { VK1, VK1Bits, 6, 8, sizeof(VK1Bits), X86::VK1RegClassID, 1, true },
  { VK16, VK16Bits, 174, 8, sizeof(VK16Bits), X86::VK16RegClassID, 1, true },
  { VK2, VK2Bits, 37, 8, sizeof(VK2Bits), X86::VK2RegClassID, 1, true },
  { VK4, VK4Bits, 153, 8, sizeof(VK4Bits), X86::VK4RegClassID, 1, true },
  { VK8, VK8Bits, 209, 8, sizeof(VK8Bits), X86::VK8RegClassID, 1, true },
  { VK16WM, VK16WMBits, 938, 7, sizeof(VK16WMBits), X86::VK16WMRegClassID, 1, true },
  { VK1WM, VK1WMBits, 878, 7, sizeof(VK1WMBits), X86::VK1WMRegClassID, 1, true },
  { VK2WM, VK2WMBits, 891, 7, sizeof(VK2WMBits), X86::VK2WMRegClassID, 1, true },
  { VK4WM, VK4WMBits, 904, 7, sizeof(VK4WMBits), X86::VK4WMRegClassID, 1, true },
  { VK8WM, VK8WMBits, 945, 7, sizeof(VK8WMBits), X86::VK8WMRegClassID, 1, true },
  { SEGMENT_REG, SEGMENT_REGBits, 632, 6, sizeof(SEGMENT_REGBits), X86::SEGMENT_REGRegClassID, 1, true },
  { GR16_ABCD, GR16_ABCDBits, 595, 4, sizeof(GR16_ABCDBits), X86::GR16_ABCDRegClassID, 1, true },
  { FPCCR, FPCCRBits, 1153, 1, sizeof(FPCCRBits), X86::FPCCRRegClassID, -1, false },
  { VK16PAIR, VK16PAIRBits, 1188, 4, sizeof(VK16PAIRBits), X86::VK16PAIRRegClassID, 1, true },
  { VK1PAIR, VK1PAIRBits, 1164, 4, sizeof(VK1PAIRBits), X86::VK1PAIRRegClassID, 1, true },
  { VK2PAIR, VK2PAIRBits, 1172, 4, sizeof(VK2PAIRBits), X86::VK2PAIRRegClassID, 1, true },
  { VK4PAIR, VK4PAIRBits, 1180, 4, sizeof(VK4PAIRBits), X86::VK4PAIRRegClassID, 1, true },
  { VK8PAIR, VK8PAIRBits, 1197, 4, sizeof(VK8PAIRBits), X86::VK8PAIRRegClassID, 1, true },
  { VK16PAIR_with_sub_mask_0_in_VK16WM, VK16PAIR_with_sub_mask_0_in_VK16WMBits, 910, 3, sizeof(VK16PAIR_with_sub_mask_0_in_VK16WMBits), X86::VK16PAIR_with_sub_mask_0_in_VK16WMRegClassID, 1, true },
  { FR32X, FR32XBits, 1236, 32, sizeof(FR32XBits), X86::FR32XRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_RBP, LOW32_ADDR_ACCESS_RBPBits, 1040, 18, sizeof(LOW32_ADDR_ACCESS_RBPBits), X86::LOW32_ADDR_ACCESS_RBPRegClassID, 1, true },
  { LOW32_ADDR_ACCESS, LOW32_ADDR_ACCESSBits, 1214, 17, sizeof(LOW32_ADDR_ACCESSBits), X86::LOW32_ADDR_ACCESSRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_RBP_with_sub_8bit, LOW32_ADDR_ACCESS_RBP_with_sub_8bitBits, 1593, 17, sizeof(LOW32_ADDR_ACCESS_RBP_with_sub_8bitBits), X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClassID, 1, true },
  { DEBUG_REG, DEBUG_REGBits, 610, 16, sizeof(DEBUG_REGBits), X86::DEBUG_REGRegClassID, 1, true },
  { FR32, FR32Bits, 27, 16, sizeof(FR32Bits), X86::FR32RegClassID, 1, true },
  { GR32, GR32Bits, 32, 16, sizeof(GR32Bits), X86::GR32RegClassID, 1, true },
  { GR32_NOSP, GR32_NOSPBits, 1062, 15, sizeof(GR32_NOSPBits), X86::GR32_NOSPRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX, LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXBits, 1330, 9, sizeof(LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXBits), X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClassID, 1, true },
  { GR32_NOREX, GR32_NOREXBits, 1262, 8, sizeof(GR32_NOREXBits), X86::GR32_NOREXRegClassID, 1, true },
  { VK32, VK32Bits, 16, 8, sizeof(VK32Bits), X86::VK32RegClassID, 1, true },
  { GR32_NOREX_NOSP, GR32_NOREX_NOSPBits, 1082, 7, sizeof(GR32_NOREX_NOSPBits), X86::GR32_NOREX_NOSPRegClassID, 1, true },
  { RFP32, RFP32Bits, 21, 7, sizeof(RFP32Bits), X86::RFP32RegClassID, 1, true },
  { VK32WM, VK32WMBits, 884, 7, sizeof(VK32WMBits), X86::VK32WMRegClassID, 1, true },
  { GR32_ABCD, GR32_ABCDBits, 575, 4, sizeof(GR32_ABCDBits), X86::GR32_ABCDRegClassID, 1, true },
  { GR32_TC, GR32_TCBits, 402, 4, sizeof(GR32_TCBits), X86::GR32_TCRegClassID, 1, true },
  { GR32_ABCD_and_GR32_TC, GR32_ABCD_and_GR32_TCBits, 388, 3, sizeof(GR32_ABCD_and_GR32_TCBits), X86::GR32_ABCD_and_GR32_TCRegClassID, 1, true },
  { GR32_AD, GR32_ADBits, 559, 2, sizeof(GR32_ADBits), X86::GR32_ADRegClassID, 1, true },
  { GR32_BPSP, GR32_BPSPBits, 1137, 2, sizeof(GR32_BPSPBits), X86::GR32_BPSPRegClassID, 1, true },
  { GR32_BSI, GR32_BSIBits, 826, 2, sizeof(GR32_BSIBits), X86::GR32_BSIRegClassID, 1, true },
  { GR32_CB, GR32_CBBits, 240, 2, sizeof(GR32_CBBits), X86::GR32_CBRegClassID, 1, true },
  { GR32_DC, GR32_DCBits, 283, 2, sizeof(GR32_DCBits), X86::GR32_DCRegClassID, 1, true },
  { GR32_DIBP, GR32_DIBPBits, 988, 2, sizeof(GR32_DIBPBits), X86::GR32_DIBPRegClassID, 1, true },
  { GR32_SIDI, GR32_SIDIBits, 699, 2, sizeof(GR32_SIDIBits), X86::GR32_SIDIRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_RBP_with_sub_32bit, LOW32_ADDR_ACCESS_RBP_with_sub_32bitBits, 1391, 2, sizeof(LOW32_ADDR_ACCESS_RBP_with_sub_32bitBits), X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClassID, 1, true },
  { CCR, CCRBits, 1149, 1, sizeof(CCRBits), X86::CCRRegClassID, -1, false },
  { DFCCR, DFCCRBits, 1147, 1, sizeof(DFCCRBits), X86::DFCCRRegClassID, -1, false },
  { GR32_ABCD_and_GR32_BSI, GR32_ABCD_and_GR32_BSIBits, 812, 1, sizeof(GR32_ABCD_and_GR32_BSIBits), X86::GR32_ABCD_and_GR32_BSIRegClassID, 1, true },
  { GR32_AD_and_GR32_DC, GR32_AD_and_GR32_DCBits, 314, 1, sizeof(GR32_AD_and_GR32_DCBits), X86::GR32_AD_and_GR32_DCRegClassID, 1, true },
  { GR32_BPSP_and_GR32_DIBP, GR32_BPSP_and_GR32_DIBPBits, 974, 1, sizeof(GR32_BPSP_and_GR32_DIBPBits), X86::GR32_BPSP_and_GR32_DIBPRegClassID, 1, true },
  { GR32_BPSP_and_GR32_TC, GR32_BPSP_and_GR32_TCBits, 433, 1, sizeof(GR32_BPSP_and_GR32_TCBits), X86::GR32_BPSP_and_GR32_TCRegClassID, 1, true },
  { GR32_BSI_and_GR32_SIDI, GR32_BSI_and_GR32_SIDIBits, 686, 1, sizeof(GR32_BSI_and_GR32_SIDIBits), X86::GR32_BSI_and_GR32_SIDIRegClassID, 1, true },
  { GR32_CB_and_GR32_DC, GR32_CB_and_GR32_DCBits, 271, 1, sizeof(GR32_CB_and_GR32_DCBits), X86::GR32_CB_and_GR32_DCRegClassID, 1, true },
  { GR32_DIBP_and_GR32_SIDI, GR32_DIBP_and_GR32_SIDIBits, 732, 1, sizeof(GR32_DIBP_and_GR32_SIDIBits), X86::GR32_DIBP_and_GR32_SIDIRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit, LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitBits, 1461, 1, sizeof(LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitBits), X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClassID, 1, true },
  { LOW32_ADDR_ACCESS_with_sub_32bit, LOW32_ADDR_ACCESS_with_sub_32bitBits, 1428, 1, sizeof(LOW32_ADDR_ACCESS_with_sub_32bitBits), X86::LOW32_ADDR_ACCESS_with_sub_32bitRegClassID, 1, true },
  { RFP64, RFP64Bits, 46, 7, sizeof(RFP64Bits), X86::RFP64RegClassID, 1, true },
  { FR64X, FR64XBits, 1242, 32, sizeof(FR64XBits), X86::FR64XRegClassID, 1, true },
  { GR64, GR64Bits, 57, 17, sizeof(GR64Bits), X86::GR64RegClassID, 1, true },
  { CONTROL_REG, CONTROL_REGBits, 620, 16, sizeof(CONTROL_REGBits), X86::CONTROL_REGRegClassID, 1, true },
  { FR64, FR64Bits, 52, 16, sizeof(FR64Bits), X86::FR64RegClassID, 1, true },
  { GR64_with_sub_8bit, GR64_with_sub_8bitBits, 1512, 16, sizeof(GR64_with_sub_8bitBits), X86::GR64_with_sub_8bitRegClassID, 1, true },
  { GR64_NOSP, GR64_NOSPBits, 1072, 15, sizeof(GR64_NOSPBits), X86::GR64_NOSPRegClassID, 1, true },
  { GR64_TC, GR64_TCBits, 500, 10, sizeof(GR64_TCBits), X86::GR64_TCRegClassID, 1, true },
  { GR64_NOREX, GR64_NOREXBits, 1273, 9, sizeof(GR64_NOREXBits), X86::GR64_NOREXRegClassID, 1, true },
  { GR64_TCW64, GR64_TCW64Bits, 79, 9, sizeof(GR64_TCW64Bits), X86::GR64_TCW64RegClassID, 1, true },
  { GR64_TC_with_sub_8bit, GR64_TC_with_sub_8bitBits, 1571, 9, sizeof(GR64_TC_with_sub_8bitBits), X86::GR64_TC_with_sub_8bitRegClassID, 1, true },
  { GR64_NOSP_and_GR64_TC, GR64_NOSP_and_GR64_TCBits, 486, 8, sizeof(GR64_NOSP_and_GR64_TCBits), X86::GR64_NOSP_and_GR64_TCRegClassID, 1, true },
  { GR64_TCW64_with_sub_8bit, GR64_TCW64_with_sub_8bitBits, 1531, 8, sizeof(GR64_TCW64_with_sub_8bitBits), X86::GR64_TCW64_with_sub_8bitRegClassID, 1, true },
  { GR64_TC_and_GR64_TCW64, GR64_TC_and_GR64_TCW64Bits, 67, 8, sizeof(GR64_TC_and_GR64_TCW64Bits), X86::GR64_TC_and_GR64_TCW64RegClassID, 1, true },
  { GR64_with_sub_16bit_in_GR16_NOREX, GR64_with_sub_16bit_in_GR16_NOREXBits, 1296, 8, sizeof(GR64_with_sub_16bit_in_GR16_NOREXBits), X86::GR64_with_sub_16bit_in_GR16_NOREXRegClassID, 1, true },
  { VK64, VK64Bits, 41, 8, sizeof(VK64Bits), X86::VK64RegClassID, 1, true },
  { VR64, VR64Bits, 62, 8, sizeof(VR64Bits), X86::VR64RegClassID, 1, true },
  { GR64_NOREX_NOSP, GR64_NOREX_NOSPBits, 1098, 7, sizeof(GR64_NOREX_NOSPBits), X86::GR64_NOREX_NOSPRegClassID, 1, true },
  { GR64_NOREX_and_GR64_TC, GR64_NOREX_and_GR64_TCBits, 536, 7, sizeof(GR64_NOREX_and_GR64_TCBits), X86::GR64_NOREX_and_GR64_TCRegClassID, 1, true },
  { GR64_NOSP_and_GR64_TCW64, GR64_NOSP_and_GR64_TCW64Bits, 102, 7, sizeof(GR64_NOSP_and_GR64_TCW64Bits), X86::GR64_NOSP_and_GR64_TCW64RegClassID, 1, true },
  { GR64_TCW64_and_GR64_TC_with_sub_8bit, GR64_TCW64_and_GR64_TC_with_sub_8bitBits, 1556, 7, sizeof(GR64_TCW64_and_GR64_TC_with_sub_8bitBits), X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClassID, 1, true },
  { VK64WM, VK64WMBits, 897, 7, sizeof(VK64WMBits), X86::VK64WMRegClassID, 1, true },
  { GR64_TC_and_GR64_NOSP_and_GR64_TCW64, GR64_TC_and_GR64_NOSP_and_GR64_TCW64Bits, 90, 6, sizeof(GR64_TC_and_GR64_NOSP_and_GR64_TCW64Bits), X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClassID, 1, true },
  { GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX, GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXBits, 1284, 6, sizeof(GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXBits), X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClassID, 1, true },
  { GR64_NOREX_NOSP_and_GR64_TC, GR64_NOREX_NOSP_and_GR64_TCBits, 508, 5, sizeof(GR64_NOREX_NOSP_and_GR64_TCBits), X86::GR64_NOREX_NOSP_and_GR64_TCRegClassID, 1, true },
  { GR64_NOREX_and_GR64_TCW64, GR64_NOREX_and_GR64_TCW64Bits, 127, 5, sizeof(GR64_NOREX_and_GR64_TCW64Bits), X86::GR64_NOREX_and_GR64_TCW64RegClassID, 1, true },
  { GR64_ABCD, GR64_ABCDBits, 585, 4, sizeof(GR64_ABCDBits), X86::GR64_ABCDRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_TC, GR64_with_sub_32bit_in_GR32_TCBits, 455, 4, sizeof(GR64_with_sub_32bit_in_GR32_TCBits), X86::GR64_with_sub_32bit_in_GR32_TCRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC, GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCBits, 365, 3, sizeof(GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCBits), X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClassID, 1, true },
  { GR64_AD, GR64_ADBits, 567, 2, sizeof(GR64_ADBits), X86::GR64_ADRegClassID, 1, true },
  { GR64_and_LOW32_ADDR_ACCESS_RBP, GR64_and_LOW32_ADDR_ACCESS_RBPBits, 1031, 2, sizeof(GR64_and_LOW32_ADDR_ACCESS_RBPBits), X86::GR64_and_LOW32_ADDR_ACCESS_RBPRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_BPSP, GR64_with_sub_32bit_in_GR32_BPSPBits, 1114, 2, sizeof(GR64_with_sub_32bit_in_GR32_BPSPBits), X86::GR64_with_sub_32bit_in_GR32_BPSPRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_BSI, GR64_with_sub_32bit_in_GR32_BSIBits, 835, 2, sizeof(GR64_with_sub_32bit_in_GR32_BSIBits), X86::GR64_with_sub_32bit_in_GR32_BSIRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_CB, GR64_with_sub_32bit_in_GR32_CBBits, 217, 2, sizeof(GR64_with_sub_32bit_in_GR32_CBBits), X86::GR64_with_sub_32bit_in_GR32_CBRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_DC, GR64_with_sub_32bit_in_GR32_DCBits, 334, 2, sizeof(GR64_with_sub_32bit_in_GR32_DCBits), X86::GR64_with_sub_32bit_in_GR32_DCRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_DIBP, GR64_with_sub_32bit_in_GR32_DIBPBits, 998, 2, sizeof(GR64_with_sub_32bit_in_GR32_DIBPBits), X86::GR64_with_sub_32bit_in_GR32_DIBPRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_SIDI, GR64_with_sub_32bit_in_GR32_SIDIBits, 756, 2, sizeof(GR64_with_sub_32bit_in_GR32_SIDIBits), X86::GR64_with_sub_32bit_in_GR32_SIDIRegClassID, 1, true },
  { GR64_and_LOW32_ADDR_ACCESS, GR64_and_LOW32_ADDR_ACCESSBits, 1205, 1, sizeof(GR64_and_LOW32_ADDR_ACCESSBits), X86::GR64_and_LOW32_ADDR_ACCESSRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI, GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIBits, 789, 1, sizeof(GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIBits), X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC, GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCBits, 291, 1, sizeof(GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCBits), X86::GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP, GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPBits, 951, 1, sizeof(GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPBits), X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC, GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCBits, 410, 1, sizeof(GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCBits), X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI, GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIBits, 663, 1, sizeof(GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIBits), X86::GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC, GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCBits, 248, 1, sizeof(GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCBits), X86::GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClassID, 1, true },
  { GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI, GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIBits, 709, 1, sizeof(GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIBits), X86::GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClassID, 1, true },
  { RST, RSTBits, 1232, 8, sizeof(RSTBits), X86::RSTRegClassID, 1, false },
  { RFP80, RFP80Bits, 0, 7, sizeof(RFP80Bits), X86::RFP80RegClassID, 1, true },
  { RFP80_7, RFP80_7Bits, 190, 1, sizeof(RFP80_7Bits), X86::RFP80_7RegClassID, 1, false },
  { VR128X, VR128XBits, 1255, 32, sizeof(VR128XBits), X86::VR128XRegClassID, 1, true },
  { VR128, VR128Bits, 198, 16, sizeof(VR128Bits), X86::VR128RegClassID, 1, true },
  { BNDR, BNDRBits, 1159, 4, sizeof(BNDRBits), X86::BNDRRegClassID, 1, true },
  { VR256X, VR256XBits, 1248, 32, sizeof(VR256XBits), X86::VR256XRegClassID, 1, true },
  { VR256, VR256Bits, 184, 16, sizeof(VR256Bits), X86::VR256RegClassID, 1, true },
  { VR512, VR512Bits, 10, 32, sizeof(VR512Bits), X86::VR512RegClassID, 1, true },
  { VR512_0_15, VR512_0_15Bits, 157, 16, sizeof(VR512_0_15Bits), X86::VR512_0_15RegClassID, 1, true },
  { TILECFG, TILECFGBits, 644, 1, sizeof(TILECFGBits), X86::TILECFGRegClassID, -1, true },
  { TILE, TILEBits, 605, 8, sizeof(TILEBits), X86::TILERegClassID, -1, true },
};

// X86 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0Dwarf2L[] = {
  { 0U, X86::RAX },
  { 1U, X86::RDX },
  { 2U, X86::RCX },
  { 3U, X86::RBX },
  { 4U, X86::RSI },
  { 5U, X86::RDI },
  { 6U, X86::RBP },
  { 7U, X86::RSP },
  { 8U, X86::R8 },
  { 9U, X86::R9 },
  { 10U, X86::R10 },
  { 11U, X86::R11 },
  { 12U, X86::R12 },
  { 13U, X86::R13 },
  { 14U, X86::R14 },
  { 15U, X86::R15 },
  { 16U, X86::RIP },
  { 17U, X86::XMM0 },
  { 18U, X86::XMM1 },
  { 19U, X86::XMM2 },
  { 20U, X86::XMM3 },
  { 21U, X86::XMM4 },
  { 22U, X86::XMM5 },
  { 23U, X86::XMM6 },
  { 24U, X86::XMM7 },
  { 25U, X86::XMM8 },
  { 26U, X86::XMM9 },
  { 27U, X86::XMM10 },
  { 28U, X86::XMM11 },
  { 29U, X86::XMM12 },
  { 30U, X86::XMM13 },
  { 31U, X86::XMM14 },
  { 32U, X86::XMM15 },
  { 33U, X86::ST0 },
  { 34U, X86::ST1 },
  { 35U, X86::ST2 },
  { 36U, X86::ST3 },
  { 37U, X86::ST4 },
  { 38U, X86::ST5 },
  { 39U, X86::ST6 },
  { 40U, X86::ST7 },
  { 41U, X86::MM0 },
  { 42U, X86::MM1 },
  { 43U, X86::MM2 },
  { 44U, X86::MM3 },
  { 45U, X86::MM4 },
  { 46U, X86::MM5 },
  { 47U, X86::MM6 },
  { 48U, X86::MM7 },
  { 67U, X86::XMM16 },
  { 68U, X86::XMM17 },
  { 69U, X86::XMM18 },
  { 70U, X86::XMM19 },
  { 71U, X86::XMM20 },
  { 72U, X86::XMM21 },
  { 73U, X86::XMM22 },
  { 74U, X86::XMM23 },
  { 75U, X86::XMM24 },
  { 76U, X86::XMM25 },
  { 77U, X86::XMM26 },
  { 78U, X86::XMM27 },
  { 79U, X86::XMM28 },
  { 80U, X86::XMM29 },
  { 81U, X86::XMM30 },
  { 82U, X86::XMM31 },
  { 118U, X86::K0 },
  { 119U, X86::K1 },
  { 120U, X86::K2 },
  { 121U, X86::K3 },
  { 122U, X86::K4 },
  { 123U, X86::K5 },
  { 124U, X86::K6 },
  { 125U, X86::K7 },
};
extern const unsigned X86DwarfFlavour0Dwarf2LSize = array_lengthof(X86DwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::EBP },
  { 5U, X86::ESP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 12U, X86::ST0 },
  { 13U, X86::ST1 },
  { 14U, X86::ST2 },
  { 15U, X86::ST3 },
  { 16U, X86::ST4 },
  { 17U, X86::ST5 },
  { 18U, X86::ST6 },
  { 19U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
  { 93U, X86::K0 },
  { 94U, X86::K1 },
  { 95U, X86::K2 },
  { 96U, X86::K3 },
  { 97U, X86::K4 },
  { 98U, X86::K5 },
  { 99U, X86::K6 },
  { 100U, X86::K7 },
};
extern const unsigned X86DwarfFlavour1Dwarf2LSize = array_lengthof(X86DwarfFlavour1Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::ESP },
  { 5U, X86::EBP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 11U, X86::ST0 },
  { 12U, X86::ST1 },
  { 13U, X86::ST2 },
  { 14U, X86::ST3 },
  { 15U, X86::ST4 },
  { 16U, X86::ST5 },
  { 17U, X86::ST6 },
  { 18U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
  { 93U, X86::K0 },
  { 94U, X86::K1 },
  { 95U, X86::K2 },
  { 96U, X86::K3 },
  { 97U, X86::K4 },
  { 98U, X86::K5 },
  { 99U, X86::K6 },
  { 100U, X86::K7 },
};
extern const unsigned X86DwarfFlavour2Dwarf2LSize = array_lengthof(X86DwarfFlavour2Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0Dwarf2L[] = {
  { 0U, X86::RAX },
  { 1U, X86::RDX },
  { 2U, X86::RCX },
  { 3U, X86::RBX },
  { 4U, X86::RSI },
  { 5U, X86::RDI },
  { 6U, X86::RBP },
  { 7U, X86::RSP },
  { 8U, X86::R8 },
  { 9U, X86::R9 },
  { 10U, X86::R10 },
  { 11U, X86::R11 },
  { 12U, X86::R12 },
  { 13U, X86::R13 },
  { 14U, X86::R14 },
  { 15U, X86::R15 },
  { 16U, X86::RIP },
  { 17U, X86::XMM0 },
  { 18U, X86::XMM1 },
  { 19U, X86::XMM2 },
  { 20U, X86::XMM3 },
  { 21U, X86::XMM4 },
  { 22U, X86::XMM5 },
  { 23U, X86::XMM6 },
  { 24U, X86::XMM7 },
  { 25U, X86::XMM8 },
  { 26U, X86::XMM9 },
  { 27U, X86::XMM10 },
  { 28U, X86::XMM11 },
  { 29U, X86::XMM12 },
  { 30U, X86::XMM13 },
  { 31U, X86::XMM14 },
  { 32U, X86::XMM15 },
  { 33U, X86::ST0 },
  { 34U, X86::ST1 },
  { 35U, X86::ST2 },
  { 36U, X86::ST3 },
  { 37U, X86::ST4 },
  { 38U, X86::ST5 },
  { 39U, X86::ST6 },
  { 40U, X86::ST7 },
  { 41U, X86::MM0 },
  { 42U, X86::MM1 },
  { 43U, X86::MM2 },
  { 44U, X86::MM3 },
  { 45U, X86::MM4 },
  { 46U, X86::MM5 },
  { 47U, X86::MM6 },
  { 48U, X86::MM7 },
  { 67U, X86::XMM16 },
  { 68U, X86::XMM17 },
  { 69U, X86::XMM18 },
  { 70U, X86::XMM19 },
  { 71U, X86::XMM20 },
  { 72U, X86::XMM21 },
  { 73U, X86::XMM22 },
  { 74U, X86::XMM23 },
  { 75U, X86::XMM24 },
  { 76U, X86::XMM25 },
  { 77U, X86::XMM26 },
  { 78U, X86::XMM27 },
  { 79U, X86::XMM28 },
  { 80U, X86::XMM29 },
  { 81U, X86::XMM30 },
  { 82U, X86::XMM31 },
  { 118U, X86::K0 },
  { 119U, X86::K1 },
  { 120U, X86::K2 },
  { 121U, X86::K3 },
  { 122U, X86::K4 },
  { 123U, X86::K5 },
  { 124U, X86::K6 },
  { 125U, X86::K7 },
};
extern const unsigned X86EHFlavour0Dwarf2LSize = array_lengthof(X86EHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::EBP },
  { 5U, X86::ESP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 12U, X86::ST0 },
  { 13U, X86::ST1 },
  { 14U, X86::ST2 },
  { 15U, X86::ST3 },
  { 16U, X86::ST4 },
  { 17U, X86::ST5 },
  { 18U, X86::ST6 },
  { 19U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
  { 93U, X86::K0 },
  { 94U, X86::K1 },
  { 95U, X86::K2 },
  { 96U, X86::K3 },
  { 97U, X86::K4 },
  { 98U, X86::K5 },
  { 99U, X86::K6 },
  { 100U, X86::K7 },
};
extern const unsigned X86EHFlavour1Dwarf2LSize = array_lengthof(X86EHFlavour1Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2Dwarf2L[] = {
  { 0U, X86::EAX },
  { 1U, X86::ECX },
  { 2U, X86::EDX },
  { 3U, X86::EBX },
  { 4U, X86::ESP },
  { 5U, X86::EBP },
  { 6U, X86::ESI },
  { 7U, X86::EDI },
  { 8U, X86::EIP },
  { 11U, X86::ST0 },
  { 12U, X86::ST1 },
  { 13U, X86::ST2 },
  { 14U, X86::ST3 },
  { 15U, X86::ST4 },
  { 16U, X86::ST5 },
  { 17U, X86::ST6 },
  { 18U, X86::ST7 },
  { 21U, X86::XMM0 },
  { 22U, X86::XMM1 },
  { 23U, X86::XMM2 },
  { 24U, X86::XMM3 },
  { 25U, X86::XMM4 },
  { 26U, X86::XMM5 },
  { 27U, X86::XMM6 },
  { 28U, X86::XMM7 },
  { 29U, X86::MM0 },
  { 30U, X86::MM1 },
  { 31U, X86::MM2 },
  { 32U, X86::MM3 },
  { 33U, X86::MM4 },
  { 34U, X86::MM5 },
  { 35U, X86::MM6 },
  { 36U, X86::MM7 },
  { 93U, X86::K0 },
  { 94U, X86::K1 },
  { 95U, X86::K2 },
  { 96U, X86::K3 },
  { 97U, X86::K4 },
  { 98U, X86::K5 },
  { 99U, X86::K6 },
  { 100U, X86::K7 },
};
extern const unsigned X86EHFlavour2Dwarf2LSize = array_lengthof(X86EHFlavour2Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0L2Dwarf[] = {
  { X86::EAX, -2U },
  { X86::EBP, -2U },
  { X86::EBX, -2U },
  { X86::ECX, -2U },
  { X86::EDI, -2U },
  { X86::EDX, -2U },
  { X86::EIP, -2U },
  { X86::ESI, -2U },
  { X86::ESP, -2U },
  { X86::RAX, 0U },
  { X86::RBP, 6U },
  { X86::RBX, 3U },
  { X86::RCX, 2U },
  { X86::RDI, 5U },
  { X86::RDX, 1U },
  { X86::RIP, 16U },
  { X86::RSI, 4U },
  { X86::RSP, 7U },
  { X86::K0, 118U },
  { X86::K1, 119U },
  { X86::K2, 120U },
  { X86::K3, 121U },
  { X86::K4, 122U },
  { X86::K5, 123U },
  { X86::K6, 124U },
  { X86::K7, 125U },
  { X86::MM0, 41U },
  { X86::MM1, 42U },
  { X86::MM2, 43U },
  { X86::MM3, 44U },
  { X86::MM4, 45U },
  { X86::MM5, 46U },
  { X86::MM6, 47U },
  { X86::MM7, 48U },
  { X86::R8, 8U },
  { X86::R9, 9U },
  { X86::R10, 10U },
  { X86::R11, 11U },
  { X86::R12, 12U },
  { X86::R13, 13U },
  { X86::R14, 14U },
  { X86::R15, 15U },
  { X86::ST0, 33U },
  { X86::ST1, 34U },
  { X86::ST2, 35U },
  { X86::ST3, 36U },
  { X86::ST4, 37U },
  { X86::ST5, 38U },
  { X86::ST6, 39U },
  { X86::ST7, 40U },
  { X86::XMM0, 17U },
  { X86::XMM1, 18U },
  { X86::XMM2, 19U },
  { X86::XMM3, 20U },
  { X86::XMM4, 21U },
  { X86::XMM5, 22U },
  { X86::XMM6, 23U },
  { X86::XMM7, 24U },
  { X86::XMM8, 25U },
  { X86::XMM9, 26U },
  { X86::XMM10, 27U },
  { X86::XMM11, 28U },
  { X86::XMM12, 29U },
  { X86::XMM13, 30U },
  { X86::XMM14, 31U },
  { X86::XMM15, 32U },
  { X86::XMM16, 67U },
  { X86::XMM17, 68U },
  { X86::XMM18, 69U },
  { X86::XMM19, 70U },
  { X86::XMM20, 71U },
  { X86::XMM21, 72U },
  { X86::XMM22, 73U },
  { X86::XMM23, 74U },
  { X86::XMM24, 75U },
  { X86::XMM25, 76U },
  { X86::XMM26, 77U },
  { X86::XMM27, 78U },
  { X86::XMM28, 79U },
  { X86::XMM29, 80U },
  { X86::XMM30, 81U },
  { X86::XMM31, 82U },
  { X86::YMM0, 17U },
  { X86::YMM1, 18U },
  { X86::YMM2, 19U },
  { X86::YMM3, 20U },
  { X86::YMM4, 21U },
  { X86::YMM5, 22U },
  { X86::YMM6, 23U },
  { X86::YMM7, 24U },
  { X86::YMM8, 25U },
  { X86::YMM9, 26U },
  { X86::YMM10, 27U },
  { X86::YMM11, 28U },
  { X86::YMM12, 29U },
  { X86::YMM13, 30U },
  { X86::YMM14, 31U },
  { X86::YMM15, 32U },
  { X86::YMM16, 67U },
  { X86::YMM17, 68U },
  { X86::YMM18, 69U },
  { X86::YMM19, 70U },
  { X86::YMM20, 71U },
  { X86::YMM21, 72U },
  { X86::YMM22, 73U },
  { X86::YMM23, 74U },
  { X86::YMM24, 75U },
  { X86::YMM25, 76U },
  { X86::YMM26, 77U },
  { X86::YMM27, 78U },
  { X86::YMM28, 79U },
  { X86::YMM29, 80U },
  { X86::YMM30, 81U },
  { X86::YMM31, 82U },
  { X86::ZMM0, 17U },
  { X86::ZMM1, 18U },
  { X86::ZMM2, 19U },
  { X86::ZMM3, 20U },
  { X86::ZMM4, 21U },
  { X86::ZMM5, 22U },
  { X86::ZMM6, 23U },
  { X86::ZMM7, 24U },
  { X86::ZMM8, 25U },
  { X86::ZMM9, 26U },
  { X86::ZMM10, 27U },
  { X86::ZMM11, 28U },
  { X86::ZMM12, 29U },
  { X86::ZMM13, 30U },
  { X86::ZMM14, 31U },
  { X86::ZMM15, 32U },
  { X86::ZMM16, 67U },
  { X86::ZMM17, 68U },
  { X86::ZMM18, 69U },
  { X86::ZMM19, 70U },
  { X86::ZMM20, 71U },
  { X86::ZMM21, 72U },
  { X86::ZMM22, 73U },
  { X86::ZMM23, 74U },
  { X86::ZMM24, 75U },
  { X86::ZMM25, 76U },
  { X86::ZMM26, 77U },
  { X86::ZMM27, 78U },
  { X86::ZMM28, 79U },
  { X86::ZMM29, 80U },
  { X86::ZMM30, 81U },
  { X86::ZMM31, 82U },
};
extern const unsigned X86DwarfFlavour0L2DwarfSize = array_lengthof(X86DwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 4U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 5U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, 93U },
  { X86::K1, 94U },
  { X86::K2, 95U },
  { X86::K3, 96U },
  { X86::K4, 97U },
  { X86::K5, 98U },
  { X86::K6, 99U },
  { X86::K7, 100U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 12U },
  { X86::ST1, 13U },
  { X86::ST2, 14U },
  { X86::ST3, 15U },
  { X86::ST4, 16U },
  { X86::ST5, 17U },
  { X86::ST6, 18U },
  { X86::ST7, 19U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86DwarfFlavour1L2DwarfSize = array_lengthof(X86DwarfFlavour1L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 5U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 4U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, 93U },
  { X86::K1, 94U },
  { X86::K2, 95U },
  { X86::K3, 96U },
  { X86::K4, 97U },
  { X86::K5, 98U },
  { X86::K6, 99U },
  { X86::K7, 100U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 11U },
  { X86::ST1, 12U },
  { X86::ST2, 13U },
  { X86::ST3, 14U },
  { X86::ST4, 15U },
  { X86::ST5, 16U },
  { X86::ST6, 17U },
  { X86::ST7, 18U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86DwarfFlavour2L2DwarfSize = array_lengthof(X86DwarfFlavour2L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0L2Dwarf[] = {
  { X86::EAX, -2U },
  { X86::EBP, -2U },
  { X86::EBX, -2U },
  { X86::ECX, -2U },
  { X86::EDI, -2U },
  { X86::EDX, -2U },
  { X86::EIP, -2U },
  { X86::ESI, -2U },
  { X86::ESP, -2U },
  { X86::RAX, 0U },
  { X86::RBP, 6U },
  { X86::RBX, 3U },
  { X86::RCX, 2U },
  { X86::RDI, 5U },
  { X86::RDX, 1U },
  { X86::RIP, 16U },
  { X86::RSI, 4U },
  { X86::RSP, 7U },
  { X86::K0, 118U },
  { X86::K1, 119U },
  { X86::K2, 120U },
  { X86::K3, 121U },
  { X86::K4, 122U },
  { X86::K5, 123U },
  { X86::K6, 124U },
  { X86::K7, 125U },
  { X86::MM0, 41U },
  { X86::MM1, 42U },
  { X86::MM2, 43U },
  { X86::MM3, 44U },
  { X86::MM4, 45U },
  { X86::MM5, 46U },
  { X86::MM6, 47U },
  { X86::MM7, 48U },
  { X86::R8, 8U },
  { X86::R9, 9U },
  { X86::R10, 10U },
  { X86::R11, 11U },
  { X86::R12, 12U },
  { X86::R13, 13U },
  { X86::R14, 14U },
  { X86::R15, 15U },
  { X86::ST0, 33U },
  { X86::ST1, 34U },
  { X86::ST2, 35U },
  { X86::ST3, 36U },
  { X86::ST4, 37U },
  { X86::ST5, 38U },
  { X86::ST6, 39U },
  { X86::ST7, 40U },
  { X86::XMM0, 17U },
  { X86::XMM1, 18U },
  { X86::XMM2, 19U },
  { X86::XMM3, 20U },
  { X86::XMM4, 21U },
  { X86::XMM5, 22U },
  { X86::XMM6, 23U },
  { X86::XMM7, 24U },
  { X86::XMM8, 25U },
  { X86::XMM9, 26U },
  { X86::XMM10, 27U },
  { X86::XMM11, 28U },
  { X86::XMM12, 29U },
  { X86::XMM13, 30U },
  { X86::XMM14, 31U },
  { X86::XMM15, 32U },
  { X86::XMM16, 67U },
  { X86::XMM17, 68U },
  { X86::XMM18, 69U },
  { X86::XMM19, 70U },
  { X86::XMM20, 71U },
  { X86::XMM21, 72U },
  { X86::XMM22, 73U },
  { X86::XMM23, 74U },
  { X86::XMM24, 75U },
  { X86::XMM25, 76U },
  { X86::XMM26, 77U },
  { X86::XMM27, 78U },
  { X86::XMM28, 79U },
  { X86::XMM29, 80U },
  { X86::XMM30, 81U },
  { X86::XMM31, 82U },
  { X86::YMM0, 17U },
  { X86::YMM1, 18U },
  { X86::YMM2, 19U },
  { X86::YMM3, 20U },
  { X86::YMM4, 21U },
  { X86::YMM5, 22U },
  { X86::YMM6, 23U },
  { X86::YMM7, 24U },
  { X86::YMM8, 25U },
  { X86::YMM9, 26U },
  { X86::YMM10, 27U },
  { X86::YMM11, 28U },
  { X86::YMM12, 29U },
  { X86::YMM13, 30U },
  { X86::YMM14, 31U },
  { X86::YMM15, 32U },
  { X86::YMM16, 67U },
  { X86::YMM17, 68U },
  { X86::YMM18, 69U },
  { X86::YMM19, 70U },
  { X86::YMM20, 71U },
  { X86::YMM21, 72U },
  { X86::YMM22, 73U },
  { X86::YMM23, 74U },
  { X86::YMM24, 75U },
  { X86::YMM25, 76U },
  { X86::YMM26, 77U },
  { X86::YMM27, 78U },
  { X86::YMM28, 79U },
  { X86::YMM29, 80U },
  { X86::YMM30, 81U },
  { X86::YMM31, 82U },
  { X86::ZMM0, 17U },
  { X86::ZMM1, 18U },
  { X86::ZMM2, 19U },
  { X86::ZMM3, 20U },
  { X86::ZMM4, 21U },
  { X86::ZMM5, 22U },
  { X86::ZMM6, 23U },
  { X86::ZMM7, 24U },
  { X86::ZMM8, 25U },
  { X86::ZMM9, 26U },
  { X86::ZMM10, 27U },
  { X86::ZMM11, 28U },
  { X86::ZMM12, 29U },
  { X86::ZMM13, 30U },
  { X86::ZMM14, 31U },
  { X86::ZMM15, 32U },
  { X86::ZMM16, 67U },
  { X86::ZMM17, 68U },
  { X86::ZMM18, 69U },
  { X86::ZMM19, 70U },
  { X86::ZMM20, 71U },
  { X86::ZMM21, 72U },
  { X86::ZMM22, 73U },
  { X86::ZMM23, 74U },
  { X86::ZMM24, 75U },
  { X86::ZMM25, 76U },
  { X86::ZMM26, 77U },
  { X86::ZMM27, 78U },
  { X86::ZMM28, 79U },
  { X86::ZMM29, 80U },
  { X86::ZMM30, 81U },
  { X86::ZMM31, 82U },
};
extern const unsigned X86EHFlavour0L2DwarfSize = array_lengthof(X86EHFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 4U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 5U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, 93U },
  { X86::K1, 94U },
  { X86::K2, 95U },
  { X86::K3, 96U },
  { X86::K4, 97U },
  { X86::K5, 98U },
  { X86::K6, 99U },
  { X86::K7, 100U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 12U },
  { X86::ST1, 13U },
  { X86::ST2, 14U },
  { X86::ST3, 15U },
  { X86::ST4, 16U },
  { X86::ST5, 17U },
  { X86::ST6, 18U },
  { X86::ST7, 19U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86EHFlavour1L2DwarfSize = array_lengthof(X86EHFlavour1L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2L2Dwarf[] = {
  { X86::EAX, 0U },
  { X86::EBP, 5U },
  { X86::EBX, 3U },
  { X86::ECX, 1U },
  { X86::EDI, 7U },
  { X86::EDX, 2U },
  { X86::EIP, 8U },
  { X86::ESI, 6U },
  { X86::ESP, 4U },
  { X86::RAX, -2U },
  { X86::RBP, -2U },
  { X86::RBX, -2U },
  { X86::RCX, -2U },
  { X86::RDI, -2U },
  { X86::RDX, -2U },
  { X86::RIP, -2U },
  { X86::RSI, -2U },
  { X86::RSP, -2U },
  { X86::K0, 93U },
  { X86::K1, 94U },
  { X86::K2, 95U },
  { X86::K3, 96U },
  { X86::K4, 97U },
  { X86::K5, 98U },
  { X86::K6, 99U },
  { X86::K7, 100U },
  { X86::MM0, 29U },
  { X86::MM1, 30U },
  { X86::MM2, 31U },
  { X86::MM3, 32U },
  { X86::MM4, 33U },
  { X86::MM5, 34U },
  { X86::MM6, 35U },
  { X86::MM7, 36U },
  { X86::R8, -2U },
  { X86::R9, -2U },
  { X86::R10, -2U },
  { X86::R11, -2U },
  { X86::R12, -2U },
  { X86::R13, -2U },
  { X86::R14, -2U },
  { X86::R15, -2U },
  { X86::ST0, 11U },
  { X86::ST1, 12U },
  { X86::ST2, 13U },
  { X86::ST3, 14U },
  { X86::ST4, 15U },
  { X86::ST5, 16U },
  { X86::ST6, 17U },
  { X86::ST7, 18U },
  { X86::XMM0, 21U },
  { X86::XMM1, 22U },
  { X86::XMM2, 23U },
  { X86::XMM3, 24U },
  { X86::XMM4, 25U },
  { X86::XMM5, 26U },
  { X86::XMM6, 27U },
  { X86::XMM7, 28U },
  { X86::XMM8, -2U },
  { X86::XMM9, -2U },
  { X86::XMM10, -2U },
  { X86::XMM11, -2U },
  { X86::XMM12, -2U },
  { X86::XMM13, -2U },
  { X86::XMM14, -2U },
  { X86::XMM15, -2U },
  { X86::XMM16, -2U },
  { X86::XMM17, -2U },
  { X86::XMM18, -2U },
  { X86::XMM19, -2U },
  { X86::XMM20, -2U },
  { X86::XMM21, -2U },
  { X86::XMM22, -2U },
  { X86::XMM23, -2U },
  { X86::XMM24, -2U },
  { X86::XMM25, -2U },
  { X86::XMM26, -2U },
  { X86::XMM27, -2U },
  { X86::XMM28, -2U },
  { X86::XMM29, -2U },
  { X86::XMM30, -2U },
  { X86::XMM31, -2U },
  { X86::YMM0, 21U },
  { X86::YMM1, 22U },
  { X86::YMM2, 23U },
  { X86::YMM3, 24U },
  { X86::YMM4, 25U },
  { X86::YMM5, 26U },
  { X86::YMM6, 27U },
  { X86::YMM7, 28U },
  { X86::YMM8, -2U },
  { X86::YMM9, -2U },
  { X86::YMM10, -2U },
  { X86::YMM11, -2U },
  { X86::YMM12, -2U },
  { X86::YMM13, -2U },
  { X86::YMM14, -2U },
  { X86::YMM15, -2U },
  { X86::YMM16, -2U },
  { X86::YMM17, -2U },
  { X86::YMM18, -2U },
  { X86::YMM19, -2U },
  { X86::YMM20, -2U },
  { X86::YMM21, -2U },
  { X86::YMM22, -2U },
  { X86::YMM23, -2U },
  { X86::YMM24, -2U },
  { X86::YMM25, -2U },
  { X86::YMM26, -2U },
  { X86::YMM27, -2U },
  { X86::YMM28, -2U },
  { X86::YMM29, -2U },
  { X86::YMM30, -2U },
  { X86::YMM31, -2U },
  { X86::ZMM0, 21U },
  { X86::ZMM1, 22U },
  { X86::ZMM2, 23U },
  { X86::ZMM3, 24U },
  { X86::ZMM4, 25U },
  { X86::ZMM5, 26U },
  { X86::ZMM6, 27U },
  { X86::ZMM7, 28U },
  { X86::ZMM8, -2U },
  { X86::ZMM9, -2U },
  { X86::ZMM10, -2U },
  { X86::ZMM11, -2U },
  { X86::ZMM12, -2U },
  { X86::ZMM13, -2U },
  { X86::ZMM14, -2U },
  { X86::ZMM15, -2U },
  { X86::ZMM16, -2U },
  { X86::ZMM17, -2U },
  { X86::ZMM18, -2U },
  { X86::ZMM19, -2U },
  { X86::ZMM20, -2U },
  { X86::ZMM21, -2U },
  { X86::ZMM22, -2U },
  { X86::ZMM23, -2U },
  { X86::ZMM24, -2U },
  { X86::ZMM25, -2U },
  { X86::ZMM26, -2U },
  { X86::ZMM27, -2U },
  { X86::ZMM28, -2U },
  { X86::ZMM29, -2U },
  { X86::ZMM30, -2U },
  { X86::ZMM31, -2U },
};
extern const unsigned X86EHFlavour2L2DwarfSize = array_lengthof(X86EHFlavour2L2Dwarf);

extern const uint16_t X86RegEncodingTable[] = {
  0,
  4,
  0,
  0,
  7,
  3,
  5,
  65535,
  5,
  3,
  5,
  1,
  1,
  1,
  0,
  6,
  7,
  65535,
  7,
  2,
  3,
  2,
  0,
  5,
  3,
  1,
  7,
  2,
  0,
  0,
  4,
  0,
  6,
  4,
  0,
  0,
  4,
  5,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  0,
  0,
  0,
  5,
  3,
  1,
  7,
  2,
  0,
  4,
  6,
  4,
  6,
  65535,
  6,
  4,
  65535,
  4,
  2,
  0,
  0,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  65535,
  0,
  2,
  4,
  6,
};
static inline void InitX86MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(X86RegDesc, 292, RA, PC, X86MCRegisterClasses, 120, X86RegUnitRoots, 173, X86RegDiffLists, X86LaneMaskLists, X86RegStrings, X86RegClassStrings, X86SubRegIdxLists, 11,
X86SubRegIdxRanges, X86RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour0Dwarf2L, X86DwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour1Dwarf2L, X86DwarfFlavour1Dwarf2LSize, false);
    break;
  case 2:
    RI->mapDwarfRegsToLLVMRegs(X86DwarfFlavour2Dwarf2L, X86DwarfFlavour2Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour0Dwarf2L, X86EHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour1Dwarf2L, X86EHFlavour1Dwarf2LSize, true);
    break;
  case 2:
    RI->mapDwarfRegsToLLVMRegs(X86EHFlavour2Dwarf2L, X86EHFlavour2Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour0L2Dwarf, X86DwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour1L2Dwarf, X86DwarfFlavour1L2DwarfSize, false);
    break;
  case 2:
    RI->mapLLVMRegsToDwarfRegs(X86DwarfFlavour2L2Dwarf, X86DwarfFlavour2L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour0L2Dwarf, X86EHFlavour0L2DwarfSize, true);
    break;
  case 1:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour1L2Dwarf, X86EHFlavour1L2DwarfSize, true);
    break;
  case 2:
    RI->mapLLVMRegsToDwarfRegs(X86EHFlavour2L2Dwarf, X86EHFlavour2L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class X86FrameLowering;

struct X86GenRegisterInfo : public TargetRegisterInfo {
  explicit X86GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass *, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const X86FrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace X86 { // Register classes
  extern const TargetRegisterClass GR8RegClass;
  extern const TargetRegisterClass GRH8RegClass;
  extern const TargetRegisterClass GR8_NOREXRegClass;
  extern const TargetRegisterClass GR8_ABCD_HRegClass;
  extern const TargetRegisterClass GR8_ABCD_LRegClass;
  extern const TargetRegisterClass GRH16RegClass;
  extern const TargetRegisterClass GR16RegClass;
  extern const TargetRegisterClass GR16_NOREXRegClass;
  extern const TargetRegisterClass VK1RegClass;
  extern const TargetRegisterClass VK16RegClass;
  extern const TargetRegisterClass VK2RegClass;
  extern const TargetRegisterClass VK4RegClass;
  extern const TargetRegisterClass VK8RegClass;
  extern const TargetRegisterClass VK16WMRegClass;
  extern const TargetRegisterClass VK1WMRegClass;
  extern const TargetRegisterClass VK2WMRegClass;
  extern const TargetRegisterClass VK4WMRegClass;
  extern const TargetRegisterClass VK8WMRegClass;
  extern const TargetRegisterClass SEGMENT_REGRegClass;
  extern const TargetRegisterClass GR16_ABCDRegClass;
  extern const TargetRegisterClass FPCCRRegClass;
  extern const TargetRegisterClass VK16PAIRRegClass;
  extern const TargetRegisterClass VK1PAIRRegClass;
  extern const TargetRegisterClass VK2PAIRRegClass;
  extern const TargetRegisterClass VK4PAIRRegClass;
  extern const TargetRegisterClass VK8PAIRRegClass;
  extern const TargetRegisterClass VK16PAIR_with_sub_mask_0_in_VK16WMRegClass;
  extern const TargetRegisterClass FR32XRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBPRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESSRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass;
  extern const TargetRegisterClass DEBUG_REGRegClass;
  extern const TargetRegisterClass FR32RegClass;
  extern const TargetRegisterClass GR32RegClass;
  extern const TargetRegisterClass GR32_NOSPRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass;
  extern const TargetRegisterClass GR32_NOREXRegClass;
  extern const TargetRegisterClass VK32RegClass;
  extern const TargetRegisterClass GR32_NOREX_NOSPRegClass;
  extern const TargetRegisterClass RFP32RegClass;
  extern const TargetRegisterClass VK32WMRegClass;
  extern const TargetRegisterClass GR32_ABCDRegClass;
  extern const TargetRegisterClass GR32_TCRegClass;
  extern const TargetRegisterClass GR32_ABCD_and_GR32_TCRegClass;
  extern const TargetRegisterClass GR32_ADRegClass;
  extern const TargetRegisterClass GR32_BPSPRegClass;
  extern const TargetRegisterClass GR32_BSIRegClass;
  extern const TargetRegisterClass GR32_CBRegClass;
  extern const TargetRegisterClass GR32_DCRegClass;
  extern const TargetRegisterClass GR32_DIBPRegClass;
  extern const TargetRegisterClass GR32_SIDIRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass;
  extern const TargetRegisterClass CCRRegClass;
  extern const TargetRegisterClass DFCCRRegClass;
  extern const TargetRegisterClass GR32_ABCD_and_GR32_BSIRegClass;
  extern const TargetRegisterClass GR32_AD_and_GR32_DCRegClass;
  extern const TargetRegisterClass GR32_BPSP_and_GR32_DIBPRegClass;
  extern const TargetRegisterClass GR32_BPSP_and_GR32_TCRegClass;
  extern const TargetRegisterClass GR32_BSI_and_GR32_SIDIRegClass;
  extern const TargetRegisterClass GR32_CB_and_GR32_DCRegClass;
  extern const TargetRegisterClass GR32_DIBP_and_GR32_SIDIRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClass;
  extern const TargetRegisterClass LOW32_ADDR_ACCESS_with_sub_32bitRegClass;
  extern const TargetRegisterClass RFP64RegClass;
  extern const TargetRegisterClass FR64XRegClass;
  extern const TargetRegisterClass GR64RegClass;
  extern const TargetRegisterClass CONTROL_REGRegClass;
  extern const TargetRegisterClass FR64RegClass;
  extern const TargetRegisterClass GR64_with_sub_8bitRegClass;
  extern const TargetRegisterClass GR64_NOSPRegClass;
  extern const TargetRegisterClass GR64_TCRegClass;
  extern const TargetRegisterClass GR64_NOREXRegClass;
  extern const TargetRegisterClass GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_TC_with_sub_8bitRegClass;
  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_TCW64_with_sub_8bitRegClass;
  extern const TargetRegisterClass GR64_TC_and_GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_with_sub_16bit_in_GR16_NOREXRegClass;
  extern const TargetRegisterClass VK64RegClass;
  extern const TargetRegisterClass VR64RegClass;
  extern const TargetRegisterClass GR64_NOREX_NOSPRegClass;
  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass;
  extern const TargetRegisterClass VK64WMRegClass;
  extern const TargetRegisterClass GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass;
  extern const TargetRegisterClass GR64_NOREX_NOSP_and_GR64_TCRegClass;
  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCW64RegClass;
  extern const TargetRegisterClass GR64_ABCDRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_TCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass;
  extern const TargetRegisterClass GR64_ADRegClass;
  extern const TargetRegisterClass GR64_and_LOW32_ADDR_ACCESS_RBPRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSPRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BSIRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_CBRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DIBPRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_SIDIRegClass;
  extern const TargetRegisterClass GR64_and_LOW32_ADDR_ACCESSRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClass;
  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClass;
  extern const TargetRegisterClass RSTRegClass;
  extern const TargetRegisterClass RFP80RegClass;
  extern const TargetRegisterClass RFP80_7RegClass;
  extern const TargetRegisterClass VR128XRegClass;
  extern const TargetRegisterClass VR128RegClass;
  extern const TargetRegisterClass BNDRRegClass;
  extern const TargetRegisterClass VR256XRegClass;
  extern const TargetRegisterClass VR256RegClass;
  extern const TargetRegisterClass VR512RegClass;
  extern const TargetRegisterClass VR512_0_15RegClass;
  extern const TargetRegisterClass TILECFGRegClass;
  extern const TargetRegisterClass TILERegClass;
} // end namespace X86

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass X86MCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i8, MVT::Other,
  /* 2 */ MVT::i16, MVT::Other,
  /* 4 */ MVT::i32, MVT::Other,
  /* 6 */ MVT::i64, MVT::Other,
  /* 8 */ MVT::f80, MVT::f64, MVT::f32, MVT::Other,
  /* 12 */ MVT::f64, MVT::Other,
  /* 14 */ MVT::f80, MVT::Other,
  /* 16 */ MVT::v4f32, MVT::v2f64, MVT::v16i8, MVT::v8i16, MVT::v4i32, MVT::v2i64, MVT::f128, MVT::Other,
  /* 24 */ MVT::v1i1, MVT::Other,
  /* 26 */ MVT::v2i1, MVT::Other,
  /* 28 */ MVT::v4i1, MVT::Other,
  /* 30 */ MVT::v8i1, MVT::Other,
  /* 32 */ MVT::v16i1, MVT::Other,
  /* 34 */ MVT::v32i1, MVT::Other,
  /* 36 */ MVT::v64i1, MVT::Other,
  /* 38 */ MVT::v2i64, MVT::Other,
  /* 40 */ MVT::v8f32, MVT::v4f64, MVT::v32i8, MVT::v16i16, MVT::v8i32, MVT::v4i64, MVT::Other,
  /* 47 */ MVT::v16f32, MVT::v8f64, MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::v8i64, MVT::Other,
  /* 54 */ MVT::x86mmx, MVT::Other,
  /* 56 */ MVT::Untyped, MVT::Other,
  /* 58 */ MVT::x86amx, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "sub_8bit", "sub_8bit_hi", "sub_8bit_hi_phony", "sub_16bit", "sub_16bit_hi", "sub_32bit", "sub_mask_0", "sub_mask_1", "sub_xmm", "sub_ymm", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x0000000000000001), // sub_8bit
  LaneBitmask(0x0000000000000002), // sub_8bit_hi
  LaneBitmask(0x0000000000000004), // sub_8bit_hi_phony
  LaneBitmask(0x0000000000000007), // sub_16bit
  LaneBitmask(0x0000000000000008), // sub_16bit_hi
  LaneBitmask(0x000000000000000F), // sub_32bit
  LaneBitmask(0x0000000000000010), // sub_mask_0
  LaneBitmask(0x0000000000000020), // sub_mask_1
  LaneBitmask(0x0000000000000040), // sub_xmm
  LaneBitmask(0x0000000000000040), // sub_ymm
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 8, 8, 8, VTLists+0 },    // GR8
  { 8, 8, 8, VTLists+0 },    // GRH8
  { 8, 8, 8, VTLists+0 },    // GR8_NOREX
  { 8, 8, 8, VTLists+0 },    // GR8_ABCD_H
  { 8, 8, 8, VTLists+0 },    // GR8_ABCD_L
  { 16, 16, 16, VTLists+2 },    // GRH16
  { 16, 16, 16, VTLists+2 },    // GR16
  { 16, 16, 16, VTLists+2 },    // GR16_NOREX
  { 16, 16, 16, VTLists+24 },    // VK1
  { 16, 16, 16, VTLists+32 },    // VK16
  { 16, 16, 16, VTLists+26 },    // VK2
  { 16, 16, 16, VTLists+28 },    // VK4
  { 16, 16, 16, VTLists+30 },    // VK8
  { 16, 16, 16, VTLists+32 },    // VK16WM
  { 16, 16, 16, VTLists+24 },    // VK1WM
  { 16, 16, 16, VTLists+26 },    // VK2WM
  { 16, 16, 16, VTLists+28 },    // VK4WM
  { 16, 16, 16, VTLists+30 },    // VK8WM
  { 16, 16, 16, VTLists+2 },    // SEGMENT_REG
  { 16, 16, 16, VTLists+2 },    // GR16_ABCD
  { 16, 16, 16, VTLists+2 },    // FPCCR
  { 32, 32, 16, VTLists+56 },    // VK16PAIR
  { 32, 32, 16, VTLists+56 },    // VK1PAIR
  { 32, 32, 16, VTLists+56 },    // VK2PAIR
  { 32, 32, 16, VTLists+56 },    // VK4PAIR
  { 32, 32, 16, VTLists+56 },    // VK8PAIR
  { 32, 32, 16, VTLists+56 },    // VK16PAIR_with_sub_mask_0_in_VK16WM
  { 32, 32, 32, VTLists+10 },    // FR32X
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_RBP
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit
  { 32, 32, 32, VTLists+4 },    // DEBUG_REG
  { 32, 32, 32, VTLists+10 },    // FR32
  { 32, 32, 32, VTLists+4 },    // GR32
  { 32, 32, 32, VTLists+4 },    // GR32_NOSP
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
  { 32, 32, 32, VTLists+4 },    // GR32_NOREX
  { 32, 32, 32, VTLists+34 },    // VK32
  { 32, 32, 32, VTLists+4 },    // GR32_NOREX_NOSP
  { 32, 32, 32, VTLists+10 },    // RFP32
  { 32, 32, 32, VTLists+34 },    // VK32WM
  { 32, 32, 32, VTLists+4 },    // GR32_ABCD
  { 32, 32, 32, VTLists+4 },    // GR32_TC
  { 32, 32, 32, VTLists+4 },    // GR32_ABCD_and_GR32_TC
  { 32, 32, 32, VTLists+4 },    // GR32_AD
  { 32, 32, 32, VTLists+4 },    // GR32_BPSP
  { 32, 32, 32, VTLists+4 },    // GR32_BSI
  { 32, 32, 32, VTLists+4 },    // GR32_CB
  { 32, 32, 32, VTLists+4 },    // GR32_DC
  { 32, 32, 32, VTLists+4 },    // GR32_DIBP
  { 32, 32, 32, VTLists+4 },    // GR32_SIDI
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_32bit
  { 32, 32, 32, VTLists+4 },    // CCR
  { 32, 32, 32, VTLists+4 },    // DFCCR
  { 32, 32, 32, VTLists+4 },    // GR32_ABCD_and_GR32_BSI
  { 32, 32, 32, VTLists+4 },    // GR32_AD_and_GR32_DC
  { 32, 32, 32, VTLists+4 },    // GR32_BPSP_and_GR32_DIBP
  { 32, 32, 32, VTLists+4 },    // GR32_BPSP_and_GR32_TC
  { 32, 32, 32, VTLists+4 },    // GR32_BSI_and_GR32_SIDI
  { 32, 32, 32, VTLists+4 },    // GR32_CB_and_GR32_DC
  { 32, 32, 32, VTLists+4 },    // GR32_DIBP_and_GR32_SIDI
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
  { 32, 32, 32, VTLists+4 },    // LOW32_ADDR_ACCESS_with_sub_32bit
  { 64, 64, 32, VTLists+12 },    // RFP64
  { 64, 64, 64, VTLists+12 },    // FR64X
  { 64, 64, 64, VTLists+6 },    // GR64
  { 64, 64, 64, VTLists+6 },    // CONTROL_REG
  { 64, 64, 64, VTLists+12 },    // FR64
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_8bit
  { 64, 64, 64, VTLists+6 },    // GR64_NOSP
  { 64, 64, 64, VTLists+6 },    // GR64_TC
  { 64, 64, 64, VTLists+6 },    // GR64_NOREX
  { 64, 64, 64, VTLists+6 },    // GR64_TCW64
  { 64, 64, 64, VTLists+6 },    // GR64_TC_with_sub_8bit
  { 64, 64, 64, VTLists+6 },    // GR64_NOSP_and_GR64_TC
  { 64, 64, 64, VTLists+6 },    // GR64_TCW64_with_sub_8bit
  { 64, 64, 64, VTLists+6 },    // GR64_TC_and_GR64_TCW64
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, VTLists+36 },    // VK64
  { 64, 64, 64, VTLists+54 },    // VR64
  { 64, 64, 64, VTLists+6 },    // GR64_NOREX_NOSP
  { 64, 64, 64, VTLists+6 },    // GR64_NOREX_and_GR64_TC
  { 64, 64, 64, VTLists+6 },    // GR64_NOSP_and_GR64_TCW64
  { 64, 64, 64, VTLists+6 },    // GR64_TCW64_and_GR64_TC_with_sub_8bit
  { 64, 64, 64, VTLists+36 },    // VK64WM
  { 64, 64, 64, VTLists+6 },    // GR64_TC_and_GR64_NOSP_and_GR64_TCW64
  { 64, 64, 64, VTLists+6 },    // GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
  { 64, 64, 64, VTLists+6 },    // GR64_NOREX_NOSP_and_GR64_TC
  { 64, 64, 64, VTLists+6 },    // GR64_NOREX_and_GR64_TCW64
  { 64, 64, 64, VTLists+6 },    // GR64_ABCD
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_TC
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
  { 64, 64, 64, VTLists+6 },    // GR64_AD
  { 64, 64, 64, VTLists+6 },    // GR64_and_LOW32_ADDR_ACCESS_RBP
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_BPSP
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_BSI
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_CB
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_DC
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_DIBP
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_SIDI
  { 64, 64, 64, VTLists+6 },    // GR64_and_LOW32_ADDR_ACCESS
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
  { 64, 64, 64, VTLists+6 },    // GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
  { 80, 80, 32, VTLists+8 },    // RST
  { 80, 80, 32, VTLists+14 },    // RFP80
  { 80, 80, 32, VTLists+14 },    // RFP80_7
  { 128, 128, 128, VTLists+16 },    // VR128X
  { 128, 128, 128, VTLists+16 },    // VR128
  { 128, 128, 128, VTLists+38 },    // BNDR
  { 256, 256, 256, VTLists+40 },    // VR256X
  { 256, 256, 256, VTLists+40 },    // VR256
  { 512, 512, 512, VTLists+47 },    // VR512
  { 512, 512, 512, VTLists+47 },    // VR512_0_15
  { 512, 512, 512, VTLists+56 },    // TILECFG
  { 8192, 8192, 8192, VTLists+58 },    // TILE
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t GR8SubClassMask[] = {
  0x0000001d, 0x00000000, 0x00000000, 0x00000000, 
  0x400800c0, 0x3fc7fe5e, 0xdeed2e30, 0x00000fef, // sub_8bit
  0x00080000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_8bit_hi
};

static const uint32_t GRH8SubClassMask[] = {
  0x00000002, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t GR8_NOREXSubClassMask[] = {
  0x0000001c, 0x00000000, 0x00000000, 0x00000000, 
  0x00080000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_8bit
  0x00080000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_8bit_hi
};

static const uint32_t GR8_ABCD_HSubClassMask[] = {
  0x00000008, 0x00000000, 0x00000000, 0x00000000, 
  0x00080000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_8bit_hi
};

static const uint32_t GR8_ABCD_LSubClassMask[] = {
  0x00000010, 0x00000000, 0x00000000, 0x00000000, 
  0x00080000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_8bit
};

static const uint32_t GRH16SubClassMask[] = {
  0x00000020, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t GR16SubClassMask[] = {
  0x000800c0, 0x00000000, 0x00000000, 0x00000000, 
  0x40000000, 0x3fc7fe5e, 0xdeed2e30, 0x00000fef, // sub_16bit
};

static const uint32_t GR16_NOREXSubClassMask[] = {
  0x00080080, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x3fc7fe58, 0xdec12000, 0x00000fef, // sub_16bit
};

static const uint32_t VK1SubClassMask[] = {
  0x0003ff00, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK16SubClassMask[] = {
  0x0003ff00, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK2SubClassMask[] = {
  0x0003ff00, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK4SubClassMask[] = {
  0x0003ff00, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK8SubClassMask[] = {
  0x0003ff00, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK16WMSubClassMask[] = {
  0x0003e000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK1WMSubClassMask[] = {
  0x0003e000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK2WMSubClassMask[] = {
  0x0003e000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK4WMSubClassMask[] = {
  0x0003e000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VK8WMSubClassMask[] = {
  0x0003e000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t SEGMENT_REGSubClassMask[] = {
  0x00040000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t GR16_ABCDSubClassMask[] = {
  0x00080000, 0x00000000, 0x00000000, 0x00000000, 
  0x00000000, 0x08c19a00, 0x1a000000, 0x00000463, // sub_16bit
};

static const uint32_t FPCCRSubClassMask[] = {
  0x00100000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK16PAIRSubClassMask[] = {
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK1PAIRSubClassMask[] = {
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK2PAIRSubClassMask[] = {
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK4PAIRSubClassMask[] = {
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK8PAIRSubClassMask[] = {
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t VK16PAIR_with_sub_mask_0_in_VK16WMSubClassMask[] = {
  0x04000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t FR32XSubClassMask[] = {
  0x08000000, 0x00000001, 0x00000009, 0x00018000, 
  0x00000000, 0x00000000, 0x00000000, 0x003c0000, // sub_xmm
};

static const uint32_t LOW32_ADDR_ACCESS_RBPSubClassMask[] = {
  0x70000000, 0x7fcffe5e, 0x20000000, 0x00000090, 
  0x00000000, 0x20000000, 0xdeed2e30, 0x00000fef, // sub_32bit
};

static const uint32_t LOW32_ADDR_ACCESSSubClassMask[] = {
  0x20000000, 0x5fc7fe56, 0x00000000, 0x00000010, 
  0x00000000, 0x20000000, 0xdeed2e30, 0x00000fef, // sub_32bit
};

static const uint32_t LOW32_ADDR_ACCESS_RBP_with_sub_8bitSubClassMask[] = {
  0x40000000, 0x3fc7fe5e, 0x00000000, 0x00000080, 
  0x00000000, 0x20000000, 0xdeed2e30, 0x00000fef, // sub_32bit
};

static const uint32_t DEBUG_REGSubClassMask[] = {
  0x80000000, 0x00000000, 0x00000000, 0x00000000, 
};

static const uint32_t FR32SubClassMask[] = {
  0x00000000, 0x00000001, 0x00000008, 0x00010000, 
  0x00000000, 0x00000000, 0x00000000, 0x00280000, // sub_xmm
};

static const uint32_t GR32SubClassMask[] = {
  0x00000000, 0x1fc7fe56, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0xdeed2e30, 0x00000fef, // sub_32bit
};

static const uint32_t GR32_NOSPSubClassMask[] = {
  0x00000000, 0x1dc7da44, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x9aa50420, 0x00000eef, // sub_32bit
};

static const uint32_t LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXSubClassMask[] = {
  0x00000000, 0x3fc7fe58, 0x00000000, 0x00000080, 
  0x00000000, 0x20000000, 0xdec12000, 0x00000fef, // sub_32bit
};

static const uint32_t GR32_NOREXSubClassMask[] = {
  0x00000000, 0x1fc7fe50, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0xdec12000, 0x00000fef, // sub_32bit
};

static const uint32_t VK32SubClassMask[] = {
  0x00000000, 0x00000120, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t GR32_NOREX_NOSPSubClassMask[] = {
  0x00000000, 0x1dc7da40, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x9a810000, 0x00000eef, // sub_32bit
};

static const uint32_t RFP32SubClassMask[] = {
  0x00000000, 0x80000080, 0x00000000, 0x00002000, 
};

static const uint32_t VK32WMSubClassMask[] = {
  0x00000000, 0x00000100, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t GR32_ABCDSubClassMask[] = {
  0x00000000, 0x08c19a00, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x1a000000, 0x00000463, // sub_32bit
};

static const uint32_t GR32_TCSubClassMask[] = {
  0x00000000, 0x0a811c00, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x1c000000, 0x00000542, // sub_32bit
};

static const uint32_t GR32_ABCD_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x08811800, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x18000000, 0x00000442, // sub_32bit
};

static const uint32_t GR32_ADSubClassMask[] = {
  0x00000000, 0x00801000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x10000000, 0x00000040, // sub_32bit
};

static const uint32_t GR32_BPSPSubClassMask[] = {
  0x00000000, 0x03002000, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x40000000, 0x00000180, // sub_32bit
};

static const uint32_t GR32_BSISubClassMask[] = {
  0x00000000, 0x04404000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x80000000, 0x00000220, // sub_32bit
};

static const uint32_t GR32_CBSubClassMask[] = {
  0x00000000, 0x08408000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000421, // sub_32bit
};

static const uint32_t GR32_DCSubClassMask[] = {
  0x00000000, 0x08810000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000442, // sub_32bit
};

static const uint32_t GR32_DIBPSubClassMask[] = {
  0x00000000, 0x11020000, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x00000000, 0x00000884, // sub_32bit
};

static const uint32_t GR32_SIDISubClassMask[] = {
  0x00000000, 0x14040000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000a08, // sub_32bit
};

static const uint32_t LOW32_ADDR_ACCESS_RBP_with_sub_32bitSubClassMask[] = {
  0x00000000, 0x60080000, 0x20000000, 0x00000090, 
};

static const uint32_t CCRSubClassMask[] = {
  0x00000000, 0x00100000, 0x00000000, 0x00000000, 
};

static const uint32_t DFCCRSubClassMask[] = {
  0x00000000, 0x00200000, 0x00000000, 0x00000000, 
};

static const uint32_t GR32_ABCD_and_GR32_BSISubClassMask[] = {
  0x00000000, 0x00400000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000020, // sub_32bit
};

static const uint32_t GR32_AD_and_GR32_DCSubClassMask[] = {
  0x00000000, 0x00800000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000040, // sub_32bit
};

static const uint32_t GR32_BPSP_and_GR32_DIBPSubClassMask[] = {
  0x00000000, 0x01000000, 0x00000000, 0x00000000, 
  0x00000000, 0x20000000, 0x00000000, 0x00000080, // sub_32bit
};

static const uint32_t GR32_BPSP_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x02000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000100, // sub_32bit
};

static const uint32_t GR32_BSI_and_GR32_SIDISubClassMask[] = {
  0x00000000, 0x04000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000200, // sub_32bit
};

static const uint32_t GR32_CB_and_GR32_DCSubClassMask[] = {
  0x00000000, 0x08000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000400, // sub_32bit
};

static const uint32_t GR32_DIBP_and_GR32_SIDISubClassMask[] = {
  0x00000000, 0x10000000, 0x00000000, 0x00000000, 
  0x00000000, 0x00000000, 0x00000000, 0x00000800, // sub_32bit
};

static const uint32_t LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitSubClassMask[] = {
  0x00000000, 0x20000000, 0x00000000, 0x00000080, 
};

static const uint32_t LOW32_ADDR_ACCESS_with_sub_32bitSubClassMask[] = {
  0x00000000, 0x40000000, 0x00000000, 0x00000010, 
};

static const uint32_t RFP64SubClassMask[] = {
  0x00000000, 0x80000000, 0x00000000, 0x00002000, 
};

static const uint32_t FR64XSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000009, 0x00018000, 
  0x00000000, 0x00000000, 0x00000000, 0x003c0000, // sub_xmm
};

static const uint32_t GR64SubClassMask[] = {
  0x00000000, 0x00000000, 0xffef3ff2, 0x00000fff, 
};

static const uint32_t CONTROL_REGSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000004, 0x00000000, 
};

static const uint32_t FR64SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000008, 0x00010000, 
  0x00000000, 0x00000000, 0x00000000, 0x00280000, // sub_xmm
};

static const uint32_t GR64_with_sub_8bitSubClassMask[] = {
  0x00000000, 0x00000000, 0xdeed2e30, 0x00000fef, 
};

static const uint32_t GR64_NOSPSubClassMask[] = {
  0x00000000, 0x00000000, 0x9aa50420, 0x00000eef, 
};

static const uint32_t GR64_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x1dea1640, 0x00000f5a, 
};

static const uint32_t GR64_NOREXSubClassMask[] = {
  0x00000000, 0x00000000, 0xffc32080, 0x00000fff, 
};

static const uint32_t GR64_TCW64SubClassMask[] = {
  0x00000000, 0x00000000, 0x1d2c1900, 0x00000552, 
};

static const uint32_t GR64_TC_with_sub_8bitSubClassMask[] = {
  0x00000000, 0x00000000, 0x1ce80600, 0x00000f4a, 
};

static const uint32_t GR64_NOSP_and_GR64_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x18a00400, 0x00000e4a, 
};

static const uint32_t GR64_TCW64_with_sub_8bitSubClassMask[] = {
  0x00000000, 0x00000000, 0x1c2c0800, 0x00000542, 
};

static const uint32_t GR64_TC_and_GR64_TCW64SubClassMask[] = {
  0x00000000, 0x00000000, 0x1d281000, 0x00000552, 
};

static const uint32_t GR64_with_sub_16bit_in_GR16_NOREXSubClassMask[] = {
  0x00000000, 0x00000000, 0xdec12000, 0x00000fef, 
};

static const uint32_t VK64SubClassMask[] = {
  0x00000000, 0x00000000, 0x00104000, 0x00000000, 
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t VR64SubClassMask[] = {
  0x00000000, 0x00000000, 0x00008000, 0x00000000, 
};

static const uint32_t GR64_NOREX_NOSPSubClassMask[] = {
  0x00000000, 0x00000000, 0x9a810000, 0x00000eef, 
};

static const uint32_t GR64_NOREX_and_GR64_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x1dc20000, 0x00000f5a, 
};

static const uint32_t GR64_NOSP_and_GR64_TCW64SubClassMask[] = {
  0x00000000, 0x00000000, 0x18240000, 0x00000442, 
};

static const uint32_t GR64_TCW64_and_GR64_TC_with_sub_8bitSubClassMask[] = {
  0x00000000, 0x00000000, 0x1c280000, 0x00000542, 
};

static const uint32_t VK64WMSubClassMask[] = {
  0x00000000, 0x00000000, 0x00100000, 0x00000000, 
  0x04000000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_0
  0x07e00000, 0x00000000, 0x00000000, 0x00000000, // sub_mask_1
};

static const uint32_t GR64_TC_and_GR64_NOSP_and_GR64_TCW64SubClassMask[] = {
  0x00000000, 0x00000000, 0x18200000, 0x00000442, 
};

static const uint32_t GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXSubClassMask[] = {
  0x00000000, 0x00000000, 0x1cc00000, 0x00000f4a, 
};

static const uint32_t GR64_NOREX_NOSP_and_GR64_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x18800000, 0x00000e4a, 
};

static const uint32_t GR64_NOREX_and_GR64_TCW64SubClassMask[] = {
  0x00000000, 0x00000000, 0x1d000000, 0x00000552, 
};

static const uint32_t GR64_ABCDSubClassMask[] = {
  0x00000000, 0x00000000, 0x1a000000, 0x00000463, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x1c000000, 0x00000542, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x18000000, 0x00000442, 
};

static const uint32_t GR64_ADSubClassMask[] = {
  0x00000000, 0x00000000, 0x10000000, 0x00000040, 
};

static const uint32_t GR64_and_LOW32_ADDR_ACCESS_RBPSubClassMask[] = {
  0x00000000, 0x00000000, 0x20000000, 0x00000090, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_BPSPSubClassMask[] = {
  0x00000000, 0x00000000, 0x40000000, 0x00000180, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_BSISubClassMask[] = {
  0x00000000, 0x00000000, 0x80000000, 0x00000220, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_CBSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000421, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_DCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000442, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_DIBPSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000884, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_SIDISubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000a08, 
};

static const uint32_t GR64_and_LOW32_ADDR_ACCESSSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000010, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSISubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000020, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000040, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000080, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000100, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDISubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000200, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000400, 
};

static const uint32_t GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDISubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000800, 
};

static const uint32_t RSTSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00001000, 
};

static const uint32_t RFP80SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00002000, 
};

static const uint32_t RFP80_7SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00004000, 
};

static const uint32_t VR128XSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00018000, 
  0x00000000, 0x00000000, 0x00000000, 0x003c0000, // sub_xmm
};

static const uint32_t VR128SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00010000, 
  0x00000000, 0x00000000, 0x00000000, 0x00280000, // sub_xmm
};

static const uint32_t BNDRSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00020000, 
};

static const uint32_t VR256XSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x000c0000, 
  0x00000000, 0x00000000, 0x00000000, 0x00300000, // sub_ymm
};

static const uint32_t VR256SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00080000, 
  0x00000000, 0x00000000, 0x00000000, 0x00200000, // sub_ymm
};

static const uint32_t VR512SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00300000, 
};

static const uint32_t VR512_0_15SubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00200000, 
};

static const uint32_t TILECFGSubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00400000, 
};

static const uint32_t TILESubClassMask[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00800000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 0,
  /* 2 */ 1, 2, 0,
  /* 5 */ 4, 0,
  /* 7 */ 6, 0,
  /* 9 */ 7, 8, 0,
  /* 12 */ 9, 0,
  /* 14 */ 10, 0,
};

static const TargetRegisterClass *const GR8_NOREXSuperclasses[] = {
  &X86::GR8RegClass,
  nullptr
};

static const TargetRegisterClass *const GR8_ABCD_HSuperclasses[] = {
  &X86::GR8RegClass,
  &X86::GR8_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR8_ABCD_LSuperclasses[] = {
  &X86::GR8RegClass,
  &X86::GR8_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR16_NOREXSuperclasses[] = {
  &X86::GR16RegClass,
  nullptr
};

static const TargetRegisterClass *const VK1Superclasses[] = {
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK16Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK2Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK4Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const VK8Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  nullptr
};

static const TargetRegisterClass *const VK16WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK1WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK2WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK4WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK8WMRegClass,
  nullptr
};

static const TargetRegisterClass *const VK8WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  nullptr
};

static const TargetRegisterClass *const GR16_ABCDSuperclasses[] = {
  &X86::GR16RegClass,
  &X86::GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK16PAIRSuperclasses[] = {
  &X86::VK1PAIRRegClass,
  &X86::VK2PAIRRegClass,
  &X86::VK4PAIRRegClass,
  &X86::VK8PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const VK1PAIRSuperclasses[] = {
  &X86::VK16PAIRRegClass,
  &X86::VK2PAIRRegClass,
  &X86::VK4PAIRRegClass,
  &X86::VK8PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const VK2PAIRSuperclasses[] = {
  &X86::VK16PAIRRegClass,
  &X86::VK1PAIRRegClass,
  &X86::VK4PAIRRegClass,
  &X86::VK8PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const VK4PAIRSuperclasses[] = {
  &X86::VK16PAIRRegClass,
  &X86::VK1PAIRRegClass,
  &X86::VK2PAIRRegClass,
  &X86::VK8PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const VK8PAIRSuperclasses[] = {
  &X86::VK16PAIRRegClass,
  &X86::VK1PAIRRegClass,
  &X86::VK2PAIRRegClass,
  &X86::VK4PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const VK16PAIR_with_sub_mask_0_in_VK16WMSuperclasses[] = {
  &X86::VK16PAIRRegClass,
  &X86::VK1PAIRRegClass,
  &X86::VK2PAIRRegClass,
  &X86::VK4PAIRRegClass,
  &X86::VK8PAIRRegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESSSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESS_RBP_with_sub_8bitSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  nullptr
};

static const TargetRegisterClass *const FR32Superclasses[] = {
  &X86::FR32XRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32Superclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOSPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOREXSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK32Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_NOREX_NOSPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK32WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  &X86::VK32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ABCDSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_TCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ABCD_and_GR32_TCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ADSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_ABCD_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_BPSPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_BSISuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_CBSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_DCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_ABCD_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_DIBPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_SIDISuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESS_RBP_with_sub_32bitSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_ABCD_and_GR32_BSISuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_BSIRegClass,
  &X86::GR32_CBRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_AD_and_GR32_DCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_ABCD_and_GR32_TCRegClass,
  &X86::GR32_ADRegClass,
  &X86::GR32_DCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_BPSP_and_GR32_DIBPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_BPSPRegClass,
  &X86::GR32_DIBPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_BPSP_and_GR32_TCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_BPSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_BSI_and_GR32_SIDISuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_BSIRegClass,
  &X86::GR32_SIDIRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_CB_and_GR32_DCSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_ABCDRegClass,
  &X86::GR32_TCRegClass,
  &X86::GR32_ABCD_and_GR32_TCRegClass,
  &X86::GR32_CBRegClass,
  &X86::GR32_DCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR32_DIBP_and_GR32_SIDISuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::GR32RegClass,
  &X86::GR32_NOSPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR32_NOREXRegClass,
  &X86::GR32_NOREX_NOSPRegClass,
  &X86::GR32_DIBPRegClass,
  &X86::GR32_SIDIRegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
  nullptr
};

static const TargetRegisterClass *const LOW32_ADDR_ACCESS_with_sub_32bitSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
  nullptr
};

static const TargetRegisterClass *const RFP64Superclasses[] = {
  &X86::RFP32RegClass,
  nullptr
};

static const TargetRegisterClass *const FR64XSuperclasses[] = {
  &X86::FR32XRegClass,
  nullptr
};

static const TargetRegisterClass *const FR64Superclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR32RegClass,
  &X86::FR64XRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_8bitSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_with_sub_8bitSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOSP_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCW64_with_sub_8bitSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCW64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_and_GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_16bit_in_GR16_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const VK64Superclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK32RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_NOSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOSP_and_GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TCW64_and_GR64_TC_with_sub_8bitSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  nullptr
};

static const TargetRegisterClass *const VK64WMSuperclasses[] = {
  &X86::VK1RegClass,
  &X86::VK16RegClass,
  &X86::VK2RegClass,
  &X86::VK4RegClass,
  &X86::VK8RegClass,
  &X86::VK16WMRegClass,
  &X86::VK1WMRegClass,
  &X86::VK2WMRegClass,
  &X86::VK4WMRegClass,
  &X86::VK8WMRegClass,
  &X86::VK32RegClass,
  &X86::VK32WMRegClass,
  &X86::VK64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_and_GR64_NOSP_and_GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_NOSP_and_GR64_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_NOREX_and_GR64_TCW64Superclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_ABCDSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_ADSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_and_LOW32_ADDR_ACCESS_RBPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
  &X86::GR64RegClass,
  &X86::GR64_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_BPSPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_BSISuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_CBSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_ABCDRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_DCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_DIBPSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_SIDISuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_and_LOW32_ADDR_ACCESSSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESSRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
  &X86::LOW32_ADDR_ACCESS_with_sub_32bitRegClass,
  &X86::GR64RegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_and_LOW32_ADDR_ACCESS_RBPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSISuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_BSIRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_CBRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass,
  &X86::GR64_ADRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_DCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPSuperclasses[] = {
  &X86::LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
  &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClass,
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_and_LOW32_ADDR_ACCESS_RBPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_BPSPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_DIBPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_BPSPRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDISuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_BSIRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_SIDIRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCSuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TCW64RegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_TCW64_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_TCW64RegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_NOREX_and_GR64_TCW64RegClass,
  &X86::GR64_ABCDRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_CBRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_DCRegClass,
  nullptr
};

static const TargetRegisterClass *const GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDISuperclasses[] = {
  &X86::GR64RegClass,
  &X86::GR64_with_sub_8bitRegClass,
  &X86::GR64_NOSPRegClass,
  &X86::GR64_TCRegClass,
  &X86::GR64_NOREXRegClass,
  &X86::GR64_TC_with_sub_8bitRegClass,
  &X86::GR64_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSPRegClass,
  &X86::GR64_NOREX_and_GR64_TCRegClass,
  &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
  &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_DIBPRegClass,
  &X86::GR64_with_sub_32bit_in_GR32_SIDIRegClass,
  nullptr
};

static const TargetRegisterClass *const RFP80Superclasses[] = {
  &X86::RFP32RegClass,
  &X86::RFP64RegClass,
  nullptr
};

static const TargetRegisterClass *const VR128XSuperclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR64XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR128Superclasses[] = {
  &X86::FR32XRegClass,
  &X86::FR32RegClass,
  &X86::FR64XRegClass,
  &X86::FR64RegClass,
  &X86::VR128XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR256Superclasses[] = {
  &X86::VR256XRegClass,
  nullptr
};

static const TargetRegisterClass *const VR512_0_15Superclasses[] = {
  &X86::VR512RegClass,
  nullptr
};


static inline unsigned GR8AltOrderSelect(const MachineFunction &MF) {
    return MF.getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8GetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL, X86::SIL, X86::DIL, X86::BPL, X86::SPL, X86::R8B, X86::R9B, X86::R10B, X86::R11B, X86::R14B, X86::R15B, X86::R12B, X86::R13B };
  const MCRegisterClass &MCR = X86MCRegisterClasses[X86::GR8RegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GR8AltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

static inline unsigned GR8_NOREXAltOrderSelect(const MachineFunction &MF) {
    return MF.getSubtarget<X86Subtarget>().is64Bit();
  }

static ArrayRef<MCPhysReg> GR8_NOREXGetRawAllocationOrder(const MachineFunction &MF) {
  static const MCPhysReg AltOrder1[] = { X86::AL, X86::CL, X86::DL, X86::BL };
  const MCRegisterClass &MCR = X86MCRegisterClasses[X86::GR8_NOREXRegClassID];
  const ArrayRef<MCPhysReg> Order[] = {
    makeArrayRef(MCR.begin(), MCR.getNumRegs()),
    makeArrayRef(AltOrder1)
  };
  const unsigned Select = GR8_NOREXAltOrderSelect(MF);
  assert(Select < 2);
  return Order[Select];
}

namespace X86 {   // Register class instances
  extern const TargetRegisterClass GR8RegClass = {
    &X86MCRegisterClasses[GR8RegClassID],
    GR8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    GR8GetRawAllocationOrder
  };

  extern const TargetRegisterClass GRH8RegClass = {
    &X86MCRegisterClasses[GRH8RegClassID],
    GRH8SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR8_NOREXRegClass = {
    &X86MCRegisterClasses[GR8_NOREXRegClassID],
    GR8_NOREXSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR8_NOREXSuperclasses,
    GR8_NOREXGetRawAllocationOrder
  };

  extern const TargetRegisterClass GR8_ABCD_HRegClass = {
    &X86MCRegisterClasses[GR8_ABCD_HRegClassID],
    GR8_ABCD_HSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR8_ABCD_HSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR8_ABCD_LRegClass = {
    &X86MCRegisterClasses[GR8_ABCD_LRegClassID],
    GR8_ABCD_LSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR8_ABCD_LSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GRH16RegClass = {
    &X86MCRegisterClasses[GRH16RegClassID],
    GRH16SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16RegClass = {
    &X86MCRegisterClasses[GR16RegClassID],
    GR16SubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16_NOREXRegClass = {
    &X86MCRegisterClasses[GR16_NOREXRegClassID],
    GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK1RegClass = {
    &X86MCRegisterClasses[VK1RegClassID],
    VK1SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK1Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK16RegClass = {
    &X86MCRegisterClasses[VK16RegClassID],
    VK16SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK16Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK2RegClass = {
    &X86MCRegisterClasses[VK2RegClassID],
    VK2SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK2Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK4RegClass = {
    &X86MCRegisterClasses[VK4RegClassID],
    VK4SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK4Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK8RegClass = {
    &X86MCRegisterClasses[VK8RegClassID],
    VK8SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VK16WMRegClass = {
    &X86MCRegisterClasses[VK16WMRegClassID],
    VK16WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK16WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK1WMRegClass = {
    &X86MCRegisterClasses[VK1WMRegClassID],
    VK1WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK1WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK2WMRegClass = {
    &X86MCRegisterClasses[VK2WMRegClassID],
    VK2WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK2WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK4WMRegClass = {
    &X86MCRegisterClasses[VK4WMRegClassID],
    VK4WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK4WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK8WMRegClass = {
    &X86MCRegisterClasses[VK8WMRegClassID],
    VK8WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK8WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass SEGMENT_REGRegClass = {
    &X86MCRegisterClasses[SEGMENT_REGRegClassID],
    SEGMENT_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR16_ABCDRegClass = {
    &X86MCRegisterClasses[GR16_ABCDRegClassID],
    GR16_ABCDSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x0000000000000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR16_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FPCCRRegClass = {
    &X86MCRegisterClasses[FPCCRRegClassID],
    FPCCRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VK16PAIRRegClass = {
    &X86MCRegisterClasses[VK16PAIRRegClassID],
    VK16PAIRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK16PAIRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK1PAIRRegClass = {
    &X86MCRegisterClasses[VK1PAIRRegClassID],
    VK1PAIRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK1PAIRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK2PAIRRegClass = {
    &X86MCRegisterClasses[VK2PAIRRegClassID],
    VK2PAIRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK2PAIRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK4PAIRRegClass = {
    &X86MCRegisterClasses[VK4PAIRRegClassID],
    VK4PAIRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK4PAIRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK8PAIRRegClass = {
    &X86MCRegisterClasses[VK8PAIRRegClassID],
    VK8PAIRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK8PAIRSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK16PAIR_with_sub_mask_0_in_VK16WMRegClass = {
    &X86MCRegisterClasses[VK16PAIR_with_sub_mask_0_in_VK16WMRegClassID],
    VK16PAIR_with_sub_mask_0_in_VK16WMSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000030),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    VK16PAIR_with_sub_mask_0_in_VK16WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass FR32XRegClass = {
    &X86MCRegisterClasses[FR32XRegClassID],
    FR32XSubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBPRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_RBPRegClassID],
    LOW32_ADDR_ACCESS_RBPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESSRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESSRegClassID],
    LOW32_ADDR_ACCESSSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClassID],
    LOW32_ADDR_ACCESS_RBP_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESS_RBP_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DEBUG_REGRegClass = {
    &X86MCRegisterClasses[DEBUG_REGRegClassID],
    DEBUG_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FR32RegClass = {
    &X86MCRegisterClasses[FR32RegClassID],
    FR32SubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FR32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32RegClass = {
    &X86MCRegisterClasses[GR32RegClassID],
    GR32SubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOSPRegClassID],
    GR32_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClassID],
    LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOREXRegClass = {
    &X86MCRegisterClasses[GR32_NOREXRegClassID],
    GR32_NOREXSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK32RegClass = {
    &X86MCRegisterClasses[VK32RegClassID],
    VK32SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK32Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR32_NOREX_NOSPRegClassID],
    GR32_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RFP32RegClass = {
    &X86MCRegisterClasses[RFP32RegClassID],
    RFP32SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VK32WMRegClass = {
    &X86MCRegisterClasses[VK32WMRegClassID],
    VK32WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK32WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ABCDRegClass = {
    &X86MCRegisterClasses[GR32_ABCDRegClassID],
    GR32_ABCDSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_TCRegClass = {
    &X86MCRegisterClasses[GR32_TCRegClassID],
    GR32_TCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ABCD_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR32_ABCD_and_GR32_TCRegClassID],
    GR32_ABCD_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_ABCD_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ADRegClass = {
    &X86MCRegisterClasses[GR32_ADRegClassID],
    GR32_ADSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_ADSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_BPSPRegClass = {
    &X86MCRegisterClasses[GR32_BPSPRegClassID],
    GR32_BPSPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_BPSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_BSIRegClass = {
    &X86MCRegisterClasses[GR32_BSIRegClassID],
    GR32_BSISubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_BSISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_CBRegClass = {
    &X86MCRegisterClasses[GR32_CBRegClassID],
    GR32_CBSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_CBSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_DCRegClass = {
    &X86MCRegisterClasses[GR32_DCRegClassID],
    GR32_DCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_DIBPRegClass = {
    &X86MCRegisterClasses[GR32_DIBPRegClassID],
    GR32_DIBPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_DIBPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR32_SIDIRegClassID],
    GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClassID],
    LOW32_ADDR_ACCESS_RBP_with_sub_32bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESS_RBP_with_sub_32bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CCRRegClass = {
    &X86MCRegisterClasses[CCRRegClassID],
    CCRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DFCCRRegClass = {
    &X86MCRegisterClasses[DFCCRRegClassID],
    DFCCRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_ABCD_and_GR32_BSIRegClass = {
    &X86MCRegisterClasses[GR32_ABCD_and_GR32_BSIRegClassID],
    GR32_ABCD_and_GR32_BSISubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_ABCD_and_GR32_BSISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_AD_and_GR32_DCRegClass = {
    &X86MCRegisterClasses[GR32_AD_and_GR32_DCRegClassID],
    GR32_AD_and_GR32_DCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_AD_and_GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_BPSP_and_GR32_DIBPRegClass = {
    &X86MCRegisterClasses[GR32_BPSP_and_GR32_DIBPRegClassID],
    GR32_BPSP_and_GR32_DIBPSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_BPSP_and_GR32_DIBPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_BPSP_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR32_BPSP_and_GR32_TCRegClassID],
    GR32_BPSP_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_BPSP_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_BSI_and_GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR32_BSI_and_GR32_SIDIRegClassID],
    GR32_BSI_and_GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_BSI_and_GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_CB_and_GR32_DCRegClass = {
    &X86MCRegisterClasses[GR32_CB_and_GR32_DCRegClassID],
    GR32_CB_and_GR32_DCSubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_CB_and_GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR32_DIBP_and_GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR32_DIBP_and_GR32_SIDIRegClassID],
    GR32_DIBP_and_GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 7,
    LaneBitmask(0x0000000000000007),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GR32_DIBP_and_GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClassID],
    LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass LOW32_ADDR_ACCESS_with_sub_32bitRegClass = {
    &X86MCRegisterClasses[LOW32_ADDR_ACCESS_with_sub_32bitRegClassID],
    LOW32_ADDR_ACCESS_with_sub_32bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    LOW32_ADDR_ACCESS_with_sub_32bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RFP64RegClass = {
    &X86MCRegisterClasses[RFP64RegClassID],
    RFP64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    RFP64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass FR64XRegClass = {
    &X86MCRegisterClasses[FR64XRegClassID],
    FR64XSubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FR64XSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64RegClass = {
    &X86MCRegisterClasses[GR64RegClassID],
    GR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CONTROL_REGRegClass = {
    &X86MCRegisterClasses[CONTROL_REGRegClassID],
    CONTROL_REGSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass FR64RegClass = {
    &X86MCRegisterClasses[FR64RegClassID],
    FR64SubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    FR64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_8bitRegClassID],
    GR64_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_NOSPRegClassID],
    GR64_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_TCRegClassID],
    GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_NOREXRegClassID],
    GR64_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_TCW64RegClassID],
    GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[GR64_TC_with_sub_8bitRegClassID],
    GR64_TC_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TC_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOSP_and_GR64_TCRegClassID],
    GR64_NOSP_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOSP_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCW64_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[GR64_TCW64_with_sub_8bitRegClassID],
    GR64_TCW64_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TCW64_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_and_GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_TC_and_GR64_TCW64RegClassID],
    GR64_TC_and_GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TC_and_GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_16bit_in_GR16_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_16bit_in_GR16_NOREXRegClassID],
    GR64_with_sub_16bit_in_GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_16bit_in_GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK64RegClass = {
    &X86MCRegisterClasses[VK64RegClassID],
    VK64SubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR64RegClass = {
    &X86MCRegisterClasses[VR64RegClassID],
    VR64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_NOSPRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_NOSPRegClassID],
    GR64_NOREX_NOSPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOREX_NOSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_and_GR64_TCRegClassID],
    GR64_NOREX_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOREX_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOSP_and_GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_NOSP_and_GR64_TCW64RegClassID],
    GR64_NOSP_and_GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOSP_and_GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass = {
    &X86MCRegisterClasses[GR64_TCW64_and_GR64_TC_with_sub_8bitRegClassID],
    GR64_TCW64_and_GR64_TC_with_sub_8bitSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TCW64_and_GR64_TC_with_sub_8bitSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VK64WMRegClass = {
    &X86MCRegisterClasses[VK64WMRegClassID],
    VK64WMSubClassMask,
    SuperRegIdxSeqs + 9,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VK64WMSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClassID],
    GR64_TC_and_GR64_NOSP_and_GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TC_and_GR64_NOSP_and_GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass = {
    &X86MCRegisterClasses[GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClassID],
    GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_NOSP_and_GR64_TCRegClass = {
    &X86MCRegisterClasses[GR64_NOREX_NOSP_and_GR64_TCRegClassID],
    GR64_NOREX_NOSP_and_GR64_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOREX_NOSP_and_GR64_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_NOREX_and_GR64_TCW64RegClass = {
    &X86MCRegisterClasses[GR64_NOREX_and_GR64_TCW64RegClassID],
    GR64_NOREX_and_GR64_TCW64SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_NOREX_and_GR64_TCW64Superclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_ABCDRegClass = {
    &X86MCRegisterClasses[GR64_ABCDRegClassID],
    GR64_ABCDSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_ABCDSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_TCRegClassID],
    GR64_with_sub_32bit_in_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClassID],
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_ADRegClass = {
    &X86MCRegisterClasses[GR64_ADRegClassID],
    GR64_ADSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_ADSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_and_LOW32_ADDR_ACCESS_RBPRegClass = {
    &X86MCRegisterClasses[GR64_and_LOW32_ADDR_ACCESS_RBPRegClassID],
    GR64_and_LOW32_ADDR_ACCESS_RBPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_and_LOW32_ADDR_ACCESS_RBPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSPRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_BPSPRegClassID],
    GR64_with_sub_32bit_in_GR32_BPSPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_BPSPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BSIRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_BSIRegClassID],
    GR64_with_sub_32bit_in_GR32_BSISubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_BSISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_CBRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_CBRegClassID],
    GR64_with_sub_32bit_in_GR32_CBSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_CBSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_DCRegClassID],
    GR64_with_sub_32bit_in_GR32_DCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DIBPRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_DIBPRegClassID],
    GR64_with_sub_32bit_in_GR32_DIBPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_DIBPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_SIDIRegClassID],
    GR64_with_sub_32bit_in_GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_and_LOW32_ADDR_ACCESSRegClass = {
    &X86MCRegisterClasses[GR64_and_LOW32_ADDR_ACCESSRegClassID],
    GR64_and_LOW32_ADDR_ACCESSSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_and_LOW32_ADDR_ACCESSSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClassID],
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSISubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClassID],
    GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClassID],
    GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClassID],
    GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClassID],
    GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClassID],
    GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClass = {
    &X86MCRegisterClasses[GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClassID],
    GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDISubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x000000000000000F),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDISuperclasses,
    nullptr
  };

  extern const TargetRegisterClass RSTRegClass = {
    &X86MCRegisterClasses[RSTRegClassID],
    RSTSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass RFP80RegClass = {
    &X86MCRegisterClasses[RFP80RegClassID],
    RFP80SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    RFP80Superclasses,
    nullptr
  };

  extern const TargetRegisterClass RFP80_7RegClass = {
    &X86MCRegisterClasses[RFP80_7RegClassID],
    RFP80_7SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR128XRegClass = {
    &X86MCRegisterClasses[VR128XRegClassID],
    VR128XSubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VR128XSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass VR128RegClass = {
    &X86MCRegisterClasses[VR128RegClassID],
    VR128SubClassMask,
    SuperRegIdxSeqs + 12,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VR128Superclasses,
    nullptr
  };

  extern const TargetRegisterClass BNDRRegClass = {
    &X86MCRegisterClasses[BNDRRegClassID],
    BNDRSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR256XRegClass = {
    &X86MCRegisterClasses[VR256XRegClassID],
    VR256XSubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x0000000000000040),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR256RegClass = {
    &X86MCRegisterClasses[VR256RegClassID],
    VR256SubClassMask,
    SuperRegIdxSeqs + 14,
    LaneBitmask(0x0000000000000040),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VR256Superclasses,
    nullptr
  };

  extern const TargetRegisterClass VR512RegClass = {
    &X86MCRegisterClasses[VR512RegClassID],
    VR512SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000040),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass VR512_0_15RegClass = {
    &X86MCRegisterClasses[VR512_0_15RegClassID],
    VR512_0_15SubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000040),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    VR512_0_15Superclasses,
    nullptr
  };

  extern const TargetRegisterClass TILECFGRegClass = {
    &X86MCRegisterClasses[TILECFGRegClassID],
    TILECFGSubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass TILERegClass = {
    &X86MCRegisterClasses[TILERegClassID],
    TILESubClassMask,
    SuperRegIdxSeqs + 1,
    LaneBitmask(0x0000000000000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace X86

namespace {
  const TargetRegisterClass *const RegisterClasses[] = {
    &X86::GR8RegClass,
    &X86::GRH8RegClass,
    &X86::GR8_NOREXRegClass,
    &X86::GR8_ABCD_HRegClass,
    &X86::GR8_ABCD_LRegClass,
    &X86::GRH16RegClass,
    &X86::GR16RegClass,
    &X86::GR16_NOREXRegClass,
    &X86::VK1RegClass,
    &X86::VK16RegClass,
    &X86::VK2RegClass,
    &X86::VK4RegClass,
    &X86::VK8RegClass,
    &X86::VK16WMRegClass,
    &X86::VK1WMRegClass,
    &X86::VK2WMRegClass,
    &X86::VK4WMRegClass,
    &X86::VK8WMRegClass,
    &X86::SEGMENT_REGRegClass,
    &X86::GR16_ABCDRegClass,
    &X86::FPCCRRegClass,
    &X86::VK16PAIRRegClass,
    &X86::VK1PAIRRegClass,
    &X86::VK2PAIRRegClass,
    &X86::VK4PAIRRegClass,
    &X86::VK8PAIRRegClass,
    &X86::VK16PAIR_with_sub_mask_0_in_VK16WMRegClass,
    &X86::FR32XRegClass,
    &X86::LOW32_ADDR_ACCESS_RBPRegClass,
    &X86::LOW32_ADDR_ACCESSRegClass,
    &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bitRegClass,
    &X86::DEBUG_REGRegClass,
    &X86::FR32RegClass,
    &X86::GR32RegClass,
    &X86::GR32_NOSPRegClass,
    &X86::LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREXRegClass,
    &X86::GR32_NOREXRegClass,
    &X86::VK32RegClass,
    &X86::GR32_NOREX_NOSPRegClass,
    &X86::RFP32RegClass,
    &X86::VK32WMRegClass,
    &X86::GR32_ABCDRegClass,
    &X86::GR32_TCRegClass,
    &X86::GR32_ABCD_and_GR32_TCRegClass,
    &X86::GR32_ADRegClass,
    &X86::GR32_BPSPRegClass,
    &X86::GR32_BSIRegClass,
    &X86::GR32_CBRegClass,
    &X86::GR32_DCRegClass,
    &X86::GR32_DIBPRegClass,
    &X86::GR32_SIDIRegClass,
    &X86::LOW32_ADDR_ACCESS_RBP_with_sub_32bitRegClass,
    &X86::CCRRegClass,
    &X86::DFCCRRegClass,
    &X86::GR32_ABCD_and_GR32_BSIRegClass,
    &X86::GR32_AD_and_GR32_DCRegClass,
    &X86::GR32_BPSP_and_GR32_DIBPRegClass,
    &X86::GR32_BPSP_and_GR32_TCRegClass,
    &X86::GR32_BSI_and_GR32_SIDIRegClass,
    &X86::GR32_CB_and_GR32_DCRegClass,
    &X86::GR32_DIBP_and_GR32_SIDIRegClass,
    &X86::LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bitRegClass,
    &X86::LOW32_ADDR_ACCESS_with_sub_32bitRegClass,
    &X86::RFP64RegClass,
    &X86::FR64XRegClass,
    &X86::GR64RegClass,
    &X86::CONTROL_REGRegClass,
    &X86::FR64RegClass,
    &X86::GR64_with_sub_8bitRegClass,
    &X86::GR64_NOSPRegClass,
    &X86::GR64_TCRegClass,
    &X86::GR64_NOREXRegClass,
    &X86::GR64_TCW64RegClass,
    &X86::GR64_TC_with_sub_8bitRegClass,
    &X86::GR64_NOSP_and_GR64_TCRegClass,
    &X86::GR64_TCW64_with_sub_8bitRegClass,
    &X86::GR64_TC_and_GR64_TCW64RegClass,
    &X86::GR64_with_sub_16bit_in_GR16_NOREXRegClass,
    &X86::VK64RegClass,
    &X86::VR64RegClass,
    &X86::GR64_NOREX_NOSPRegClass,
    &X86::GR64_NOREX_and_GR64_TCRegClass,
    &X86::GR64_NOSP_and_GR64_TCW64RegClass,
    &X86::GR64_TCW64_and_GR64_TC_with_sub_8bitRegClass,
    &X86::VK64WMRegClass,
    &X86::GR64_TC_and_GR64_NOSP_and_GR64_TCW64RegClass,
    &X86::GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREXRegClass,
    &X86::GR64_NOREX_NOSP_and_GR64_TCRegClass,
    &X86::GR64_NOREX_and_GR64_TCW64RegClass,
    &X86::GR64_ABCDRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_TCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TCRegClass,
    &X86::GR64_ADRegClass,
    &X86::GR64_and_LOW32_ADDR_ACCESS_RBPRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_BPSPRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_BSIRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_CBRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_DCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_DIBPRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_SIDIRegClass,
    &X86::GR64_and_LOW32_ADDR_ACCESSRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSIRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_AD_and_GR32_DCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBPRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDIRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_CB_and_GR32_DCRegClass,
    &X86::GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDIRegClass,
    &X86::RSTRegClass,
    &X86::RFP80RegClass,
    &X86::RFP80_7RegClass,
    &X86::VR128XRegClass,
    &X86::VR128RegClass,
    &X86::BNDRRegClass,
    &X86::VR256XRegClass,
    &X86::VR256RegClass,
    &X86::VR512RegClass,
    &X86::VR512_0_15RegClass,
    &X86::TILECFGRegClass,
    &X86::TILERegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc X86RegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 1, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, false },
  { 1, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 1, true },
  { 0, true },
  { 0, false },
  { 1, true },
  { 0, true },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 1, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
};
unsigned X86GenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][10] = {
    { X86::sub_8bit, X86::sub_8bit_hi, X86::sub_8bit_hi_phony, X86::sub_16bit, X86::sub_16bit_hi, 0, 0, 0, X86::sub_xmm, 0, },
  };

  --IdxA; assert(IdxA < 10);
  --IdxB; assert(IdxB < 10);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 },   // Sequence 8
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  5 }, { LaneBitmask::getNone(), 0 },   // Sequence 10
    { LaneBitmask(0xFFFFFFFFFFFFFFFF),  6 }, { LaneBitmask::getNone(), 0 }  // Sequence 12
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to sub_8bit
    &LaneMaskComposeSequences[2], // to sub_8bit_hi
    &LaneMaskComposeSequences[4], // to sub_8bit_hi_phony
    &LaneMaskComposeSequences[0], // to sub_16bit
    &LaneMaskComposeSequences[6], // to sub_16bit_hi
    &LaneMaskComposeSequences[0], // to sub_32bit
    &LaneMaskComposeSequences[8], // to sub_mask_0
    &LaneMaskComposeSequences[10], // to sub_mask_1
    &LaneMaskComposeSequences[12], // to sub_xmm
    &LaneMaskComposeSequences[0] // to sub_ymm
  };

LaneBitmask X86GenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 10 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask X86GenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 10 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *X86GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[120][10] = {
    {	// GR8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GRH8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_NOREX
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_H
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR8_ABCD_L
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GRH16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16
      7,	// sub_8bit -> GR16
      20,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_NOREX
      8,	// sub_8bit -> GR16_NOREX
      20,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// SEGMENT_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR16_ABCD
      20,	// sub_8bit -> GR16_ABCD
      20,	// sub_8bit_hi -> GR16_ABCD
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FPCCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      22,	// sub_mask_0 -> VK16PAIR
      22,	// sub_mask_1 -> VK16PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK1PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      23,	// sub_mask_0 -> VK1PAIR
      23,	// sub_mask_1 -> VK1PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK2PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      24,	// sub_mask_0 -> VK2PAIR
      24,	// sub_mask_1 -> VK2PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK4PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      25,	// sub_mask_0 -> VK4PAIR
      25,	// sub_mask_1 -> VK4PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK8PAIR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      26,	// sub_mask_0 -> VK8PAIR
      26,	// sub_mask_1 -> VK8PAIR
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK16PAIR_with_sub_mask_0_in_VK16WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      27,	// sub_mask_0 -> VK16PAIR_with_sub_mask_0_in_VK16WM
      27,	// sub_mask_1 -> VK16PAIR_with_sub_mask_0_in_VK16WM
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP
      31,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      29,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP
      0,	// sub_16bit_hi
      52,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS
      34,	// sub_8bit -> GR32
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      30,	// sub_16bit -> LOW32_ADDR_ACCESS
      0,	// sub_16bit_hi
      63,	// sub_32bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      31,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      31,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit
      0,	// sub_16bit_hi
      62,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// DEBUG_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32
      34,	// sub_8bit -> GR32
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      34,	// sub_16bit -> GR32
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOSP
      35,	// sub_8bit -> GR32_NOSP
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      35,	// sub_16bit -> GR32_NOSP
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      36,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      36,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
      0,	// sub_16bit_hi
      62,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX
      37,	// sub_8bit -> GR32_NOREX
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      37,	// sub_16bit -> GR32_NOREX
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_NOREX_NOSP
      39,	// sub_8bit -> GR32_NOREX_NOSP
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      39,	// sub_16bit -> GR32_NOREX_NOSP
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP32
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK32WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD
      42,	// sub_8bit -> GR32_ABCD
      42,	// sub_8bit_hi -> GR32_ABCD
      0,	// sub_8bit_hi_phony
      42,	// sub_16bit -> GR32_ABCD
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_TC
      43,	// sub_8bit -> GR32_TC
      44,	// sub_8bit_hi -> GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      43,	// sub_16bit -> GR32_TC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD_and_GR32_TC
      44,	// sub_8bit -> GR32_ABCD_and_GR32_TC
      44,	// sub_8bit_hi -> GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      44,	// sub_16bit -> GR32_ABCD_and_GR32_TC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD
      45,	// sub_8bit -> GR32_AD
      45,	// sub_8bit_hi -> GR32_AD
      0,	// sub_8bit_hi_phony
      45,	// sub_16bit -> GR32_AD
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP
      46,	// sub_8bit -> GR32_BPSP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      46,	// sub_16bit -> GR32_BPSP
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BSI
      47,	// sub_8bit -> GR32_BSI
      55,	// sub_8bit_hi -> GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      47,	// sub_16bit -> GR32_BSI
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_CB
      48,	// sub_8bit -> GR32_CB
      48,	// sub_8bit_hi -> GR32_CB
      0,	// sub_8bit_hi_phony
      48,	// sub_16bit -> GR32_CB
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DC
      49,	// sub_8bit -> GR32_DC
      49,	// sub_8bit_hi -> GR32_DC
      0,	// sub_8bit_hi_phony
      49,	// sub_16bit -> GR32_DC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DIBP
      50,	// sub_8bit -> GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      50,	// sub_16bit -> GR32_DIBP
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_SIDI
      51,	// sub_8bit -> GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      51,	// sub_16bit -> GR32_SIDI
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      62,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      52,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      0,	// sub_16bit_hi
      52,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// DFCCR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_ABCD_and_GR32_BSI
      55,	// sub_8bit -> GR32_ABCD_and_GR32_BSI
      55,	// sub_8bit_hi -> GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      55,	// sub_16bit -> GR32_ABCD_and_GR32_BSI
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_AD_and_GR32_DC
      56,	// sub_8bit -> GR32_AD_and_GR32_DC
      56,	// sub_8bit_hi -> GR32_AD_and_GR32_DC
      0,	// sub_8bit_hi_phony
      56,	// sub_16bit -> GR32_AD_and_GR32_DC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP_and_GR32_DIBP
      57,	// sub_8bit -> GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      57,	// sub_16bit -> GR32_BPSP_and_GR32_DIBP
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BPSP_and_GR32_TC
      58,	// sub_8bit -> GR32_BPSP_and_GR32_TC
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      58,	// sub_16bit -> GR32_BPSP_and_GR32_TC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_BSI_and_GR32_SIDI
      59,	// sub_8bit -> GR32_BSI_and_GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      59,	// sub_16bit -> GR32_BSI_and_GR32_SIDI
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_CB_and_GR32_DC
      60,	// sub_8bit -> GR32_CB_and_GR32_DC
      60,	// sub_8bit_hi -> GR32_CB_and_GR32_DC
      0,	// sub_8bit_hi_phony
      60,	// sub_16bit -> GR32_CB_and_GR32_DC
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR32_DIBP_and_GR32_SIDI
      61,	// sub_8bit -> GR32_DIBP_and_GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      61,	// sub_16bit -> GR32_DIBP_and_GR32_SIDI
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      62,	// sub_8bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      62,	// sub_16bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_16bit_hi
      62,	// sub_32bit -> LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      63,	// sub_16bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_16bit_hi
      63,	// sub_32bit -> LOW32_ADDR_ACCESS_with_sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64
      69,	// sub_8bit -> GR64_with_sub_8bit
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      66,	// sub_16bit -> GR64
      0,	// sub_16bit_hi
      66,	// sub_32bit -> GR64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// CONTROL_REG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// FR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_8bit
      69,	// sub_8bit -> GR64_with_sub_8bit
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      69,	// sub_16bit -> GR64_with_sub_8bit
      0,	// sub_16bit_hi
      69,	// sub_32bit -> GR64_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP
      70,	// sub_8bit -> GR64_NOSP
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      70,	// sub_16bit -> GR64_NOSP
      0,	// sub_16bit_hi
      70,	// sub_32bit -> GR64_NOSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC
      74,	// sub_8bit -> GR64_TC_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      71,	// sub_16bit -> GR64_TC
      0,	// sub_16bit_hi
      71,	// sub_32bit -> GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX
      78,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      72,	// sub_16bit -> GR64_NOREX
      0,	// sub_16bit_hi
      72,	// sub_32bit -> GR64_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64
      76,	// sub_8bit -> GR64_TCW64_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      73,	// sub_16bit -> GR64_TCW64
      0,	// sub_16bit_hi
      73,	// sub_32bit -> GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_with_sub_8bit
      74,	// sub_8bit -> GR64_TC_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      74,	// sub_16bit -> GR64_TC_with_sub_8bit
      0,	// sub_16bit_hi
      74,	// sub_32bit -> GR64_TC_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP_and_GR64_TC
      75,	// sub_8bit -> GR64_NOSP_and_GR64_TC
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      75,	// sub_16bit -> GR64_NOSP_and_GR64_TC
      0,	// sub_16bit_hi
      75,	// sub_32bit -> GR64_NOSP_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64_with_sub_8bit
      76,	// sub_8bit -> GR64_TCW64_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      76,	// sub_16bit -> GR64_TCW64_with_sub_8bit
      0,	// sub_16bit_hi
      76,	// sub_32bit -> GR64_TCW64_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_TCW64
      84,	// sub_8bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      77,	// sub_16bit -> GR64_TC_and_GR64_TCW64
      0,	// sub_16bit_hi
      77,	// sub_32bit -> GR64_TC_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_16bit_in_GR16_NOREX
      78,	// sub_8bit -> GR64_with_sub_16bit_in_GR16_NOREX
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      78,	// sub_16bit -> GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_16bit_hi
      78,	// sub_32bit -> GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR64
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_NOSP
      81,	// sub_8bit -> GR64_NOREX_NOSP
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      81,	// sub_16bit -> GR64_NOREX_NOSP
      0,	// sub_16bit_hi
      81,	// sub_32bit -> GR64_NOREX_NOSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TC
      87,	// sub_8bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      82,	// sub_16bit -> GR64_NOREX_and_GR64_TC
      0,	// sub_16bit_hi
      82,	// sub_32bit -> GR64_NOREX_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOSP_and_GR64_TCW64
      83,	// sub_8bit -> GR64_NOSP_and_GR64_TCW64
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      83,	// sub_16bit -> GR64_NOSP_and_GR64_TCW64
      0,	// sub_16bit_hi
      83,	// sub_32bit -> GR64_NOSP_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TCW64_and_GR64_TC_with_sub_8bit
      84,	// sub_8bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      84,	// sub_16bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      0,	// sub_16bit_hi
      84,	// sub_32bit -> GR64_TCW64_and_GR64_TC_with_sub_8bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VK64WM
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_NOSP_and_GR64_TCW64
      86,	// sub_8bit -> GR64_TC_and_GR64_NOSP_and_GR64_TCW64
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      86,	// sub_16bit -> GR64_TC_and_GR64_NOSP_and_GR64_TCW64
      0,	// sub_16bit_hi
      86,	// sub_32bit -> GR64_TC_and_GR64_NOSP_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      87,	// sub_8bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      87,	// sub_16bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_16bit_hi
      87,	// sub_32bit -> GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_NOSP_and_GR64_TC
      88,	// sub_8bit -> GR64_NOREX_NOSP_and_GR64_TC
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      88,	// sub_16bit -> GR64_NOREX_NOSP_and_GR64_TC
      0,	// sub_16bit_hi
      88,	// sub_32bit -> GR64_NOREX_NOSP_and_GR64_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_NOREX_and_GR64_TCW64
      91,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_TC
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      89,	// sub_16bit -> GR64_NOREX_and_GR64_TCW64
      0,	// sub_16bit_hi
      89,	// sub_32bit -> GR64_NOREX_and_GR64_TCW64
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_ABCD
      90,	// sub_8bit -> GR64_ABCD
      90,	// sub_8bit_hi -> GR64_ABCD
      0,	// sub_8bit_hi_phony
      90,	// sub_16bit -> GR64_ABCD
      0,	// sub_16bit_hi
      90,	// sub_32bit -> GR64_ABCD
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_TC
      91,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_TC
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      91,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_TC
      0,	// sub_16bit_hi
      91,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      92,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      92,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_8bit_hi_phony
      92,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_16bit_hi
      92,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_AD
      93,	// sub_8bit -> GR64_AD
      93,	// sub_8bit_hi -> GR64_AD
      0,	// sub_8bit_hi_phony
      93,	// sub_16bit -> GR64_AD
      0,	// sub_16bit_hi
      93,	// sub_32bit -> GR64_AD
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS_RBP
      104,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      94,	// sub_16bit -> GR64_and_LOW32_ADDR_ACCESS_RBP
      0,	// sub_16bit_hi
      94,	// sub_32bit -> GR64_and_LOW32_ADDR_ACCESS_RBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP
      95,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      95,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP
      0,	// sub_16bit_hi
      95,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI
      96,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BSI
      102,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      96,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BSI
      0,	// sub_16bit_hi
      96,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BSI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_CB
      97,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_CB
      97,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_CB
      0,	// sub_8bit_hi_phony
      97,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_CB
      0,	// sub_16bit_hi
      97,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_CB
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DC
      98,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_DC
      98,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_DC
      0,	// sub_8bit_hi_phony
      98,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_DC
      0,	// sub_16bit_hi
      98,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_DC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP
      99,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      99,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_DIBP
      0,	// sub_16bit_hi
      99,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_DIBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_SIDI
      100,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      100,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_SIDI
      0,	// sub_16bit_hi
      100,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_and_LOW32_ADDR_ACCESS
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      101,	// sub_16bit -> GR64_and_LOW32_ADDR_ACCESS
      0,	// sub_16bit_hi
      101,	// sub_32bit -> GR64_and_LOW32_ADDR_ACCESS
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      102,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      102,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_8bit_hi_phony
      102,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_16bit_hi
      102,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
      103,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
      103,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
      0,	// sub_8bit_hi_phony
      103,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
      0,	// sub_16bit_hi
      103,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      104,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      104,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_16bit_hi
      104,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      105,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      105,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      0,	// sub_16bit_hi
      105,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      106,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      106,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      0,	// sub_16bit_hi
      106,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
      107,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
      107,	// sub_8bit_hi -> GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
      0,	// sub_8bit_hi_phony
      107,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
      0,	// sub_16bit_hi
      107,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      108,	// sub_8bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      108,	// sub_16bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      0,	// sub_16bit_hi
      108,	// sub_32bit -> GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RST
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP80
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// RFP80_7
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR128
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// BNDR
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// VR256X
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      115,	// sub_xmm -> VR256X
      0,	// sub_ymm
    },
    {	// VR256
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      116,	// sub_xmm -> VR256
      0,	// sub_ymm
    },
    {	// VR512
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      117,	// sub_xmm -> VR512
      117,	// sub_ymm -> VR512
    },
    {	// VR512_0_15
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      118,	// sub_xmm -> VR512_0_15
      118,	// sub_ymm -> VR512_0_15
    },
    {	// TILECFG
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
    {	// TILE
      0,	// sub_8bit
      0,	// sub_8bit_hi
      0,	// sub_8bit_hi_phony
      0,	// sub_16bit
      0,	// sub_16bit_hi
      0,	// sub_32bit
      0,	// sub_mask_0
      0,	// sub_mask_1
      0,	// sub_xmm
      0,	// sub_ymm
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 10 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &X86GenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 20},  	// GR8
    {0, 0},  	// GRH8
    {1, 8},  	// GR8_NOREX
    {1, 4},  	// GR8_ABCD_H
    {1, 4},  	// GR8_ABCD_L
    {0, 0},  	// GRH16
    {2, 32},  	// GR16
    {2, 16},  	// GR16_NOREX
    {1, 8},  	// VK1
    {1, 8},  	// VK16
    {1, 8},  	// VK2
    {1, 8},  	// VK4
    {1, 8},  	// VK8
    {1, 7},  	// VK16WM
    {1, 7},  	// VK1WM
    {1, 7},  	// VK2WM
    {1, 7},  	// VK4WM
    {1, 7},  	// VK8WM
    {1, 6},  	// SEGMENT_REG
    {2, 8},  	// GR16_ABCD
    {0, 0},  	// FPCCR
    {2, 8},  	// VK16PAIR
    {2, 8},  	// VK1PAIR
    {2, 8},  	// VK2PAIR
    {2, 8},  	// VK4PAIR
    {2, 8},  	// VK8PAIR
    {2, 6},  	// VK16PAIR_with_sub_mask_0_in_VK16WM
    {1, 32},  	// FR32X
    {2, 34},  	// LOW32_ADDR_ACCESS_RBP
    {2, 34},  	// LOW32_ADDR_ACCESS
    {2, 32},  	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit
    {1, 16},  	// DEBUG_REG
    {1, 16},  	// FR32
    {2, 32},  	// GR32
    {2, 30},  	// GR32_NOSP
    {2, 16},  	// LOW32_ADDR_ACCESS_RBP_with_sub_16bit_in_GR16_NOREX
    {2, 16},  	// GR32_NOREX
    {1, 8},  	// VK32
    {2, 14},  	// GR32_NOREX_NOSP
    {1, 7},  	// RFP32
    {1, 7},  	// VK32WM
    {2, 8},  	// GR32_ABCD
    {2, 8},  	// GR32_TC
    {2, 6},  	// GR32_ABCD_and_GR32_TC
    {2, 4},  	// GR32_AD
    {2, 4},  	// GR32_BPSP
    {2, 4},  	// GR32_BSI
    {2, 4},  	// GR32_CB
    {2, 4},  	// GR32_DC
    {2, 4},  	// GR32_DIBP
    {2, 4},  	// GR32_SIDI
    {2, 4},  	// LOW32_ADDR_ACCESS_RBP_with_sub_32bit
    {0, 0},  	// CCR
    {0, 0},  	// DFCCR
    {2, 2},  	// GR32_ABCD_and_GR32_BSI
    {2, 2},  	// GR32_AD_and_GR32_DC
    {2, 2},  	// GR32_BPSP_and_GR32_DIBP
    {2, 2},  	// GR32_BPSP_and_GR32_TC
    {2, 2},  	// GR32_BSI_and_GR32_SIDI
    {2, 2},  	// GR32_CB_and_GR32_DC
    {2, 2},  	// GR32_DIBP_and_GR32_SIDI
    {2, 2},  	// LOW32_ADDR_ACCESS_RBP_with_sub_8bit_with_sub_32bit
    {2, 2},  	// LOW32_ADDR_ACCESS_with_sub_32bit
    {1, 7},  	// RFP64
    {1, 32},  	// FR64X
    {2, 34},  	// GR64
    {1, 16},  	// CONTROL_REG
    {1, 16},  	// FR64
    {2, 32},  	// GR64_with_sub_8bit
    {2, 30},  	// GR64_NOSP
    {2, 20},  	// GR64_TC
    {2, 18},  	// GR64_NOREX
    {2, 18},  	// GR64_TCW64
    {2, 18},  	// GR64_TC_with_sub_8bit
    {2, 16},  	// GR64_NOSP_and_GR64_TC
    {2, 16},  	// GR64_TCW64_with_sub_8bit
    {2, 16},  	// GR64_TC_and_GR64_TCW64
    {2, 16},  	// GR64_with_sub_16bit_in_GR16_NOREX
    {1, 8},  	// VK64
    {1, 8},  	// VR64
    {2, 14},  	// GR64_NOREX_NOSP
    {2, 14},  	// GR64_NOREX_and_GR64_TC
    {2, 14},  	// GR64_NOSP_and_GR64_TCW64
    {2, 14},  	// GR64_TCW64_and_GR64_TC_with_sub_8bit
    {1, 7},  	// VK64WM
    {2, 12},  	// GR64_TC_and_GR64_NOSP_and_GR64_TCW64
    {2, 12},  	// GR64_TC_and_GR64_with_sub_16bit_in_GR16_NOREX
    {2, 10},  	// GR64_NOREX_NOSP_and_GR64_TC
    {2, 10},  	// GR64_NOREX_and_GR64_TCW64
    {2, 8},  	// GR64_ABCD
    {2, 8},  	// GR64_with_sub_32bit_in_GR32_TC
    {2, 6},  	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_TC
    {2, 4},  	// GR64_AD
    {2, 4},  	// GR64_and_LOW32_ADDR_ACCESS_RBP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_BPSP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_BSI
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_CB
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_DC
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_DIBP
    {2, 4},  	// GR64_with_sub_32bit_in_GR32_SIDI
    {2, 2},  	// GR64_and_LOW32_ADDR_ACCESS
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_ABCD_and_GR32_BSI
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_AD_and_GR32_DC
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_DIBP
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BPSP_and_GR32_TC
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_BSI_and_GR32_SIDI
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_CB_and_GR32_DC
    {2, 2},  	// GR64_with_sub_32bit_in_GR32_DIBP_and_GR32_SIDI
    {0, 0},  	// RST
    {1, 7},  	// RFP80
    {0, 0},  	// RFP80_7
    {1, 32},  	// VR128X
    {1, 16},  	// VR128
    {1, 4},  	// BNDR
    {1, 32},  	// VR256X
    {1, 16},  	// VR256
    {1, 32},  	// VR512
    {1, 16},  	// VR512_0_15
    {1, 1},  	// TILECFG
    {1, 8},  	// TILE
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned X86GenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 173 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned X86GenRegisterInfo::getNumRegPressureSets() const {
  return 35;
}

// Get the name of this register unit pressure set.
const char *X86GenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "TILECFG",
    "BNDR",
    "SEGMENT_REG",
    "GR32_BPSP",
    "LOW32_ADDR_ACCESS_with_sub_32bit",
    "GR32_BSI",
    "GR32_SIDI",
    "GR32_DIBP_with_GR32_SIDI",
    "GR32_DIBP_with_LOW32_ADDR_ACCESS_with_sub_32bit",
    "RFP32",
    "GR8_ABCD_H_with_GR32_BSI",
    "GR8_ABCD_L_with_GR32_BSI",
    "VK1",
    "VR64",
    "TILE",
    "GR8_NOREX",
    "GR32_TC",
    "GR32_BPSP_with_GR32_TC",
    "DEBUG_REG",
    "FR32",
    "CONTROL_REG",
    "GR64_NOREX",
    "GR64_TCW64",
    "GR32_BPSP_with_GR64_TCW64",
    "GR8",
    "GR8_with_GR32_DIBP",
    "GR8_with_GR32_BSI",
    "GR64_TC_with_GR64_TCW64",
    "GR8_with_LOW32_ADDR_ACCESS_with_sub_32bit",
    "GR8_with_GR64_NOREX",
    "GR64_TC",
    "GR8_with_GR64_TCW64",
    "GR8_with_GR64_TC",
    "FR32X",
    "GR16",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned X86GenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: TILECFG
    4,  	// 1: BNDR
    6,  	// 2: SEGMENT_REG
    6,  	// 3: GR32_BPSP
    6,  	// 4: LOW32_ADDR_ACCESS_with_sub_32bit
    6,  	// 5: GR32_BSI
    6,  	// 6: GR32_SIDI
    6,  	// 7: GR32_DIBP_with_GR32_SIDI
    6,  	// 8: GR32_DIBP_with_LOW32_ADDR_ACCESS_with_sub_32bit
    7,  	// 9: RFP32
    7,  	// 10: GR8_ABCD_H_with_GR32_BSI
    7,  	// 11: GR8_ABCD_L_with_GR32_BSI
    8,  	// 12: VK1
    8,  	// 13: VR64
    8,  	// 14: TILE
    10,  	// 15: GR8_NOREX
    12,  	// 16: GR32_TC
    12,  	// 17: GR32_BPSP_with_GR32_TC
    16,  	// 18: DEBUG_REG
    16,  	// 19: FR32
    16,  	// 20: CONTROL_REG
    18,  	// 21: GR64_NOREX
    20,  	// 22: GR64_TCW64
    20,  	// 23: GR32_BPSP_with_GR64_TCW64
    22,  	// 24: GR8
    22,  	// 25: GR8_with_GR32_DIBP
    22,  	// 26: GR8_with_GR32_BSI
    22,  	// 27: GR64_TC_with_GR64_TCW64
    23,  	// 28: GR8_with_LOW32_ADDR_ACCESS_with_sub_32bit
    26,  	// 29: GR8_with_GR64_NOREX
    26,  	// 30: GR64_TC
    27,  	// 31: GR8_with_GR64_TCW64
    28,  	// 32: GR8_with_GR64_TC
    32,  	// 33: FR32X
    34,  	// 34: GR16
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 0, -1,
  /* 2 */ 1, -1,
  /* 4 */ 2, -1,
  /* 6 */ 9, -1,
  /* 8 */ 12, -1,
  /* 10 */ 13, -1,
  /* 12 */ 14, -1,
  /* 14 */ 18, -1,
  /* 16 */ 20, -1,
  /* 18 */ 19, 33, -1,
  /* 21 */ 21, 29, 30, 34, -1,
  /* 26 */ 3, 4, 17, 21, 23, 24, 29, 30, 34, -1,
  /* 36 */ 3, 7, 8, 21, 25, 29, 30, 34, -1,
  /* 45 */ 4, 8, 17, 21, 23, 28, 29, 30, 34, -1,
  /* 55 */ 3, 4, 7, 8, 17, 21, 23, 24, 25, 28, 29, 30, 34, -1,
  /* 69 */ 22, 23, 27, 30, 31, 34, -1,
  /* 76 */ 27, 30, 32, 34, -1,
  /* 81 */ 5, 6, 10, 11, 15, 21, 26, 29, 30, 32, 34, -1,
  /* 93 */ 21, 27, 29, 30, 32, 34, -1,
  /* 100 */ 6, 7, 21, 26, 27, 29, 30, 32, 34, -1,
  /* 110 */ 5, 6, 7, 10, 11, 15, 21, 26, 27, 29, 30, 32, 34, -1,
  /* 124 */ 3, 6, 7, 8, 21, 25, 26, 27, 29, 30, 32, 34, -1,
  /* 137 */ 24, 25, 26, 28, 29, 31, 32, 34, -1,
  /* 146 */ 22, 23, 27, 30, 31, 32, 34, -1,
  /* 154 */ 16, 17, 21, 22, 23, 27, 29, 30, 31, 32, 34, -1,
  /* 166 */ 3, 4, 16, 17, 21, 22, 23, 24, 27, 29, 30, 31, 32, 34, -1,
  /* 181 */ 5, 15, 16, 21, 22, 24, 25, 26, 28, 29, 30, 31, 32, 34, -1,
  /* 196 */ 10, 15, 16, 21, 22, 24, 25, 26, 28, 29, 30, 31, 32, 34, -1,
  /* 211 */ 5, 6, 10, 11, 15, 16, 21, 22, 24, 25, 26, 28, 29, 30, 31, 32, 34, -1,
  /* 229 */ 3, 4, 7, 8, 17, 21, 23, 24, 25, 26, 28, 29, 30, 31, 32, 34, -1,
  /* 246 */ 4, 8, 16, 17, 21, 22, 23, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 261 */ 3, 6, 7, 8, 21, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 277 */ 5, 6, 7, 10, 11, 15, 21, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 295 */ 3, 4, 16, 17, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 313 */ 5, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 331 */ 5, 10, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
  /* 350 */ 5, 11, 15, 16, 17, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int *X86GenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint16_t RCSetStartTable[] = {
    137,1,182,196,214,1,24,21,8,8,8,8,8,8,8,8,8,8,4,182,1,8,8,8,8,8,8,19,24,24,24,14,18,24,24,21,21,8,21,6,8,182,168,314,314,26,81,181,314,36,100,45,1,1,211,314,55,166,110,313,124,55,246,6,19,24,16,18,24,24,76,21,69,76,76,69,146,21,8,10,21,93,69,146,8,146,93,102,154,182,168,314,314,45,26,81,181,314,36,100,246,211,314,55,166,110,313,124,1,6,1,19,18,2,19,18,19,18,0,12,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int *X86GenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 173 && "invalid register unit");
  static const uint16_t RUSetStartTable[] = {
    332,351,211,211,229,1,331,350,4,1,332,261,1,351,4,1,1,1,1,1,1,1,246,1,1,4,277,1,1,295,1,1,1,1,4,4,1,1,4,1,0,2,2,2,2,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,6,6,6,6,6,6,6,1,8,8,8,8,8,8,8,8,10,10,10,10,10,10,10,10,300,1,1,300,1,1,300,1,1,300,1,1,137,1,1,137,1,1,137,1,1,137,1,1,1,1,1,1,1,1,1,1,12,12,12,12,12,12,12,12,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc X86RegDesc[];
extern const MCPhysReg X86RegDiffLists[];
extern const LaneBitmask X86LaneMaskLists[];
extern const char X86RegStrings[];
extern const char X86RegClassStrings[];
extern const MCPhysReg X86RegUnitRoots[][2];
extern const uint16_t X86SubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits X86SubRegIdxRanges[];
extern const uint16_t X86RegEncodingTable[];
// X86 Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0Dwarf2L[];
extern const unsigned X86DwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1Dwarf2L[];
extern const unsigned X86DwarfFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2Dwarf2L[];
extern const unsigned X86DwarfFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0Dwarf2L[];
extern const unsigned X86EHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1Dwarf2L[];
extern const unsigned X86EHFlavour1Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2Dwarf2L[];
extern const unsigned X86EHFlavour2Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour0L2Dwarf[];
extern const unsigned X86DwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour1L2Dwarf[];
extern const unsigned X86DwarfFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86DwarfFlavour2L2Dwarf[];
extern const unsigned X86DwarfFlavour2L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour0L2Dwarf[];
extern const unsigned X86EHFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour1L2Dwarf[];
extern const unsigned X86EHFlavour1L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair X86EHFlavour2L2Dwarf[];
extern const unsigned X86EHFlavour2L2DwarfSize;

X86GenRegisterInfo::
X86GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(X86RegInfoDesc, RegisterClasses, RegisterClasses+120,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFFFFFFFFB0), RegClassInfos, HwMode) {
  InitMCRegisterInfo(X86RegDesc, 292, RA, PC,
                     X86MCRegisterClasses, 120,
                     X86RegUnitRoots,
                     173,
                     X86RegDiffLists,
                     X86LaneMaskLists,
                     X86RegStrings,
                     X86RegClassStrings,
                     X86SubRegIdxLists,
                     11,
                     X86SubRegIdxRanges,
                     X86RegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour0Dwarf2L, X86DwarfFlavour0Dwarf2LSize, false);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour1Dwarf2L, X86DwarfFlavour1Dwarf2LSize, false);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86DwarfFlavour2Dwarf2L, X86DwarfFlavour2Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(X86EHFlavour0Dwarf2L, X86EHFlavour0Dwarf2LSize, true);
    break;
  case 1:
    mapDwarfRegsToLLVMRegs(X86EHFlavour1Dwarf2L, X86EHFlavour1Dwarf2LSize, true);
    break;
  case 2:
    mapDwarfRegsToLLVMRegs(X86EHFlavour2Dwarf2L, X86EHFlavour2Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour0L2Dwarf, X86DwarfFlavour0L2DwarfSize, false);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour1L2Dwarf, X86DwarfFlavour1L2DwarfSize, false);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86DwarfFlavour2L2Dwarf, X86DwarfFlavour2L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(X86EHFlavour0L2Dwarf, X86EHFlavour0L2DwarfSize, true);
    break;
  case 1:
    mapLLVMRegsToDwarfRegs(X86EHFlavour1L2Dwarf, X86EHFlavour1L2DwarfSize, true);
    break;
  case 2:
    mapLLVMRegsToDwarfRegs(X86EHFlavour2L2Dwarf, X86EHFlavour2L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg CSR_32_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32_RegMask[] = { 0x058703f0, 0x38002581, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32EHRet_SaveList[] = { X86::EAX, X86::EDX, X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32EHRet_RegMask[] = { 0x0def83fe, 0x38002dc1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, 0 };
static const uint32_t CSR_32_AllRegs_RegMask[] = { 0x0fefaffe, 0x38002fc1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_AVX_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, 0 };
static const uint32_t CSR_32_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0x38002fc1, 0x00000000, 0x00000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_AllRegs_AVX512_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_32_AllRegs_AVX512_RegMask[] = { 0x0fefaffe, 0x38002fc1, 0x00000000, 0x00ff0000, 0xff000000, 0xff000000, 0xff000000, 0x00000000, 0x00000000, 0x0000000f, };
static const MCPhysReg CSR_32_AllRegs_SSE_SaveList[] = { X86::EAX, X86::EBX, X86::ECX, X86::EDX, X86::EBP, X86::ESI, X86::EDI, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, 0 };
static const uint32_t CSR_32_AllRegs_SSE_RegMask[] = { 0x0fefaffe, 0x38002fc1, 0x00000000, 0x00000000, 0xff000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_RegCall_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, 0 };
static const uint32_t CSR_32_RegCall_RegMask[] = { 0x058703f0, 0x38002581, 0x00000000, 0x00000000, 0xf0000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_32_RegCall_NoSSE_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, 0 };
static const uint32_t CSR_32_RegCall_NoSSE_RegMask[] = { 0x058703f0, 0x38002581, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_64EHRet_SaveList[] = { X86::RAX, X86::RDX, X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64EHRet_RegMask[] = { 0x09e883fe, 0x004e09c0, 0x00000000, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, X86::RAX, 0 };
static const uint32_t CSR_64_AllRegs_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0xff0000ff, 0x000000ff, 0x00000000, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_AVX_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0x000000ff, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_64_AllRegs_AVX512_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::ZMM0, X86::ZMM1, X86::ZMM2, X86::ZMM3, X86::ZMM4, X86::ZMM5, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, X86::K0, X86::K1, X86::K2, X86::K3, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_64_AllRegs_AVX512_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00ff0000, 0xff0000ff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x0000000f, };
static const MCPhysReg CSR_64_AllRegs_NoSSE_SaveList[] = { X86::RAX, X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_AllRegs_NoSSE_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0x000000ff, 0x00000000, 0x00000000, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_64_CXX_TLS_Darwin_PE_SaveList[] = { X86::RBP, 0 };
static const uint32_t CSR_64_CXX_TLS_Darwin_PE_RegMask[] = { 0x008001c0, 0x00040080, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_64_CXX_TLS_Darwin_ViaCopy_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RCX, X86::RDX, X86::RSI, X86::R8, X86::R9, X86::R10, X86::R11, 0 };
static const uint32_t CSR_64_CXX_TLS_Darwin_ViaCopy_RegMask[] = { 0x0b28ae30, 0x3a582b01, 0x00000000, 0x00000000, 0x000000ff, 0x00000000, 0x00000000, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_64_HHVM_SaveList[] = { X86::R12, 0 };
static const uint32_t CSR_64_HHVM_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000010, 0x00000000, 0x00000000, 0x10000000, 0x10101010, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000f0, 0x000000ff, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000f0, 0x000000ff, 0x000000ff, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RSI, X86::R14, X86::R15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::ZMM22, X86::ZMM23, X86::ZMM24, X86::ZMM25, X86::ZMM26, X86::ZMM27, X86::ZMM28, X86::ZMM29, X86::ZMM30, X86::ZMM31, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_64_Intel_OCL_BI_AVX512_RegMask[] = { 0x01000230, 0x3a082101, 0x00000000, 0x00f00000, 0x000000c0, 0x00ffff00, 0x00ffff00, 0xc0ffff00, 0xc0c0c0c0, 0x0000000c, };
static const MCPhysReg CSR_64_MostRegs_SaveList[] = { X86::RBX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_MostRegs_RegMask[] = { 0x0fafaff0, 0x3a7c2f81, 0x00000000, 0x00000000, 0xff0000ff, 0x000000ff, 0x00000000, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_64_RT_AllRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::XMM0, X86::XMM1, X86::XMM2, X86::XMM3, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0xff0000f7, 0x000000ff, 0x00000000, 0xf7000000, 0xf7f7f7f7, 0x00000000, };
static const MCPhysReg CSR_64_RT_AllRegs_AVX_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, X86::YMM0, X86::YMM1, X86::YMM2, X86::YMM3, X86::YMM4, X86::YMM5, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_64_RT_AllRegs_AVX_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0xff0000f7, 0xff0000ff, 0x000000ff, 0xf7000000, 0xf7f7f7f7, 0x00000000, };
static const MCPhysReg CSR_64_RT_MostRegs_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RAX, X86::RCX, X86::RDX, X86::RSI, X86::RDI, X86::R8, X86::R9, X86::R10, 0 };
static const uint32_t CSR_64_RT_MostRegs_RegMask[] = { 0x0fefaffe, 0x3a7e2fc1, 0x00000000, 0x00000000, 0x000000f7, 0x00000000, 0x00000000, 0xf7000000, 0xf7f7f7f7, 0x00000000, };
static const MCPhysReg CSR_64_SwiftError_SaveList[] = { X86::RBX, X86::R13, X86::R14, X86::R15, X86::RBP, 0 };
static const uint32_t CSR_64_SwiftError_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000e0, 0x00000000, 0x00000000, 0xe0000000, 0xe0e0e0e0, 0x00000000, };
static const MCPhysReg CSR_64_TLS_Darwin_SaveList[] = { X86::RBX, X86::R12, X86::R13, X86::R14, X86::R15, X86::RBP, X86::RCX, X86::RDX, X86::RSI, X86::R8, X86::R9, X86::R10, X86::R11, 0 };
static const uint32_t CSR_64_TLS_Darwin_RegMask[] = { 0x0ba8aff0, 0x3a5c2b81, 0x00000000, 0x00000000, 0x000000ff, 0x00000000, 0x00000000, 0xff000000, 0xffffffff, 0x00000000, };
static const MCPhysReg CSR_NoRegs_SaveList[] = { 0 };
static const uint32_t CSR_NoRegs_RegMask[] = { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_SysV64_RegCall_SaveList[] = { X86::RBX, X86::RBP, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_SysV64_RegCall_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000f0, 0x000000ff, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_SysV64_RegCall_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_SysV64_RegCall_NoSSE_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_Win32_CFGuard_Check_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::XMM4, X86::XMM5, X86::XMM6, X86::XMM7, X86::ECX, 0 };
static const uint32_t CSR_Win32_CFGuard_Check_RegMask[] = { 0x07872ff0, 0x38002781, 0x00000000, 0x00000000, 0xf0000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win32_CFGuard_Check_NoSSE_SaveList[] = { X86::ESI, X86::EDI, X86::EBX, X86::EBP, X86::ECX, 0 };
static const uint32_t CSR_Win32_CFGuard_Check_NoSSE_RegMask[] = { 0x07872ff0, 0x38002781, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, };
static const MCPhysReg CSR_Win64_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RegMask[] = { 0x058703f0, 0x3a2c2581, 0x00000000, 0x00000000, 0xc00000f0, 0x000000ff, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::YMM6, X86::YMM7, X86::YMM8, X86::YMM9, X86::YMM10, X86::YMM11, X86::YMM12, X86::YMM13, X86::YMM14, X86::YMM15, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX_RegMask[] = { 0x058703f0, 0x3a2c2581, 0x00000000, 0x00000000, 0xc00000f0, 0xc00000ff, 0x000000ff, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_Win64_Intel_OCL_BI_AVX512_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, X86::ZMM6, X86::ZMM7, X86::ZMM8, X86::ZMM9, X86::ZMM10, X86::ZMM11, X86::ZMM12, X86::ZMM13, X86::ZMM14, X86::ZMM15, X86::ZMM16, X86::ZMM17, X86::ZMM18, X86::ZMM19, X86::ZMM20, X86::ZMM21, X86::K4, X86::K5, X86::K6, X86::K7, 0 };
static const uint32_t CSR_Win64_Intel_OCL_BI_AVX512_RegMask[] = { 0x058703f0, 0x3a2c2581, 0x00000000, 0x00f00000, 0xc00000f0, 0xc0003fff, 0xc0003fff, 0xf0003fff, 0xf0f0f0f0, 0x0000000c, };
static const MCPhysReg CSR_Win64_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_Win64_NoSSE_RegMask[] = { 0x058703f0, 0x3a2c2581, 0x00000000, 0x00000000, 0x000000f0, 0x00000000, 0x00000000, 0xf0000000, 0xf0f0f0f0, 0x00000000, };
static const MCPhysReg CSR_Win64_RegCall_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_RegCall_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000fc, 0x000000ff, 0x00000000, 0xfc000000, 0xfcfcfcfc, 0x00000000, };
static const MCPhysReg CSR_Win64_RegCall_NoSSE_SaveList[] = { X86::RBX, X86::RBP, X86::R10, X86::R11, X86::R12, X86::R13, X86::R14, X86::R15, 0 };
static const uint32_t CSR_Win64_RegCall_NoSSE_RegMask[] = { 0x018003f0, 0x000c0180, 0x00000000, 0x00000000, 0x000000fc, 0x00000000, 0x00000000, 0xfc000000, 0xfcfcfcfc, 0x00000000, };
static const MCPhysReg CSR_Win64_SwiftError_SaveList[] = { X86::RBX, X86::RBP, X86::RDI, X86::RSI, X86::R13, X86::R14, X86::R15, X86::XMM6, X86::XMM7, X86::XMM8, X86::XMM9, X86::XMM10, X86::XMM11, X86::XMM12, X86::XMM13, X86::XMM14, X86::XMM15, 0 };
static const uint32_t CSR_Win64_SwiftError_RegMask[] = { 0x058703f0, 0x3a2c2581, 0x00000000, 0x00000000, 0xc00000e0, 0x000000ff, 0x00000000, 0xe0000000, 0xe0e0e0e0, 0x00000000, };


ArrayRef<const uint32_t *> X86GenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    CSR_32_RegMask,
    CSR_32EHRet_RegMask,
    CSR_32_AllRegs_RegMask,
    CSR_32_AllRegs_AVX_RegMask,
    CSR_32_AllRegs_AVX512_RegMask,
    CSR_32_AllRegs_SSE_RegMask,
    CSR_32_RegCall_RegMask,
    CSR_32_RegCall_NoSSE_RegMask,
    CSR_64_RegMask,
    CSR_64EHRet_RegMask,
    CSR_64_AllRegs_RegMask,
    CSR_64_AllRegs_AVX_RegMask,
    CSR_64_AllRegs_AVX512_RegMask,
    CSR_64_AllRegs_NoSSE_RegMask,
    CSR_64_CXX_TLS_Darwin_PE_RegMask,
    CSR_64_CXX_TLS_Darwin_ViaCopy_RegMask,
    CSR_64_HHVM_RegMask,
    CSR_64_Intel_OCL_BI_RegMask,
    CSR_64_Intel_OCL_BI_AVX_RegMask,
    CSR_64_Intel_OCL_BI_AVX512_RegMask,
    CSR_64_MostRegs_RegMask,
    CSR_64_RT_AllRegs_RegMask,
    CSR_64_RT_AllRegs_AVX_RegMask,
    CSR_64_RT_MostRegs_RegMask,
    CSR_64_SwiftError_RegMask,
    CSR_64_TLS_Darwin_RegMask,
    CSR_NoRegs_RegMask,
    CSR_SysV64_RegCall_RegMask,
    CSR_SysV64_RegCall_NoSSE_RegMask,
    CSR_Win32_CFGuard_Check_RegMask,
    CSR_Win32_CFGuard_Check_NoSSE_RegMask,
    CSR_Win64_RegMask,
    CSR_Win64_Intel_OCL_BI_AVX_RegMask,
    CSR_Win64_Intel_OCL_BI_AVX512_RegMask,
    CSR_Win64_NoSSE_RegMask,
    CSR_Win64_RegCall_RegMask,
    CSR_Win64_RegCall_NoSSE_RegMask,
    CSR_Win64_SwiftError_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> X86GenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "CSR_32",
    "CSR_32EHRet",
    "CSR_32_AllRegs",
    "CSR_32_AllRegs_AVX",
    "CSR_32_AllRegs_AVX512",
    "CSR_32_AllRegs_SSE",
    "CSR_32_RegCall",
    "CSR_32_RegCall_NoSSE",
    "CSR_64",
    "CSR_64EHRet",
    "CSR_64_AllRegs",
    "CSR_64_AllRegs_AVX",
    "CSR_64_AllRegs_AVX512",
    "CSR_64_AllRegs_NoSSE",
    "CSR_64_CXX_TLS_Darwin_PE",
    "CSR_64_CXX_TLS_Darwin_ViaCopy",
    "CSR_64_HHVM",
    "CSR_64_Intel_OCL_BI",
    "CSR_64_Intel_OCL_BI_AVX",
    "CSR_64_Intel_OCL_BI_AVX512",
    "CSR_64_MostRegs",
    "CSR_64_RT_AllRegs",
    "CSR_64_RT_AllRegs_AVX",
    "CSR_64_RT_MostRegs",
    "CSR_64_SwiftError",
    "CSR_64_TLS_Darwin",
    "CSR_NoRegs",
    "CSR_SysV64_RegCall",
    "CSR_SysV64_RegCall_NoSSE",
    "CSR_Win32_CFGuard_Check",
    "CSR_Win32_CFGuard_Check_NoSSE",
    "CSR_Win64",
    "CSR_Win64_Intel_OCL_BI_AVX",
    "CSR_Win64_Intel_OCL_BI_AVX512",
    "CSR_Win64_NoSSE",
    "CSR_Win64_RegCall",
    "CSR_Win64_RegCall_NoSSE",
    "CSR_Win64_SwiftError",
  };
  return makeArrayRef(Names);
}

const X86FrameLowering *
X86GenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const X86FrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

