// OoT3D decomp @ 0042b194  name=FUN_0042b194  size=852

void FUN_0042b194(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_15c;
  float local_158;
  float afStack_154 [29];
  float afStack_e0 [28];
  float fStack_70;
  float local_6c [5];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [5];
  float local_28;
  float local_24;
  float local_20;

  fVar1 = DAT_0042b500;
  FUN_00371738(afStack_e0,DAT_0042b504,0x74);
  FUN_00371738(afStack_154,DAT_0042b508,0x74);
  iVar2 = DAT_0042b50c;
  if ((*(int *)(DAT_0042b50c + 0x48) == 0) || (iVar3 = FUN_002fcdd4(), iVar3 != 0)) {
    local_15c = DAT_0042b510;
    local_158 = DAT_0042b514;
  }
  else {
    local_15c = fVar1;
    local_158 = fVar1;
  }
  FUN_002f9430(*(undefined4 *)(iVar2 + 0x18),&local_15c,1,7);
  if (*(int *)(iVar2 + 0x54) < 3) {
    iVar3 = *(int *)(iVar2 + 0x50);
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x4c);
  }
  if ((iVar3 == -1) || (0x1c < iVar3)) {
    pfVar4 = &local_40;
    iVar3 = 4;
    do {
      iVar3 = iVar3 + -1;
      pfVar4[1] = fVar1;
      pfVar4 = pfVar4 + 2;
      *pfVar4 = fVar1;
    } while (iVar3 != 0);
  }
  else {
    local_3c[4] = afStack_e0[iVar3] * DAT_0042b518;
    local_3c[0] = local_3c[4];
    local_3c[2] = (afStack_e0[iVar3] + DAT_0042b520) * DAT_0042b518;
    local_3c[1] = (DAT_0042b51c - afStack_154[iVar3]) * DAT_0042b518;
    local_28 = (DAT_0042b51c - (afStack_154[iVar3] + DAT_0042b524)) * DAT_0042b518;
    local_3c[3] = local_3c[1];
    local_24 = local_3c[2];
    local_20 = local_28;
  }
  FUN_00446f9c(*(undefined4 *)(iVar2 + 0x18),local_3c,1);
  iVar3 = *(int *)(iVar2 + 0x54);
  fVar6 = fVar1;
  fVar8 = fVar1;
  if (iVar3 == 1 || iVar3 == 3) {
    fVar6 = DAT_0042b52c;
    fVar8 = DAT_0042b528;
  }
  fVar5 = DAT_0042b530;
  fVar7 = DAT_0042b534;
  fVar9 = fVar1;
  fVar10 = fVar1;
  if ((iVar3 != 2) &&
     ((iVar3 == 5 ||
      ((fVar5 = DAT_0042b538, fVar7 = DAT_0042b53c, fVar9 = DAT_0042b548, fVar10 = DAT_0042b54c,
       iVar3 != 6 && (fVar5 = fVar8, fVar7 = fVar6, fVar9 = fVar1, fVar10 = fVar1, iVar3 == 7))))))
  {
    fVar5 = DAT_0042b540;
    fVar7 = DAT_0042b544;
    fVar9 = DAT_0042b538;
    fVar10 = DAT_0042b53c;
  }
  fVar8 = fVar1;
  switch(*(undefined4 *)(iVar2 + 0x48)) {
  case 1:
  case 2:
  case 4:
    fVar8 = DAT_0042b550;
    break;
  case 3:
  case 5:
    fVar8 = DAT_0042b554;
  }
  local_6c[0] = fVar9 + DAT_0042b558;
  local_6c[1] = fVar5 + fVar8 + DAT_0042b55c;
  local_6c[3] = fVar10 + DAT_0042b560;
  local_6c[2] = fVar1;
  local_58 = fVar1;
  local_50 = fVar7 + fVar8 + DAT_0042b564;
  local_4c = fVar1;
  local_40 = fVar1;
  local_6c[4] = local_6c[1];
  local_54 = local_6c[0];
  local_48 = local_6c[3];
  local_44 = local_50;
  iVar3 = FUN_002fcdd4();
  if (iVar3 != 0) {
    pfVar4 = &fStack_70;
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
      pfVar4[1] = fVar1;
      pfVar4 = pfVar4 + 2;
      *pfVar4 = fVar1;
    } while (iVar3 != 0);
  }
  FUN_002f2c54(*(undefined4 *)(iVar2 + 0x18),local_6c,1);
  iVar3 = *(int *)(iVar2 + 0x54);
  fVar5 = fVar1;
  fVar6 = fVar1;
  if (iVar3 == 1 || iVar3 == 3) {
    fVar5 = DAT_0042b56c;
    fVar6 = DAT_0042b568;
  }
  if (iVar3 == 2) {
    fVar5 = DAT_0042b574;
    fVar6 = DAT_0042b570;
  }
  local_6c[0] = fVar9 + DAT_0042b578;
  local_6c[1] = fVar6 + fVar8 + DAT_0042b57c;
  local_6c[3] = fVar10 + DAT_0042b580;
  local_6c[2] = fVar1;
  local_58 = fVar1;
  local_50 = fVar5 + fVar8 + DAT_0042b584;
  local_4c = fVar1;
  local_40 = fVar1;
  local_6c[4] = local_6c[1];
  local_54 = local_6c[0];
  local_48 = local_6c[3];
  local_44 = local_50;
  iVar3 = FUN_002fcdd4();
  if (iVar3 != 0) {
    pfVar4 = &fStack_70;
    iVar3 = 8;
    do {
      pfVar4[1] = fVar1;
      pfVar4 = pfVar4 + 2;
      iVar3 = iVar3 + -1;
      *pfVar4 = fVar1;
    } while (iVar3 != 0);
  }
  FUN_002f2c54(*(undefined4 *)(iVar2 + 0x18),local_6c,0);
  iVar3 = *(int *)(iVar2 + 0x54) + 1;
  *(int *)(iVar2 + 0x54) = iVar3;
  if (8 < iVar3) {
    *(undefined4 *)(iVar2 + 0x54) = DAT_0042b588;
  }
  return;
}
