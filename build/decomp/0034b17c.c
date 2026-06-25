// OoT3D decomp @ 0034b17c  name=FUN_0034b17c  size=224

void FUN_0034b17c(int param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = DAT_0034b260;
  fVar6 = *(float *)(param_1 + 100);
  fVar4 = *(float *)(*(int *)(param_1 + 0x170c) + 0x28);
  if (fVar6 < DAT_0034b260) {
    fVar4 = fVar4 + DAT_0034b264;
  }
  fVar7 = DAT_0034b25c;
  if (*(float *)(param_1 + 0x88) < fVar4) {
    fVar4 = DAT_0034b260;
    if (DAT_0034b260 < fVar6) {
      fVar4 = fVar6 * DAT_0034b268;
    }
    fVar4 = DAT_0034b26c - fVar4;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1710);
    fVar5 = DAT_0034b270;
    if (*(int *)(param_1 + 0x284) == 0x34) {
      fVar5 = DAT_0034b274;
    }
    bVar3 = (uVar2 & 0x80) != 0;
    if (!bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    if (((bVar3 || uVar2 != 1) ||
        (fVar4 = DAT_0034b278, fVar6 < fVar5 != (NAN(fVar6) || NAN(fVar5)))) &&
       (fVar4 = DAT_0034b280, fVar7 = DAT_0034b27c, fVar6 < DAT_0034b260)) {
      fVar4 = DAT_0034b280 + fVar6 * DAT_0034b278;
    }
    if (DAT_0034b284 < (int)*(float *)(param_1 + 0x88)) {
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x400;
    }
  }
  *(float *)(param_1 + 100) = fVar6 + fVar4;
  fVar4 = ((fVar6 + fVar4) - fVar7) * fVar4;
  if (fVar4 != fVar1 && fVar4 < fVar1 == (NAN(fVar4) || NAN(fVar1))) {
    *(float *)(param_1 + 100) = fVar7;
  }
  *(float *)(param_1 + 0x70) = fVar1;
  return;
}

