// OoT3D decomp @ 00167204  name=FUN_00167204  size=1004

void FUN_00167204(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;

  fVar4 = DAT_001675e0;
  fVar3 = DAT_001675dc;
  fVar15 = DAT_001675d8;
  fVar12 = DAT_001675d4;
  fVar14 = DAT_001675d0;
  fVar13 = DAT_001675cc;
  piVar2 = DAT_001675c8;
  iVar8 = 0;
  do {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(param_1 + 0x230) < (int)(fVar13 / fVar11 + fVar14) + iVar8 + -8) {
      iVar6 = param_1 + iVar8 * 0xc;
      iVar10 = param_1 + iVar8 * 4;
      local_74 = *(undefined4 *)(iVar6 + 0x260);
      local_70 = *(undefined4 *)(iVar6 + 0x264);
      local_6c = *(undefined4 *)(iVar6 + 0x268);
      fVar11 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      local_40 = *(float *)(param_1 + 0x54) * (fVar3 + fVar11 * fVar12) * fVar15;
      local_68 = local_40 * 1.0;
      local_58 = local_40 * 0.0;
      local_48 = local_40 * 0.0;
      local_64 = local_40 * 0.0;
      local_54 = local_40 * 1.0;
      local_44 = local_40 * 0.0;
      local_60 = local_40 * 0.0;
      local_50 = local_40 * 0.0;
      local_40 = local_40 * 1.0;
      *(undefined1 *)(*(int *)(iVar10 + 0x38c) + 0xac) = 1;
      local_5c = local_74;
      local_4c = local_70;
      local_3c = local_6c;
      FUN_003721e0(*(undefined4 *)(iVar10 + 0x38c),&local_68);
      FUN_00372170(*(undefined4 *)(iVar10 + 0x38c),0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  fVar12 = *(float *)(param_1 + 0x88);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar4) << 0x1f | (uint)(fVar12 == fVar4) << 0x1e;
  bVar1 = (byte)(uVar7 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar12) || NAN(fVar4))) {
    iVar8 = 0;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(uVar7 >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)(fVar13 / fVar12 + fVar14),(byte)(uVar7 >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x230),(byte)(uVar7 >> 0x15) & 3);
    fVar12 = DAT_001675e4 + (fVar14 / fVar13) * DAT_001675e8;
    do {
      iVar6 = param_1 + iVar8 * 0xc;
      local_80 = *(undefined4 *)(iVar6 + 800);
      local_7c = *(undefined4 *)(iVar6 + 0x324);
      local_78 = *(undefined4 *)(iVar6 + 0x328);
      local_68 = 1.0;
      local_58 = 0.0;
      local_54 = 1.0;
      local_64 = 0.0;
      local_60 = 0.0;
      local_50 = 0.0;
      local_48 = 0.0;
      local_44 = 0.0;
      local_40 = 1.0;
      fVar15 = *(float *)(param_1 + 0x54) * fVar12;
      local_5c = local_80;
      local_4c = local_7c;
      local_3c = local_78;
      FUN_00371fac(&local_68,param_2 + 0x2fc);
      iVar6 = param_1 + iVar8 * 4;
      local_68 = local_68 * fVar15;
      local_58 = local_58 * fVar15;
      local_48 = local_48 * fVar15;
      local_64 = local_64 * fVar15;
      local_54 = local_54 * fVar15;
      local_44 = local_44 * fVar15;
      local_60 = local_60 * fVar15;
      local_50 = local_50 * fVar15;
      local_40 = local_40 * fVar15;
      *(undefined1 *)(*(int *)(iVar6 + 0x3ac) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar6 + 0x3ac),&local_68);
      FUN_003695cc(fVar4,fVar4,fVar4,fVar3 - fVar14 / fVar13,*(undefined4 *)(iVar6 + 0x3ac),0,4);
      FUN_00372170(*(undefined4 *)(iVar6 + 0x3ac),0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
  }
  if (*(short *)(param_1 + 0x232) != 0) {
    uVar7 = (uint)(short)(*(short *)(param_1 + 0x232) + -1);
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    uVar5 = DAT_001675ec;
    if ((uVar7 & 1) == 0) {
      local_8c = (float)FUN_003738a8(DAT_001675ec);
      pfVar9 = (float *)(DAT_001675f0 + (uVar7 & 3) * 0xc);
      local_8c = local_8c + *(float *)(param_1 + 0x28) + *pfVar9;
      local_88 = (float)FUN_003738a8(uVar5);
      local_88 = local_88 + *(float *)(param_1 + 0x2c) + pfVar9[1];
      local_84 = (float)FUN_003738a8(uVar5);
      local_84 = local_84 + *(float *)(param_1 + 0x30) + pfVar9[2];
      FUN_003580ec(param_2,param_1,&local_8c,100,0,0,0xffffffff,1);
    }
  }
  return;
}
