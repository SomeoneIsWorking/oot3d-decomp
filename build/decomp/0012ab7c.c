// OoT3D decomp @ 0012ab7c  name=FUN_0012ab7c  size=520

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0012ab7c(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x40;
  iVar10 = FUN_0036b4ec(param_1 + 0x254);
  uVar7 = DAT_00360cc0;
  iVar9 = DAT_00360cbc;
  iVar8 = DAT_00360cb8;
  uVar6 = DAT_00360cb4;
  fVar17 = DAT_0012ad88;
  piVar13 = DAT_0012ad84;
  if (iVar10 != 0) {
    if ((*(uint *)(param_1 + 0x1710) & 1) == 0) {
      if (*(char *)(param_1 + 0x2a6) == '\0') {
        uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x221c) == DAT_0012ad88) << 0x1e
        ;
        bVar14 = SUB41(uVar12 >> 0x1e,0);
        if (!bVar14) {
          bVar14 = (*(ushort *)(param_1 + 0x90) & 8) == 0;
        }
        if ((!bVar14) && ((*(uint *)(DAT_0012ad8c + 0x34) & 0x30) != 0)) {
          uVar12 = in_fpscr & 0xfffffff |
                   (uint)(DAT_0012ad88 <= *(float *)(param_1 + 0x221c)) << 0x1d;
          sVar1 = *(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x82);
          if (!SUB41(uVar12 >> 0x1d,0)) {
            sVar1 = sVar1 + -0x8000;
          }
          if (0x8000 < (int)sVar1 + 0x4000U) {
            FUN_0036055c(param_2,param_1,DAT_0012ad90,0);
            uVar7 = DAT_0012ada4;
            uVar6 = DAT_0012ad94;
            fVar16 = *(float *)(param_1 + 0x221c);
            uVar12 = uVar12 & 0xfffffff | (uint)(fVar16 < fVar17) << 0x1f |
                     (uint)(fVar16 == fVar17) << 0x1e;
            uVar15 = uVar12 | (uint)(NAN(fVar16) || NAN(fVar17)) << 0x1c;
            bVar4 = (byte)(uVar12 >> 0x18);
            if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) {
              *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x82);
              uVar5 = DAT_0012ada0;
              uVar11 = FUN_003603c0(param_1 + 0x254,uVar7);
              uVar11 = VectorSignedToFloat(uVar11,(byte)(uVar15 >> 0x15) & 3);
              FUN_00360190(uVar5,uVar11,fVar17,param_1 + 0x254,param_2,uVar7,2);
              FUN_003603f8(param_2,param_1,0x9d);
              FUN_00371808(param_2,DAT_0012ada8,uVar6);
            }
            else {
              *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x82) + -0x8000;
              FUN_003604f0(param_1 + 0x254,param_2,DAT_0012ad98);
              FUN_003603f8(param_2,param_1,0x9d);
              FUN_00371808(param_2,DAT_0012ad9c,uVar6);
            }
            *(undefined2 *)(DAT_0012adac + param_1) = *(undefined2 *)(param_1 + 0xbe);
            *(float *)(param_1 + 0x6c) = fVar17;
            *(float *)(param_1 + 0x221c) = fVar17;
            return;
          }
        }
        fVar16 = (float)VectorSignedToFloat((int)*(float *)(*(int *)(param_1 + 0x29c8) + 0x2c),
                                            (byte)(uVar12 >> 0x15) & 3);
        fVar16 = fVar16 * DAT_0012adb0;
        *(float *)(param_1 + 0x221c) = fVar16;
        if ((int)ABS(fVar16) < 0x3f000000) {
          *(float *)(param_1 + 0x221c) = fVar17;
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x2a6) = 0;
    }
    return;
  }
  do {
    uVar12 = (uint)(short)piVar13[1];
    if ((int)uVar12 < 0) {
      uVar12 = -uVar12;
    }
    uVar15 = uVar12 & 0x7800;
    fVar17 = (float)VectorUnsignedToFloat(uVar12 & 0x7ff,(byte)(in_fpscr >> 0x15) & 3);
    iVar10 = FUN_0036b1e0(ABS(fVar17),param_1 + 0x254);
    if (iVar10 != 0) {
      if (uVar15 == 0x800) {
        FUN_0036f59c(param_1,*piVar13);
      }
      else if (uVar15 == 0x1000) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) + *piVar13);
      }
      else if (uVar15 == 0x1800) {
        FUN_0036f59c(param_1,*(int *)(param_1 + 0x228c) +
                             (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + *piVar13);
      }
      else if (uVar15 == 0x2000) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,*piVar13 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
      else if (uVar15 == 0x2800) {
        FUN_0034bd3c(param_1);
      }
      else if (uVar15 == 0x3000) {
        cVar3 = *(char *)(param_1 + 0x1a7);
        uVar5 = uVar6;
joined_r0x00360c58:
        iVar10 = iVar8;
        if (cVar3 != '\x01') {
          iVar10 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                   + 0x1000001;
        }
        FUN_0032d700(uVar5,param_1 + 0x28,iVar10);
      }
      else if (uVar15 == 0x3800) {
        iVar10 = DAT_00360cc4;
        if (*(char *)(param_1 + 0x1a7) != '\x01') {
          cVar3 = *(char *)(iVar9 + 0x80);
          iVar10 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                   + 0x1000011;
          if ((cVar3 == ';' || cVar3 == '<') || cVar3 == '=') {
            FUN_0036f59c(param_1,DAT_00360cc8);
          }
        }
        FUN_0036f59c(param_1,iVar10);
      }
      else {
        if (uVar15 == 0x4000) {
          cVar3 = *(char *)(param_1 + 0x1a7);
          uVar5 = uVar7;
          goto joined_r0x00360c58;
        }
        if (uVar15 == 0x4800) {
          FUN_0032d700(uVar7,param_1 + 0x28,
                       *(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6) + 0x100000b);
        }
      }
    }
    piVar2 = piVar13 + 1;
    piVar13 = piVar13 + 2;
    if ((short)*piVar2 < 0) {
      return;
    }
  } while( true );
}
