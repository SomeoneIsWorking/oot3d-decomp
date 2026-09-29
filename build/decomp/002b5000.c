// OoT3D decomp @ 002b5000  name=FUN_002b5000  size=892

void FUN_002b5000(int param_1,int param_2)

{
  float fVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  byte bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;

  uVar5 = DAT_002b5360;
  fVar1 = DAT_002b5358;
  fVar13 = DAT_002b5354;
  FUN_0036e168(DAT_002b5358,DAT_002b5360,DAT_002b535c,DAT_002b5358,param_1 + 0x6c);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),1,4000,0);
  if (DAT_002b5364 <= *(int *)(param_1 + 0x2c)) {
    fVar13 = DAT_002b5368;
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar13 <= *(float *)(param_1 + 0x98)) << 0x1d;
  if (!SUB41(uVar12 >> 0x1d,0)) {
    if (*(int *)(param_1 + 0xa50) != 1) {
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
      if (*(int *)(param_1 + 0xa48) < 0x11) {
        uVar5 = DAT_002b536c;
      }
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,8);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar12 >> 0x15) & 3);
      FUN_00375c08(DAT_002b5370,fVar1,uVar4,uVar5,param_1 + 0x1a4,8,2);
      *(float *)(param_1 + 0x6c) = fVar1;
      *(undefined4 *)(param_1 + 0xa48) = 0x12;
      uVar5 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
      *(short *)(param_1 + 0xa6a) = (short)uVar5;
      uVar2 = FUN_00373d98(param_1 + 0x28,uVar5,(int)*(short *)(param_1 + 0xa6c),param_2);
      *(undefined2 *)(param_1 + 0xa6e) = uVar2;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined4 *)(param_1 + 0xa54) = DAT_002b5374;
      return;
    }
    goto LAB_002b5274;
  }
  if (*(int *)(param_1 + 0xa50) == 1) goto LAB_002b5274;
  uVar4 = 0;
  uVar9 = 0;
  iVar6 = FUN_00346e2c(DAT_002b5378,uVar5,param_2,param_1);
  if (iVar6 == 0) goto LAB_002b5274;
  sVar3 = FUN_0036e800(param_1,iVar6);
  uVar5 = DAT_002b537c;
  iVar8 = (int)(short)(sVar3 - *(short *)(param_1 + 0xbe));
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
  iVar6 = FUN_003740fc(uVar5,param_1,param_2);
  bVar11 = iVar6 != 0;
  iVar6 = FUN_003740fc(DAT_002b5380,param_1,param_2);
  if (iVar6 != 0) {
    bVar11 = bVar11 | 2;
  }
  iVar6 = iVar8;
  if (iVar8 < 0) {
    iVar6 = -iVar8;
  }
  *(float *)(param_1 + 0x6c) = fVar1;
  if (iVar6 - 0x2000U < 0x4000) {
    if (iVar8 + 0x5ffeU <= DAT_002b5384) {
      if (bVar11 == 0) {
        uVar7 = *(uint *)(param_2 + 0x5bf4);
        goto joined_r0x002b522c;
      }
      if (bVar11 == 1) goto LAB_002b5250;
      if (bVar11 == 2) goto LAB_002b5258;
      if (bVar11 == 3) {
        uVar9 = 10;
      }
    }
  }
  else {
    if (bVar11 == 0) {
      uVar7 = *(uint *)(param_2 + 0x5bf4);
joined_r0x002b522c:
      if ((uVar7 & 1) == 0) {
LAB_002b5258:
        uVar4 = 0xfffffffa;
        goto LAB_002b525c;
      }
    }
    else if (bVar11 != 1) {
      if (bVar11 != 2) {
        if (bVar11 == 3) {
          uVar9 = 5;
        }
        goto LAB_002b525c;
      }
      goto LAB_002b5258;
    }
LAB_002b5250:
    uVar4 = 6;
  }
LAB_002b525c:
  uVar5 = VectorSignedToFloat(uVar4,(byte)(uVar12 >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xa74) = uVar5;
  uVar5 = VectorSignedToFloat(uVar9,(byte)(uVar12 >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xa78) = uVar5;
LAB_002b5274:
  iVar8 = FUN_003731e0(param_1 + 0x1a4);
  iVar6 = DAT_002b5388;
  if (iVar8 != 0) {
    iVar8 = *(int *)(param_1 + 0xa50) + 1;
    *(int *)(param_1 + 0xa50) = iVar8;
    if (2 < iVar8) {
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0xa50) = 0;
    }
    uVar7 = uVar12 & 0xfffffff | (uint)(*(float *)(param_1 + 0xa74) == fVar1) << 0x1e;
    bVar10 = false;
    if (SUB41(uVar7 >> 0x1e,0)) {
      uVar7 = uVar12 & 0xfffffff | (uint)(*(float *)(param_1 + 0xa78) == fVar1) << 0x1e;
      bVar10 = SUB41(uVar7 >> 0x1e,0);
    }
    if (!bVar10) {
      iVar8 = 1;
      *(undefined4 *)(param_1 + 0xa50) = 1;
    }
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar6 + iVar8 * 4));
    iVar8 = *(int *)(param_1 + 0xa50);
    if (iVar8 == 0) {
      *(float *)(param_1 + 100) = fVar1;
    }
    uVar4 = DAT_002b538c;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar7 >> 0x15) & 3);
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
    }
    else if (iVar8 == 1) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 0xa78) + DAT_002b53c0;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0xa74);
      *(float *)(param_1 + 0xa78) = fVar1;
      *(float *)(param_1 + 0xa74) = fVar1;
    }
    else if (iVar8 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
      *(float *)(param_1 + 100) = fVar1;
      uVar5 = uVar4;
    }
    FUN_00375c08(DAT_002b5390,fVar1,uVar5,fVar1,param_1 + 0x1a4,*(undefined4 *)(iVar6 + iVar8 * 4),2
                );
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 0x5f) != 0) {
    return;
  }
  FUN_00375bcc(param_1,DAT_002b5394);
  return;
}
