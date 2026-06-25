// OoT3D decomp @ 0032d700  name=FUN_0032d700  size=296

void FUN_0032d700(float param_1,undefined4 param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int unaff_r4;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  iVar4 = DAT_0032d834;
  fVar1 = DAT_0032d830;
  iVar3 = DAT_0032d82c;
  fVar2 = DAT_0032d828;
  if (DAT_0032d82c < (int)param_1) {
    *(float *)(DAT_0032d834 + 0xc0) = DAT_0032d828;
  }
  if (iVar3 < (int)param_1) {
    *(float *)(iVar4 + 200) = fVar1;
    fVar11 = fVar2;
  }
  else {
    fVar11 = param_1 * DAT_0032d838;
    fVar10 = DAT_0032d848 + fVar11 * DAT_0032d844;
    *(float *)(iVar4 + 0xc0) = DAT_0032d840 + fVar11 * DAT_0032d83c;
    *(float *)(iVar4 + 200) = fVar10;
  }
  FUN_0037547c(param_3,param_2,4,DAT_0032d850 + 8,DAT_0032d850,DAT_0032d84c);
  fVar10 = DAT_0032d854;
  if (unaff_r4 + 0xfeffff4fU < 0xd) {
    uVar6 = 1;
    fVar1 = DAT_0032d854;
    fVar11 = fVar2;
  }
  else {
    uVar6 = *DAT_0032d858 * DAT_0032d85c + (*DAT_0032d858 >> 1);
    *DAT_0032d858 = uVar6;
    uVar6 = uVar6 & 1;
  }
  iVar3 = DAT_0032d86c;
  uVar5 = DAT_0032d84c;
  bVar9 = param_4 < 0;
  bVar8 = false;
  if (param_4 != 0) {
    bVar9 = param_1 < fVar1;
    bVar8 = NAN(param_1) || NAN(fVar1);
  }
  if (((param_4 != 0 && param_1 != fVar1) && bVar9 == bVar8) && (uVar6 != 0)) {
    iVar7 = DAT_0032d864;
    if (param_3 < DAT_0032d860) {
      iVar7 = DAT_0032d860 - 0x1a;
    }
    *(float *)(iVar4 + 0xc4) = fVar10 + fVar11 * DAT_0032d868;
    FUN_0037547c(iVar7,param_2,4,iVar3 + 4,iVar3,uVar5);
  }
  return;
}

