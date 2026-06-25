// OoT3D decomp @ 0034c664  name=FUN_0034c664  size=704

void FUN_0034c664(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  
  puVar11 = (undefined4 *)(DAT_0034c924 + param_3 * 0x18);
  uVar2 = FUN_0035cf48(puVar11[4],param_1,param_2,(int)*(short *)(puVar11 + 5));
  *(undefined2 *)(param_2 + 2) = uVar2;
  local_3c = *puVar11;
  local_38 = puVar11[1];
  local_34 = puVar11[2];
  local_30 = puVar11[3];
  sVar3 = *(short *)(param_2 + 2);
  if (sVar3 == 1) {
    local_38 = 0;
    local_3c = 0;
LAB_0034c6d4:
    local_38 = local_38 & 0xffff;
    local_34 = 0;
  }
  else if (sVar3 != 2) {
    if (sVar3 != 3) goto LAB_0034c6e4;
    goto LAB_0034c6d4;
  }
  local_30 = 0;
LAB_0034c6e4:
  iVar5 = (int)(short)local_34;
  iVar14 = (int)(short)local_3c;
  iVar13 = (int)local_38._2_2_;
  fVar17 = *(float *)(param_1 + 0x28);
  fVar18 = *(float *)(param_1 + 0x30);
  fVar16 = *(float *)(param_2 + 0x18) - fVar17;
  fVar15 = *(float *)(param_2 + 0x20) - fVar18;
  iVar6 = FUN_003758b0(SQRT(fVar16 * fVar16 + fVar15 * fVar15),
                       (*(float *)(param_1 + 0x2c) + *(float *)(param_2 + 0x14)) -
                       *(float *)(param_2 + 0x1c));
  uVar7 = FUN_003758b0(*(float *)(param_2 + 0x20) - fVar18,*(float *)(param_2 + 0x18) - fVar17);
  sVar3 = FUN_003758b0(*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x30),
                       *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x28));
  sVar3 = sVar3 - *(short *)(param_1 + 0xbe);
  iVar12 = (int)sVar3;
  iVar10 = -iVar14;
  if ((iVar12 + iVar14 < 0 == SBORROW4(iVar12,iVar10)) && (iVar10 = iVar14, iVar12 <= iVar14)) {
    iVar10 = iVar12;
  }
  FUN_00375a18(param_2 + 10,(int)(short)iVar10,6,2000,1);
  uVar1 = DAT_0034c928;
  uVar8 = iVar12 + 0x7fff;
  uVar9 = uVar8;
  if (DAT_0034c928 < uVar8) {
    uVar9 = 0;
  }
  sVar4 = (short)uVar9;
  if ((uVar8 <= DAT_0034c928) && (sVar4 = sVar3, iVar12 < 0)) {
    sVar4 = -sVar3;
  }
  iVar14 = (int)*(short *)(param_2 + 10);
  iVar12 = (int)sVar4;
  iVar10 = -iVar12;
  if ((iVar14 + iVar12 < 0 == SBORROW4(iVar14,iVar10)) && (iVar10 = iVar12, iVar14 <= iVar12)) {
    iVar10 = iVar14;
  }
  *(short *)(param_2 + 10) = (short)iVar10;
  sVar3 = sVar3 - (short)iVar10;
  iVar12 = (int)sVar3;
  iVar10 = -iVar13;
  if ((iVar12 + iVar13 < 0 == SBORROW4(iVar12,iVar10)) && (iVar10 = iVar13, iVar12 <= iVar13)) {
    iVar10 = iVar12;
  }
  FUN_00375a18(param_2 + 0x10,(int)(short)iVar10,6,2000,1);
  if (uVar1 < iVar12 + 0x7fffU) {
    sVar3 = 0;
  }
  else if (iVar12 < 0) {
    sVar3 = -sVar3;
  }
  iVar13 = (int)*(short *)(param_2 + 0x10);
  iVar12 = (int)sVar3;
  iVar10 = -iVar12;
  if ((iVar13 + iVar12 < 0 == SBORROW4(iVar13,iVar10)) && (iVar10 = iVar12, iVar13 <= iVar12)) {
    iVar10 = iVar13;
  }
  *(short *)(param_2 + 0x10) = (short)iVar10;
  if ((local_30 & 0xff) != 0) {
    FUN_00375a18(param_1 + 0xbe,uVar7,6,2000,1);
  }
  iVar10 = (int)local_3c._2_2_;
  if ((local_3c._2_2_ <= iVar6) && (iVar10 = iVar6, (short)local_38 < iVar6)) {
    iVar10 = (int)(short)local_38;
  }
  FUN_00375a18(param_2 + 8,iVar10,6,2000,1);
  iVar10 = (int)(short)((short)iVar6 - *(short *)(param_2 + 8));
  if ((iVar5 <= iVar10) && (iVar5 = iVar10, local_34._2_2_ < iVar10)) {
    iVar5 = (int)local_34._2_2_;
  }
  FUN_00375a18(param_2 + 0xe,iVar5,6,2000,1);
  return;
}

