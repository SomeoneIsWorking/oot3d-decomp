// OoT3D decomp @ 00482528  name=FUN_00482528  size=720

/* WARNING: Type propagation algorithm not settling */

void FUN_00482528(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  int iVar8;

  iVar2 = DAT_00482808;
  iVar8 = DAT_00482804;
  iVar6 = *DAT_004827f8;
  piVar3 = (int *)*DAT_004827fc;
  iVar7 = param_2 - DAT_00482800;
  if (param_1 == 0xde1) {
    if (*(int *)(iVar6 + *(int *)(iVar6 + 0x58) * 4 + 0x5c) != 0) {
      piVar3 = (int *)piVar3[*(int *)(iVar6 + 0x58) + 0x204];
    }
    piVar3 = (int *)*piVar3;
    if (param_2 == DAT_00482800) goto LAB_00482724;
    if (DAT_00482800 <= param_2) goto joined_r0x00482628;
    if (param_2 == 0x1004) {
      iVar4 = *param_3;
      iVar7 = DAT_00482804;
      if ((0 < iVar4) && (iVar7 = DAT_00482808, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[6] = iVar7;
      iVar4 = param_3[1];
      iVar7 = iVar8;
      if ((0 < iVar4) && (iVar7 = iVar2, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[7] = iVar7;
      iVar4 = param_3[2];
      iVar7 = iVar8;
      if ((0 < iVar4) && (iVar7 = iVar2, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[8] = iVar7;
      iVar7 = param_3[3];
      goto joined_r0x004826b8;
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
    if (param_2 == DAT_00482800) {
LAB_00482724:
      piVar3[3] = *param_3;
      goto LAB_004827d0;
    }
    if (DAT_00482800 <= param_2) {
joined_r0x00482628:
      if (iVar7 == 0x5937) {
        piVar3[5] = *param_3;
      }
      else if (iVar7 == 0x598e) {
        *(char *)(piVar3 + 0xc) = (char)*param_3;
      }
      else {
        if (iVar7 != 0x5cfe) {
          return;
        }
        iVar8 = VectorSignedToFloat(*param_3,(byte)(in_fpscr >> 0x15) & 3);
        piVar3[10] = iVar8;
      }
      goto LAB_004827d0;
    }
    if (param_2 == 0x1004) {
      iVar4 = *param_3;
      iVar7 = DAT_00482804;
      if ((0 < iVar4) && (iVar7 = DAT_00482808, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[6] = iVar7;
      iVar4 = param_3[1];
      iVar7 = iVar8;
      if ((0 < iVar4) && (iVar7 = iVar2, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[7] = iVar7;
      iVar4 = param_3[2];
      iVar7 = iVar8;
      if ((0 < iVar4) && (iVar7 = iVar2, iVar4 < 2)) {
        iVar7 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[8] = iVar7;
      iVar7 = param_3[3];
joined_r0x004826b8:
      if ((0 < iVar7) && (iVar8 = iVar2, iVar7 < 2)) {
        iVar8 = VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      }
      piVar3[9] = iVar8;
      goto LAB_004827d0;
    }
  }
  if (param_2 == 0x2800) {
    *piVar3 = *param_3;
  }
  else if (param_2 == 0x2801) {
    piVar3[1] = *param_3;
  }
  else {
    if (param_2 != 0x2802) {
      return;
    }
    piVar3[2] = *param_3;
  }
LAB_004827d0:
  uVar5 = *(int *)(iVar6 + 0x58) + 10;
  uVar1 = uVar5 >> 5;
  *(uint *)(iVar6 + uVar1 * 4) = *(uint *)(iVar6 + uVar1 * 4) | 1 << (uVar5 & 0x1f);
  return;
}
