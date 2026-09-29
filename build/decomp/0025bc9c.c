// OoT3D decomp @ 0025bc9c  name=FUN_0025bc9c  size=568

undefined4 FUN_0025bc9c(short *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float local_34;
  float local_30;
  undefined4 uStack_2c;

  pfVar6 = (float *)(param_1 + 0x6e);
  local_30 = (float)FUN_00367ef0(*(undefined4 *)(param_1 + 0x6c));
  if (param_1[0xd3] == 0) {
    if (*(short *)(*(int *)(param_1 + 0x6a) + 0x104) == 6) {
      *param_1 = 3;
    }
    else if ((int)*pfVar6 < DAT_0025bed4) {
      *param_1 = 2;
    }
    else if (*(int *)(param_1 + 0x70) < DAT_0025bed8) {
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
    }
    param_1[0xd3] = 1;
    iVar1 = DAT_0025bedc;
    param_1[0xd1] = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  fVar2 = DAT_0025beec;
  iVar1 = DAT_0025bee0;
  local_34 = *pfVar6;
  uStack_2c = *(undefined4 *)(param_1 + 0x72);
  uVar7 = in_fpscr & 0xfffffff |
          (uint)(*(float *)(DAT_0025bee0 + *param_1 * 4) <= *(float *)(param_1 + 0x42)) << 0x1d;
  if (SUB41(uVar7 >> 0x1d,0)) {
    local_30 = *(float *)(param_1 + 0x70) + local_30;
    FUN_00367df4(DAT_0025bee8,DAT_0025bee8,DAT_0025bee4,&local_34,param_1 + 0x40);
    param_1[0xd1] = 0;
    puVar5 = (undefined4 *)(DAT_0025bef4 + *param_1 * 0xc);
    *(undefined4 *)(param_1 + 0x52) = *puVar5;
    *(undefined4 *)(param_1 + 0x54) = puVar5[1];
    *(undefined4 *)(param_1 + 0x56) = puVar5[2];
    uVar9 = DAT_0025bef8;
    *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
    *(undefined4 *)(param_1 + 0xa2) = uVar9;
  }
  else {
    local_30 = *(float *)(param_1 + 0x70) - DAT_0025beec;
    FUN_00367df4(DAT_0025bee8,DAT_0025bee8,DAT_0025bee4,&local_34,param_1 + 0x40);
    puVar5 = (undefined4 *)(iVar1 + -0x60 + *param_1 * 0xc);
    *(undefined4 *)(param_1 + 0x52) = *puVar5;
    *(undefined4 *)(param_1 + 0x54) = puVar5[1];
    *(undefined4 *)(param_1 + 0x56) = puVar5[2];
    *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
    fVar3 = DAT_0025bef0;
    iVar4 = (int)*param_1;
    fVar8 = *(float *)(iVar1 + 0x10 + iVar4 * 4);
    fVar8 = (*(float *)(param_1 + 0x70) - fVar8) / (*(float *)(iVar1 + iVar4 * 4) - fVar8);
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + -0xa70 + iVar4 * 2),
                                        (byte)(uVar7 >> 0x15) & 3);
    param_1[0xd1] = (short)(int)(fVar10 * fVar8);
    *(float *)(param_1 + 0xa2) = fVar3 + fVar8 * fVar2;
  }
  uVar9 = FUN_00338a90(param_1 + 0x40,param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x92) = uVar9;
  *(undefined4 *)(param_1 + 0xa4) = DAT_0025befc;
  *(float *)(param_1 + 0x96) = *(float *)(param_1 + 0x40) - *pfVar6;
  *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x42) - *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0x9a) = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x72);
  return 1;
}
