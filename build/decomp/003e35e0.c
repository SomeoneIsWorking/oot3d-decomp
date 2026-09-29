// OoT3D decomp @ 003e35e0  name=FUN_003e35e0  size=452

void FUN_003e35e0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_003e37f8 + param_2);
  FUN_00370734(param_1 + 0x1e0);
  if (*(short *)(param_1 + 0xcc6) != 0) {
    if (0x4000 < (int)(short)(*(short *)(param_1 + 0x92) -
                             (*(short *)(param_1 + 0xbe) + *(short *)(DAT_003e37fc + param_1))) +
                 0x2000U) {
      *(short *)(param_1 + 0xcc6) = *(short *)(param_1 + 0xcc6) + -1;
      return;
    }
    *(undefined2 *)(param_1 + 0xcc6) = 0;
  }
  sVar1 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar1 < 0) {
    sVar1 = -sVar1;
  }
  iVar2 = FUN_00364b1c(param_2,param_1);
  if (iVar2 == 0) {
    if (*(short *)(param_1 + 0xcc4) == 0) {
      iVar2 = FUN_00364c18(param_2,param_1,0);
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      *(short *)(param_1 + 0xcc4) = *(short *)(param_1 + 0xcc4) + -1;
      if (DAT_003e3800 <= sVar1) {
        return;
      }
      *(undefined2 *)(param_1 + 0xcc4) = 0;
    }
    sVar1 = *(short *)(iVar3 + 0xbe) - *(short *)(param_1 + 0xbe);
    if (sVar1 < 0) {
      sVar1 = -sVar1;
    }
    if (((*(int *)(param_1 + 0x98) < DAT_003e3804) && (*(char *)(DAT_003e3808 + iVar3) != '\0')) &&
       (7999 < sVar1)) {
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      FUN_00362de8(param_1);
      return;
    }
    iVar3 = *(int *)(param_1 + 0xccc) + -1;
    *(int *)(param_1 + 0xccc) = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_0036f18c(param_1,DAT_003e380c);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      FUN_00362a4c(DAT_003e3810,param_1 + 0x1e0,DAT_003e3830);
      *(undefined4 *)(param_1 + 0xcb8) = 10;
      *(undefined4 *)(param_1 + 0xcc0) = DAT_003e3834;
      if ((*(uint *)(DAT_003e3828 + param_2) & 0x5f) == 0) {
        FUN_00375bcc(param_1,DAT_003e382c);
        return;
      }
    }
  }
  return;
}
