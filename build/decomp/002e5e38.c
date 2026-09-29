// OoT3D decomp @ 002e5e38  name=FUN_002e5e38  size=724

void FUN_002e5e38(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int local_38;

  if (*(char *)(*DAT_002e6120 + 0x5c4) == '\0') {
    piVar1 = (int *)FUN_002eaff4();
  }
  else {
    piVar1 = (int *)FUN_002e6124();
  }
  iVar2 = piVar1[3];
  bVar13 = SBORROW4(iVar2,param_5);
  iVar7 = iVar2 - param_5;
  bVar12 = iVar2 == param_5;
  if (param_5 < iVar2) {
    iVar2 = piVar1[4];
    bVar13 = SBORROW4(iVar2,param_6);
    iVar7 = iVar2 - param_6;
    bVar12 = iVar2 == param_6;
  }
  bVar10 = iVar7 < 0;
  if (!bVar12 && bVar10 == bVar13) {
    local_38 = param_5 + param_7;
    bVar10 = local_38 < 0;
    bVar12 = local_38 == 0;
    bVar13 = false;
  }
  if ((!bVar12 && bVar10 == bVar13) && (iVar7 = param_6 + param_8, 0 < iVar7)) {
    FUN_00302a1c();
    iVar9 = piVar1[3];
    bVar11 = param_5 < 0;
    iVar2 = piVar1[4];
    if (iVar9 < local_38) {
      bVar11 = bVar11 | 2;
    }
    if (param_6 < 0) {
      bVar11 = bVar11 | 4;
    }
    if (iVar2 < iVar7) {
      bVar11 = bVar11 | 8;
    }
    if (bVar11 == 0) {
      iVar5 = param_2[0xe];
      uVar15 = iVar5 * param_7 >> 4;
      iVar8 = (((param_2[4] - param_4) - param_8) * param_2[3] + param_3 * 8) * iVar5;
      uVar14 = (param_2[3] - param_7) * iVar5 >> 4;
      iVar7 = (((iVar2 - param_6) - param_8) * iVar9 + param_5 * 8) * iVar5;
      iVar6 = iVar5 * param_7 * param_8;
      uVar4 = (iVar9 - param_7) * iVar5 >> 4;
      iVar2 = *piVar1 + ((int)(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1d)) >> 3);
      iVar7 = *param_2 + ((int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1d)) >> 3);
      uVar3 = (int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1d)) >> 3;
    }
    else {
      if ((bVar11 & 1) != 0) {
        param_7 = param_7 + param_5;
        param_3 = param_3 - param_5;
        param_5 = 0;
      }
      if ((bVar11 & 2) != 0) {
        param_7 = param_7 - (local_38 - iVar9);
      }
      iVar5 = param_8;
      if ((bVar11 & 4) != 0) {
        iVar5 = param_8 + param_6;
      }
      if ((bVar11 & 8) != 0) {
        iVar5 = iVar5 - (iVar7 - iVar2);
        param_8 = iVar2 - param_6;
        iVar7 = iVar2;
      }
      param_4 = param_8 + param_4;
      iVar6 = param_2[0xe];
      uVar4 = (uint)((iVar9 - param_7) * iVar6) >> 4;
      uVar3 = (uint)(iVar6 * param_7 * iVar5) >> 3;
      param_8 = param_2[3];
      uVar15 = (uint)(iVar6 * param_7) >> 4;
      uVar14 = (uint)((param_8 - param_7) * iVar6) >> 4;
      iVar2 = *piVar1 + ((uint)(((iVar2 - iVar7) * iVar9 + param_5 * 8) * iVar6) >> 3);
      iVar7 = *param_2 + ((uint)(((param_2[4] - param_4) * param_8 + param_3 * 8) * iVar6) >> 3);
    }
    FUN_00456ed0(iVar7,iVar2,uVar3,uVar4,uVar15,uVar14,uVar15);
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar7 = param_2[3];
      iVar2 = param_2[4];
      switch(param_2[7]) {
      case 0:
        param_8 = 0;
        break;
      case 1:
        param_8 = 1;
        break;
      case 2:
        param_8 = 3;
        break;
      case 3:
        param_8 = 2;
        break;
      case 4:
        param_8 = 4;
      }
      iVar5 = 1;
      iVar9 = *param_2;
      if (1 < param_2[0xd]) {
        do {
          iVar6 = param_2[0xe] * iVar7 * iVar2;
          iVar6 = iVar9 + ((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1d)) >> 3);
          FUN_002df3f4(iVar9,iVar6,iVar7,iVar2,param_8);
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 >> 1;
          iVar2 = iVar2 >> 1;
          iVar9 = iVar6;
        } while (iVar5 < param_2[0xd]);
      }
    }
  }
  return;
}
