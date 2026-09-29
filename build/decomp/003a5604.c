// OoT3D decomp @ 003a5604  name=FUN_003a5604  size=328

void FUN_003a5604(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;

  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  fVar3 = DAT_003a5750;
  fVar2 = DAT_003a574c;
  fVar9 = *(float *)(param_1 + 0xbc4) + DAT_003a574c;
  iVar6 = *(int *)(param_2 + 0x20ac);
  *(float *)(param_1 + 0xbc4) = fVar9;
  uVar8 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar6 + 0x6c) == fVar3) << 0x1e;
  if ((SUB41(uVar8 >> 0x1e,0)) && (DAT_003a5754 <= (int)fVar9)) {
    iVar5 = *(int *)(param_2 + 0x20ac);
    psVar7 = (short *)(iVar6 + 0xbe);
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar5 + 0x12c8);
    *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar5 + 0x12cc);
    fVar9 = *(float *)(iVar5 + 0x12d0);
    *(float *)(iVar6 + 0x30) = fVar9;
    fVar9 = (float)FUN_003696ec(*(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28),
                                *(float *)(param_1 + 0x30) - fVar9);
    iVar5 = (int)(short)(int)(fVar9 * DAT_003a5758);
    if (*psVar7 == iVar5) {
      bVar1 = true;
      goto LAB_003a56ec;
    }
    FUN_00375a18(psVar7,iVar5,0x14,DAT_003a575c,100);
    *(short *)(iVar6 + 0x36) = *psVar7;
  }
  bVar1 = false;
LAB_003a56ec:
  if (bVar1) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0x13);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
    FUN_00353020(fVar2,fVar3,uVar4,DAT_003a5760,param_1 + 0x1a4,DAT_003a5764,2);
    *(undefined4 *)(param_1 + 0xbbc) = 0x14;
    if (*(int *)(param_1 + 0xbd0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xbd0) + 0x4cc) = 3;
    }
  }
  return;
}
