// OoT3D decomp @ 0046fcf8  name=FUN_0046fcf8  size=804

void FUN_0046fcf8(int param_1,int param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  int *piVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  fVar8 = DAT_00470004;
  fVar2 = DAT_00470000;
  iVar6 = *DAT_0046fff4;
  piVar3 = (int *)*DAT_0046fff8;
  iVar7 = param_2 - DAT_0046fffc;
  if (param_1 == 0xde1) {
    if (*(int *)(iVar6 + *(int *)(iVar6 + 0x58) * 4 + 0x5c) != 0) {
      piVar3 = (int *)piVar3[*(int *)(iVar6 + 0x58) + 0x204];
    }
    piVar3 = (int *)*piVar3;
    if (param_2 == DAT_0046fffc) goto LAB_0046ff50;
    if (DAT_0046fffc <= param_2) {
      if (iVar7 == 0x5937) goto LAB_00470008;
      if (iVar7 == 0x598e) {
        if (*param_3 == DAT_00470004) goto LAB_0046fecc;
LAB_0046fec4:
        uVar4 = 1;
        goto LAB_0046fed0;
      }
      goto joined_r0x0046fe14;
    }
    if (param_2 == 0x1004) {
      fVar9 = *param_3;
      fVar10 = DAT_00470004;
      if ((DAT_00470004 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = DAT_00470000;
      }
      piVar3[6] = (int)fVar10;
      fVar9 = param_3[1];
      fVar10 = fVar8;
      if ((fVar8 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = fVar2;
      }
      piVar3[7] = (int)fVar10;
      fVar9 = param_3[2];
      fVar10 = fVar8;
      if ((fVar8 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = fVar2;
      }
      piVar3[8] = (int)fVar10;
      fVar10 = param_3[3];
      goto joined_r0x0046fe94;
    }
  }
  else {
    if (param_1 != 0x8513) {
      return;
    }
    if (*(int *)(iVar6 + *(int *)(iVar6 + 0x58) * 4 + 0x68) == 0) {
      piVar3 = (int *)piVar3[1];
    }
    else {
      piVar3 = *(int **)piVar3[*(int *)(iVar6 + 0x58) + 0x207];
    }
    if (param_2 == DAT_0046fffc) {
LAB_0046ff50:
      piVar3[3] = (int)*param_3;
      goto LAB_0046fed4;
    }
    if (DAT_0046fffc <= param_2) {
      if (iVar7 == 0x5937) {
LAB_00470008:
        piVar3[5] = (int)*param_3;
        goto LAB_0046fed4;
      }
      if (iVar7 == 0x598e) {
        if (*param_3 != DAT_00470004) goto LAB_0046fec4;
LAB_0046fecc:
        uVar4 = 0;
LAB_0046fed0:
        *(undefined1 *)(piVar3 + 0xc) = uVar4;
        goto LAB_0046fed4;
      }
joined_r0x0046fe14:
      if (iVar7 != 0x5cfe) {
        return;
      }
      piVar3[10] = (int)*param_3;
      goto LAB_0046fed4;
    }
    if (param_2 == 0x1004) {
      fVar9 = *param_3;
      fVar10 = DAT_00470004;
      if ((DAT_00470004 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = DAT_00470000;
      }
      piVar3[6] = (int)fVar10;
      fVar9 = param_3[1];
      fVar10 = fVar8;
      if ((fVar8 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = fVar2;
      }
      piVar3[7] = (int)fVar10;
      fVar9 = param_3[2];
      fVar10 = fVar8;
      if ((fVar8 < fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)fVar9)) {
        fVar10 = fVar2;
      }
      piVar3[8] = (int)fVar10;
      fVar10 = param_3[3];
joined_r0x0046fe94:
      if ((fVar8 < fVar10) && (fVar8 = fVar2, (int)fVar10 < 0x3f800001)) {
        fVar8 = fVar10;
      }
      piVar3[9] = (int)fVar8;
      goto LAB_0046fed4;
    }
  }
  if (param_2 == 0x2800) {
    *piVar3 = (int)*param_3;
  }
  else if (param_2 == 0x2801) {
    piVar3[1] = (int)*param_3;
  }
  else {
    if (param_2 != 0x2802) {
      return;
    }
    piVar3[2] = (int)*param_3;
  }
LAB_0046fed4:
  uVar5 = *(int *)(iVar6 + 0x58) + 10;
  uVar1 = uVar5 >> 5;
  *(uint *)(iVar6 + uVar1 * 4) = *(uint *)(iVar6 + uVar1 * 4) | 1 << (uVar5 & 0x1f);
  return;
}
