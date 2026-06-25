// OoT3D decomp @ 004b9920  name=FUN_004b9920  size=1176

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b9920(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uStack_34;
  float fStack_30;
  
  fVar4 = DAT_004b9c70;
  fVar13 = DAT_004b9c6c;
  piVar3 = DAT_004b9c68;
  fVar14 = DAT_004b9c60;
  iVar7 = DAT_004b9c5c;
  iVar6 = *DAT_004b9c68;
  if (*(int *)(param_1 + 0x2250) < 0x3f800000) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar11 = fVar11 * DAT_004b9c74;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5a),(byte)(in_fpscr >> 0x15) & 3);
    FUN_002dd8b0(fVar12 * DAT_004b9c64,param_1,param_2);
    FUN_002bd118(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_2,
                 *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3a8));
    fVar11 = *(float *)(param_1 + 0x2250) + fVar11;
    *(float *)(param_1 + 0x2250) = fVar11;
    if (0x3f7fffff < (int)fVar11) {
      *(float *)(param_1 + 0x2250) = fVar13;
    }
    fVar15 = *(float *)(param_1 + 0x2250);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x221c);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x74),(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar11 - fVar12 * DAT_004b9c60;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(DAT_004b9c70 <= fVar12) << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) {
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5e),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar15 = fVar15 * DAT_004b9c64 * fVar12;
      if ((int)fVar15 < 0x3f800000) {
        fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5c),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5a),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_002dd8b0(fVar11 * fVar12 * DAT_004b9c64 + fVar16 * DAT_004b9c64,param_1,param_2);
      }
      else {
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x60),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_002dd8b0(DAT_004b9c78 + fVar12 * fVar11 * DAT_004b9c64,param_1,param_2);
        fVar15 = fVar13;
      }
      FUN_002bcaa4(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_2,
                   *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3a8));
      FUN_002bd118(*(float *)(param_1 + 0x2254) * DAT_004b9c7c,param_1 + 0x254,param_2,0xdc);
    }
    else {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5c),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x5a),(byte)(in_fpscr >> 0x15) & 3
                                         );
      FUN_002dd8b0(fVar11 * fVar12 * DAT_004b9c64 + fVar15 * DAT_004b9c64,param_1,param_2);
      FUN_002bd118(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_2,
                   *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3a8));
      fVar15 = fVar13;
    }
  }
  if ((int)fVar15 < 0x3f800000) {
    FUN_002bcf48(fVar13 - fVar15,param_1 + 0x254,param_2);
  }
  iVar7 = FUN_002c3d18(param_2,param_1,DAT_004b9c80,1);
  if (iVar7 == 0) {
    if ((*(uint *)(param_1 + 0x29b8) & 4) != 0) {
      FUN_0036055c(param_2,param_1,DAT_002bca90,1);
      uVar8 = FUN_0034d628(param_1);
      uVar9 = DAT_002bca94;
      uVar5 = FUN_003603c0(param_1 + 0x254,uVar8);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(DAT_002bca9c,DAT_002bca98,uVar5,uVar9,param_1 + 0x254,param_2,uVar8,2);
      *(undefined2 *)(DAT_002bcaa0 + param_1) = *(undefined2 *)(param_1 + 0xbe);
      return;
    }
    iVar7 = FUN_00349574(param_1);
    if ((iVar7 == 0) && ((*(uint *)(DAT_004b9c84 + param_1) & DAT_004b9c88) == 0)) {
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x2220);
      FUN_002c3c7c(param_1,param_2);
      return;
    }
    FUN_0036b3f4(fVar4,param_1,&fStack_30,&uStack_34,param_2);
    iVar7 = FUN_002bcd38(param_1,&fStack_30,&uStack_34,param_2);
    if (iVar7 < 0) {
      sVar1 = (short)uStack_34 - *(short *)(param_1 + 0x2220);
      FUN_002dd714(fStack_30 * DAT_004b9df8,DAT_004b9df8,DAT_004b9dfc,param_1 + 0x221c);
      fVar14 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00370378(param_1 + 0x2220,(int)(short)uStack_34,(int)(short)(int)(fVar14 * DAT_004b9e00));
      bVar10 = fStack_30 == fVar4;
      if (bVar10) {
        bVar10 = *(float *)(param_1 + 0x221c) == fVar4;
      }
      if (bVar10) {
        FUN_002bca14(param_1,param_2);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x221c) <= DAT_004b9c8c) {
        uVar2 = in_fpscr & 0xfffffff | (uint)(fStack_30 == fVar4) << 0x1e;
        if (!SUB41(uVar2 >> 0x1e,0)) {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x6a),
                                              (byte)(uVar2 >> 0x15) & 3);
          iVar6 = FUN_003705a0(fVar4,fVar13 * fVar14,param_1 + 0x221c);
          if (iVar6 == 0) {
            return;
          }
          fStack_30 = fVar4;
          uStack_34 = (uint)*(ushort *)(param_1 + 0x2220);
        }
        if (iVar7 == 0) {
          if (DAT_004b9df4 < (int)fStack_30) {
            uVar9 = 0;
            if ((fStack_30 != fVar4 && fStack_30 < fVar4 == (NAN(fStack_30) || NAN(fVar4))) &&
               ((short)((short)uStack_34 - *(short *)(param_1 + 0xbe)) < 0)) {
              uVar9 = 1;
            }
            FUN_002c3adc(param_1,param_2,uVar9);
            return;
          }
          FUN_002bcb20(param_1,param_2);
          return;
        }
        FUN_002c3c7c(param_1,param_2);
        return;
      }
      FUN_0036055c(param_2,param_1,DAT_004b9c90,1);
      uVar9 = DAT_004b9c94;
      uVar8 = FUN_003603c0(param_1 + 0x254,0xe2);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(fVar13,fVar4,uVar8,uVar9,param_1 + 0x254,param_2,0xe2,2);
    }
  }
  return;
}

