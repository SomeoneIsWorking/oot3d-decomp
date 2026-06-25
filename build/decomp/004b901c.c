// OoT3D decomp @ 004b901c  name=FUN_004b901c  size=1120

void FUN_004b901c(int param_1,undefined4 param_2)

{
  undefined uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  short local_3c [2];
  float local_38;
  
  fVar13 = *(float *)(param_1 + 0x290);
  iVar6 = FUN_0036b4ec(param_1 + 0x254);
  uVar11 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x290) == fVar13) << 0x1e |
           (uint)(fVar13 <= *(float *)(param_1 + 0x290)) << 0x1d;
  bVar2 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    iVar6 = 1;
  }
  uVar7 = FUN_002c3fac(param_1,param_2);
  uVar9 = DAT_004b9390;
  uVar5 = DAT_004b938c;
  fVar4 = DAT_004b9388;
  fVar13 = DAT_004b9384;
  piVar3 = DAT_004b9380;
  bVar10 = uVar7 != 0;
  if (bVar10) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x2238);
  }
  if (bVar10 && uVar7 != 0) {
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004b9380 + 0x6a),
                                        (byte)(uVar11 >> 0x15) & 3);
    FUN_003705a0(DAT_004b9388,fVar13 * DAT_004b9384,param_1 + 0x221c);
    return;
  }
  if (iVar6 != 0) {
    FUN_00334c44(param_1);
    iVar6 = FUN_0034d628(param_1);
    if (*(int *)(param_1 + 0x284) == iVar6) {
      FUN_003604f0(param_1 + 0x254,param_2,iVar6);
    }
    else {
      uVar8 = FUN_003603c0(param_1 + 0x254,iVar6);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar11 >> 0x15) & 3);
      FUN_00360190(uVar9,fVar4,uVar8,uVar5,param_1 + 0x254,param_2,iVar6,2);
    }
  }
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x6a),(byte)(uVar11 >> 0x15) & 3);
  FUN_003705a0(fVar4,fVar12 * fVar13,param_1 + 0x221c);
  iVar6 = FUN_002c3d18(param_2,param_1,DAT_004b9394,1);
  if (iVar6 != 0) {
    return;
  }
  iVar6 = FUN_00349574(param_1);
  uVar8 = DAT_004b93a4;
  if (iVar6 == 0) {
    if ((*(uint *)(DAT_004b9398 + param_1) & DAT_004b939c) == 0) {
      uVar1 = *(undefined *)(param_1 + 0x2a6);
      *(undefined *)(param_1 + 0x2a6) = 0;
      FUN_0036055c(param_2,param_1,uVar8,1);
      *(undefined *)(param_1 + 0x2a6) = uVar1;
      *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
      return;
    }
    if (*(int *)(param_1 + 0x2210) != DAT_004b93a0) {
      FUN_0036b3f4(fVar4,param_1,&local_38,local_3c,param_2);
      iVar6 = FUN_002bcd38(param_1,&local_38,local_3c,param_2);
      if (0 < iVar6) {
        *(short *)(param_1 + 0x2220) = local_3c[0];
        *(short *)(param_1 + 0xbe) = local_3c[0];
        FUN_002c3c7c(param_1,param_2);
        return;
      }
      if (iVar6 < 0) {
        FUN_0036055c(param_2,param_1,DAT_004b93a8,1);
        FUN_003240f8(param_1 + 0x254,param_2);
        *(float *)(param_1 + 0x2254) = fVar4;
        *(float *)(param_1 + 0x2250) = fVar4;
        *(short *)(param_1 + 0x2220) = local_3c[0];
        return;
      }
      if (DAT_004b93ac < (int)local_38) {
        FUN_002c3adc(param_1,param_2);
        *(float *)(param_1 + 0x2260) = fVar4;
        *(float *)(param_1 + 0x225c) = fVar4;
        return;
      }
      if (local_38 == fVar4) {
        iVar6 = (int)(short)(local_3c[0] - *(short *)(param_1 + 0xbe));
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if (800 < iVar6) {
          FUN_004b8cc0(param_2,param_1);
        }
        return;
      }
      FUN_0036055c(param_2,param_1,DAT_004b93b0,1);
      FUN_0033bd6c(param_1);
      FUN_00360190(uVar9,fVar4,fVar4,uVar5,param_1 + 0x254,param_2);
      *(undefined2 *)(param_1 + 0x2238) = 0;
      return;
    }
  }
  FUN_0036055c(param_2,param_1,DAT_0031e090,1);
  if (((*(uint *)(DAT_0031e094 + param_1) & 0x200) == 0) &&
     (((*(char *)(DAT_0031e09c + param_1) != '\x01' || (*DAT_0031e0a0 < 'Q')) ||
      ((*(uint *)(DAT_0031e094 + param_1) & 0x400) != 0)))) {
    uVar9 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xa8);
  }
  else {
    uVar9 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xc0);
  }
  uVar8 = FUN_003603c0(param_1 + 0x254,uVar9);
  uVar8 = VectorSignedToFloat(uVar8,(byte)(uVar11 >> 0x15) & 3);
  FUN_00360190(DAT_0031e0a8,DAT_0031e0a4,uVar8,uVar5,param_1 + 0x254,param_2,uVar9,2);
  *(undefined2 *)(DAT_0031e0ac + param_1) = 1;
  return;
}

