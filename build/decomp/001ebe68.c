// OoT3D decomp @ 001ebe68  name=FUN_001ebe68  size=148

undefined4 FUN_001ebe68(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  short sVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  bVar3 = *(int *)(param_1 + 0x13c) == 0;
  if (!bVar3) {
    bVar3 = (*(uint *)(param_1 + 4) & 1) == 0;
  }
  if (bVar3) {
    return 1;
  }
  if (param_3 == 0) {
    sVar2 = (*(short *)(param_1 + 0x92) + -0x8000) - *(short *)(param_2 + 0xbe);
    if (sVar2 < 0) {
      sVar2 = -sVar2;
    }
    if ((*(int *)(param_2 + 0x16f8) != 0) || (fVar4 = DAT_001ebf00, sVar2 <= DAT_001ebefc)) {
      fVar4 = *(float *)(param_1 + 0x94);
    }
    pfVar1 = (float *)(DAT_001ebf04 + *(char *)(param_1 + 0x1f) * 8);
    fVar4 = pfVar1[1] * fVar4;
    fVar5 = *pfVar1;
    if (fVar5 == fVar4 || fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4))) {
      return 1;
    }
  }
  return 0;
}

