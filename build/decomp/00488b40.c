// OoT3D decomp @ 00488b40  name=FUN_00488b40  size=1604

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00488b40(int param_1,undefined4 param_2)

{
  short sVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  int local_48;
  float local_44;
  int local_40;
  int iVar10;
  
  if ((*(byte *)(param_1 + 0x172a) & 8) != 0) {
    iVar7 = FUN_0033100c(param_1);
    if (iVar7 == 0) {
      *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xf7;
    }
    else {
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x60;
    }
  }
  iVar8 = FUN_002c3fac(param_1,param_2);
  fVar3 = DAT_00488ec4;
  iVar7 = DAT_00488ec0;
  fVar17 = DAT_00488ebc;
  local_40 = param_1 + 0x221c;
  if (iVar8 == 0) {
    if (*(short *)(param_1 + 0x2238) != 0) {
      iVar8 = FUN_0036b4ec(param_1 + 0x254,param_2);
      if (iVar8 != 0) {
        FUN_00334c44(param_1);
        FUN_00359aa0(param_1 + 0x254,param_2);
        *(undefined2 *)(param_1 + 0x2238) = 0;
        *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xf7;
      }
      *(float *)(param_1 + 0x2260) = fVar3;
      *(float *)(param_1 + 0x225c) = fVar3;
      goto LAB_00488da4;
    }
  }
  else if (*(short *)(param_1 + 0x2238) != 0) {
    FUN_0036b4ec(param_1 + 0x254,param_2);
    *(undefined2 *)(param_1 + 0x24ba) = 0x5a;
    piVar4 = DAT_00488ec8;
    *(undefined *)(param_1 + 0x24b9) = 0;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x6a),(byte)(in_fpscr >> 0x15) & 3
                                       );
    FUN_003705a0(fVar3,fVar15 * fVar17,local_40);
    return;
  }
  local_48 = param_1 + 0xd00;
  FUN_0032c408(*(undefined4 *)(param_1 + 0x2254),*(undefined4 *)(param_1 + 0x2254),
               *(undefined4 *)(param_1 + 0x225c),param_1 + 0x254,param_2);
  uVar9 = *(uint *)(DAT_00488ed0 + 4);
  bVar13 = uVar9 == 0;
  if (bVar13) {
    uVar9 = (uint)*(byte *)(param_1 + 0x1a9);
  }
  if (((!bVar13 || uVar9 != 3) ||
      (((*(uint *)(param_1 + 0x29b8) & 0x200) == 0 &&
       (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_00488ed4 < 'Q')) ||
        ((*(uint *)(param_1 + 0x29b8) & 0x400) != 0)))))) || (*(short *)(param_1 + 0x24ba) < 0))
  goto LAB_00488da4;
  iVar8 = DAT_00488ed8;
  if (*(int *)(param_1 + 0x284) == 0x1cb) {
LAB_00488d74:
    sVar1 = *(short *)(param_1 + 0x24ba) + -1;
    *(short *)(param_1 + 0x24ba) = sVar1;
    if (sVar1 != 0) goto LAB_00488da4;
    iVar16 = FUN_003759d0();
    iVar10 = iVar16;
    if (0x3f000000 < iVar16) {
      iVar10 = -iVar8;
    }
    uVar6 = (undefined2)iVar10;
    if (iVar16 < 0x3f000001) goto LAB_00488d9c;
  }
  else {
    if (*(int *)(param_1 + 0x284) == 0x1c8) {
      iVar8 = 0x200;
      goto LAB_00488d74;
    }
LAB_00488d9c:
    uVar6 = 0x5a;
  }
  *(undefined2 *)(param_1 + 0x24ba) = uVar6;
LAB_00488da4:
  FUN_002c3e34(param_1,param_2);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00488ec8 + 0x6a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  FUN_003705a0(fVar3,fVar15 * fVar17,local_40);
  iVar8 = FUN_002c3d18(param_2,param_1,DAT_00488edc,1);
  if (iVar8 != 0) {
    return;
  }
  iVar8 = FUN_00349574(param_1);
  if ((iVar8 == 0) &&
     (((*(uint *)(param_1 + 0x1710) & DAT_00488ee0) == 0 ||
      (*(int *)(param_1 + 0x2210) != DAT_00488ee4)))) {
    if (*(float *)(param_1 + 0x221c) != fVar3) {
      FUN_003518cc();
      FUN_0036055c(param_2,param_1);
      uVar12 = DAT_002c3d10;
      if (*(int *)(param_1 + 0x284) !=
          *(int *)(DAT_002c3d0c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x30)) {
        *(undefined4 *)(param_1 + 0x2254) = DAT_002c3d10;
        *(undefined4 *)(param_1 + 0x2250) = uVar12;
      }
      *(undefined2 *)(DAT_002c3d14 + param_1) = 0;
      return;
    }
    FUN_0036055c(param_2,param_1,DAT_00488ee8,1);
    uVar9 = *(uint *)(param_1 + 0x29b8);
    if (*(int *)(param_1 + 0x225c) < 0x3f000000) {
      if (((uVar9 & 0x200) == 0) &&
         (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_00488ed4 < 'Q')) ||
          ((uVar9 & 0x400) != 0)))) {
        uVar12 = *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x330);
      }
      else {
        uVar12 = *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x360);
      }
    }
    else if (((uVar9 & 0x200) == 0) &&
            (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_00488ed4 < 'Q')) ||
             ((uVar9 & 0x400) != 0)))) {
      uVar12 = *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x318);
    }
    else {
      uVar12 = *(undefined4 *)(iVar7 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x348);
    }
    FUN_003604f0(param_1 + 0x254,param_2,uVar12);
    local_48._0_2_ = *(undefined2 *)(param_1 + 0xbe);
  }
  else {
    FUN_0036b3f4(fVar3,param_1,&local_44,&local_48,param_2);
    iVar7 = FUN_002c3b94(local_44,param_1,(int)(short)local_48);
    fVar15 = DAT_004891d4;
    fVar17 = DAT_004891d0;
    uVar6 = (short)local_48;
    if (0 < iVar7) {
      *(short *)(param_1 + 0x2220) = (short)local_48;
      *(short *)(param_1 + 0xbe) = (short)local_48;
      FUN_002c3c7c(param_1,param_2);
      return;
    }
    if (iVar7 < 0) {
      FUN_0036055c(param_2,param_1,DAT_004891b8,1);
      uVar5 = DAT_004891c0;
      uVar12 = DAT_004891bc;
      uVar11 = FUN_003603c0(param_1 + 0x254,DAT_004891c0);
      uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(uVar12,fVar3,uVar11,DAT_004891c4,param_1 + 0x254,param_2,uVar5,2);
      *(undefined4 *)(param_1 + 0x221c) = DAT_004891c8;
      *(undefined2 *)(param_1 + 0x2220) = uVar6;
      return;
    }
    if (DAT_004891cc < (int)local_44) {
      FUN_002c3adc(param_1,param_2);
      return;
    }
    FUN_002dd8b0(DAT_004891d4 + *(float *)(param_1 + 0x221c) * DAT_004891d0,param_1,param_2);
    uVar9 = in_fpscr & 0xfffffff | (uint)(local_44 < fVar3) << 0x1f |
            (uint)(local_44 == fVar3) << 0x1e;
    uVar14 = uVar9 | (uint)(NAN(local_44) || NAN(fVar3)) << 0x1c;
    bVar2 = (byte)(uVar9 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
      bVar13 = -1 < (short)((short)local_48 - *(short *)(param_1 + 0xbe));
      if (bVar13) {
        *(float *)(param_1 + 0x2260) = fVar15;
      }
      if (!bVar13) {
        *(float *)(param_1 + 0x2260) = fVar3;
      }
    }
    FUN_003705a0(*(undefined4 *)(param_1 + 0x2260),fVar17,param_1 + 0x225c);
    uVar9 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x2254),3);
    bVar13 = 5 < uVar9;
    if (bVar13) {
      uVar9 = uVar9 - 0xe;
    }
    if (!bVar13 || uVar9 < 6) {
      FUN_003705a0(fVar3,local_40);
      return;
    }
    iVar7 = (int)(short)((short)local_48 - *(short *)(param_1 + 0x2220));
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (iVar7 < 0x4001) {
      FUN_002dd714(local_44 * fVar17,DAT_004891dc,DAT_004891d8,local_40);
      if ((*(byte *)(param_1 + 0x172a) & 8) != 0) {
        return;
      }
      fVar17 = (float)VectorSignedToFloat(iVar7,(byte)(uVar14 >> 0x15) & 3);
      FUN_00370378(param_1 + 0x2220,(int)(short)local_48,(int)(short)(int)(fVar17 * DAT_004891e0));
      return;
    }
    iVar7 = FUN_003705a0(fVar3,local_40);
    if (iVar7 == 0) {
      return;
    }
  }
  *(short *)(param_1 + 0x2220) = (short)local_48;
  return;
}

