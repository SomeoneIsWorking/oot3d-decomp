// OoT3D decomp @ 0047ac3c  name=FUN_0047ac3c  size=696

short * FUN_0047ac3c(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  short *psVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;

  psVar3 = (short *)0x0;
  param_2 = param_2 + 0xc;
  *param_4 = DAT_0047aef4;
  fVar2 = DAT_0047aefc;
  fVar1 = DAT_0047aef8;
  iVar4 = 0;
  pfVar12 = param_4;
  do {
    for (psVar7 = *(short **)(param_2 + 4); psVar7 != (short *)0x0;
        psVar7 = *(short **)(psVar7 + 0x98)) {
      if (*psVar7 != 0x18) {
        fVar9 = *(float *)(psVar7 + 0x80);
        if (*(float *)(psVar7 + 0x7e) + fVar9 <= *(float *)(psVar7 + 0x7a)) {
          *(undefined1 *)(psVar7 + 0x90) = 2;
          bVar8 = false;
        }
        else {
          if (-fVar9 < *(float *)(psVar7 + 0x7a)) {
            fVar10 = fVar1;
            if (0x3f7fffff < (int)*(float *)(psVar7 + 0x7c)) {
              fVar10 = fVar1 / *(float *)(psVar7 + 0x7c);
            }
            if ((int)((ABS(*(float *)(psVar7 + 0x76)) - fVar9) * fVar10) < 0x3f800000) {
              pfVar12 = (float *)((*(float *)(psVar7 + 0x78) + *(float *)(psVar7 + 0x82)) * fVar10);
              if ((pfVar12 < DAT_0047af00) &&
                 ((int)((*(float *)(psVar7 + 0x78) - fVar9) * fVar10) < 0x3f800000)) {
                bVar8 = true;
                *(undefined1 *)(psVar7 + 0x90) = 0;
                goto LAB_0047ad58;
              }
            }
          }
          *(undefined1 *)(psVar7 + 0x90) = 1;
          bVar8 = false;
        }
LAB_0047ad58:
        if (bVar8) {
          uVar5 = *(uint *)(psVar7 + 2) | 0x40;
        }
        else {
          uVar5 = *(uint *)(psVar7 + 2) & 0xffffffbf;
        }
        *(uint *)(psVar7 + 2) = uVar5;
        if (*(int *)(psVar7 + 0x9a) == 0) {
          uVar5 = 0;
          if (*(int *)(psVar7 + 0xa0) != 0) {
            uVar5 = *(uint *)(psVar7 + 2);
          }
          if (*(int *)(psVar7 + 0xa0) != 0 && (uVar5 & 0x60) != 0) {
            if ((uVar5 & 0x80) == 0) {
LAB_0047adb8:
              pfVar12 = *(float **)(psVar7 + 0x16);
              fVar17 = *param_3 - *(float *)(psVar7 + 0x14);
              fVar18 = param_3[1] - *(float *)(psVar7 + 0x16);
              fVar11 = *(float *)(psVar7 + 0x14) - *(float *)(psVar7 + 0x14);
              fVar19 = param_3[2] - *(float *)(psVar7 + 0x18);
              fVar13 = ((float)pfVar12 + *(float *)(psVar7 + 0x82)) - *(float *)(psVar7 + 0x16);
              fVar15 = *param_3 - *(float *)(psVar7 + 0x14);
              fVar10 = param_3[1] - ((float)pfVar12 + *(float *)(psVar7 + 0x82));
              fVar14 = *(float *)(psVar7 + 0x18) - *(float *)(psVar7 + 0x18);
              fVar16 = param_3[2] - *(float *)(psVar7 + 0x18);
              fVar9 = fVar2;
              if (*(int *)(psVar7 + 100) != 0) {
                fVar9 = *(float *)(psVar7 + 0x66);
              }
              fVar20 = fVar17 * fVar11 + fVar18 * fVar13 + fVar19 * fVar14;
              if (fVar20 <= fVar2) {
                fVar10 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
              }
              else {
                fVar11 = fVar11 * fVar11 + fVar13 * fVar13 + fVar14 * fVar14;
                if (fVar11 <= fVar20) {
                  fVar10 = fVar15 * fVar15 + fVar10 * fVar10 + fVar16 * fVar16;
                }
                else {
                  fVar10 = (fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19) -
                           (fVar20 * fVar20) / fVar11;
                }
              }
              fVar10 = fVar10 - fVar9 * fVar9;
              if (fVar10 < fVar2) {
                fVar10 = fVar2;
              }
              if (fVar10 < *param_4) {
                *param_4 = fVar10;
                psVar3 = psVar7;
              }
            }
            else if (*(char *)(param_1 + 0x4c35) != '\0') {
              pfVar6 = (float *)(uint)*(byte *)(param_1 + 0x208f);
              bVar8 = pfVar6 == (float *)0x0;
              if (bVar8) {
                pfVar6 = (float *)(int)*(char *)((int)psVar7 + 3);
                pfVar12 = (float *)(int)*(char *)(param_1 + 0x4c30);
              }
              if (bVar8 && pfVar6 == pfVar12) goto LAB_0047adb8;
            }
          }
        }
      }
    }
    do {
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 8;
      if (0xb < iVar4) {
        *param_4 = SQRT(*param_4);
        return psVar3;
      }
    } while (iVar4 == 2);
  } while( true );
}
