// OoT3D decomp @ 00257ee8  name=FUN_00257ee8  size=136

void FUN_00257ee8(int param_1,undefined4 param_2)

{
  int iVar1;

  if (*(short *)(param_1 + 0x554) == 2) {
    FUN_0036e980(param_2,param_1,7);
    *(undefined4 *)(param_1 + 0x3f4) = DAT_00257f70;
    iVar1 = FUN_00371e40(param_1,param_2);
    if (iVar1 == 0) {
      FUN_003724dc(*(float *)(param_1 + 0x98) + DAT_00257f78,
                   ABS(*(float *)(param_1 + 0x9c)) + DAT_00257f78,param_1,param_2,0x54);
      return;
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x3f4) = DAT_00257f74;
  }
  return;
}
