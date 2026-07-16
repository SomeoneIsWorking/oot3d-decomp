// OoT3D decomp @ 002bd9ec  name=FUN_002bd9ec  size=832

void FUN_002bd9ec(float param_1,int param_2,undefined4 param_3,int param_4,uint param_5,int param_6,
                 int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (((*(uint *)(iRam002bdd2c + 4) & 1) == 0) &&
     (iVar4 = func_0x003679b4(uRam002bdd30), iVar4 != 0)) {
    func_0x00350820(iRam002bdd38,uRam002bdd34,0x24,0x40);
  }
  iVar4 = iRam002bdd38;
  if (param_4 != 0) {
    *(undefined1 *)(param_2 + 0x1c) = 0;
    func_0x0048ba78(param_3,iVar4);
    iVar4 = iRam002bdd4c;
    fVar3 = fRam002bdd48;
    fVar2 = fRam002bdd44;
    fVar1 = fRam002bdd40;
    if (param_7 != 0) {
      param_1 = (float)VectorSignedToFloat((int)(param_1 + fRam002bdd3c),
                                           (byte)(in_fpscr >> 0x15) & 3);
    }
    uVar9 = 0;
    if (param_5 != 0) {
      do {
        if (uVar9 == *(byte *)(*(int *)(param_2 + 4) + 0x75)) {
          func_0x00347550(param_1,param_4,uVar9,iRam002bdd38 + uVar9 * 0x24,3);
        }
        else {
          func_0x00347550(param_1,param_4,uVar9,iRam002bdd38 + uVar9 * 0x24,2);
        }
        pfVar5 = (float *)(param_6 + uVar9 * 0x34);
        pfVar6 = (float *)(iRam002bdd38 + uVar9 * 0x24);
        fVar10 = ABS(pfVar6[4] * fVar1);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= pfVar6[5] * fVar1) << 0x1d;
        fVar11 = ABS(pfVar6[5] * fVar1);
        for (fVar12 = ABS(pfVar6[3] * fVar1); iRam002bdd50 <= (int)fVar12; fVar12 = fVar12 - fVar3)
        {
        }
        for (; iRam002bdd50 <= (int)fVar10; fVar10 = fVar10 - fVar3) {
        }
        for (; iRam002bdd50 <= (int)fVar11; fVar11 = fVar11 - fVar3) {
        }
        uVar13 = VectorFloatToUnsigned(fVar12,3);
        uVar14 = VectorFloatToUnsigned(fVar10,3);
        uVar15 = VectorFloatToUnsigned(fVar11,3);
        fVar19 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar7 = (float *)(iVar4 + (uVar13 & 0xff) * 0x10);
        fVar17 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar8 = (float *)(iVar4 + (uVar14 & 0xff) * 0x10);
        fVar18 = pfVar7[1] + (fVar12 - fVar19) * pfVar7[3];
        fVar19 = *pfVar7 + (fVar12 - fVar19) * pfVar7[2];
        pfVar7 = (float *)(iVar4 + (uVar15 & 0xff) * 0x10);
        fVar20 = *pfVar8 + (fVar10 - fVar16) * pfVar8[2];
        fVar10 = pfVar8[1] + (fVar10 - fVar16) * pfVar8[3];
        fVar12 = *pfVar7 + (fVar11 - fVar17) * pfVar7[2];
        if (pfVar6[3] * fVar1 < fVar2) {
          fVar19 = -fVar19;
        }
        fVar11 = pfVar7[1] + (fVar11 - fVar17) * pfVar7[3];
        if (pfVar6[4] * fVar1 < fVar2) {
          fVar20 = -fVar20;
        }
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar12 = -fVar12;
        }
        *pfVar5 = fVar11 * fVar10;
        pfVar5[4] = fVar12 * fVar10;
        pfVar5[9] = fVar19 * fVar10;
        pfVar5[10] = fVar18 * fVar10;
        pfVar5[1] = fVar19 * fVar11 * fVar20 - fVar18 * fVar12;
        pfVar5[6] = fVar18 * fVar12 * fVar20 - fVar19 * fVar11;
        pfVar5[2] = fVar19 * fVar12 + fVar18 * fVar11 * fVar20;
        pfVar5[5] = fVar18 * fVar11 + fVar19 * fVar12 * fVar20;
        pfVar5[8] = -fVar20;
        pfVar5[3] = 0.0;
        pfVar5[7] = 0.0;
        pfVar5[0xb] = 0.0;
        uVar9 = uVar9 + 1;
        pfVar5[3] = *pfVar6;
        pfVar5[7] = pfVar6[1];
        pfVar5[0xb] = pfVar6[2];
      } while (uVar9 < param_5);
    }
  }
  return;
}

