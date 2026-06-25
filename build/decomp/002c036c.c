// OoT3D decomp @ 002c036c  name=FUN_002c036c  size=1112

int FUN_002c036c(int param_1,int param_2,undefined4 param_3,short param_4,uint param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int unaff_r5;
  bool bVar11;
  uint in_fpscr;
  int iVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float local_50;
  float local_4c;
  
  bVar11 = (*(uint *)(param_2 + 0x1710) & 0x800000) == 0;
  iVar15 = DAT_002c06d4;
  iVar10 = DAT_002c06d4;
  if (!bVar11) {
    iVar15 = DAT_002c06dc;
    iVar10 = DAT_002c06d8;
  }
  if (bVar11) {
    unaff_r5 = DAT_002c06e0;
  }
  iVar12 = (int)*(float *)(*(int *)(param_2 + 0x29c8) + 0x2c);
  if (!bVar11) {
    unaff_r5 = DAT_002c06e4;
  }
  if (*(char *)(DAT_002c06e8 + 0x3d8) == '\0') {
    iVar12 = -iVar12;
  }
  fVar13 = (float)FUN_00338f60((int)(short)((short)iVar12 * 200));
  fVar2 = DAT_002c06ec;
  if (iVar12 < 0) {
    sVar5 = -1;
  }
  else {
    sVar5 = 1;
  }
  iVar12 = -iVar15;
  sVar5 = *(short *)(param_2 + 0x48) + (short)(int)((DAT_002c06ec - fVar13) * DAT_002c06f0) * sVar5;
  iVar6 = (int)sVar5;
  *(short *)(param_2 + 0x48) = sVar5;
  iVar9 = iVar12;
  if ((iVar6 + iVar15 < 0 == SBORROW4(iVar6,iVar12)) && (iVar9 = iVar6, iVar10 < iVar6)) {
    iVar9 = iVar10;
  }
  *(short *)(param_2 + 0x48) = (short)iVar9;
  fVar4 = DAT_002c0704;
  fVar3 = DAT_002c06fc;
  fVar13 = DAT_002c06f4;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x4a),(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = fVar14 * DAT_002c06f4 - fVar16 * DAT_002c06f4;
  if ((uint)DAT_002c06f8 < (uint)fVar14) {
    fVar14 = fVar14 + DAT_002c06fc;
  }
  else if (DAT_002c0700 < (int)fVar14) {
    fVar14 = fVar14 - DAT_002c06fc;
  }
  fVar14 = fVar14 * DAT_002c0704;
  iVar15 = (int)*(float *)(*(int *)(param_2 + 0x29c8) + 0x28);
  fVar16 = (float)FUN_00338f60((int)(short)((short)iVar15 * 200));
  if (iVar15 < 0) {
    sVar5 = -1;
  }
  else {
    sVar5 = 1;
  }
  iVar15 = -unaff_r5;
  iVar6 = (int)(short)((short)(int)fVar14 + (short)(int)((fVar2 - fVar16) * DAT_002c0708) * sVar5);
  iVar9 = iVar15;
  if ((iVar6 + unaff_r5 < 0 == SBORROW4(iVar6,iVar15)) && (iVar9 = iVar6, unaff_r5 < iVar6)) {
    iVar9 = unaff_r5;
  }
  *(short *)(param_2 + 0x4a) = (short)iVar9 + *(short *)(param_2 + 0xbe);
  if ((*(byte *)(DAT_002c070c + 0xf) | param_5) == 0) {
    uVar7 = *(uint *)(param_2 + 0x29b8);
    if ((uVar7 & 1) == 0) {
      bVar11 = (uVar7 & 2) == 0;
      if (bVar11) {
        bVar11 = (*(uint *)(param_2 + 0x1710) & 0x1000000) == 0;
      }
      if (!bVar11) {
        *(uint *)(param_2 + 0x29b8) = uVar7 | 1;
        FUN_00306f04();
        FUN_002c0804();
        *(undefined2 *)(param_2 + 0x28f0) = *(undefined2 *)(param_2 + 0x48);
        *(undefined2 *)(param_2 + 0x28f2) = *(undefined2 *)(param_2 + 0x4a);
        *(undefined2 *)(param_2 + 0x28f4) = *(undefined2 *)(param_2 + 0x4c);
        FUN_002d0518();
      }
    }
    else {
      uVar8 = FUN_00306f04();
      FUN_004c0588(uVar8,&local_50);
      iVar9 = FUN_002ff258(*(undefined4 *)(param_2 + 0x29c8));
      if (iVar9 == 0) {
        FUN_00306f04();
        FUN_002c0804();
        *(undefined2 *)(param_2 + 0x28f0) = *(undefined2 *)(param_2 + 0x48);
        *(undefined2 *)(param_2 + 0x28f2) = *(undefined2 *)(param_2 + 0x4a);
        *(undefined2 *)(param_2 + 0x28f4) = *(undefined2 *)(param_2 + 0x4c);
      }
      else {
        iVar9 = FUN_004c055c(*(undefined4 *)(param_2 + 0x29c8));
        if (iVar9 == 0) {
          FUN_00306f04();
          FUN_002c0804();
          *(undefined2 *)(param_2 + 0x28f0) = *(undefined2 *)(param_2 + 0x48);
          *(undefined2 *)(param_2 + 0x28f2) = *(undefined2 *)(param_2 + 0x4a);
          *(undefined2 *)(param_2 + 0x28f4) = *(undefined2 *)(param_2 + 0x4c);
        }
        iVar9 = FUN_00306f04();
        fVar2 = DAT_002c06f8;
        if (*(char *)(iVar9 + 0x4a) != '\0') {
          if (*(char *)(DAT_002c070c + 0xe) != '\0') {
            local_4c = -local_4c;
          }
          if ((uint)DAT_002c06f8 < (uint)local_4c) {
            fVar14 = local_4c + fVar3;
          }
          else {
            fVar14 = local_4c;
            if (DAT_002c0700 < (int)local_4c) {
              fVar14 = local_4c - fVar3;
            }
          }
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x28f0),
                                              (byte)(in_fpscr >> 0x15) & 3);
          local_50 = fVar16 * fVar13 - local_50;
          fVar16 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar16 = fVar16 * fVar13;
          uVar7 = in_fpscr & 0xfffffff | (uint)(fVar16 < local_50) << 0x1f |
                  (uint)(fVar16 == local_50) << 0x1e;
          bVar1 = (byte)(uVar7 >> 0x18);
          if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar16) || NAN(local_50))) {
            fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(uVar7 >> 0x15) & 3);
            uVar7 = in_fpscr & 0xfffffff | (uint)(local_50 <= fVar16 * fVar13) << 0x1d;
            if (!SUB41(uVar7 >> 0x1d,0)) {
              local_50 = (float)VectorSignedToFloat(iVar10,(byte)(uVar7 >> 0x15) & 3);
              local_50 = local_50 * fVar13;
            }
          }
          else {
            local_50 = (float)VectorSignedToFloat(iVar12,(byte)(uVar7 >> 0x15) & 3);
            local_50 = local_50 * fVar13;
          }
          *(short *)(param_2 + 0x48) = (short)(int)(local_50 * fVar4);
          fVar14 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_2 + 0x28f2) -
                                                          (short)(int)(fVar14 * fVar4)),
                                              (byte)(uVar7 >> 0x15) & 3);
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xbe),
                                              (byte)(uVar7 >> 0x15) & 3);
          fVar13 = fVar14 * fVar13 - fVar16 * fVar13;
          if ((uint)fVar2 < (uint)fVar13) {
            fVar13 = fVar13 + fVar3;
          }
          else if (DAT_002c0700 < (int)fVar13) {
            fVar13 = fVar13 - fVar3;
          }
          sVar5 = (short)(int)(fVar13 * fVar4);
          if ((sVar5 + unaff_r5 < 0 == SBORROW4((int)sVar5,iVar15)) &&
             (iVar15 = unaff_r5, sVar5 <= unaff_r5)) {
            iVar15 = (int)sVar5;
          }
          *(short *)(param_2 + 0x4a) = *(short *)(param_2 + 0xbe) + (short)iVar15;
        }
      }
    }
  }
  *(ushort *)(param_2 + 0x174a) = *(ushort *)(param_2 + 0x174a) | 2;
  if ((*(char *)(param_1 + 0x5c74) == '\0') && (iVar10 = FUN_0033bd6c(param_2), iVar10 == 0)) {
    uVar7 = *(uint *)(param_2 + 0x1710);
    bVar11 = (uVar7 & 0x1000000) != 0;
    if (bVar11) {
      uVar7 = (uint)*(ushort *)(DAT_002c0800 + param_2);
    }
    if (!bVar11 || uVar7 == 0) {
      uVar8 = 0;
      goto LAB_002c07dc;
    }
  }
  uVar8 = 1;
LAB_002c07dc:
  sVar5 = FUN_002bf67c(param_2,uVar8);
  return (int)(short)(sVar5 - param_4);
}

