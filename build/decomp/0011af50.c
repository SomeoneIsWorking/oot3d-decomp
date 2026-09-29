// OoT3D decomp @ 0011af50  name=FUN_0011af50  size=452

void FUN_0011af50(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar1 = DAT_0011b11c;
  iVar4 = *(int *)(param_2 + 0x20ac);
  iVar3 = 0;
  fVar7 = *(float *)(param_1 + 0x58) * DAT_0011b114 * DAT_0011b118;
  fVar9 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
  fVar11 = *(float *)(iVar4 + 0x2c) - *(float *)(param_1 + 0x2c);
  fVar8 = *(float *)(iVar4 + 0x30) - *(float *)(param_1 + 0x30);
  fVar12 = SQRT(fVar9 * fVar9 + fVar8 * fVar8);
  if (((DAT_0011b11c <= fVar11) && (fVar11 <= fVar7)) &&
     (fVar11 = fVar11 - DAT_0011b11c,
     fVar12 <= DAT_0011b120 + DAT_0011b124 * (fVar11 / (fVar7 - DAT_0011b11c)))) {
    iVar3 = 1;
  }
  bVar5 = fVar11 == DAT_0011b11c;
  bVar6 = DAT_0011b11c <= fVar11;
  if (!bVar6 || bVar5) {
    bVar5 = fVar12 == DAT_0011b120;
    bVar6 = DAT_0011b120 <= fVar12;
  }
  if (!bVar6 || bVar5) {
    iVar3 = 2;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0011b128;
  }
  else {
    fVar10 = *(float *)(iVar4 + 0x2c) - (*(float *)(param_1 + 0x2c) - DAT_0011b12c);
    fVar8 = (float)FUN_003696ec(-fVar9,-fVar8);
    fVar7 = DAT_0011b140;
    uVar2 = DAT_0011b13c;
    *(short *)(DAT_0011b134 + iVar4) = (short)(int)(fVar8 * DAT_0011b130);
    if (DAT_0011b138 < (int)fVar12) {
      iVar3 = iVar4 + 0x229c;
      fVar8 = fVar7;
      fVar7 = fVar12;
    }
    else {
      *(float *)(iVar4 + 0x229c) = fVar1;
      FUN_0036e168(*(undefined4 *)(param_1 + 0x28),uVar2,fVar7,fVar1,iVar4 + 0x28);
      fVar8 = *(float *)(param_1 + 0x30);
      iVar3 = iVar4 + 0x30;
    }
    FUN_0036e168(fVar8,uVar2,fVar7,fVar1,iVar3);
    if ((fVar1 < fVar10) &&
       (FUN_0036e168(DAT_0011b148,DAT_0011b144,fVar10,iVar4 + 100),
       (uint)DAT_0011b14c < (uint)fVar11)) {
      *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x80000000;
    }
  }
  return;
}
