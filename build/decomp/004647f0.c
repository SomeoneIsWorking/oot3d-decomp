// OoT3D decomp @ 004647f0  name=FUN_004647f0  size=664

/* WARNING: Type propagation algorithm not settling */

void FUN_004647f0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint *puVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint in_fpscr;
  undefined4 uVar12;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  float fVar14;
  
  if (*(int *)(param_1 + 0x9c) == 0) {
    return;
  }
  FUN_0047e314(param_1,*(undefined4 *)(param_1 + 0x84));
  pcVar4 = DAT_00464abc;
  uVar3 = DAT_00464ab8;
  uVar12 = DAT_00464ab4;
  bVar2 = false;
  fVar14 = extraout_s1;
  switch(*(undefined1 *)(param_1 + 0x83)) {
  case 0:
  case 6:
switchD_0046482c_caseD_0:
    if (pcVar4[2] == '\0' && pcVar4[3] == '\0') {
      iVar9 = *(int *)(param_1 + 0x9c);
      uVar12 = uVar3;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x9c);
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0x9c) + 0x9c);
    }
    if ((iVar9 == -1) || (iVar9 = FUN_0047d7c0(), fVar14 = extraout_s1_00, iVar9 == 0))
    goto switchD_0046482c_caseD_0;
    bVar2 = true;
    if (pcVar4[3] == '\0') {
      iVar9 = *(int *)(param_1 + 0x9c);
      uVar12 = uVar3;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x9c);
    }
    break;
  case 2:
  case 3:
    if (DAT_00464abc[3] == '\0') {
      iVar9 = *(int *)(param_1 + 0x9c);
      uVar12 = uVar3;
      break;
    }
    iVar9 = *(int *)(param_1 + 0x9c);
    if (iVar9 == 0) goto switchD_0046482c_caseD_4;
    goto code_r0x0046491c;
  default:
    goto switchD_0046482c_caseD_4;
  }
  if (iVar9 != 0) {
code_r0x0046491c:
    *(undefined4 *)(iVar9 + 0xbc) = uVar12;
  }
switchD_0046482c_caseD_4:
  fVar6 = DAT_00464ac8;
  puVar5 = DAT_00464ac0;
  fVar13 = *(float *)(param_1 + 0x94);
  if (*(char *)(param_1 + 0x98) != '\0') {
    uVar7 = *DAT_00464ac0 * DAT_00464ac4 + (*DAT_00464ac0 >> 1);
    *DAT_00464ac0 = uVar7;
    fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xf,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar13 - fVar14 * fVar6;
  }
  fVar6 = DAT_00464acc;
  pfVar8 = *(float **)(param_1 + 0x88);
  if (pfVar8 != (float *)0x0) {
    fVar14 = *pfVar8;
  }
  cVar1 = pcVar4[1];
  if (pfVar8 != (float *)0x0) {
    fVar13 = fVar14 * fVar13;
  }
  if (*pcVar4 == '\0' && cVar1 == '\0') goto LAB_00464a10;
  switch(*(undefined1 *)(param_1 + 0x83)) {
  case 0:
  case 6:
switchD_00464988_caseD_0:
    cVar1 = *pcVar4;
    break;
  case 1:
    if (!bVar2) goto switchD_00464988_caseD_0;
    break;
  case 2:
  case 3:
    if (cVar1 == '\0') goto LAB_00464a10;
    goto LAB_004649e0;
  default:
    goto LAB_00464a10;
  }
  if (cVar1 != '\0') {
LAB_004649e0:
    uVar7 = *puVar5;
    uVar7 = uVar7 * DAT_00464ac4 + (uVar7 >> 1);
    *puVar5 = uVar7;
    fVar14 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (fVar14 * fVar6 - DAT_00464ad0) + fVar13;
  }
LAB_00464a10:
  if (*(int *)(param_1 + 0x9c) != 0) {
    *(float *)(*(int *)(param_1 + 0x9c) + 0xb8) = fVar13;
  }
  pfVar8 = *(float **)(param_1 + 0x8c);
  iVar9 = 0;
  if (pfVar8 != (float *)0x0) {
    fVar13 = *pfVar8;
    iVar9 = *(int *)(param_1 + 0x9c);
  }
  if (pfVar8 != (float *)0x0 && iVar9 != 0) {
    FUN_002d4a10(fVar13,iVar9,0);
  }
  if (*(char *)(param_1 + 0x83) != '\x04') {
    pcVar11 = *(char **)(param_1 + 0x90);
    iVar9 = 0;
    if (pcVar11 != (char *)0x0) {
      iVar9 = (int)*pcVar11;
    }
    iVar10 = *(int *)(pcVar4 + 0x10) + *(int *)(pcVar4 + 0xc);
    if (pcVar11 != (char *)0x0) {
      iVar10 = iVar10 + iVar9;
    }
    if (0x7f < iVar10) {
      iVar10 = 0x7f;
    }
    fVar14 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 * DAT_00464ad4 * DAT_00464ad8;
    if (0x3f800000 < (int)fVar14) {
      fVar14 = DAT_00464adc;
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      *(float *)(*(int *)(param_1 + 0x9c) + 0xcc) = fVar14;
      return;
    }
  }
  return;
}

