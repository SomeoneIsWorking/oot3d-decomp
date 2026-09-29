// OoT3D decomp @ 003a5418  name=FUN_003a5418  size=432

void FUN_003a5418(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;

  fVar4 = DAT_003a55cc;
  piVar3 = DAT_003a55c8;
  fVar9 = *(float *)(param_1 + 0xbc4);
  iVar6 = (int)*(short *)(*DAT_003a55c8 + 0x110);
  iVar7 = (int)*(short *)(*DAT_003a55c8 + 0x145a);
  fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = DAT_003a55cc / fVar10;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar9) << 0x1f | (uint)(fVar10 == fVar9) << 0x1e;
  uVar8 = uVar1 | (uint)(NAN(fVar10) || NAN(fVar9)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
    fVar9 = (float)VectorSignedToFloat(iVar7,(byte)(uVar8 >> 0x15) & 3);
    *(float *)(param_1 + 0x6c) = DAT_003a55d4 + fVar9 * DAT_003a55d0;
  }
  else {
    fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(uVar8 >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(uVar8 >> 0x15) & 3);
    *(float *)(param_1 + 0x6c) =
         ((DAT_003a55d4 + fVar11 * DAT_003a55d0) / (DAT_003a55cc / fVar10)) * fVar9;
  }
  uVar5 = DAT_003a55d8;
  *(undefined4 *)(param_1 + 100) = DAT_003a55d8;
  FUN_00376864(param_1);
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar12 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a55dc;
  FUN_00376340(DAT_003a55e8,DAT_003a55e4,DAT_003a55e0,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar12;
  fVar9 = DAT_003a55ec;
  if (*(int *)(param_1 + 0xbd8) == 0) {
    iVar6 = FUN_0036e5e0(DAT_003a55f0,DAT_003a55ec,param_1 + 0x1a4);
    if ((iVar6 != 0) || (iVar6 = FUN_0036e5e0(DAT_003a55f4,fVar9,param_1 + 0x1a4), iVar6 != 0)) {
      FUN_0037547c(0x1000004,param_1 + 0x28,4,DAT_003a55fc,DAT_003a55fc,DAT_003a55f8);
    }
  }
  fVar9 = *(float *)(param_1 + 0xbc4) + fVar9;
  *(float *)(param_1 + 0xbc4) = fVar9;
  uVar12 = DAT_003a5600;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(uVar8 >> 0x15) & 3);
  if (fVar4 / fVar10 <= fVar9) {
    *(undefined4 *)(param_1 + 0xbbc) = 0xc;
    *(undefined4 *)(param_1 + 0xbc4) = uVar12;
    *(undefined4 *)(param_1 + 100) = uVar5;
  }
  return;
}
