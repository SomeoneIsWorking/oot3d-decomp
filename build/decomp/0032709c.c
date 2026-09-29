// OoT3D decomp @ 0032709c  name=FUN_0032709c  size=2332

void FUN_0032709c(int param_1,undefined4 param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;

  local_40 = param_2;
  FUN_00372224(&local_70,param_1 + 0x148);
  uVar7 = DAT_003278d8;
  fVar18 = DAT_003278d0;
  fVar19 = DAT_00327490;
  fVar15 = DAT_0032748c;
  iVar13 = DAT_00327488;
  fVar6 = DAT_00327484;
  fVar5 = DAT_00327480;
  cVar2 = *(char *)(param_1 + 0x232);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      iVar13 = 0;
      do {
        iVar14 = 9;
        iVar8 = param_1 + iVar13 * 0x2c;
        if (*(short *)(param_1 + 0x1c) == 0) {
          iVar14 = 0x1b;
        }
        if (*(short *)(iVar8 + 0x12f4) != 0) {
          if (*(short *)(param_1 + 0x12f6) == 0) {
            local_64 = *(float *)(iVar8 + 0x12d4) + *(float *)(param_1 + 0x28);
            local_54 = *(float *)(iVar8 + 0x12d8) + *(float *)(param_1 + 0x2c);
            local_44 = *(float *)(iVar8 + 0x12dc) + *(float *)(param_1 + 0x30);
          }
          else {
            local_64 = *(float *)(iVar8 + 0x12d4);
            local_54 = *(float *)(iVar8 + 0x12d8);
            local_44 = *(float *)(iVar8 + 0x12dc);
          }
          local_48 = 1.0;
          local_4c = 0.0;
          local_50 = 0.0;
          local_58 = 0.0;
          local_5c = 1.0;
          local_60 = 0.0;
          local_68 = 0.0;
          local_6c = 0.0;
          local_70 = 1.0;
          sVar3 = *(short *)(iVar8 + 0x12ec);
          sVar4 = *(short *)(iVar8 + 0x12ee);
          fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar8 + 0x12f0),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * fVar19;
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar6) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar16 = (float)FUN_003727f0(fVar15);
            fVar17 = (float)FUN_00372674(fVar15);
            fVar15 = local_6c * fVar16;
            local_6c = local_6c * fVar17 - local_70 * fVar16;
            fVar18 = local_5c * fVar16;
            local_5c = local_5c * fVar17 - local_60 * fVar16;
            fVar20 = local_4c * fVar16;
            local_4c = local_4c * fVar17 - local_50 * fVar16;
            local_70 = local_70 * fVar17 + fVar15;
            local_60 = local_60 * fVar17 + fVar18;
            local_50 = local_50 * fVar17 + fVar20;
          }
          if (sVar4 != 0) {
            fVar15 = (float)VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x15) & 3);
            fVar15 = fVar15 * fVar19;
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar6) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar18 = (float)FUN_003727f0(fVar15);
              fVar15 = (float)FUN_00372674(fVar15);
              fVar20 = local_70 * fVar18;
              local_70 = local_70 * fVar15 - local_68 * fVar18;
              local_68 = fVar20 + local_68 * fVar15;
              fVar20 = local_60 * fVar18;
              local_60 = local_60 * fVar15 - local_58 * fVar18;
              local_58 = fVar20 + local_58 * fVar15;
              fVar20 = local_50 * fVar18;
              local_50 = local_50 * fVar15 - local_48 * fVar18;
              local_48 = fVar20 + local_48 * fVar15;
            }
          }
          if (sVar3 != 0) {
            fVar15 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
            fVar15 = fVar15 * fVar19;
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar6) << 0x1e;
            if (!SUB41(in_fpscr >> 0x1e,0)) {
              fVar16 = (float)FUN_003727f0(fVar15);
              fVar17 = (float)FUN_00372674(fVar15);
              fVar15 = local_68 * fVar16;
              local_68 = local_68 * fVar17 - local_6c * fVar16;
              fVar18 = local_58 * fVar16;
              local_58 = local_58 * fVar17 - local_5c * fVar16;
              fVar20 = local_48 * fVar16;
              local_48 = local_48 * fVar17 - local_4c * fVar16;
              local_6c = local_6c * fVar17 + fVar15;
              local_5c = local_5c * fVar17 + fVar18;
              local_4c = local_4c * fVar17 + fVar20;
            }
          }
          uVar9 = (uint)*(ushort *)(iVar8 + 0x12f2);
          iVar14 = iVar14 + iVar13;
          fVar15 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar18 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar20 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * fVar5;
          fVar18 = fVar18 * fVar5;
          fVar20 = fVar20 * fVar5;
          local_70 = local_70 * fVar15;
          local_60 = local_60 * fVar15;
          local_50 = local_50 * fVar15;
          local_6c = local_6c * fVar18;
          local_5c = local_5c * fVar18;
          local_4c = local_4c * fVar18;
          local_68 = local_68 * fVar20;
          local_58 = local_58 * fVar20;
          local_48 = local_48 * fVar20;
          puVar10 = *(undefined4 **)(DAT_00327488 + 0x2c);
          if (*(char *)(puVar10 + iVar14 * 0x35 + 1) != '\x01') {
            FUN_0033e0e0(puVar10 + iVar14 * 0x35 + 1,puVar10[0x953],puVar10[0x952],*puVar10,5);
          }
          if (puVar10 + iVar14 * 0x35 + 1 != (undefined4 *)0x0) {
            iVar8 = puVar10[iVar14 * 0x35 + 2];
            if (*(char *)(puVar10 + iVar14 * 0x35 + 3) != '\0') {
              FUN_00358778(iVar8,(int)(char)puVar10[iVar14 * 0x35 + 0xe],
                           (int)(char)puVar10[iVar14 * 0x35 + 0xc],puVar10 + iVar14 * 0x35 + 4,0);
            }
            *(undefined1 *)(iVar8 + 0xac) = 1;
            FUN_003721e0(iVar8,&local_70);
            FUN_00372170(iVar8,0);
            if (*(char *)((int)puVar10 + iVar14 * 0xd4 + 0xe) != '\0') {
              FUN_00373bec(puVar10 + iVar14 * 0x35 + 0x10);
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0x12);
    }
    else {
      if (cVar2 == '\x02') {
        iVar8 = 0;
        fVar15 = DAT_003278d4;
        do {
          iVar14 = param_1 + iVar8 * 0x2c;
          if (*(short *)(iVar14 + 0x12f4) != 0) {
            local_64 = *(float *)(iVar14 + 0x12d4);
            local_54 = *(float *)(iVar14 + 0x12d8);
            local_44 = *(float *)(iVar14 + 0x12dc);
            iVar12 = iVar8 + 1;
            local_50 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)(iVar14 + 0x12f2),
                                         (byte)(in_fpscr >> 0x15) & 3);
            local_48 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)(iVar14 + 0x12f2),
                                         (byte)(in_fpscr >> 0x15) & 3);
            local_50 = local_50 * fVar5;
            local_48 = local_48 * fVar5;
            local_70 = local_50 * 1.0;
            local_60 = local_50 * 0.0;
            local_50 = local_50 * 0.0;
            local_6c = fVar15 * 0.0;
            local_5c = fVar15 * 1.0;
            local_4c = fVar15 * 0.0;
            local_68 = local_48 * 0.0;
            local_58 = local_48 * 0.0;
            local_48 = local_48 * 1.0;
            puVar10 = *(undefined4 **)(iVar13 + 0x2c);
            if (*(char *)(puVar10 + iVar12 * 0x35 + 1) != '\x01') {
              FUN_0033e0e0(puVar10 + iVar12 * 0x35 + 1,puVar10[0x953],puVar10[0x952],*puVar10,0x7f);
            }
            fVar19 = (float)VectorSignedToFloat((int)(short)(ushort)*(byte *)(iVar14 + 0x12f8) *
                                                (int)*(short *)(iVar14 + 0x12f4),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if (puVar10 + iVar12 * 0x35 + 1 != (undefined4 *)0x0) {
              puVar10[iVar12 * 0x35 + 4] = uVar7;
              puVar10[iVar12 * 0x35 + 5] = fVar6;
              puVar10[iVar12 * 0x35 + 6] = uVar7;
              puVar10[iVar12 * 0x35 + 7] = fVar19 * fVar18;
              puVar10[iVar12 * 0x35 + 0xc] = 0;
              puVar10[iVar12 * 0x35 + 0xe] = 0;
              *(undefined1 *)(puVar10 + iVar12 * 0x35 + 3) = 1;
              iVar14 = puVar10[iVar12 * 0x35 + 2];
              if (*(char *)(puVar10 + iVar12 * 0x35 + 3) != '\0') {
                FUN_00358778(iVar14,(int)(char)puVar10[iVar12 * 0x35 + 0xe],
                             (int)(char)puVar10[iVar12 * 0x35 + 0xc],puVar10 + iVar12 * 0x35 + 4,0);
              }
              *(undefined1 *)(iVar14 + 0xac) = 1;
              FUN_003721e0(iVar14,&local_70);
              FUN_00372170(iVar14,0);
              if (*(char *)((int)puVar10 + iVar12 * 0xd4 + 0xe) != '\0') {
                FUN_00373bec(puVar10 + iVar12 * 0x35 + 0x10);
              }
            }
          }
          fVar15 = fVar15 - fVar5;
          iVar8 = iVar8 + 1;
        } while (iVar8 < 3);
        return;
      }
      if (cVar2 == '\x03') {
        iVar8 = 4;
        puVar10 = (undefined4 *)(param_1 + 0x12d4);
        if (*(short *)(param_1 + 0x1c) == 0) {
          iVar8 = 7;
        }
        else if (*(short *)(param_1 + 0x1c) == 1) {
          iVar8 = 8;
        }
        fVar19 = DAT_00327484;
        if (*(short *)(param_1 + 0x12f6) != -1) {
          while( true ) {
            local_64 = (float)*puVar10;
            local_54 = (float)puVar10[1] + (float)puVar10[10] + fVar19;
            local_44 = (float)puVar10[2];
            local_50 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)((int)puVar10 + 0x1e),
                                         (byte)(in_fpscr >> 0x15) & 3);
            local_48 = (float)VectorUnsignedToFloat
                                        ((uint)*(ushort *)((int)puVar10 + 0x1e),
                                         (byte)(in_fpscr >> 0x15) & 3);
            local_50 = local_50 * fVar5;
            local_48 = local_48 * fVar5;
            local_70 = local_50 * 1.0;
            local_60 = local_50 * 0.0;
            local_50 = local_50 * 0.0;
            local_6c = fVar15 * 0.0;
            local_5c = fVar15 * 1.0;
            local_4c = fVar15 * 0.0;
            local_68 = local_48 * 0.0;
            local_58 = local_48 * 0.0;
            local_48 = local_48 * 1.0;
            uVar9 = DAT_003278dc - (uint)*(byte *)(param_1 + 0x12f8);
            puVar11 = *(undefined4 **)(iVar13 + 0x2c);
            if (0xff < uVar9) {
              uVar9 = 0xff;
            }
            if (*(char *)(puVar11 + iVar8 * 0x35 + 1) != '\x01') {
              FUN_0033e0e0(puVar11 + iVar8 * 0x35 + 1,puVar11[0x953],puVar11[0x952],*puVar11,4);
            }
            fVar20 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
            fVar16 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
            if (puVar11 + iVar8 * 0x35 + 1 != (undefined4 *)0x0) {
              puVar11[iVar8 * 0x35 + 4] = fVar20 * fVar18;
              puVar11[iVar8 * 0x35 + 5] = fVar16 * fVar18;
              puVar11[iVar8 * 0x35 + 6] = fVar17 * fVar18;
              puVar11[iVar8 * 0x35 + 7] = fVar6;
              puVar11[iVar8 * 0x35 + 0xc] = 0;
              puVar11[iVar8 * 0x35 + 0xe] = 0;
              *(undefined1 *)(puVar11 + iVar8 * 0x35 + 3) = 1;
              iVar14 = puVar11[iVar8 * 0x35 + 2];
              if (*(char *)(puVar11 + iVar8 * 0x35 + 3) != '\0') {
                FUN_00358778(iVar14,(int)(char)puVar11[iVar8 * 0x35 + 0xe],
                             (int)(char)puVar11[iVar8 * 0x35 + 0xc],puVar11 + iVar8 * 0x35 + 4,0);
              }
              *(undefined1 *)(iVar14 + 0xac) = 1;
              FUN_003721e0(iVar14,&local_70);
              FUN_00372170(iVar14,1);
              if (*(char *)((int)puVar11 + iVar8 * 0xd4 + 0xe) != '\0') {
                FUN_00373bec(puVar11 + iVar8 * 0x35 + 0x10);
              }
            }
            iVar8 = iVar8 + 1;
            if (0x2d < iVar8) break;
            psVar1 = (short *)((int)puVar10 + 0x4e);
            puVar10 = puVar10 + 0xb;
            fVar19 = fVar19 + fVar15;
            if (*psVar1 == -1) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}
