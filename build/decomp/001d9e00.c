// OoT3D decomp @ 001d9e00  name=FUN_001d9e00  size=488

void FUN_001d9e00(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_20;
  short asStack_1c [2];
  
  bVar17 = true;
  if ((*(short *)(param_2 + 0x104) == 0x20) &&
     (((FUN_00363a20(param_2,param_1,asStack_1c,&uStack_20), 0x1b8 < (int)asStack_1c[0] + 0x14U ||
       ((short)uStack_20 < 0)) || (0xf0 < (short)uStack_20)))) {
    bVar17 = false;
  }
  else {
    FUN_0037632c(param_1,param_1 + 0xbb0);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xbb0);
    FUN_003731e0(param_1 + 0x95c);
    if (((*(short *)(param_1 + 0xc0a) == 0) ||
        (sVar4 = *(short *)(param_1 + 0xc0a) + -1, *(short *)(param_1 + 0xc0a) = sVar4, sVar4 == 0))
       && (sVar4 = *(short *)(param_1 + 0xc0c) + 1, *(short *)(param_1 + 0xc0c) = sVar4, 2 < sVar4))
    {
      uVar3 = FUN_003702c8(0x1e);
      *(undefined2 *)(param_1 + 0xc0a) = uVar3;
      *(undefined2 *)(param_1 + 0xc0c) = 0;
    }
    (**(code **)(param_1 + 0xbac))(param_1,param_2);
    if (*(int *)(param_1 + 0xbac) != iRam001d9fe8) {
      uStack_20 = uRam001d9fec;
      FUN_00342714(*(float *)(param_1 + 0xbf0) + fRam001d9ff0,param_2,param_1,param_1 + 0xc10,
                   uRam001d9ff4);
    }
  }
  if (*(int *)(param_1 + 0x98c) == 2) {
    if (*(short *)(param_1 + 0xc10) == 0) {
      if (*(short *)(param_1 + 0xc08) != 0) {
        uVar6 = 0;
        *(undefined2 *)(param_1 + 0xc08) = 0;
LAB_001d9f74:
        FUN_0033d270(uVar6);
      }
    }
    else if (*(short *)(param_1 + 0xc08) == 0) {
      uVar6 = 1;
      *(undefined2 *)(param_1 + 0xc08) = 1;
      goto LAB_001d9f74;
    }
  }
  fVar18 = fRam001d9ffc;
  if (!bVar17) {
    return;
  }
  iVar12 = *(int *)(iRam001d9ff8 + param_2);
  uVar7 = (uint)*(ushort *)(param_1 + 0xc10);
  uVar6 = *(undefined4 *)(iVar12 + 0x2c);
  uVar14 = *(undefined4 *)(iVar12 + 0x30);
  bVar17 = uVar7 == 0;
  if (bVar17) {
    uVar7 = *(uint *)(param_1 + 0x98c);
  }
  *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(iVar12 + 0x28);
  *(undefined4 *)(param_1 + 0xc2c) = uVar6;
  *(undefined4 *)(param_1 + 0xc30) = uVar14;
  bVar1 = uVar7 != 2;
  if (!bVar17 || bVar1) {
    uVar7 = 0;
  }
  if (bVar17 && !bVar1) {
    uVar7 = 1;
  }
  *(float *)(param_1 + 0xc2c) = *(float *)(param_1 + 0xc2c) - fVar18;
  puVar2 = DAT_0034c924;
  uVar3 = FUN_0035cf48(DAT_0034c924[4],param_1,param_1 + 0xc10,(int)*(short *)(DAT_0034c924 + 5),
                       uVar7);
  *(undefined2 *)(param_1 + 0xc12) = uVar3;
  uStack_3c = *puVar2;
  uStack_38 = puVar2[1];
  uStack_34 = puVar2[2];
  uStack_30 = puVar2[3];
  sVar4 = *(short *)(param_1 + 0xc12);
  if (sVar4 == 1) {
    uStack_38 = 0;
    uStack_3c = 0;
LAB_0034c6d4:
    uStack_38 = uStack_38 & 0xffff;
    uStack_34 = 0;
  }
  else if (sVar4 != 2) {
    if (sVar4 != 3) goto LAB_0034c6e4;
    goto LAB_0034c6d4;
  }
  uStack_30 = 0;
LAB_0034c6e4:
  iVar8 = (int)(short)uStack_34;
  iVar16 = (int)(short)uStack_3c;
  iVar15 = (int)uStack_38._2_2_;
  fVar20 = *(float *)(param_1 + 0x28);
  fVar21 = *(float *)(param_1 + 0x30);
  fVar19 = *(float *)(param_1 + 0xc28) - fVar20;
  fVar18 = *(float *)(param_1 + 0xc30) - fVar21;
  iVar9 = FUN_003758b0(SQRT(fVar19 * fVar19 + fVar18 * fVar18),
                       (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc24)) -
                       *(float *)(param_1 + 0xc2c));
  uVar6 = FUN_003758b0(*(float *)(param_1 + 0xc30) - fVar21,*(float *)(param_1 + 0xc28) - fVar20);
  sVar4 = FUN_003758b0(*(float *)(param_1 + 0xc30) - *(float *)(param_1 + 0x30),
                       *(float *)(param_1 + 0xc28) - *(float *)(param_1 + 0x28));
  sVar4 = sVar4 - *(short *)(param_1 + 0xbe);
  iVar13 = (int)sVar4;
  iVar12 = -iVar16;
  if ((iVar13 + iVar16 < 0 == SBORROW4(iVar13,iVar12)) && (iVar12 = iVar16, iVar13 <= iVar16)) {
    iVar12 = iVar13;
  }
  FUN_00375a18(param_1 + 0xc1a,(int)(short)iVar12,6,2000,1);
  uVar7 = DAT_0034c928;
  uVar10 = iVar13 + 0x7fff;
  uVar11 = uVar10;
  if (DAT_0034c928 < uVar10) {
    uVar11 = 0;
  }
  sVar5 = (short)uVar11;
  if ((uVar10 <= DAT_0034c928) && (sVar5 = sVar4, iVar13 < 0)) {
    sVar5 = -sVar4;
  }
  iVar16 = (int)*(short *)(param_1 + 0xc1a);
  iVar13 = (int)sVar5;
  iVar12 = -iVar13;
  if ((iVar16 + iVar13 < 0 == SBORROW4(iVar16,iVar12)) && (iVar12 = iVar13, iVar16 <= iVar13)) {
    iVar12 = iVar16;
  }
  *(short *)(param_1 + 0xc1a) = (short)iVar12;
  sVar4 = sVar4 - (short)iVar12;
  iVar13 = (int)sVar4;
  iVar12 = -iVar15;
  if ((iVar13 + iVar15 < 0 == SBORROW4(iVar13,iVar12)) && (iVar12 = iVar15, iVar13 <= iVar15)) {
    iVar12 = iVar13;
  }
  FUN_00375a18(param_1 + 0xc20,(int)(short)iVar12,6,2000,1);
  if (uVar7 < iVar13 + 0x7fffU) {
    sVar4 = 0;
  }
  else if (iVar13 < 0) {
    sVar4 = -sVar4;
  }
  iVar15 = (int)*(short *)(param_1 + 0xc20);
  iVar13 = (int)sVar4;
  iVar12 = -iVar13;
  if ((iVar15 + iVar13 < 0 == SBORROW4(iVar15,iVar12)) && (iVar12 = iVar13, iVar15 <= iVar13)) {
    iVar12 = iVar15;
  }
  *(short *)(param_1 + 0xc20) = (short)iVar12;
  if ((uStack_30 & 0xff) != 0) {
    FUN_00375a18(param_1 + 0xbe,uVar6,6,2000,1);
  }
  iVar12 = (int)uStack_3c._2_2_;
  if ((uStack_3c._2_2_ <= iVar9) && (iVar12 = iVar9, (short)uStack_38 < iVar9)) {
    iVar12 = (int)(short)uStack_38;
  }
  FUN_00375a18(param_1 + 0xc18,iVar12,6,2000,1);
  iVar12 = (int)(short)((short)iVar9 - *(short *)(param_1 + 0xc18));
  if ((iVar8 <= iVar12) && (iVar8 = iVar12, uStack_34._2_2_ < iVar12)) {
    iVar8 = (int)uStack_34._2_2_;
  }
  FUN_00375a18(param_1 + 0xc1e,iVar8,6,2000,1);
  return;
}

