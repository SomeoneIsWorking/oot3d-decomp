// OoT3D decomp @ 0014ed6c  name=FUN_0014ed6c  size=112

void FUN_0014ed6c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_00371e40();
  if (iVar1 != 0) {
    FUN_00376a60((int)-*(short *)(DAT_0014ede4 +
                                 *(char *)((uint)*(byte *)(DAT_0014eddc + 0x11) + DAT_0014ede0) * 2)
                );
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x708) = DAT_0014ede8;
    return;
  }
  FUN_003724dc(DAT_0014edf0,DAT_0014edec,param_1,param_2,0x16);
  return;
}
