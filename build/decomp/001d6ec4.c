// OoT3D decomp @ 001d6ec4  name=FUN_001d6ec4  size=1064

void FUN_001d6ec4(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  fVar9 = DAT_001d72dc;
  piVar2 = DAT_001d72d8;
  if ((*(short *)(param_1 + 0x9a8) != 8) && ((*(ushort *)(param_1 + 0x9c4) & 8) == 0)) {
    if ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1710) & 0x100000) != 0) {
      fVar6 = *(float *)(param_1 + 0xf4);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001d72d8 + 0x1508),
                                          (byte)(in_fpscr >> 0x15) & 3);
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar10) << 0x1f |
              (uint)(fVar6 == fVar10) << 0x1e;
      in_fpscr = uVar5 | (uint)(NAN(fVar6) || NAN(fVar10)) << 0x1c;
      bVar1 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        return;
      }
    }
    if (*(float *)(param_1 + 0x54) != DAT_001d72dc) {
      uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x920) == DAT_001d72dc) << 0x1e;
      if ((!SUB41(uVar5 >> 0x1e,0)) && ((*(ushort *)(param_1 + 0x9c4) & 0x200) == 0)) {
        FUN_00341d5c(param_2,param_1 + 0x1a4,0,0,param_1,
                     (int)(short)(int)(*(float *)(param_1 + 0x920) * DAT_001d72e0));
      }
      fVar10 = DAT_001d72e8;
      fVar6 = DAT_001d72e4;
      uVar5 = uVar5 & 0xfffffff | (uint)(*(float *)(param_1 + 0x924) == fVar9) << 0x1e;
      if (!SUB41(uVar5 >> 0x1e,0)) {
        uVar7 = *(undefined4 *)(param_1 + 0x154);
        uVar11 = *(undefined4 *)(param_1 + 0x164);
        uVar14 = *(undefined4 *)(param_1 + 0x174);
        if (*(ushort *)(param_1 + 0x9be) == 0) {
          fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                             (byte)(uVar5 >> 0x15) & 3);
          fVar8 = fVar9 * fVar8 * DAT_001d72e4 - DAT_001d72e8;
        }
        else {
          fVar8 = (float)VectorUnsignedToFloat
                                   ((uint)*(ushort *)(param_1 + 0x9be),(byte)(uVar5 >> 0x15) & 3);
          fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(uVar5 >> 0x15) & 3);
          fVar8 = DAT_001d72e8 + fVar8 * fVar12 * DAT_001d72e4;
        }
        fVar12 = (float)FUN_002cfca0((int)(short)((int)fVar8 << 0xc));
        fVar8 = DAT_001d72f0;
        fVar12 = (DAT_001d72f0 + fVar12 * DAT_001d72ec) * DAT_001d72f4;
        if ((*(ushort *)(param_1 + 0x9c4) & 0x200) != 0) {
          fVar12 = fVar12 * DAT_001d72f8;
        }
        fVar12 = *(float *)(param_1 + 0x54) * fVar12 * DAT_001d72fc * DAT_001d7300 * DAT_001d7304;
        *(undefined4 *)(*(int *)(param_1 + 0x918) + 0x170) = 1;
        iVar4 = *(int *)(param_1 + 0x918);
        *(undefined4 *)(iVar4 + 0x3c) = uVar7;
        *(undefined4 *)(iVar4 + 0x40) = uVar11;
        *(undefined4 *)(iVar4 + 0x44) = uVar14;
        iVar4 = *(int *)(param_1 + 0x918);
        *(float *)(iVar4 + 0x48) = fVar12;
        *(float *)(iVar4 + 0x4c) = fVar12;
        *(float *)(iVar4 + 0x50) = fVar12;
        *(undefined4 *)(*(int *)(param_1 + 0x91c) + 0x170) = 1;
        iVar4 = *(int *)(param_1 + 0x91c);
        *(undefined4 *)(iVar4 + 0x3c) = uVar7;
        *(undefined4 *)(iVar4 + 0x40) = uVar11;
        *(undefined4 *)(iVar4 + 0x44) = uVar14;
        iVar4 = *(int *)(param_1 + 0x91c);
        *(float *)(iVar4 + 0x48) = fVar12 * fVar10;
        *(float *)(iVar4 + 0x4c) = fVar12 * fVar10;
        *(float *)(iVar4 + 0x50) = fVar12 * fVar10;
        fVar12 = DAT_001d7314;
        if (*(ushort *)(param_1 + 0x9be) == 0) {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(uVar5 >> 0x15) & 3);
          fVar9 = fVar9 * fVar13 * fVar6 - fVar10;
        }
        else {
          fVar9 = (float)VectorUnsignedToFloat
                                   ((uint)*(ushort *)(param_1 + 0x9be),(byte)(uVar5 >> 0x15) & 3);
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(uVar5 >> 0x15) & 3);
          fVar9 = fVar10 + fVar9 * fVar13 * fVar6;
        }
        uVar3 = DAT_001d7308 & (int)fVar9 * 0x32;
        if (0xff < (int)uVar3) {
          uVar3 = DAT_001d7308 - uVar3;
        }
        if (*(short *)(param_1 + 0x9c2) < 0) {
          VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(uVar5 >> 0x15) & 3);
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(uVar5 >> 0x15) & 3);
          fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9c2),
                                             (byte)(uVar5 >> 0x15) & 3);
          fVar9 = (float)VectorSignedToFloat((int)(fVar9 * fVar13 * fVar6 - fVar10),
                                             (byte)(uVar5 >> 0x15) & 3);
          fVar8 = fVar8 + fVar9 * DAT_001d7310;
        }
        fVar6 = *(float *)(param_1 + 0x92c) * DAT_001d7314;
        fVar13 = (float)VectorSignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
        fVar10 = *(float *)(param_1 + 0x930) * DAT_001d7314;
        fVar9 = *(float *)(param_1 + 0x934) * *(float *)(param_1 + 0x924) * fVar8 * DAT_001d7314;
        iVar4 = *(int *)(param_1 + 0x91c);
        *(float *)(iVar4 + 0xf0) = *(float *)(param_1 + 0x928) * DAT_001d7314;
        *(float *)(iVar4 + 0xf4) = fVar6;
        *(float *)(iVar4 + 0xf8) = fVar10;
        *(float *)(iVar4 + 0xfc) = fVar9;
        fVar9 = *(float *)(param_1 + 0x93c);
        fVar6 = *(float *)(param_1 + 0x940);
        fVar10 = *(float *)(param_1 + 0x924);
        iVar4 = *(int *)(param_1 + 0x918);
        *(float *)(iVar4 + 0xf0) = *(float *)(param_1 + 0x938) * fVar12;
        *(float *)(iVar4 + 0xf4) = fVar9 * fVar12;
        *(float *)(iVar4 + 0xf8) = fVar6 * fVar12;
        *(float *)(iVar4 + 0xfc) = fVar10 * fVar13 * fVar8 * fVar12;
        FUN_00371eac(*(undefined4 *)(param_1 + 0x918),1);
        FUN_00371eac(*(undefined4 *)(param_1 + 0x91c),1);
      }
    }
  }
  return;
}

