// OoT3D decomp @ 0035f97c  name=FUN_0035f97c  size=156

undefined4 FUN_0035f97c(int param_1)

{
  ushort uVar1;
  bool bVar2;

  if (*(float *)(param_1 + 100) <= DAT_0035faec) {
    bVar2 = *(short *)(DAT_0035faf0 + param_1) != 0;
    uVar1 = 0;
    if (bVar2) {
      uVar1 = *(ushort *)(param_1 + 0x90);
    }
    if (bVar2 && (uVar1 & 1) != 0) {
      FUN_00375bcc(param_1,DAT_0035faf4);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return 0;
}
