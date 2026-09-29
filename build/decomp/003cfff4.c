// OoT3D decomp @ 003cfff4  name=FUN_003cfff4  size=1188

void FUN_003cfff4(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_dc;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  pfVar3 = DAT_003d0490;
  pfVar5 = DAT_003d0490 + 1;
  fVar9 = DAT_003d0490[2];
  DAT_003d0490[3] = *DAT_003d0490;
  pfVar3[4] = *pfVar5;
  pfVar3[5] = fVar9;
  pfVar3[0x12] = pfVar3[0xf];
  pfVar3[0x13] = pfVar3[0x10];
  pfVar3[0x14] = pfVar3[0x11];
  *pfVar3 = pfVar3[-3];
  pfVar3[1] = pfVar3[-2];
  pfVar3[2] = pfVar3[-1];
  pfVar3[0xf] = pfVar3[0xc];
  pfVar3[0x10] = pfVar3[0xd];
  pfVar3[0x11] = pfVar3[0xe];
  pfVar3[-3] = pfVar3[-6];
  pfVar3[-2] = pfVar3[-5];
  pfVar3[-1] = pfVar3[-4];
  pfVar3[0xc] = pfVar3[9];
  pfVar3[0xd] = pfVar3[10];
  pfVar3[0xe] = pfVar3[0xb];
  pfVar5 = pfVar3 + -9;
  pfVar3[-6] = *pfVar5;
  pfVar3[-5] = pfVar3[-8];
  pfVar3[-4] = pfVar3[-7];
  pfVar3[9] = pfVar3[6];
  pfVar3[10] = pfVar3[7];
  pfVar3[0xb] = pfVar3[8];
  fVar9 = param_2[1];
  fVar7 = param_2[2];
  *pfVar5 = *param_2;
  pfVar3[-8] = fVar9;
  pfVar3[-7] = fVar7;
  fVar9 = param_3[1];
  fVar7 = param_3[2];
  pfVar3[6] = *param_3;
  pfVar3[7] = fVar9;
  pfVar3[8] = fVar7;
  fVar9 = param_2[1];
  fVar7 = param_2[2];
  pfVar3[0x15] = *param_2;
  pfVar3[0x16] = fVar9;
  pfVar3[0x17] = fVar7;
  fVar9 = param_3[1];
  fVar7 = param_3[2];
  pfVar6 = pfVar3 + 0x18;
  pfVar3[0x90] = *param_3;
  pfVar3[0x91] = fVar9;
  pfVar3[0x92] = fVar7;
  local_dc = 0;
LAB_003d00a8:
  fVar9 = DAT_003d0494;
  iVar10 = 0;
  do {
    fVar1 = DAT_003d049c;
    fVar7 = DAT_003d0498;
    local_3c = pfVar5[3] - *pfVar5;
    local_38 = pfVar5[4] - pfVar5[1];
    local_34 = pfVar5[5] - pfVar5[2];
    local_48 = pfVar5[6] - pfVar5[3];
    local_44 = pfVar5[7] - pfVar5[4];
    local_40 = pfVar5[8] - pfVar5[5];
    while( true ) {
      iVar2 = 1;
      pfVar3 = pfVar5 + iVar10 * 3;
      do {
        fVar14 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        iVar4 = iVar2 + iVar10 * 10;
        iVar2 = iVar2 + 1;
        fVar14 = fVar14 * fVar7;
        fVar15 = fVar14 * fVar14;
        fVar18 = fVar14 * fVar14 - fVar14;
        fVar14 = fVar18 * fVar14;
        fVar16 = fVar15 - fVar14 * fVar1;
        fVar18 = fVar14 - fVar18;
        fVar17 = fVar15 - fVar14 * fVar1;
        pfVar6[iVar4 * 3 + -3] =
             (*pfVar3 - fVar16 * *pfVar3) + fVar16 * pfVar3[3] + fVar18 * local_3c * fVar9 +
             fVar14 * local_48 * fVar9;
        fVar15 = fVar15 - fVar14 * fVar1;
        pfVar6[iVar4 * 3 + -2] =
             (pfVar3[1] - fVar17 * pfVar3[1]) + fVar17 * pfVar3[4] + fVar18 * local_38 * fVar9 +
             fVar14 * local_44 * fVar9;
        pfVar6[iVar4 * 3 + -1] =
             (pfVar3[2] - fVar15 * pfVar3[2]) + fVar15 * pfVar3[5] + fVar18 * local_34 * fVar9 +
             fVar14 * local_40 * fVar9;
        pfVar8 = DAT_003d04a0;
      } while (iVar2 < 0xb);
      iVar10 = iVar10 + 1;
      if (3 < iVar10) {
        local_dc = local_dc + 1;
        pfVar6 = DAT_003d04a0 + 0x8d;
        pfVar5 = DAT_003d04a0;
        if (1 < local_dc) {
          pfVar3 = (float *)FUN_00333270(*(undefined4 *)(param_1 + 0x33c));
          pfVar5 = pfVar8 + 0xf;
          pfVar6 = pfVar8 + 0x10;
          pfVar12 = pfVar8 + 0x11;
          pfVar11 = pfVar8 + 0x8a;
          pfVar13 = pfVar8 + 0x8b;
          pfVar8 = pfVar8 + 0x8c;
          iVar10 = 0x29;
          do {
            *pfVar3 = *pfVar5;
            pfVar3[1] = *pfVar6;
            pfVar3[2] = *pfVar12;
            pfVar3[3] = *pfVar11;
            pfVar6 = pfVar6 + 3;
            pfVar3[4] = *pfVar13;
            fVar9 = *pfVar8;
            iVar10 = iVar10 + -1;
            pfVar5 = pfVar5 + 3;
            pfVar12 = pfVar12 + 3;
            pfVar11 = pfVar11 + 3;
            pfVar13 = pfVar13 + 3;
            pfVar8 = pfVar8 + 3;
            pfVar3[5] = fVar9;
            pfVar3 = pfVar3 + 6;
          } while (iVar10 != 0);
          return;
        }
        goto LAB_003d00a8;
      }
      if (iVar10 == 0) break;
      if (iVar10 == 3) {
        local_3c = pfVar5[9] - pfVar5[6];
        local_38 = pfVar5[10] - pfVar5[7];
        local_34 = pfVar5[0xb] - pfVar5[8];
        local_48 = pfVar5[9] - pfVar5[6];
        local_44 = pfVar5[10] - pfVar5[7];
        local_40 = pfVar5[0xb] - pfVar5[8];
      }
      else {
        pfVar3 = pfVar5 + iVar10 * 3;
        local_3c = *pfVar3 - pfVar3[-3];
        local_38 = pfVar3[1] - pfVar3[-2];
        local_34 = pfVar3[2] - pfVar3[-1];
        local_48 = pfVar3[6] - pfVar3[3];
        local_44 = pfVar3[7] - pfVar3[4];
        local_40 = pfVar3[8] - pfVar3[5];
      }
    }
  } while( true );
}
