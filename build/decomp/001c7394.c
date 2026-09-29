// OoT3D decomp @ 001c7394  name=FUN_001c7394  size=532

void FUN_001c7394(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;

  fVar3 = DAT_001c7734;
  iVar2 = DAT_001c7730;
  fVar1 = DAT_001c772c;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                    0x22),(byte)(in_fpscr >> 0x15) & 3);
  if ((uint)DAT_001c772c < (uint)fVar4) {
    *(undefined4 *)(param_1 + 0x2f8) = 0xff;
  }
  else if ((int)fVar4 < DAT_001c7730) {
    *(int *)(param_1 + 0x2f8) = 0xff - (int)((fVar4 - DAT_001c7738) * DAT_001c773c * DAT_001c7734);
  }
  else {
    *(undefined4 *)(param_1 + 0x2f8) = 0xa0;
  }
  if ((int)fVar4 < iVar2) {
    *(undefined4 *)(param_1 + 0x2fc) = 0xff;
  }
  else if ((int)fVar4 < DAT_001c7740) {
    *(int *)(param_1 + 0x2fc) = 0xff - (int)((fVar4 - DAT_001c7744) * DAT_001c7748 * fVar3);
  }
  else {
    *(undefined4 *)(param_1 + 0x2fc) = 0xa0;
  }
  if ((uint)DAT_001c774c < (uint)fVar4) {
    *(undefined4 *)(param_1 + 0x300) = 0xff;
  }
  else if ((uint)fVar1 < (uint)fVar4) {
    *(int *)(param_1 + 0x300) = 0xff - (int)((fVar4 - DAT_001c7750) * DAT_001c7754 * fVar3);
  }
  else {
    *(undefined4 *)(param_1 + 0x300) = 0xa0;
  }
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x300);
  if ((*(byte *)(param_1 + 0x1cd) & 2) == 0) {
    if (DAT_001c77b4 <= *(int *)(param_1 + 0x98)) {
      return;
    }
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1bc);
    return;
  }
  *(byte *)(param_1 + 0x1cd) = *(byte *)(param_1 + 0x1cd) & 0xfd;
  FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  *(undefined4 *)(param_1 + 0x308) = 1;
  FUN_0036b940(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  FUN_00350f34(param_1,param_1 + 0x310,0);
  FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  if ((*(ushort *)(param_1 + 0x1c) & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((*(ushort *)(param_1 + 0x1c) & 0xf) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
