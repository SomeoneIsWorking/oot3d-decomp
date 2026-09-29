// OoT3D decomp @ 0020e09c  name=FUN_0020e09c  size=1720

void FUN_0020e09c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  float fVar4;
  float *pfVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64 [2];
  float local_5c;
  float local_54;
  float local_4c;
  float local_44;
  float local_3c;

  fVar4 = DAT_0020e4a8;
  iVar7 = *(int *)(DAT_0020e4a4 + param_2);
  if ((((*(uint *)(iVar7 + 0x1710) & 0x40) == 0) || (*(int *)(param_1 + 0x124) != 0)) &&
     (((*(uint *)(iVar7 + 0x1714) & 0x8000000) == 0 || (*(int *)(param_1 + 0x124) != 0)))) {
LAB_0020e124:
    if (*(short *)(param_1 + 0x1c) < 9) {
      if (*(char *)(param_1 + 0x230) != '\0') {
        local_cc = 0.0;
        FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,0,param_1);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xad) = 1;
      FUN_00372224(local_64,param_1 + 0x148);
      goto LAB_0020e588;
    }
  }
  else if (*(short *)(param_1 + 0x1c) != 10) {
    if ((*(char *)(iVar7 + 0x247e) == '\0') && (*(int *)(param_1 + 0x318) == DAT_0020e4ac)) {
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    goto LAB_0020e124;
  }
  uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e;
  if (!SUB41(uVar12 >> 0x1e,0)) {
    fVar13 = (float)FUN_00338f60((int)(short)((ushort)*(byte *)(param_1 + 0x304) *
                                             (short)DAT_0020e4b0));
    uVar14 = VectorFloatToUnsigned(DAT_0020e4b4 + fVar13 * DAT_0020e4b4,3);
    if (*(short *)(param_1 + 0x1c) == 9) {
      uVar9 = 0xffffff;
      uVar14 = (uVar14 & 0xff) << 0x18 | 0xffff00;
      fVar13 = DAT_0020e4b8;
    }
    else {
      uVar9 = 0xc;
      uVar14 = (uVar14 & 0xff) << 0x18 | 0xfafa;
      fVar13 = DAT_0020e4bc;
    }
    FUN_00372224(local_64,param_1 + 0x148);
    fVar17 = DAT_0020e4c0;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(uVar12 >> 0x15) & 3);
    fVar15 = fVar15 * DAT_0020e4c0;
    uVar12 = uVar12 & 0xfffffff | (uint)(fVar15 == fVar4) << 0x1e;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      fVar16 = (float)FUN_003727f0(fVar15);
      fVar15 = (float)FUN_00372674(fVar15);
      fVar18 = local_64[0] * fVar16;
      local_64[0] = local_64[0] * fVar15 - local_5c * fVar16;
      local_5c = fVar18 + local_5c * fVar15;
      fVar18 = local_54 * fVar16;
      local_54 = local_54 * fVar15 - local_4c * fVar16;
      local_4c = fVar18 + local_4c * fVar15;
      fVar18 = local_44 * fVar16;
      local_44 = local_44 * fVar15 - local_3c * fVar16;
      local_3c = fVar18 + local_3c * fVar15;
    }
    local_70 = *(float *)(param_1 + 0x154);
    local_6c = *(float *)(param_1 + 0x164);
    local_68 = *(float *)(param_1 + 0x174);
    iVar7 = *(int *)(param_1 + 0x22c);
    *(float *)(iVar7 + 0x3c) = local_70;
    *(float *)(iVar7 + 0x40) = local_6c;
    *(float *)(iVar7 + 0x44) = local_68;
    fVar15 = DAT_0020e4c8;
    uVar2 = uVar12 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e;
    fVar16 = fVar4;
    if (!SUB41(uVar2 >> 0x1e,0)) {
      fVar16 = (float)VectorUnsignedToFloat
                                ((short)((ushort)*(undefined4 *)(DAT_0020e4c4 + param_2) & 0xff) *
                                 4000,(byte)(uVar2 >> 0x15) & 3);
      fVar16 = fVar16 * fVar17;
    }
    uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 == fVar4) << 0x1e;
    local_a0 = DAT_0020e4c8;
    local_90 = fVar4;
    if (!SUB41(uVar12 >> 0x1e,0)) {
      fVar17 = (float)FUN_003727f0(fVar16);
      local_a0 = (float)FUN_00372674(fVar16);
      local_90 = fVar17;
    }
    fVar17 = DAT_0020e4cc;
    local_9c = -local_90;
    local_98 = fVar4;
    local_94 = fVar4;
    local_88 = fVar4;
    local_84 = fVar4;
    local_80 = fVar4;
    local_7c = fVar4;
    local_78 = fVar15;
    local_74 = fVar4;
    iVar7 = *(int *)(param_1 + 0x22c);
    *(float *)(iVar7 + 0x54) = local_a0;
    *(float *)(iVar7 + 0x58) = local_9c;
    *(float *)(iVar7 + 0x5c) = fVar4;
    *(float *)(iVar7 + 0x60) = fVar4;
    *(float *)(iVar7 + 100) = local_90;
    fVar13 = fVar13 * fVar17;
    *(float *)(iVar7 + 0x68) = local_a0;
    *(float *)(iVar7 + 0x6c) = fVar4;
    *(float *)(iVar7 + 0x70) = fVar4;
    *(float *)(iVar7 + 0x74) = fVar4;
    *(float *)(iVar7 + 0x78) = fVar4;
    *(float *)(iVar7 + 0x7c) = fVar15;
    *(float *)(iVar7 + 0x80) = fVar4;
    local_ac = *(float *)(param_1 + 0x54) * fVar13;
    local_a8 = *(float *)(param_1 + 0x58) * fVar13;
    local_a4 = *(float *)(param_1 + 0x5c) * fVar13;
    iVar7 = *(int *)(param_1 + 0x22c);
    *(float *)(iVar7 + 0x48) = local_ac;
    *(float *)(iVar7 + 0x4c) = local_a8;
    *(float *)(iVar7 + 0x50) = local_a4;
    uVar2 = (uVar14 << 0x10) >> 0x18;
    local_bc = (float)VectorSignedToFloat((uVar9 & 0xff) - (uVar14 & 0xff),
                                          (byte)(uVar12 >> 0x15) & 3);
    local_b8 = (float)VectorSignedToFloat(((uVar9 << 0x10) >> 0x18) - uVar2,
                                          (byte)(uVar12 >> 0x15) & 3);
    uVar1 = (uVar14 << 8) >> 0x18;
    local_b4 = (float)VectorSignedToFloat(((uVar9 << 8) >> 0x18) - uVar1,(byte)(uVar12 >> 0x15) & 3)
    ;
    local_cc = (float)VectorUnsignedToFloat(uVar14 & 0xff,(byte)(uVar12 >> 0x15) & 3);
    local_c8 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar12 >> 0x15) & 3);
    local_c4 = (float)VectorUnsignedToFloat(uVar1,(byte)(uVar12 >> 0x15) & 3);
    local_c0 = (float)VectorUnsignedToFloat(uVar14 >> 0x18,(byte)(uVar12 >> 0x15) & 3);
    local_bc = local_bc * DAT_0020e780;
    local_b8 = local_b8 * DAT_0020e780;
    local_b4 = local_b4 * DAT_0020e780;
    local_cc = local_cc * DAT_0020e780;
    local_b0 = fVar15;
    local_c8 = local_c8 * DAT_0020e780;
    local_c4 = local_c4 * DAT_0020e780;
    local_c0 = local_c0 * DAT_0020e780;
    iVar7 = *(int *)(param_1 + 0x22c);
    *(float *)(iVar7 + 0xf0) = local_bc;
    *(float *)(iVar7 + 0xf4) = local_b8;
    *(float *)(iVar7 + 0xf8) = local_b4;
    *(float *)(iVar7 + 0xfc) = fVar15;
    local_8c = local_a0;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x22c),1,&local_cc);
    *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x170) = 1;
    if (*(char *)(param_1 + 0x230) != '\0') {
      FUN_00371eac(*(undefined4 *)(param_1 + 0x22c),0);
    }
  }
LAB_0020e588:
  fVar13 = DAT_0020e788;
  iVar7 = DAT_0020e784;
  if (((*(uint *)(DAT_0020e784 + 0x2c) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0020e784 + 0x2c), pfVar5 = DAT_0020e790, fVar17 = DAT_0020e78c,
     iVar8 != 0)) {
    *DAT_0020e790 = fVar4;
    pfVar5[1] = fVar17;
    pfVar5[2] = fVar13;
  }
  if (((*(uint *)(iVar7 + 0x28) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0020e794), pfVar5 = DAT_0020e79c, fVar17 = DAT_0020e798, iVar8 != 0))
  {
    *DAT_0020e79c = fVar4;
    pfVar5[1] = fVar17;
    pfVar5[2] = fVar13;
  }
  if (((*(uint *)(iVar7 + 0x24) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_0020e7a0), pfVar5 = DAT_0020e7a8, fVar13 = DAT_0020e7a4, iVar7 != 0))
  {
    *DAT_0020e7a8 = fVar4;
    pfVar5[1] = fVar4;
    pfVar5[2] = fVar13;
  }
  FUN_003735ac(param_1 + 0x2c0,local_64,DAT_0020e7a8);
  if (*(int *)(param_1 + 0x318) == DAT_0020e7ac) {
    FUN_003735ac(&local_70,local_64,DAT_0020e790);
    FUN_003735ac(&local_7c,local_64,DAT_0020e79c);
    sVar3 = *(short *)(param_1 + 0x1c);
    if (sVar3 < 10) {
      if (*(int *)(param_1 + 0x308) == 0) {
        bVar6 = FUN_0033a480(param_2,param_1 + 0x234,param_1 + 0x2d0,&local_70,&local_7c);
        if ((bVar6 & sVar3 < 6) == 0) {
          return;
        }
      }
      else {
        if (sVar3 >= 6) {
          return;
        }
        bVar10 = false;
        if (*(float *)(param_1 + 0x2d4) == local_70) {
          bVar10 = *(float *)(param_1 + 0x2d8) == local_6c;
        }
        bVar11 = false;
        if (bVar10) {
          bVar11 = *(float *)(param_1 + 0x2dc) == local_68;
        }
        if (bVar11) {
          bVar10 = false;
          if (*(float *)(param_1 + 0x2ec) == local_7c) {
            bVar10 = *(float *)(param_1 + 0x2f0) == local_78;
          }
          bVar11 = false;
          if (bVar10) {
            bVar11 = *(float *)(param_1 + 0x2f4) == local_74;
          }
          if (bVar11) {
            return;
          }
        }
      }
      iVar7 = FUN_00362384(*(undefined4 *)(param_1 + 0x2cc));
      *(undefined1 *)(iVar7 + 0x282) = 0xd;
      FUN_003620f0(iVar7,&local_70,&local_7c);
    }
  }
  return;
}
