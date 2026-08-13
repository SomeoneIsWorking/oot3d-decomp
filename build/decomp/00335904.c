// OoT3D decomp @ 00335904  name=FUN_00335904  size=1776

void FUN_00335904(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int param_5
                 ,int param_6,int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [10];
  float afStack_b0 [10];
  float afStack_88 [10];
  int iStack_60;

  fVar1 = fRam00335d10;
  fVar20 = fRam00335d0c;
  afStack_88[0] = *pfRam00335d00;
  afStack_88[1] = pfRam00335d00[1];
  afStack_88[2] = pfRam00335d00[2];
  afStack_88[3] = pfRam00335d00[3];
  afStack_88[4] = pfRam00335d00[4];
  afStack_88[5] = pfRam00335d00[5];
  afStack_88[6] = pfRam00335d00[6];
  afStack_88[7] = pfRam00335d00[7];
  afStack_88[8] = pfRam00335d00[8];
  afStack_88[9] = pfRam00335d00[9];
  afStack_b0[0] = *pfRam00335d04;
  afStack_b0[1] = pfRam00335d04[1];
  afStack_b0[2] = pfRam00335d04[2];
  afStack_b0[3] = pfRam00335d04[3];
  afStack_b0[4] = pfRam00335d04[4];
  afStack_b0[5] = pfRam00335d04[5];
  afStack_b0[6] = pfRam00335d04[6];
  afStack_b0[7] = pfRam00335d04[7];
  afStack_b0[8] = pfRam00335d04[8];
  afStack_b0[9] = pfRam00335d04[9];
  afStack_d8[0] = *pfRam00335d08;
  afStack_d8[1] = pfRam00335d08[1];
  afStack_d8[2] = pfRam00335d08[2];
  afStack_d8[3] = pfRam00335d08[3];
  afStack_d8[4] = pfRam00335d08[4];
  afStack_d8[5] = pfRam00335d08[5];
  afStack_d8[6] = pfRam00335d08[6];
  afStack_d8[7] = pfRam00335d08[7];
  afStack_d8[8] = pfRam00335d08[8];
  afStack_d8[9] = pfRam00335d08[9];
  iVar8 = 0;
  do {
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    param_4[2] = param_3[2];
    while( true ) {
      fVar4 = fRam00335d2c;
      fVar3 = fRam00335d28;
      fVar2 = fRam00335d24;
      fVar15 = fRam00335d20;
      fVar14 = fRam00335d1c;
      fVar17 = fRam00335d18;
      fVar13 = fRam00335d14;
      iVar8 = (int)(short)((short)iVar8 + 1);
      if (9 < iVar8) {
        iVar8 = 1;
        do {
          iStack_60 = iVar8 * 3;
          pfVar10 = (float *)(param_4 + iVar8 * 3);
          pfVar9 = (float *)(param_6 + iVar8 * 0xc);
          fVar19 = (*pfVar10 + *pfVar9) - pfVar10[-3];
          fVar12 = ((pfVar10[1] + pfVar9[1]) - fVar13) + afStack_88[iVar8];
          fVar16 = pfVar10[-2];
          fVar18 = fVar16 + afStack_b0[iVar8];
          uVar11 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar18) << 0x1d;
          if (!SUB41(uVar11 >> 0x1d,0)) {
            fVar12 = fVar18;
          }
          if (((uint)param_3[1] <= uRam00335d30) && ((int)fVar12 < iRam00335d34)) {
            fVar12 = fVar17;
          }
          fVar21 = (pfVar10[2] + pfVar9[2]) - pfVar10[-1];
          fVar18 = (float)func_0x003675f8(fVar21,fVar19);
          fVar19 = (float)func_0x003675f8(SQRT(fVar19 * fVar19 + fVar21 * fVar21),fVar12 - fVar16);
          fVar19 = -fVar19;
          iVar6 = param_5 + iStack_60 * 4;
          *(float *)(iVar6 + -8) = fVar18;
          *(float *)(iVar6 + -0xc) = fVar19;
          fStack_e4 = fVar1;
          fStack_e0 = fVar1;
          fStack_dc = afStack_d8[iVar8] * fVar14;
          uVar11 = uVar11 & 0xfffffff | (uint)(fVar18 == fVar1) << 0x1e;
          fVar16 = fVar20;
          fVar12 = fVar1;
          if (!SUB41(uVar11 >> 0x1e,0)) {
            fVar12 = (float)func_0x003727f0(fVar18);
            fVar16 = (float)func_0x00372674(fVar18);
          }
          fStack_128 = fVar1;
          fStack_10c = -fVar12;
          fStack_120 = fVar1;
          in_fpscr = uVar11 & 0xfffffff | (uint)(fVar19 == fVar1) << 0x1e;
          fStack_11c = fVar1;
          fStack_114 = fVar1;
          fStack_110 = fVar1;
          fStack_108 = fVar1;
          fStack_100 = fVar1;
          fStack_12c = fVar16;
          fStack_124 = fVar12;
          fStack_118 = fVar20;
          fStack_104 = fVar16;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar21 = (float)func_0x003727f0(fVar19);
            fVar19 = (float)func_0x00372674(fVar19);
            fVar12 = fStack_124 * fVar21;
            fStack_124 = fStack_124 * fVar19 - fStack_128 * fVar21;
            fVar16 = fStack_114 * fVar21;
            fStack_114 = fStack_114 * fVar19 - fStack_118 * fVar21;
            fVar18 = fStack_104 * fVar21;
            fStack_104 = fStack_104 * fVar19 - fStack_108 * fVar21;
            fStack_128 = fStack_128 * fVar19 + fVar12;
            fStack_118 = fStack_118 * fVar19 + fVar16;
            fStack_108 = fStack_108 * fVar19 + fVar18;
          }
          func_0x003735ac(&fStack_f0,&fStack_12c,&fStack_e4);
          fVar12 = fRam00335d3c;
          iVar6 = iRam00335d38;
          fVar16 = *pfVar10;
          fVar19 = pfVar10[1];
          fVar18 = pfVar10[2];
          *pfVar10 = pfVar10[-3] + fStack_f0;
          pfVar10[1] = pfVar10[-2] + fStack_ec;
          fVar16 = ((pfVar10[-3] + fStack_f0) - fVar16) * fVar15 * fVar4;
          pfVar10[2] = pfVar10[-1] + fStack_e8;
          *pfVar9 = fVar16;
          if (iVar6 < (int)fVar16) {
            fVar16 = fVar2;
          }
          fVar19 = (pfVar10[1] - fVar19) * fVar15 * fVar4;
          pfVar9[1] = fVar19;
          fVar18 = (pfVar10[2] - fVar18) * fVar15 * fVar4;
          pfVar9[2] = fVar18;
          *pfVar9 = fVar16;
          if ((uint)fVar12 <= (uint)fVar16) {
            fVar16 = fVar3;
          }
          if (iVar6 < (int)fVar19) {
            fVar19 = fVar2;
          }
          *pfVar9 = fVar16;
          pfVar9[1] = fVar19;
          if ((uint)fVar12 <= (uint)fVar19) {
            fVar19 = fVar3;
          }
          if (iVar6 < (int)fVar18) {
            fVar18 = fVar2;
          }
          pfVar9[1] = fVar19;
          pfVar9[2] = fVar18;
          if ((uint)fVar12 <= (uint)fVar18) {
            fVar18 = fVar3;
          }
          iVar8 = (int)(short)((short)iVar8 + 1);
          pfVar9[2] = fVar18;
          uVar5 = uRam00335d44;
          fVar12 = fRam00335d40;
        } while (iVar8 < 10);
        iVar8 = 0;
        do {
          puVar7 = param_4 + iVar8 * 3;
          pfVar10 = (float *)(param_5 + iVar8 * 0xc);
          fStack_120 = (float)*puVar7;
          fStack_110 = (float)puVar7[1];
          fStack_100 = (float)puVar7[2];
          fStack_124 = 0.0;
          fStack_11c = 0.0;
          fStack_108 = 0.0;
          fStack_128 = 0.0;
          fStack_10c = 0.0;
          fStack_12c = 1.0;
          fStack_118 = 1.0;
          fStack_114 = 0.0;
          fStack_104 = 1.0;
          fVar20 = pfVar10[1];
          uVar11 = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar1) << 0x1e;
          uStack_fc = fStack_120;
          uStack_f8 = fStack_110;
          uStack_f4 = fStack_100;
          if (!SUB41(uVar11 >> 0x1e,0)) {
            fVar13 = (float)func_0x003727f0(fVar20);
            fVar20 = (float)func_0x00372674(fVar20);
            fVar17 = fStack_12c * fVar13;
            fStack_12c = fStack_12c * fVar20 - fStack_124 * fVar13;
            fStack_124 = fVar17 + fStack_124 * fVar20;
            fVar17 = fStack_11c * fVar13;
            fStack_11c = fStack_11c * fVar20 - fStack_114 * fVar13;
            fStack_114 = fVar17 + fStack_114 * fVar20;
            fVar17 = fStack_10c * fVar13;
            fStack_10c = fStack_10c * fVar20 - fStack_104 * fVar13;
            fStack_104 = fVar17 + fStack_104 * fVar20;
          }
          fVar20 = *pfVar10;
          in_fpscr = uVar11 & 0xfffffff | (uint)(fVar20 == fVar1) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar14 = (float)func_0x003727f0(fVar20);
            fVar15 = (float)func_0x00372674(fVar20);
            fVar20 = fStack_124 * fVar14;
            fStack_124 = fStack_124 * fVar15 - fStack_128 * fVar14;
            fVar13 = fStack_114 * fVar14;
            fStack_114 = fStack_114 * fVar15 - fStack_118 * fVar14;
            fVar17 = fStack_104 * fVar14;
            fStack_104 = fStack_104 * fVar15 - fStack_108 * fVar14;
            fStack_128 = fStack_128 * fVar15 + fVar20;
            fStack_118 = fStack_118 * fVar15 + fVar13;
            fStack_108 = fStack_108 * fVar15 + fVar17;
          }
          fVar13 = afStack_d8[iVar8] * *(float *)(param_7 + iVar8 * 4);
          fVar17 = afStack_d8[iVar8] * fVar4;
          fVar20 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          fVar20 = fVar13 * (fVar4 - fVar20 * fVar12);
          fVar13 = fVar13 * (fVar4 - fVar14 * fVar12);
          fStack_12c = fStack_12c * fVar20;
          fStack_11c = fStack_11c * fVar20;
          fStack_10c = fStack_10c * fVar20;
          fStack_128 = fStack_128 * fVar13;
          fStack_118 = fStack_118 * fVar13;
          fStack_108 = fStack_108 * fVar13;
          fStack_124 = fStack_124 * fVar17;
          fStack_114 = fStack_114 * fVar17;
          fStack_104 = fStack_104 * fVar17;
          fVar14 = (float)func_0x003727f0(uVar5);
          fVar15 = (float)func_0x00372674(uVar5);
          fVar20 = fStack_124 * fVar14;
          fStack_124 = fStack_124 * fVar15 - fStack_128 * fVar14;
          fVar13 = fStack_114 * fVar14;
          fStack_114 = fStack_114 * fVar15 - fStack_118 * fVar14;
          fVar17 = fStack_104 * fVar14;
          fStack_104 = fStack_104 * fVar15 - fStack_108 * fVar14;
          iVar6 = *(int *)(param_1 + (iVar8 + param_8 * 10) * 4 + 0x22c);
          if (iVar6 != 0) {
            *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0xc) = *(undefined4 *)(param_1 + 0x2ac);
            fStack_128 = fStack_128 * fVar15 + fVar20;
            fStack_118 = fStack_118 * fVar15 + fVar13;
            fStack_108 = fStack_108 * fVar15 + fVar17;
            func_0x003721e0(iVar6,&fStack_12c);
            *(undefined1 *)(iVar6 + 0xac) = 1;
            func_0x00372170(iVar6,0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 9);
        return;
      }
      if (iVar8 == 0) break;
      iVar6 = param_6 + iVar8 * 0xc;
      func_0x00373500(fVar1,fVar20,fVar20,iVar6);
      func_0x00373500(fVar1,fVar20,fVar20,iVar6 + 4);
      func_0x00373500(fVar1,fVar20,fVar20,iVar6 + 8);
    }
  } while( true );
}
