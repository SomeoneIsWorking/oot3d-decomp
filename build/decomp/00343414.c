// OoT3D decomp @ 00343414  name=FUN_00343414  size=696

void FUN_00343414(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;

  puVar1 = DAT_003436cc;
  uVar3 = FUN_0035cf48(DAT_003436cc[4],param_1,param_2,(int)*(short *)(DAT_003436cc + 5),param_3);
  *(undefined2 *)(param_2 + 2) = uVar3;
  local_3c = *puVar1;
  local_38 = puVar1[1];
  local_34 = puVar1[2];
  local_30 = puVar1[3];
  sVar4 = *(short *)(param_2 + 2);
  if (sVar4 == 1) {
    local_38 = 0;
    local_3c = 0;
LAB_00343478:
    local_38 = local_38 & 0xffff;
    local_34 = 0;
  }
  else if (sVar4 != 2) {
    if (sVar4 != 3) goto LAB_00343488;
    goto LAB_00343478;
  }
  local_30 = 0;
LAB_00343488:
  iVar6 = (int)(short)local_34;
  iVar12 = (int)(short)local_3c;
  iVar11 = (int)local_38._2_2_;
  fVar16 = *(float *)(param_1 + 0x28);
  fVar15 = *(float *)(param_1 + 0x30);
  fVar14 = *(float *)(param_2 + 0x18) - fVar16;
  fVar13 = *(float *)(param_2 + 0x20) - fVar15;
  iVar7 = FUN_003758b0(SQRT(fVar14 * fVar14 + fVar13 * fVar13),
                       (*(float *)(param_1 + 0x2c) + *(float *)(param_2 + 0x14)) -
                       *(float *)(param_2 + 0x1c));
  uVar8 = FUN_003758b0(*(float *)(param_2 + 0x20) - fVar15,*(float *)(param_2 + 0x18) - fVar16);
  sVar4 = FUN_003758b0(*(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x30),
                       *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x28));
  sVar4 = sVar4 - *(short *)(param_1 + 0xf20);
  iVar10 = (int)sVar4;
  iVar9 = -iVar12;
  if ((iVar9 <= iVar10) && (iVar9 = iVar12, iVar10 <= iVar12)) {
    iVar9 = iVar10;
  }
  FUN_00375a18(param_2 + 10,(int)(short)iVar9,6,2000,1);
  uVar2 = DAT_003436d0;
  if (DAT_003436d0 < iVar10 + 0x7fffU) {
    sVar5 = 0;
  }
  else {
    sVar5 = sVar4;
    if (iVar10 < 0) {
      sVar5 = -sVar4;
    }
  }
  iVar12 = (int)*(short *)(param_2 + 10);
  iVar10 = (int)sVar5;
  iVar9 = -iVar10;
  if ((iVar9 <= iVar12) && (iVar9 = iVar10, iVar12 <= iVar10)) {
    iVar9 = iVar12;
  }
  *(short *)(param_2 + 10) = (short)iVar9;
  sVar4 = sVar4 - (short)iVar9;
  iVar10 = (int)sVar4;
  iVar9 = -iVar11;
  if ((iVar9 <= iVar10) && (iVar9 = iVar11, iVar10 <= iVar11)) {
    iVar9 = iVar10;
  }
  FUN_00375a18(param_2 + 0x10,(int)(short)iVar9,6,2000,1);
  if (uVar2 < iVar10 + 0x7fffU) {
    sVar4 = 0;
  }
  else if (iVar10 < 0) {
    sVar4 = -sVar4;
  }
  iVar11 = (int)*(short *)(param_2 + 0x10);
  iVar10 = (int)sVar4;
  iVar9 = -iVar10;
  if ((iVar9 <= iVar11) && (iVar9 = iVar10, iVar11 <= iVar10)) {
    iVar9 = iVar11;
  }
  *(short *)(param_2 + 0x10) = (short)iVar9;
  if ((local_30 & 0xff) != 0) {
    FUN_00375a18(param_1 + 0xbe,uVar8,6,2000,1);
  }
  iVar9 = (int)local_3c._2_2_;
  if ((local_3c._2_2_ <= iVar7) && (iVar9 = iVar7, (short)local_38 < iVar7)) {
    iVar9 = (int)(short)local_38;
  }
  FUN_00375a18(param_2 + 8,iVar9,6,2000,1);
  iVar9 = (int)(short)((short)iVar7 - *(short *)(param_2 + 8));
  if ((iVar6 <= iVar9) && (iVar6 = iVar9, local_34._2_2_ < iVar9)) {
    iVar6 = (int)local_34._2_2_;
  }
  FUN_00375a18(param_2 + 0xe,iVar6,6,2000,1);
  return;
}
