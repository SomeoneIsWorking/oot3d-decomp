// OoT3D decomp @ 0032aee0  name=FUN_0032aee0  size=336

void FUN_0032aee0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;

  piVar3 = (int *)(param_1 + 0x1d0);
  uVar2 = (uint)*(ushort *)(param_2 + 0x22b8);
  piVar4 = (int *)(param_1 + 0x1e0);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032b030 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)uVar2 < (int)(DAT_0032b034 / fVar6 + DAT_0032b038)) {
    *(undefined4 *)(param_1 + 0x1d4) = 0xff;
    *(undefined4 *)(param_1 + 0x1d8) = 200;
    *piVar3 = 100;
    *piVar4 = 0xff;
    *(undefined4 *)(param_1 + 0x1e4) = 0x78;
    *(undefined4 *)(param_1 + 0x1e8) = 100;
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
    *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + -1;
    return;
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032b030 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)uVar2 < (int)(DAT_0032b03c / fVar6 + DAT_0032b038)) {
    fVar5 = (float)FUN_0032c66c(0xaa,0xa0,uVar2,0,0);
    fVar8 = DAT_0032b050;
    fVar1 = DAT_0032b04c;
    fVar6 = DAT_0032b048;
    *piVar3 = (int)(DAT_0032b044 + fVar5 * DAT_0032b040);
    fVar8 = DAT_0032b054 + fVar5 * fVar8;
    iVar7 = (int)(fVar1 + fVar5 * fVar6);
    *(int *)(param_1 + 0x1d4) = iVar7;
    fVar6 = DAT_0032b058;
    *(int *)(param_1 + 0x1d8) = (int)fVar8;
    fVar1 = DAT_0032b05c;
    *piVar4 = iVar7;
    *(int *)(param_1 + 0x1e4) = (int)(fVar1 + fVar5 * fVar6);
  }
  else {
    *piVar3 = 100;
    *(undefined4 *)(param_1 + 0x1d4) = 100;
    *(undefined4 *)(param_1 + 0x1d8) = 100;
    *piVar4 = 100;
    *(undefined4 *)(param_1 + 0x1e4) = 100;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 100;
  return;
}
