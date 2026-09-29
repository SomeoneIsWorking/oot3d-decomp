// OoT3D decomp @ 00282fc8  name=FUN_00282fc8  size=116

/* WARNING: Instruction at (ram,0x002832be) overlaps instruction at (ram,0x002832bc)
    */

float FUN_00282fc8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int extraout_r1;
  int iVar12;
  int iVar13;
  int extraout_r3;
  int iVar14;
  int iVar15;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar16;
  float extraout_s1;
  undefined4 extraout_s3;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  iVar14 = *(int *)(iRam00283300 + param_2);
  iVar6 = FUN_00370734(param_1 + 0x1e0);
  piVar3 = piRam0028330c;
  iVar13 = iRam00283304;
  if (iVar6 != 0) {
    *(char *)(param_1 + 0x94c) = *(char *)(param_1 + 0x94c) + '\x01';
  }
  fVar17 = fRam0028331c;
  fVar4 = fRam00283318;
  fVar19 = fRam00283314;
  fVar18 = fRam00283310;
  fVar16 = fRam00283308;
  uVar7 = (uint)*(byte *)(param_1 + 0x94c);
  iVar6 = param_1 + 0x900;
  fVar20 = extraout_s0;
  if (uVar7 < 5) {
    switch(uVar7) {
    case 0:
      *(ushort *)(iVar14 + 0xe2) = (ushort)*(byte *)(param_1 + 0x94c);
      fVar18 = (float)VectorSignedToFloat(extraout_s3,(byte)(in_fpscr >> 0x15) & 3);
      if (uVar7 < 6) {
        fVar16 = fVar18 * fVar16 * extraout_s0 - extraout_s1;
      }
      else {
        fVar16 = extraout_s1 + fVar18 * fVar16 * extraout_s0;
      }
      fVar16 = (float)FUN_002cfca0((int)(short)((int)fVar16 << 0xb));
      uVar2 = DAT_00282cb8;
      uVar11 = DAT_00282cb0;
      *(float *)(param_1 + 0x2c) = *(float *)(iVar14 + 0xf0) + fVar16 * DAT_00282cac;
      FUN_00376340(uVar2,DAT_00282cb4,uVar11,iVar6,param_1,4);
      FUN_0037322c(DAT_00282cbc,param_1);
      FUN_0037632c(param_1);
      fVar16 = (float)FUN_003762a4(iVar6,param_1 + 0x6578,param_1 + 0x914);
      uVar11 = DAT_00282cc4;
      if (*(char *)(DAT_00282cc0 + iVar6) == '\0') {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7e;
        *(undefined4 *)(param_1 + 200) = 0;
        return fVar16;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x81;
      *(undefined4 *)(param_1 + 200) = uVar11;
      return fVar16;
    case 1:
      iVar12 = extraout_r1 >> 0x20;
      coprocessor_load(0,in_cr0,(uint)(&PTR_LAB_00283030)[uVar7] & 0xfffffffe);
      coprocessor_function(0xb,0xf,5,in_cr10,in_cr0,in_cr8);
      iVar6 = extraout_r3 + uVar7;
      iVar14 = FUN_0036aa20(DAT_00283f80,DAT_00283f7c,DAT_00283f78,iVar12 + 0x208c,iVar6,iVar12,0xc1
                            ,extraout_r3,extraout_r3 + -0x4000,extraout_r3,extraout_r3);
      *(int *)(iVar6 + 0x224) = iVar14;
      uVar11 = DAT_00283f88;
      iVar13 = DAT_00283f84;
      if (iVar14 != 0) {
        iVar14 = 0;
        iVar15 = DAT_00283f84 + -0x14;
        while( true ) {
          puVar9 = (undefined4 *)(iVar13 + iVar14 * 0xc);
          iVar10 = FUN_0036aa20(*puVar9,puVar9[1],puVar9[2],iVar12 + 0x208c,iVar6,iVar12,uVar11,0,0,
                                0,4);
          *(int *)(iVar6 + iVar14 * 4 + 500) = iVar10;
          if (iVar10 == 0) break;
          iVar1 = iVar14 * 2;
          iVar14 = iVar14 + 1;
          *(undefined2 *)(iVar10 + 0x1a8) = *(undefined2 *)(iVar15 + iVar1);
          if (9 < iVar14) {
            *(undefined4 *)(iVar6 + 0x1a4) = DAT_00283f8c;
            return extraout_s0_00;
          }
        }
      }
      fVar16 = (float)FUN_00374428(iVar6);
      return fVar16;
    case 2:
      if ((*(uint *)(iVar14 + 0x1714) & 0x80) == 0) {
        uVar11 = FUN_0036ae14(param_1 + 0x1e0,10);
        uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
        fVar20 = (float)FUN_00375c08(fVar19,fVar4,uVar11,fVar4,param_1 + 0x1e0,10,3);
        *(char *)(param_1 + 0x94c) = *(char *)(param_1 + 0x94c) + '\x01';
        *(undefined1 *)(param_1 + 0x964) = 4;
      }
      else {
        if (*(int *)(iVar13 + 4) != 0) {
          FUN_0036e168(uRam00283328,fRam0028331c,uRam00283324,fRam00283318,param_1 + 0xc4);
        }
        fVar20 = (float)FUN_002cfca0((int)*(short *)(iVar14 + 0xbe));
        uVar11 = uRam00283330;
        fVar16 = fRam0028332c;
        FUN_0036e168(*(float *)(iVar14 + 0x28) + fVar20 * fRam0028332c,fVar17,uRam00283330,fVar4,
                     param_1 + 0x28);
        FUN_0036e168(*(undefined4 *)(iVar14 + 0x2c),fVar17,uVar11,fVar4,param_1 + 0x2c);
        fVar20 = (float)FUN_00338f60((int)*(short *)(iVar14 + 0xbe));
        FUN_0036e168(*(float *)(iVar14 + 0x30) + fVar20 * fVar16,fVar17,uVar11,fVar4,param_1 + 0x30)
        ;
        FUN_00375a18(param_1 + 0xbe,(int)*(short *)(iVar14 + 0xbe),1,uRam00283334,0);
        fVar20 = *(float *)(param_1 + 0x21c);
        uVar7 = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar4) << 0x1e;
        if (SUB41(uVar7 >> 0x1e,0)) {
          fVar20 = (float)FUN_00375bcc(param_1,uRam00283338);
        }
        sVar5 = *(short *)(param_1 + 0x960) + -1;
        *(short *)(param_1 + 0x960) = sVar5;
        if (sVar5 == 0) {
          (**(code **)(param_2 + 0x5bac))(param_2,0xfffffff8);
          fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                              (byte)(uVar7 >> 0x15) & 3);
          *(short *)(param_1 + 0x960) = (short)(int)(fVar18 / fVar16 + fVar19);
          fVar16 = (float)FUN_0037547c(*(ushort *)(*(int *)(iVar14 + 0x170c) + 0xf4) + 0x10004f0,
                                       iVar14 + 0x28,4,DAT_0036f5d4,DAT_0036f5d4,DAT_0036f5d0);
          return fVar16;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar13 + 4) != 0) {
        pfVar8 = (float *)(param_1 + 0xc4);
        fVar16 = *pfVar8;
        uVar7 = in_fpscr & 0xfffffff | (uint)(fVar16 == fRam00283318) << 0x1e;
        if (!SUB41(uVar7 >> 0x1e,0)) {
          iVar13 = (int)*(short *)(*DAT_0036e27c + 0x110);
          fVar19 = (float)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x15) & 3);
          fVar18 = (float)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x15) & 3);
          fVar20 = (float)VectorSignedToFloat(iVar13,(byte)(uVar7 >> 0x15) & 3);
          fVar17 = fVar19 * fRam00283318 * DAT_0036e280;
          fVar19 = fVar20 * fRam00283308 * DAT_0036e280;
          fVar20 = fRam00283318 - fVar16;
          fVar18 = fVar20 * fVar18 * fRam0028331c * DAT_0036e280;
          if ((int)ABS(fVar20) < DAT_0036e284) {
            fVar18 = fVar20;
          }
          if ((fVar17 <= fVar18) || (fVar20 = -fVar17, fVar18 <= fVar20)) {
            if (fVar19 < fVar18) {
              fVar18 = fVar19;
            }
            if (fVar18 < -fVar19) {
              fVar18 = -fVar19;
            }
            *pfVar8 = fVar16 + fVar18;
          }
          else {
            if (fVar18 < fVar17) {
              fVar16 = fVar16 + fVar17;
              *pfVar8 = fVar16;
              if (fVar4 < fVar16) {
                fVar16 = fVar4;
              }
              *pfVar8 = fVar16;
              fVar18 = fVar17;
            }
            if (fVar20 < fVar18) {
              fVar20 = *pfVar8 + fVar20;
              *pfVar8 = fVar20;
              if (fVar20 <= fVar4) {
                fVar20 = fVar4;
              }
              *pfVar8 = fVar20;
            }
          }
        }
        return ABS(fVar4 - *pfVar8);
      }
      break;
    case 4:
      if (*(int *)(iVar13 + 4) != 0) {
        FUN_0036e168(fRam00283318,fRam0028331c,fRam00283308,fRam00283318,param_1 + 0xc4);
      }
      *(undefined1 *)(param_1 + 0x1f) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(undefined1 *)(param_1 + 0x94e) = 0xf;
      *(undefined1 *)(param_1 + 0x94f) = 0x17;
      uVar11 = FUN_0036ae14(param_1 + 0x1e0,5);
      uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_003291b0,DAT_003291ac,uVar11,DAT_003291a8,param_1 + 0x1e0,5,1);
      fVar16 = DAT_003291b4;
      *(float *)(param_1 + 0x6c) = DAT_003291b4;
      *(undefined1 *)(param_1 + 0x964) = 4;
      *(undefined4 *)(param_1 + 0x950) = DAT_003291b8;
      return fVar16;
    }
  }
  return fVar20;
}
