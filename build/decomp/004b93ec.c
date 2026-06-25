// OoT3D decomp @ 004b93ec  name=FUN_004b93ec  size=1232

/* WARNING: Removing unreachable block (ram,0x004b95b4) */
/* WARNING: Removing unreachable block (ram,0x004b95a4) */

void FUN_004b93ec(int param_1,undefined4 param_2)

{
  short sVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  short local_3c [2];
  float local_38;
  
  fVar13 = DAT_004b96f8;
  fVar16 = DAT_004b96f4;
  piVar3 = DAT_004b96f0;
  fVar15 = DAT_004b96ec;
  fVar12 = *(float *)(param_1 + 0x288);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar12 < DAT_004b96ec) << 0x1f |
          (uint)(fVar12 == DAT_004b96ec) << 0x1e;
  uVar11 = uVar7 | (uint)(NAN(fVar12) || NAN(DAT_004b96ec)) << 0x1c;
  bVar2 = (byte)(uVar7 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) {
    iVar5 = DAT_004b96fc + (uint)*(byte *)(param_1 + 0x1b3) * 4;
    uVar8 = *(undefined4 *)(iVar5 + 0x2d0);
    uVar9 = *(undefined4 *)(iVar5 + 0x2e8);
    FUN_00317dbc(param_1 + 0x254,uVar8);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x54),(byte)(uVar11 >> 0x15) & 3);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x50),(byte)(uVar11 >> 0x15) & 3);
    FUN_002dd8b0(*(float *)(param_1 + 0x221c) * fVar12 * fVar16 + fVar17 * fVar16,param_1,param_2);
    fVar13 = *(float *)(param_1 + 0x2254) * fVar13;
    FUN_0032c408(fVar13,fVar13,*(undefined4 *)(param_1 + 0x225c),param_1 + 0x254,param_2,uVar9,uVar8
                 ,param_1 + 0xd00);
    if (*(int *)(param_1 + 0x284) == 0x1cd) {
      iVar5 = DAT_004b9700;
      if (0x3f000000 < *(int *)(param_1 + 0x225c)) {
        iVar5 = DAT_004b9700 + 1;
      }
      uVar7 = *(uint *)(DAT_004b9704 + 4);
      bVar10 = uVar7 == 0;
      if (bVar10) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1a9);
      }
      if (((bVar10 && uVar7 == 3) &&
          (((*(uint *)(param_1 + 0x29b8) & 0x200) != 0 ||
           (((*(char *)(param_1 + 0x174e) == '\x01' && ('P' < *DAT_004b9708)) &&
            ((*(uint *)(param_1 + 0x29b8) & 0x400) == 0)))))) && (-1 < *(short *)(param_1 + 0x24ba))
         ) {
        if (iVar5 == -1) {
LAB_004b95e4:
          *(undefined2 *)(param_1 + 0x24ba) = 0x5a;
        }
        else {
          sVar1 = *(short *)(param_1 + 0x24ba) + -1;
          *(short *)(param_1 + 0x24ba) = sVar1;
          if (sVar1 == 0) {
            iVar14 = FUN_003759d0();
            if (iVar14 < 0x3f000001) goto LAB_004b95e4;
            *(short *)(param_1 + 0x24ba) = -(short)iVar5;
          }
        }
      }
    }
  }
  else {
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004b96f0 + 0x54),
                                        (byte)(uVar11 >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004b96f0 + 0x50),
                                        (byte)(uVar11 >> 0x15) & 3);
    FUN_002dd8b0(*(float *)(param_1 + 0x221c) * fVar16 * DAT_004b96f4 + fVar12 * DAT_004b96f4,
                 param_1,param_2);
    *(float *)(param_1 + 0x294) = fVar15;
    *(float *)(param_1 + 0x290) = *(float *)(param_1 + 0x2254) * fVar13;
    FUN_0036b4ec(param_1 + 0x254,param_2);
    *(short *)(param_1 + 0x2238) = *(short *)(param_1 + 0x2238) + 1;
  }
  iVar5 = FUN_002c3d18(param_2,param_1,DAT_004b9710,1);
  uVar8 = DAT_004b9714;
  if (iVar5 != 0) goto LAB_004b98d8;
  if ((*(uint *)(param_1 + 0x29b8) & 4) == 0) {
    iVar5 = FUN_00349574(param_1);
    uVar7 = DAT_004b9718;
    bVar10 = iVar5 == 0;
    if (bVar10) {
      bVar10 = (*(uint *)(param_1 + 0x1710) & DAT_004b9718) == 0;
    }
    if (!bVar10) {
      FUN_0036b3f4(fVar15,param_1,&local_38,local_3c,param_2);
      if ((*(uint *)(param_1 + 0x1710) & uVar7) == 0) {
        iVar5 = FUN_002c3b94(local_38,param_1,(int)local_3c[0]);
      }
      else {
        iVar5 = FUN_002bcd38(param_1,&local_38,local_3c,param_2);
      }
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          if ((*(uint *)(param_1 + 0x1710) & uVar7) == 0) {
            FUN_0036055c(param_2,param_1,DAT_004b98f0,1);
            uVar4 = DAT_004b98f8;
            uVar9 = DAT_004b98f4;
            uVar6 = FUN_003603c0(param_1 + 0x254,DAT_004b98f8);
            uVar6 = VectorSignedToFloat(uVar6,(byte)(uVar11 >> 0x15) & 3);
            FUN_00360190(uVar9,fVar15,uVar6,uVar8,param_1 + 0x254,param_2,uVar4,2);
            *(undefined4 *)(param_1 + 0x221c) = DAT_004b98fc;
          }
          else {
            FUN_0036055c(param_2,param_1,DAT_004b971c,1);
            FUN_003240f8(param_1 + 0x254,param_2);
            *(float *)(param_1 + 0x2254) = fVar15;
            *(float *)(param_1 + 0x2250) = fVar15;
          }
          *(short *)(param_1 + 0x2220) = local_3c[0];
          goto LAB_004b98d8;
        }
        if (((DAT_004b9900 <= *(int *)(param_1 + 0x221c)) || (DAT_004b9904 <= (int)local_38)) ||
           (*(short *)(param_1 + 0x2238) < 2)) {
          uVar7 = uVar11 & 0xfffffff | (uint)(local_38 < fVar15) << 0x1f |
                  (uint)(local_38 == fVar15) << 0x1e;
          uVar11 = uVar7 | (uint)(NAN(local_38) || NAN(fVar15)) << 0x1c;
          bVar2 = (byte)(uVar7 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar11 >> 0x1c) & 1)) {
            bVar10 = -1 < (short)(local_3c[0] - *(short *)(param_1 + 0xbe));
            fVar16 = local_38;
            if (bVar10) {
              fVar16 = DAT_004b9908;
            }
            if (bVar10) {
              *(float *)(param_1 + 0x2260) = fVar16;
            }
            if (!bVar10) {
              *(float *)(param_1 + 0x2260) = fVar15;
            }
          }
          FUN_003705a0(*(undefined4 *)(param_1 + 0x2260),DAT_004b990c,param_1 + 0x225c);
          iVar5 = (int)(short)(local_3c[0] - *(short *)(param_1 + 0x2220));
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < 0x4001) {
            local_38 = local_38 * DAT_004b9914;
            FUN_002dd714(local_38,DAT_004b9918,DAT_004b9910,param_1 + 0x221c);
            fVar15 = (float)VectorSignedToFloat(iVar5,(byte)(uVar11 >> 0x15) & 3);
            FUN_00370378(param_1 + 0x2220,(int)local_3c[0],(int)(short)(int)(fVar15 * DAT_004b991c))
            ;
          }
          else {
            iVar5 = FUN_003705a0(fVar15);
            if (iVar5 != 0) {
              *(short *)(param_1 + 0x2220) = local_3c[0];
            }
          }
          goto LAB_004b98d8;
        }
        iVar5 = FUN_003518cc(param_1);
        if ((iVar5 == 0) && ((*(uint *)(param_1 + 0x1710) & uVar7) != 0)) {
          FUN_002bcb20(param_1,param_2);
          goto LAB_004b98d8;
        }
        goto LAB_004b97ec;
      }
    }
    FUN_002c3c7c(param_1,param_2);
  }
  else {
LAB_004b97ec:
    FUN_0036b2d4(uVar8,param_1,param_2);
  }
LAB_004b98d8:
  FUN_002c3e34(param_1,param_2);
  return;
}

