// OoT3D decomp @ 004b9e04  name=FUN_004b9e04  size=1036

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe0 : 0x004b9ff0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004b9e04(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_28;
  
  fVar13 = DAT_004ba140;
  uVar11 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x288) == DAT_004ba140) << 0x1e;
  if (SUB41(uVar11 >> 0x1e,0)) {
    *(undefined *)(param_1 + 0x2c4) = 0;
    FUN_004bdcac(param_1 + 0x254);
    iVar5 = FUN_0033bd6c(param_1);
    if (iVar5 == 0) {
      uVar6 = *(undefined4 *)(DAT_004ba144 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x2b8);
    }
    else {
      uVar6 = 0x1a8;
    }
    *(undefined4 *)(param_1 + 0x284) = uVar6;
  }
  else {
    *(short *)(param_1 + 0x2238) = *(short *)(param_1 + 0x2238) + 1;
  }
  fVar15 = DAT_004ba15c;
  if (*(int *)(param_1 + 0x284) == 0x1a8) {
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004ba148 + 0x492),
                                        (byte)(uVar11 >> 0x15) & 3);
    fVar14 = fVar14 * DAT_004ba150;
    fVar16 = DAT_004ba14c;
  }
  else {
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004ba148 + 0x492),
                                        (byte)(uVar11 >> 0x15) & 3);
    fVar14 = fVar14 * DAT_004ba158;
    fVar16 = DAT_004ba154;
  }
  *(float *)(param_1 + 0x2a0) = fVar16;
  *(float *)(param_1 + 0x29c) = fVar16 - fVar15;
  if ((short)(*(short *)(param_1 + 0x2220) - *(short *)(param_1 + 0xbe)) < 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = 1;
  }
  fVar15 = (float)VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x15) & 3);
  *(float *)(param_1 + 0x294) = fVar15 * fVar14 * *(float *)(param_1 + 0x221c);
  FUN_0036b4ec(param_1 + 0x254,param_2);
  iVar5 = FUN_0036b1e0(fVar13,param_1 + 0x254);
  if ((iVar5 != 0) || (iVar5 = FUN_0036b1e0(fVar16 * DAT_004ba160,param_1 + 0x254), iVar5 != 0)) {
    FUN_002be2ec(*(undefined4 *)(param_1 + 0x221c),param_1);
  }
  iVar5 = FUN_002c3d18(param_2,param_1,DAT_004ba164,1);
  if (iVar5 == 0) {
    if ((*(uint *)(param_1 + 0x29b8) & 4) != 0) {
      FUN_0036055c(param_2,param_1,DAT_002bca90,1);
      uVar7 = FUN_0034d628(param_1);
      uVar6 = DAT_002bca94;
      uVar2 = FUN_003603c0(param_1 + 0x254,uVar7);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar11 >> 0x15) & 3);
      FUN_00360190(DAT_002bca9c,DAT_002bca98,uVar2,uVar6,param_1 + 0x254,param_2,uVar7,2);
      *(undefined2 *)(DAT_002bcaa0 + param_1) = *(undefined2 *)(param_1 + 0xbe);
      return;
    }
    iVar5 = FUN_00349574(param_1);
    uVar6 = DAT_004ba168;
    if (iVar5 != 0) {
      FUN_0036055c(param_2,param_1,DAT_0031e090,1);
      if (((*(uint *)(DAT_0031e094 + param_1) & 0x200) == 0) &&
         (((*(char *)(DAT_0031e09c + param_1) != '\x01' || (*DAT_0031e0a0 < 'Q')) ||
          ((*(uint *)(DAT_0031e094 + param_1) & 0x400) != 0)))) {
        uVar7 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xa8);
      }
      else {
        uVar7 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xc0);
      }
      uVar2 = FUN_003603c0(param_1 + 0x254,uVar7);
      uVar2 = VectorSignedToFloat(uVar2,(byte)(uVar11 >> 0x15) & 3);
      FUN_00360190(DAT_0031e0a8,DAT_0031e0a4,uVar2,uVar6,param_1 + 0x254,param_2,uVar7,2);
      *(undefined2 *)(DAT_0031e0ac + param_1) = 1;
      return;
    }
    if (((*(uint *)(DAT_004ba16c + param_1) & DAT_004ba170) == 0) &&
       (1 < *(short *)(param_1 + 0x2238))) {
      FUN_0036055c(param_2,param_1,DAT_0034bd2c,1);
      uVar2 = DAT_0034bd38;
      uVar7 = DAT_0034bd34;
      iVar5 = DAT_0034bd30;
      if (*(int *)(param_1 + 0x284) != DAT_0034bd30) {
        if (*(int *)(param_1 + 0x284) == 0x88) {
          uVar6 = DAT_0034bd38;
        }
        uVar3 = FUN_0034d628(param_1);
        uVar4 = FUN_003603c0(param_1 + 0x254,uVar3);
        uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar11 >> 0x15) & 3);
        FUN_00360190(uVar7,uVar2,uVar4,uVar6,param_1 + 0x254,param_2,uVar3,2);
        *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
        return;
      }
      uVar6 = FUN_003603c0(param_1 + 0x254,DAT_0034bd30);
      uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x15) & 3);
      FUN_00360190(uVar7,uVar6,uVar2,uVar2,param_1 + 0x254,param_2,iVar5,2);
      FUN_003603f8(param_2,param_1,4);
      *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
      return;
    }
    fVar16 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x108);
    fVar15 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x110);
    fVar15 = SQRT(fVar16 * fVar16 + fVar13 * fVar13 + fVar15 * fVar15);
    FUN_0036b3f4(param_1,(int)&uStack_28 + 4,&uStack_28,param_2);
    iVar5 = FUN_002bcd38(param_1,(int)&uStack_28 + 4,&uStack_28,param_2);
    if (iVar5 < 1) {
      if (iVar5 < 0) {
        FUN_0036055c(param_2,param_1,DAT_004ba174,1);
        FUN_003240f8(param_1 + 0x254,param_2);
        *(float *)(param_1 + 0x2254) = fVar13;
        *(float *)(param_1 + 0x2250) = fVar13;
        *(short *)(param_1 + 0x2220) = (short)uStack_28;
        return;
      }
      bVar10 = SBORROW4((int)uStack_28._4_4_,(int)DAT_004ba178);
      bVar8 = (int)uStack_28._4_4_ - (int)DAT_004ba178 < 0;
      bVar9 = uStack_28._4_4_ == DAT_004ba178;
      fVar16 = uStack_28._4_4_;
      if ((int)DAT_004ba178 < (int)uStack_28._4_4_) {
        fVar16 = DAT_004ba17c;
      }
      if ((int)DAT_004ba178 < (int)uStack_28._4_4_) {
        fVar16 = *(float *)((int)fVar16 + 0xb4);
        uVar11 = uVar11 & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f |
                 (uint)(fVar15 == fVar16) << 0x1e | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
        bVar1 = (byte)(uVar11 >> 0x18);
        bVar8 = (bool)(bVar1 >> 7);
        bVar9 = (bool)(bVar1 >> 6 & 1);
        bVar10 = (bool)(bVar1 >> 4 & 1);
      }
      if (!bVar9 && bVar8 == bVar10) {
        FUN_002c3adc(param_1,param_2);
        *(float *)(param_1 + 0x2260) = fVar13;
        *(float *)(param_1 + 0x225c) = fVar13;
        return;
      }
      uVar12 = uVar11 & 0xfffffff | (uint)(uStack_28._4_4_ == fVar13) << 0x1e;
      bVar8 = SUB41(uVar12 >> 0x1e,0);
      if (bVar8) {
        uVar12 = uVar11 & 0xfffffff | (uint)(*(float *)(param_1 + 0x221c) == fVar13) << 0x1e;
        bVar8 = SUB41(uVar12 >> 0x1e,0);
      }
      if ((bVar8) && (1 < *(short *)(param_1 + 0x2238))) {
        FUN_002bca14(param_1,param_2);
        return;
      }
      iVar5 = (int)(short)((short)uStack_28 - *(short *)(param_1 + 0x2220));
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 0x4001) {
        FUN_002dd714(uStack_28._4_4_ * DAT_004ba254,DAT_004ba250,DAT_004ba250,param_1 + 0x221c);
        fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar12 >> 0x15) & 3);
        FUN_00370378(param_1 + 0x2220,(int)(short)uStack_28,(int)(short)(int)(fVar13 * DAT_004ba258)
                    );
        return;
      }
      iVar5 = FUN_003705a0();
      if (iVar5 != 0) {
        *(short *)(param_1 + 0x2220) = (short)uStack_28;
      }
      return;
    }
    *(short *)(param_1 + 0x2220) = (short)uStack_28;
    *(short *)(param_1 + 0xbe) = (short)uStack_28;
    FUN_002c3c7c(param_1,param_2);
  }
  return;
}

