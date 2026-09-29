// OoT3D decomp @ 0048acb4  name=FUN_0048acb4  size=792

void FUN_0048acb4(int param_1,int param_2,float *param_3)

{
  byte bVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;

  fVar6 = DAT_0048afcc;
  fVar5 = DAT_0048afc8;
  fVar8 = *(float *)(param_1 + 0x44);
  fVar9 = DAT_0048afcc;
  if ((fVar8 <= DAT_0048afcc) && (fVar9 = fVar8, fVar8 < DAT_0048afc8)) {
    fVar9 = DAT_0048afc8;
  }
  fVar10 = *(float *)(param_1 + 0x48);
  fVar8 = DAT_0048afcc;
  if (((int)fVar10 < 0x3f800001) && (fVar8 = fVar10, fVar10 <= DAT_0048afc8)) {
    fVar8 = DAT_0048afc8;
  }
  fVar11 = *(float *)(param_1 + 0x4c);
  fVar10 = DAT_0048afcc;
  if (((int)fVar11 < 0x3f800001) && (fVar10 = fVar11, fVar11 <= DAT_0048afc8)) {
    fVar10 = DAT_0048afc8;
  }
  local_44 = 0;
  local_43 = 0;
  local_42 = 0;
  switch((uint)*(byte *)(param_1 + 0x2d)) {
  case 1:
    goto switchD_0048ad74_caseD_1;
  case 2:
    local_43 = 1;
    local_42 = 1;
    break;
  case 3:
    local_44 = 1;
    break;
  case 4:
    local_44 = 1;
    goto switchD_0048ad74_caseD_1;
  case 5:
    local_44 = 1;
    local_43 = 1;
    local_42 = 1;
    break;
  case 6:
    local_44 = 2;
    break;
  case 7:
    local_44 = 2;
switchD_0048ad74_caseD_1:
    local_43 = 1;
    break;
  case 8:
    local_44 = 2;
    local_43 = 1;
    local_42 = 1;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x2d);
  if ((*DAT_0048afd0 & 1) == 0) {
    uVar12 = FUN_003679b4(DAT_0048afd0);
    uVar3 = (uint)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      FUN_0030c5b8(DAT_0048afd4);
      uVar3 = DAT_0048afdc;
    }
  }
  pfVar2 = DAT_0048afe0;
  bVar1 = *(byte *)(DAT_0048afd4 + 1);
  if (bVar1 == 0) {
    fVar11 = (float)FUN_002c2e4c(*DAT_0048afe0,&local_44,uVar3);
    fVar4 = fVar11;
  }
  else {
    fVar11 = fVar5;
    fVar4 = fVar5;
    if (bVar1 == 1 || bVar1 == 2) {
      if ((*(int *)(param_1 + 8) < 2) || (uVar3 = (uint)*(byte *)(param_1 + 0x2c), uVar3 != 1)) {
        fVar11 = *(float *)(param_1 + 0x30);
        if (*(int *)(param_1 + 8) == 2) {
          if (param_2 == 0) {
            fVar11 = fVar11 - fVar6;
          }
          else if (param_2 == 1) {
            fVar11 = fVar11 + fVar6;
          }
        }
        fVar4 = (float)FUN_002c2e4c(fVar11,&local_44,uVar3);
        fVar11 = (float)FUN_002c2e4c(*pfVar2 - fVar11,&local_44);
      }
      else if (param_2 == 0) {
        fVar4 = (float)FUN_002c2e4c(*(undefined4 *)(param_1 + 0x30),&local_44);
      }
      else if (param_2 == 1) {
        fVar11 = (float)FUN_002c2e4c(*DAT_0048afe0 - *(float *)(param_1 + 0x30),&local_44);
      }
    }
  }
  if (bVar1 < 2) {
    fVar5 = (float)FUN_002c2dbc(pfVar2[1],&local_44);
    fVar6 = (float)FUN_002c2dbc(pfVar2[2],&local_44);
  }
  else {
    fVar6 = fVar5;
    if (bVar1 == 2) {
      fVar5 = (float)FUN_002c2dbc(*(undefined4 *)(param_1 + 0x34),&local_44);
      fVar6 = (float)FUN_002c2dbc(pfVar2[2] - *(float *)(param_1 + 0x34),&local_44);
    }
  }
  fVar7 = fVar5 * fVar4;
  fVar5 = fVar5 * fVar11;
  fVar4 = fVar6 * fVar4;
  fVar6 = fVar6 * fVar11;
  *param_3 = fVar7 * fVar9;
  param_3[4] = fVar8 * fVar7;
  param_3[8] = fVar10 * fVar7;
  param_3[1] = fVar5 * fVar9;
  param_3[5] = fVar8 * fVar5;
  param_3[9] = fVar10 * fVar5;
  param_3[2] = fVar4 * fVar9;
  param_3[6] = fVar8 * fVar4;
  param_3[10] = fVar10 * fVar4;
  param_3[3] = fVar6 * fVar9;
  param_3[7] = fVar8 * fVar6;
  param_3[0xb] = fVar10 * fVar6;
  return;
}
