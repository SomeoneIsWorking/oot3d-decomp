// OoT3D decomp @ 001f597c  name=FUN_001f597c  size=2412

void FUN_001f597c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_98;
  int iStack_94;
  undefined4 local_90;
  int iStack_8c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;

  local_58 = *(int *)(param_2 + 0x20ac);
  if (*(short *)(param_1 + 0x724) != 0) {
    *(short *)(param_1 + 0x724) = *(short *)(param_1 + 0x724) + -1;
  }
  if (*(short *)(param_1 + 0x722) != 0) {
    *(short *)(param_1 + 0x722) = *(short *)(param_1 + 0x722) + -1;
  }
  (**(code **)(param_1 + 0x708))(param_1,param_2);
  FUN_00376864(param_1);
  uVar2 = DAT_001f5d08;
  fVar24 = DAT_001f5d04;
  local_50 = param_1 + 0x754;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x754);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x75c);
  FUN_0036fc20();
  FUN_0036fc20(param_1 + 0x75c);
  uVar13 = DAT_001f5d18;
  fVar4 = DAT_001f5d14;
  uVar12 = DAT_001f5d10;
  uVar3 = DAT_001f5d0c;
  if (*(short *)(param_1 + 0x1c) < 10) {
    *(short *)(param_1 + 0x718) = *(short *)(param_1 + 0x718) + 1;
    FUN_0036e168(uVar13,fVar4,uVar12,uVar3,param_1 + 0x54);
    FUN_0036e168(uVar13,fVar4,uVar12,uVar3,param_1 + 0x58);
    FUN_0036e168(uVar13,fVar4,uVar12,uVar3,param_1 + 0x5c);
    iVar14 = DAT_001f5d2c;
    fVar7 = DAT_001f5d28;
    uVar3 = DAT_001f5d24;
    fVar6 = DAT_001f5d20;
    fVar5 = DAT_001f5d1c;
    iVar16 = *(int *)(param_2 + 0x20ac);
    if (*(short *)(param_1 + 0x71a) == 0) {
      if (((*(byte *)(param_1 + 0x774) & 2) != 0) && (*(int *)(param_1 + 0x708) == DAT_001f5d30)) {
        uVar12 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_001f5d2c + 0x14));
        uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uVar2,fVar5,uVar12,fVar5,param_1 + 0x1a4,*(undefined4 *)(iVar14 + 0x14),2);
        *(undefined4 *)(param_1 + 0x708) = DAT_001f5d34;
        *(undefined2 *)(param_1 + 0x724) = 0xf;
        *(float *)(param_1 + 0x6c) = fVar5;
        *(float *)(param_1 + 100) = fVar5;
      }
      bVar1 = *(byte *)(param_1 + 0x7cd);
      uVar15 = bVar1 & 2;
      bVar18 = (bVar1 & 2) != 0;
      if (bVar18) {
        uVar15 = (uint)*(char *)(param_1 + 0xb7);
      }
      if (bVar18 && 0 < (int)uVar15) {
        puVar17 = *(uint **)(param_1 + 0x7f8);
        *(byte *)(param_1 + 0x7cd) = bVar1 & 0xfd;
        uVar12 = DAT_001f5d38;
        local_68 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7e2),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_64 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7e4),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_60 = VectorSignedToFloat((int)*(short *)(param_1 + 0x7e6),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_5c = param_2;
        if (*(short *)(param_1 + 0x710) == 0) {
          if ((*puVar17 & 0x100000) == 0) {
            if ((*puVar17 & 1) == 0) {
              iVar16 = FUN_003656fc(param_2);
              if (iVar16 == 0) {
                iVar16 = 1;
              }
              else {
                FUN_00339f50(param_2,param_1 + 0x3c);
              }
              *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) - (char)iVar16;
              uVar12 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar14 + 0x18));
              uVar12 = VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
              FUN_00375c08(uVar2,fVar5,uVar12,DAT_001f6168,param_1 + 0x1a4,
                           *(undefined4 *)(iVar14 + 0x18),2);
              *(undefined4 *)(param_1 + 0x708) = DAT_001f616c;
              if (*(char *)(param_1 + 0xb7) < '\x01') {
                *(undefined2 *)(param_1 + 0x724) = 8;
                FUN_00375b70(param_2,param_1);
              }
              else {
                *(undefined2 *)(param_1 + 0x724) = 0xf;
              }
              *(float *)(param_1 + 0x6c) = fVar7;
              *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92) + -0x8000;
              if (*(short *)(param_1 + 0x1c) < 6) {
                FUN_00375bcc(param_1,DAT_001f6170);
              }
              else {
                FUN_00375bcc(param_1,DAT_001f6174);
              }
              local_98 = 5;
              FUN_00375ed8(param_1,0x400000,0xff,0);
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001f6160 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              *(short *)(param_1 + 0x71a) = (short)(int)(DAT_001f6178 / fVar24 + fVar4);
              local_98 = 0;
              FUN_003741e4(local_5c,*puVar17,0,&local_68);
            }
            else if (*(int *)(param_1 + 0x708) != DAT_001f5d4c) {
              *(int *)(param_1 + 0x708) = DAT_001f5d4c;
              *(undefined2 *)(param_1 + 0x750) = 0x96;
              FUN_00370350(uVar12,param_1 + 0x1a4,*(undefined4 *)(iVar14 + 4));
              fVar22 = (float)FUN_00371e50(fVar6);
              fVar22 = fVar22 + fVar24;
              uVar15 = in_fpscr & 0xfffffff | (uint)(fVar22 < fVar5) << 0x1f |
                       (uint)(fVar22 == fVar5) << 0x1e;
              in_fpscr = uVar15 | (uint)(NAN(fVar22) || NAN(fVar5)) << 0x1c;
              bVar1 = (byte)(uVar15 >> 0x18);
              if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                fVar22 = (float)FUN_00371e50(fVar6);
                uVar9 = (undefined2)(int)((fVar22 + fVar24) * fVar24 * fVar4 - fVar4);
              }
              else {
                fVar22 = (float)FUN_00371e50(fVar6);
                uVar9 = (undefined2)(int)(fVar4 + (fVar22 + fVar24) * fVar24 * fVar4);
              }
              *(undefined2 *)(param_1 + 0x724) = uVar9;
              if (*(short *)(param_1 + 0x1c) < 6) {
                FUN_00375bcc(param_1,DAT_001f6158);
              }
              else {
                FUN_00375bcc(param_1,DAT_001f615c);
              }
              fVar24 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001f6160 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              *(short *)(param_1 + 0x71a) = (short)(int)(DAT_001f6164 / fVar24 + fVar4);
              local_98 = 0;
              FUN_003741e4(local_5c,*puVar17,1,&local_68);
            }
          }
          else if (*(int *)(param_1 + 0x708) == DAT_001f5d30) {
            uVar13 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar14 + 0x14));
            uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
            FUN_00375c08(uVar2,fVar5,uVar13,fVar5,param_1 + 0x1a4,*(undefined4 *)(iVar14 + 0x14),2);
            *(undefined4 *)(param_1 + 0x708) = DAT_001f5d34;
            *(undefined2 *)(param_1 + 0x724) = 0xf;
            *(undefined4 *)(param_1 + 0x6c) = uVar12;
            *(float *)(param_1 + 100) = fVar5;
          }
          else {
            if (((*(uint *)(iVar14 + 0x24) & 1) == 0) &&
               (iVar14 = FUN_003679b4(DAT_001f5d3c), pfVar8 = DAT_001f5d40, iVar14 != 0)) {
              *DAT_001f5d40 = fVar5;
              pfVar8[1] = fVar5;
              pfVar8[2] = fVar7;
            }
            fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar16 + 0xbe),
                                                (byte)(in_fpscr >> 0x15) & 3);
            FUN_003735e8(fVar24 * DAT_001f5d44 * DAT_001f5d48,&local_98,0);
            FUN_003735ac(local_50,&local_98,DAT_001f5d40);
            *(undefined2 *)(param_1 + 0x722) = 5;
          }
        }
        else {
          if (*(short *)(param_1 + 0x1c) < 6) {
            *(undefined2 *)(*(int *)(param_1 + 0x124) + *(short *)(param_1 + 0x1c) * 2 + 0x240) =
                 0xffff;
          }
          if (*(short *)(param_1 + 0x1c) < 6) {
            FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_001f617c);
          }
          else {
            FUN_00375c44(param_2,param_1 + 0x28,0x28,DAT_001f6180);
          }
          uVar12 = DAT_001f6184;
          local_54 = param_2 + 0x208c;
          sVar10 = 0;
          do {
            fVar24 = (float)FUN_003738a8(uVar12);
            fVar22 = (float)FUN_003738a8(uVar3);
            fVar20 = *(float *)(param_1 + 0x30);
            fVar23 = (float)FUN_003738a8(uVar3);
            fVar21 = *(float *)(param_1 + 0x2c);
            fVar19 = (float)FUN_003738a8(uVar3);
            iStack_8c = (int)(short)(sVar10 + 10);
            local_98 = 0;
            local_90 = 0;
            iStack_94 = (int)(short)(int)fVar24;
            FUN_0036aa20(fVar19 + *(float *)(param_1 + 0x28),fVar23 + fVar6 + fVar21,fVar22 + fVar20
                         ,local_54,param_1,param_2,0x2b);
            sVar10 = sVar10 + 1;
          } while (sVar10 < 0xf);
          local_98 = 0;
          FUN_003741e4(local_5c,*puVar17,0,&local_68);
          FUN_00374428(param_1);
        }
      }
    }
    else {
      *(short *)(param_1 + 0x71a) = *(short *)(param_1 + 0x71a) + -1;
    }
    FUN_00376340(DAT_001f618c,DAT_001f618c,DAT_001f6188,param_2,param_1,5);
    iVar14 = *(int *)(param_1 + 0x7c);
    if (iVar14 != 0) {
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 10),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar22 = fVar22 * DAT_001f6190;
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar23 = fVar23 * DAT_001f6190;
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar24 = (float)FUN_003696ec(-(fVar24 * DAT_001f6190) * fVar23,uVar2);
      FUN_00370084(param_1 + 0x70c,(int)(short)(int)(fVar24 * DAT_001f6194),1,1000);
      fVar24 = (float)FUN_003696ec(-fVar22 * fVar23,uVar2);
      FUN_00370084(param_1 + 0x70e,(int)(short)(int)(fVar24 * DAT_001f6198),1,1000);
    }
    FUN_0037322c(fVar7,param_1);
    sVar10 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
    iVar16 = (int)(short)(sVar10 - *(short *)(param_1 + 0xbe));
    sVar11 = FUN_00339f1c(param_1,*(undefined4 *)(param_2 + 0x20ac));
    sVar10 = *(short *)(param_1 + 0xbc);
    iVar14 = DAT_001f6378;
    if ((DAT_001f6378 < iVar16) || (iVar14 = (DAT_001f6378 >> 0xd) - DAT_001f6378, iVar16 < iVar14))
    {
      iVar16 = iVar14;
    }
    FUN_00370084(param_1 + 0x714,iVar16,3,2000);
    FUN_00370084(param_1 + 0x712,(int)(short)(sVar11 - sVar10),3,2000);
    FUN_00373500(*(undefined4 *)(DAT_001f637c + *(short *)(param_1 + 0x71c) * 4),fVar4,fVar7,
                 param_1 + 0x738);
    FUN_00373500(*(undefined4 *)(DAT_001f6380 + *(short *)(param_1 + 0x71c) * 4),fVar4,fVar7,
                 param_1 + 0x73c);
    FUN_00373500(*(undefined4 *)(DAT_001f6384 + *(short *)(param_1 + 0x71c) * 4),fVar4,fVar7,
                 param_1 + 0x740);
    *(undefined2 *)(param_1 + 0x71c) = 1;
    uVar12 = DAT_001f638c;
    uVar2 = DAT_001f6388;
    if (*(char *)(local_58 + 0x2227) == '\0') {
      *(float *)(param_1 + 0x7fc) = fVar6;
      *(undefined4 *)(param_1 + 0x800) = uVar12;
      fVar24 = DAT_001f6394;
      if (*(int *)(param_1 + 0x708) == DAT_001f6390) {
        if (7 < *(short *)(param_1 + 0x1c)) {
          *(float *)(param_1 + 0x804) =
               *(float *)(param_1 + 0x748) * *(float *)(param_1 + 0x58) * DAT_001f6394;
          *(float *)(param_1 + 0x7ac) =
               *(float *)(param_1 + 0x748) * *(float *)(param_1 + 0x58) * fVar24;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x804) = uVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x7fc) = DAT_001f6388;
      *(undefined4 *)(param_1 + 0x800) = uVar2;
      *(float *)(param_1 + 0x804) = fVar5;
    }
    if (*(short *)(param_1 + 0x722) == 0) {
      FUN_0037632c(param_1);
      FUN_0037632c(param_1);
      iVar14 = param_2 + 0x5c78;
      FUN_003762a4(param_2,iVar14,param_1 + 0x764);
      FUN_00376168(param_2,iVar14,param_1 + 0x7bc);
      FUN_003761f0(param_2,iVar14,param_1 + 0x764);
      return;
    }
  }
  return;
}
