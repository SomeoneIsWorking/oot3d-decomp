// OoT3D decomp @ 00346c48  name=FUN_00346c48  size=156

undefined4 FUN_00346c48(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  bVar1 = DAT_00346d78 <= *(float *)(param_3 + 0x221c);
  uVar3 = 7;
  iVar4 = *(int *)(DAT_00346d7c + param_1);
  if (bVar1) {
    iVar4 = iVar4 + 0x2000;
  }
  bVar5 = false;
  if (bVar1) {
    bVar5 = DAT_00346d78 <= *(float *)(iVar4 + 0x21c);
  }
  if (bVar5) {
    if (*(short *)(DAT_00346d80 + 0x44) < 0x50) {
      uVar3 = 0xf;
    }
    fVar2 = DAT_00346d78;
    if (*(char *)(param_3 + 0x2aa4) != -1) {
      fVar2 = DAT_00346d88;
    }
    if (((*(uint *)(param_1 + 0x5bf4) & uVar3) == 0) || (*(char *)(param_3 + 0x2a98) != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0(fVar2);
    }
  }
  return 0;
}
