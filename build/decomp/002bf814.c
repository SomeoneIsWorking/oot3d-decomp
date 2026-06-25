// OoT3D decomp @ 002bf814  name=FUN_002bf814  size=1012

void FUN_002bf814(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar9 = DAT_002bfbd4;
  uVar4 = DAT_002bfbd0;
  pfVar10 = (float *)(param_1 + 0x24c4);
  if (param_3 == 0) {
    iVar8 = *(int *)(param_1 + 0x24d4) + 1;
    *(int *)(param_1 + 0x24d4) = iVar8;
    if (0xf < iVar8) {
      *(undefined4 *)(param_1 + 0x24d4) = 0x10;
      *(undefined4 *)(param_1 + 0x24bc) = 0;
      *(undefined *)(param_1 + 0x24c0) = 0;
      *(undefined4 *)(param_1 + 0x24d0) = uVar4;
      *(undefined2 *)(param_1 + 0x24d8) = 0;
      return;
    }
    uVar3 = FUN_004bc8e8(param_2 + 0x208c,*(undefined4 *)(param_1 + 0x24bc),
                         *(undefined *)(param_1 + 0x24c0));
    bVar13 = uVar3 == 0;
    if (!bVar13) {
      uVar3 = (uint)*(ushort *)(param_1 + 0x24d8);
    }
    if (bVar13 || uVar3 == 0) {
      return;
    }
    iVar8 = *(int *)(param_1 + 0x24bc);
    fVar16 = *(float *)(param_1 + 0x28) - *(float *)(iVar8 + 0x3c);
    fVar14 = *(float *)(param_1 + 0x2c) - *(float *)(iVar8 + 0x40);
    fVar15 = *(float *)(param_1 + 0x30) - *(float *)(iVar8 + 0x44);
    if (*(float *)(iVar9 + 0x98) <=
        ABS(*(float *)(param_1 + 0x24d0) - (fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15))) {
      return;
    }
    if (iVar8 == 0) {
      return;
    }
    goto LAB_002bf9ec;
  }
  pfVar5 = (float *)(param_3 + 0x3c);
  if (*(int *)(param_1 + 0x24bc) == param_3) {
    fVar14 = *(float *)(param_1 + 0x28) - *(float *)(param_3 + 0x3c);
    fVar15 = *(float *)(param_1 + 0x2c) - *(float *)(param_3 + 0x40);
    fVar16 = *(float *)(param_1 + 0x30) - *(float *)(param_3 + 0x44);
    fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
    fVar15 = ABS(*(float *)(param_1 + 0x24d0) - fVar14);
    if (*(short *)(param_1 + 0x24d8) == 0) {
      if (fVar15 < *(float *)(DAT_002bfbd4 + 0x9c)) {
        *(undefined2 *)(param_1 + 0x24d8) = 1;
      }
    }
    else if (fVar15 < *(float *)(DAT_002bfbd4 + 0x98)) {
      uVar6 = *(undefined4 *)(param_3 + 0x40);
      uVar7 = *(undefined4 *)(param_3 + 0x44);
      *pfVar10 = *pfVar5;
      *(undefined4 *)(param_1 + 0x24c8) = uVar6;
      *(undefined4 *)(param_1 + 0x24cc) = uVar7;
      goto LAB_002bf930;
    }
    *(float *)(param_1 + 0x24d0) = fVar14;
    uVar6 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    *pfVar10 = *pfVar5;
    *(undefined4 *)(param_1 + 0x24c8) = uVar6;
    *(undefined4 *)(param_1 + 0x24cc) = uVar7;
  }
  else {
    *(int *)(param_1 + 0x24bc) = param_3;
    *(undefined *)(param_1 + 0x24c0) = *(undefined *)(param_3 + 2);
    uVar6 = *(undefined4 *)(param_3 + 0x40);
    uVar7 = *(undefined4 *)(param_3 + 0x44);
    *pfVar10 = *pfVar5;
    *(undefined4 *)(param_1 + 0x24c8) = uVar6;
    *(undefined4 *)(param_1 + 0x24cc) = uVar7;
    fVar16 = *(float *)(param_1 + 0x28) - *(float *)(param_3 + 0x3c);
    fVar14 = *(float *)(param_1 + 0x2c) - *(float *)(param_3 + 0x40);
    fVar15 = *(float *)(param_1 + 0x30) - *(float *)(param_3 + 0x44);
    *(float *)(param_1 + 0x24d0) = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
    *(undefined2 *)(param_1 + 0x24d8) = 0;
  }
LAB_002bf930:
  *(undefined4 *)(param_1 + 0x24d4) = 0;
LAB_002bf9ec:
  local_3c = *(undefined4 *)(DAT_002bfbdc + *(int *)(DAT_002bfbd8 + 4) * 0x134 + 0x54);
  local_38 = uVar4;
  local_34 = uVar4;
  uVar4 = FUN_003478bc(*(undefined4 *)(param_1 + 0x27c),9);
  FUN_003735ac(&local_30,uVar4,&local_3c);
  fVar14 = *(float *)(param_1 + 0x24cc) - local_28;
  uVar6 = FUN_003758b0(SQRT((*pfVar10 - local_30) * (*pfVar10 - local_30) + fVar14 * fVar14),
                       local_2c - *(float *)(param_1 + 0x24c8));
  uVar7 = FUN_003758b0(*(float *)(param_1 + 0x24cc) - local_28,*pfVar10 - local_30);
  uVar4 = DAT_002bfbe0;
  FUN_00375a18(param_1 + 0x4a,uVar7,4,DAT_002bfbe0,0);
  FUN_00375a18(param_1 + 0x48,uVar6,4,uVar4,0);
  *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 2;
  sVar1 = *(short *)(param_1 + 0xbe);
  sVar2 = FUN_002bc39c(param_1 + 0x1750,(int)*(short *)(param_1 + 0x48),0x4b0,
                       (int)*(short *)(iVar9 + 0x12),(int)*(short *)(iVar9 + 0x12),
                       (int)*(short *)(param_1 + 0x48),0);
  FUN_002bc39c(param_1 + 0x1756,(int)sVar2,400,4000,4000,(int)*(short *)(param_1 + 0x1750),uVar4);
  iVar8 = (int)*(short *)(iVar9 + 0x14);
  sVar1 = *(short *)(param_1 + 0x4a) - sVar1;
  iVar11 = (int)sVar1;
  FUN_002bc39c(param_1 + 0x1752,iVar11,400,iVar8,iVar8,iVar11,iVar8);
  iVar8 = (int)*(short *)(param_1 + 0x1752);
  sVar2 = *(short *)(iVar9 + 0x14);
  iVar12 = 0;
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = -iVar8;
  }
  if (iVar9 == sVar2) {
    if (0 < iVar11) {
      sVar2 = -sVar2;
    }
    iVar12 = (int)(short)(sVar2 + sVar1);
  }
  FUN_002bc39c(param_1 + 0x1758,iVar12,400,8000,8000,iVar8,8000);
  *(ushort *)(param_1 + 0x174a) = *(ushort *)(param_1 + 0x174a) | 0xd9;
  return;
}

