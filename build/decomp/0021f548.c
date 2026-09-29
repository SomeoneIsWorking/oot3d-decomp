// OoT3D decomp @ 0021f548  name=FUN_0021f548  size=1060

/* WARNING: Removing unreachable block (ram,0x0021f598) */

void FUN_0021f548(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r11;
  uint in_fpscr;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
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
  uint local_38;

  FUN_00372224(&local_68,param_1 + 0x148);
  iVar2 = FUN_0037571c(param_2);
  fVar15 = DAT_0021f97c;
  fVar12 = DAT_0021f978;
  fVar1 = DAT_0021f974;
  psVar3 = (short *)0x0;
  if (iVar2 != 0) {
    unaff_r11 = param_2 + 0x2000;
    psVar3 = *(short **)(&DAT_000022dc + param_2);
  }
  if ((iVar2 != 0 && psVar3 != (short *)0x0) && (*psVar3 == 2)) {
    uVar4 = (uint)*(byte *)(param_1 + 0x1c2);
    if (0xf < uVar4) {
      uVar4 = 0xf;
    }
    iVar2 = (int)*(short *)(*DAT_0021f950 + 0x110);
    fVar13 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar4 < (int)(DAT_0021f954 / fVar13 + DAT_0021f958)) {
      uVar7 = 0xff;
      uVar6 = 0xff;
      uVar5 = 0xff;
      uVar8 = 0xff;
      fVar13 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 / (DAT_0021f954 / fVar14);
      local_38 = VectorFloatToUnsigned(DAT_0021f95c + fVar13 * DAT_0021f964,3);
      uVar10 = VectorFloatToUnsigned(DAT_0021f960 - fVar13 * DAT_0021f964,3);
    }
    else {
      fVar11 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (fVar11 - DAT_0021f954 / fVar14) / (DAT_0021f968 - DAT_0021f954 / fVar13);
      uVar8 = VectorFloatToUnsigned(DAT_0021f960 - fVar13 * DAT_0021f960,3);
      uVar5 = uVar8 & 0xff;
      uVar6 = VectorFloatToUnsigned(DAT_0021f960 - fVar13 * DAT_0021f96c,3);
      uVar6 = uVar6 & 0xff;
      uVar7 = uVar8 & 0xff;
      local_38 = VectorFloatToUnsigned(DAT_0021f960 - fVar13 * DAT_0021f970,3);
      uVar10 = VectorFloatToUnsigned(DAT_0021f95c + fVar13 * DAT_0021f95c,3);
      uVar8 = uVar8 & 0xff;
    }
    local_38 = local_38 & 0xff;
    iVar2 = *(int *)(unaff_r11 + 0x2dc);
    local_5c = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    local_4c = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    local_3c = VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    local_68 = 1.0;
    local_58 = 0.0;
    local_54 = 1.0;
    local_64 = 0.0;
    local_60 = 0.0;
    local_50 = 0.0;
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = 1.0;
    fVar13 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(*(int *)(unaff_r11 + 0x2dc) + 6),
                               (byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar13 * DAT_0021f97c,&local_68,1);
    fVar13 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(*(int *)(unaff_r11 + 0x2dc) + 8),
                               (byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar13 * fVar15,&local_68,1);
    fVar13 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(*(int *)(unaff_r11 + 0x2dc) + 10),
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar13 * fVar15;
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar12) << 0x1e;
    if (!SUB41(uVar9 >> 0x1e,0)) {
      fVar14 = (float)FUN_003727f0(fVar13);
      fVar11 = (float)FUN_00372674(fVar13);
      fVar12 = local_64 * fVar14;
      local_64 = local_64 * fVar11 - local_68 * fVar14;
      fVar15 = local_54 * fVar14;
      local_54 = local_54 * fVar11 - local_58 * fVar14;
      fVar13 = local_44 * fVar14;
      local_44 = local_44 * fVar11 - local_48 * fVar14;
      local_68 = local_68 * fVar11 + fVar12;
      local_58 = local_58 * fVar11 + fVar15;
      local_48 = local_48 * fVar11 + fVar13;
    }
    local_80 = (float)VectorUnsignedToFloat(uVar10 & 0xff,(byte)(uVar9 >> 0x15) & 3);
    local_68 = local_68 * fVar1;
    local_58 = local_58 * fVar1;
    local_48 = local_48 * fVar1;
    local_84 = (float)VectorUnsignedToFloat(uVar8,(byte)(uVar9 >> 0x15) & 3);
    local_64 = local_64 * fVar1;
    local_54 = local_54 * fVar1;
    local_44 = local_44 * fVar1;
    fVar13 = (float)VectorUnsignedToFloat(uVar6,(byte)(uVar9 >> 0x15) & 3);
    local_60 = local_60 * fVar1;
    fVar15 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar9 >> 0x15) & 3);
    local_50 = local_50 * fVar1;
    local_40 = local_40 * fVar1;
    fVar12 = (float)VectorUnsignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
    local_88 = (float)VectorUnsignedToFloat(local_38,(byte)(uVar9 >> 0x15) & 3);
    local_74 = (fVar13 - local_84) * DAT_0021f980;
    local_78 = (fVar12 - local_88) * DAT_0021f980;
    local_70 = (fVar15 - local_80) * DAT_0021f980;
    local_88 = local_88 * DAT_0021f980;
    local_84 = local_84 * DAT_0021f980;
    local_80 = local_80 * DAT_0021f980;
    local_7c = fVar1;
    local_6c = fVar1;
    FUN_00342988(*(undefined4 *)(param_1 + 0x1cc),&local_88,0xffffffff);
    FUN_003693b4(*(undefined4 *)(param_1 + 0x1cc),0,&local_68,0,&local_78,uVar4);
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 8),0);
  }
  return;
}
