// OoT3D decomp @ 0037bb4c  name=FUN_0037bb4c  size=256

void FUN_0037bb4c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;

  uVar2 = DAT_0037be48;
  if (((*(uint *)(DAT_0037be44 + 8) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0037be4c), puVar3 = DAT_0037be50, iVar4 != 0)) {
    *DAT_0037be50 = uVar2;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
  }
  if (*(short *)(param_1 + 0x1c0) != 0) {
    sVar1 = *(short *)(param_1 + 0x1c0) + -1;
    iVar4 = (int)sVar1;
    *(short *)(param_1 + 0x1c0) = sVar1;
    if (iVar4 != 0) {
      iVar5 = (int)((ulonglong)((longlong)DAT_0037be58 * (longlong)iVar4) >> 0x20);
      iVar5 = (iVar5 - (iVar5 >> 0x1f)) * -3;
      if (iVar4 + iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0(0,iVar5,(int)((longlong)DAT_0037be58 * (longlong)iVar4));
      }
      goto LAB_0037bdf8;
    }
  }
  *(undefined4 *)(param_1 + 0x13c) = DAT_0037be54;
LAB_0037bdf8:
  iVar4 = DAT_0037be88;
  if ((*(short *)(param_1 + 0x1c0) < 4) && (*(char *)(param_1 + 0x1c2) == '\0')) {
    *(undefined1 *)(param_1 + 0x1c2) = 1;
    *(uint *)(iVar4 + 0x360) = *(uint *)(iVar4 + 0x360) | 1 << (*(ushort *)(param_1 + 0x1c) & 0xff);
    FUN_00374428(param_1);
  }
  return;
}
