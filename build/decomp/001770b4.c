// OoT3D decomp @ 001770b4  name=FUN_001770b4  size=672

void FUN_001770b4(short *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  short sVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  if ((*(short *)(*(int *)(param_2 + 0xa54) + 0x18a) != 0x15) ||
     (psVar11 = *(short **)(DAT_00177354 + param_2), psVar11 == (short *)0x0)) {
    return;
  }
  iVar10 = *DAT_0017735c;
  do {
    if ((psVar11 != param_1) && (*psVar11 == 0xda)) {
      bVar12 = ABS(*(float *)(psVar11 + 0x14) - *(float *)(param_1 + 0x14)) == DAT_00177358;
      if ((int)DAT_00177358 <= (int)ABS(*(float *)(psVar11 + 0x14) - *(float *)(param_1 + 0x14))) {
        bVar12 = *(short *)(iVar10 + 0x12d8) == 0;
      }
      if (!bVar12) {
        bVar12 = ABS(*(float *)(psVar11 + 0x16) - *(float *)(param_1 + 0x16)) == DAT_00177358;
        if ((int)DAT_00177358 <= (int)ABS(*(float *)(psVar11 + 0x16) - *(float *)(param_1 + 0x16)))
        {
          bVar12 = *(short *)(iVar10 + 0x12d8) == 0;
        }
        if (!bVar12) {
          bVar12 = ABS(*(float *)(psVar11 + 0x18) - *(float *)(param_1 + 0x18)) == DAT_00177358;
          if ((int)DAT_00177358 <= (int)ABS(*(float *)(psVar11 + 0x18) - *(float *)(param_1 + 0x18))
             ) {
            bVar12 = *(short *)(iVar10 + 0x12d8) == 0;
          }
          if (!bVar12) {
            FUN_0036e980(param_2,0,8);
            psVar11[0xd4] = 1;
            *(float *)(psVar11 + 0x18) = *(float *)(psVar11 + 0x18) + DAT_00177360;
            sVar9 = FUN_00367d74(param_2);
            param_1[0xd5] = sVar9;
            FUN_00320d7c(param_2,0,1);
            FUN_00320d7c(param_2,(int)param_1[0xd5],7);
            fVar2 = DAT_00177368;
            uVar1 = DAT_00177364;
            *(undefined4 *)(param_1 + 0x114) = DAT_00177364;
            *(undefined4 *)(param_1 + 0x112) = uVar1;
            *(undefined4 *)(param_1 + 0x110) = uVar1;
            *(undefined4 *)(param_1 + 0x102) = uVar1;
            *(undefined4 *)(param_1 + 0x100) = uVar1;
            *(undefined4 *)(param_1 + 0xfe) = uVar1;
            fVar5 = DAT_00177374;
            fVar14 = *(float *)(param_2 + 0x1c4);
            *(float *)(param_1 + 0xe0) = fVar14;
            *(float *)(param_1 + 0xec) = fVar14;
            fVar13 = *(float *)(param_2 + 0x1c8);
            *(float *)(param_1 + 0xe2) = fVar13;
            *(float *)(param_1 + 0xee) = fVar13;
            fVar3 = DAT_0017736c;
            fVar15 = *(float *)(param_2 + 0x1cc);
            *(float *)(param_1 + 0xe4) = fVar15;
            *(float *)(param_1 + 0xf0) = fVar15;
            fVar4 = DAT_00177370;
            fVar16 = *(float *)(param_2 + 0x1b8);
            *(float *)(param_1 + 0xe6) = fVar16;
            *(float *)(param_1 + 0xf2) = fVar16;
            fVar17 = *(float *)(param_2 + 0x1bc);
            *(float *)(param_1 + 0xe8) = fVar17;
            *(float *)(param_1 + 0xf4) = fVar17;
            fVar6 = DAT_00177378;
            fVar18 = *(float *)(param_2 + 0x1c0);
            *(float *)(param_1 + 0xea) = fVar18;
            *(float *)(param_1 + 0xf6) = fVar18;
            *(float *)(param_1 + 0x10a) = fVar2;
            *(float *)(param_1 + 0x10c) = fVar3;
            *(float *)(param_1 + 0x10e) = fVar4;
            *(float *)(param_1 + 0xf8) = fVar2;
            fVar7 = DAT_0017737c;
            *(float *)(param_1 + 0xfa) = fVar5;
            *(float *)(param_1 + 0xfc) = fVar6;
            *(float *)(param_1 + 0x104) = ABS(fVar16 - fVar2) * fVar7;
            *(float *)(param_1 + 0x106) = ABS(fVar17 - fVar5) * fVar7;
            *(float *)(param_1 + 0x108) = ABS(fVar18 - fVar6) * fVar7;
            *(float *)(param_1 + 0x116) = ABS(fVar14 - fVar2) * fVar7;
            *(float *)(param_1 + 0x118) = ABS(fVar13 - fVar3) * fVar7;
            *(float *)(param_1 + 0x11a) = ABS(fVar15 - fVar4) * fVar7;
            FUN_00367b14(param_2,(int)param_1[0xd5],param_1 + 0xec,param_1 + 0xf2);
            param_1[0x8b] = 0xf;
            FUN_00367c7c(param_2,0xf,0);
            uVar8 = DAT_00177384;
            uVar1 = DAT_00177380;
            param_1[0xd6] = 5;
            FUN_0037547c(DAT_00177388,0,4,uVar8,uVar8,uVar1);
            FUN_0036e980(param_2,0,8);
            uVar1 = DAT_0017738c;
            *(undefined1 *)(param_1 + 0xde) = 1;
            *(undefined4 *)(param_1 + 0xd2) = uVar1;
            return;
          }
        }
      }
    }
    psVar11 = *(short **)(psVar11 + 0x98);
    if (psVar11 == (short *)0x0) {
      return;
    }
  } while( true );
}
