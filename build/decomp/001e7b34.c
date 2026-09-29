// OoT3D decomp @ 001e7b34  name=FUN_001e7b34  size=412

void FUN_001e7b34(int param_1,int param_2)

{
  int iVar1;

  if (*(short *)(param_1 + 0x1aa) != 0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x220),
                 *(undefined4 *)(param_1 + 0x22c),param_1 + 0x1d8);
    FUN_00373500(*(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x224),
                 *(undefined4 *)(param_1 + 0x230),param_1 + 0x1dc);
    FUN_00373500(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x228),
                 *(undefined4 *)(param_1 + 0x234),param_1 + 0x1e0);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x1fc),
                 *(undefined4 *)(param_1 + 0x208),param_1 + 0x1e4);
    FUN_00373500(*(undefined4 *)(param_1 + 500),*(undefined4 *)(param_1 + 0x200),
                 *(undefined4 *)(param_1 + 0x20c),param_1 + 0x1e8);
    FUN_00373500(*(undefined4 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x204),
                 *(undefined4 *)(param_1 + 0x210),param_1 + 0x1ec);
  }
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x1aa),param_1 + 0x1d8,param_1 + 0x1e4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == *(short *)(param_1 + 0x1ac)) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_003725e0(param_2);
  }
  if (((((int)ABS(*(float *)(param_1 + 0x1e4) - *(float *)(param_1 + 0x1f0)) < DAT_001e7cd0) &&
       ((int)ABS(*(float *)(param_1 + 0x1e8) - *(float *)(param_1 + 500)) < DAT_001e7cd0)) &&
      ((int)ABS(*(float *)(param_1 + 0x1ec) - *(float *)(param_1 + 0x1f8)) < DAT_001e7cd0)) &&
     ((((int)ABS(*(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x214)) < DAT_001e7cd0 &&
       ((int)ABS(*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x218)) < DAT_001e7cd0)) &&
      ((int)ABS(*(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x21c)) < DAT_001e7cd0)))) {
    FUN_003725e0(param_2);
    *(undefined2 *)(param_1 + 0x1b0) = 0x2d;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001e7cd4;
  }
  return;
}
