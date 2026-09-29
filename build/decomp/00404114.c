// OoT3D decomp @ 00404114  name=FUN_00404114  size=412

void FUN_00404114(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;

  fVar1 = DAT_004042b0;
  fVar16 = *(float *)(param_1[4] + 0x2c);
  fVar7 = (float)param_1[0x2c] * DAT_004042b0;
  fVar8 = (float)FUN_0030b44c(fVar7,fVar16,param_1 + 0x28);
  fVar9 = (float)FUN_0030b44c(param_1 + 0x19);
  fVar10 = (float)FUN_0030b44c(param_1 + 0x1d);
  fVar17 = (float)param_1[0xc];
  iVar2 = param_1[4];
  uVar5 = (uint)*(byte *)((int)param_1 + 0x99);
  bVar6 = uVar5 == 0;
  if (bVar6) {
    uVar5 = *(uint *)(iVar2 + 0x34);
  }
  fVar18 = (float)param_1[0x16];
  fVar19 = (float)param_1[0x2d] + DAT_004042b4;
  fVar29 = (float)param_1[0xe];
  fVar30 = (float)param_1[0x18];
  fVar11 = (float)param_1[0x34] + DAT_004042b4;
  fVar20 = (float)param_1[0xf];
  fVar12 = (float)param_1[0x2e];
  fVar21 = (float)param_1[0xd];
  iVar32 = param_1[0x30];
  if (bVar6) {
    iVar32 = *(int *)(iVar2 + 0x38);
  }
  fVar22 = (float)param_1[0x17];
  fVar13 = (float)param_1[0x2f];
  fVar23 = (float)param_1[0x11];
  fVar24 = *(float *)(iVar2 + 0x30);
  if (bVar6 && uVar5 == 0) {
    uVar5 = param_1[0x13];
    iVar32 = param_1[0x12];
  }
  fVar31 = *(float *)(iVar2 + 0x3c);
  fVar14 = (float)param_1[0x31] + DAT_004042b4;
  fVar15 = DAT_004042b4 + (float)param_1[0x32];
  fVar27 = *(float *)(iVar2 + 0x40);
  fVar25 = DAT_004042b4 + (float)param_1[0x33];
  fVar28 = *(float *)(iVar2 + 0x44);
  fVar26 = (float)param_1[0x10];
  iVar2 = FUN_0030c550();
  iVar3 = FUN_0030c20c(iVar2,0xf);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x180);
  *(undefined1 *)(iVar3 + 4) = 8;
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  *(float *)(iVar3 + 0x14) = fVar18 * fVar17 * fVar10 * fVar9 * fVar8 * fVar16 * fVar7;
  *(float *)(iVar3 + 0x18) = fVar22 * fVar21 * fVar12 * fVar1;
  *(float *)(iVar3 + 0x1c) = fVar30 + fVar29 + fVar19;
  *(float *)(iVar3 + 0x20) = fVar20 + fVar11;
  *(float *)(iVar3 + 0x24) = fVar24 + fVar23 + fVar13;
  *(uint *)(iVar3 + 0x28) = uVar5;
  *(int *)(iVar3 + 0x2c) = iVar32;
  *(float *)(iVar3 + 0x30) = fVar31 + fVar14;
  *(float *)(iVar3 + 0x34) = fVar15 + fVar27 + fVar26;
  *(float *)(iVar3 + 0x38) = fVar25 + fVar28;
  FUN_0030c1e8(iVar2,iVar3);
  return;
}
