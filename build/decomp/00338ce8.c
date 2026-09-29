// OoT3D decomp @ 00338ce8  name=FUN_00338ce8  size=164

undefined4 FUN_00338ce8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;

  if (*(int *)(param_1 + 1000) == 8) {
    iVar2 = *(int *)(param_1 + 0x18a8);
    if (iVar2 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x18ac);
    }
    if (iVar2 != 0 && unaff_r4 != 0) {
      if (param_3 < 0) {
        param_3 = *(int *)(param_1 + 0x3ec);
      }
      iVar1 = *(int *)(param_1 + 0x18b0);
      if (param_2 == 0) {
        iVar2 = iVar2 + iVar1 * 0x240;
        iVar1 = iVar2 + param_3 * 0x48 + 0x28;
        iVar3 = *(int *)(iVar2 + param_3 * 0x48 + 0x24);
      }
      else {
        iVar3 = *(int *)(iVar2 + iVar1 * 0x240 + param_3 * 0x48);
        iVar1 = iVar2 + iVar1 * 0x240 + param_3 * 0x48 + 4;
      }
      if (iVar1 != 0 && iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
  }
  return 0x7c;
}
