// OoT3D decomp @ 003410a8  name=FUN_003410a8  size=216

int FUN_003410a8(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  iVar3 = *(int *)(param_1 + 0x1028);
  iVar6 = *(int *)(param_1 + 0x1024);
  if (iVar6 <= iVar3 + 1) {
    return (int)*(short *)(param_1 + 0xbe);
  }
  iVar5 = *(int *)(param_1 + 0x1020);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = iVar3 - iVar6;
  }
  if (iVar1 < 0 == (iVar5 != 0 && SBORROW4(iVar3,iVar6))) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = (short *)(*(int *)(iVar5 + 4) + iVar3 * 6);
  }
  if (iVar5 == 0) {
    psVar4 = (short *)0x0;
  }
  else {
    psVar4 = (short *)(*(int *)(iVar5 + 4) + (iVar3 + 1) * 6);
  }
  if (psVar4 == (short *)0x0 || psVar2 == (short *)0x0) {
    return 0;
  }
  fVar7 = (float)VectorSignedToFloat((int)*psVar4 - (int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)psVar4[2] - (int)psVar2[2],(byte)(in_fpscr >> 0x15) & 3);
  if (fVar7 != DAT_00341180 || fVar8 != DAT_00341180) {
    fVar7 = (float)FUN_003696ec();
    return (int)(short)(int)(fVar7 * DAT_00341184);
  }
  return 0;
}
