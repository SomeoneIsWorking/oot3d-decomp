// OoT3D decomp @ 002cf684  name=FUN_002cf684  size=812

void FUN_002cf684(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  undefined1 auStack_6c [4];
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  int local_58;

  iVar8 = DAT_002cf9c8;
  fVar7 = DAT_002cf9c4;
  fVar6 = DAT_002cf9c0;
  fVar5 = DAT_002cf9bc;
  fVar4 = DAT_002cf9b8;
  fVar3 = DAT_002cf9b4;
  fVar2 = DAT_002cf9b0;
  psVar13 = *(short **)(param_2 + param_4 * 8 + 0x10);
  psVar14 = *(short **)(param_3 + 0xb7c);
  if (psVar13 != (short *)0x0) {
    local_58 = param_1 + 0xa98;
    do {
      uVar10 = *(uint *)(psVar13 + 0x9e);
      bVar15 = uVar10 != 0;
      if (bVar15 && psVar13 != param_3) {
        uVar10 = *(uint *)(psVar13 + 2);
      }
      if ((bVar15 && psVar13 != param_3) && (uVar10 & 1) != 0) {
        if (param_4 == 5) {
          sVar9 = *psVar13;
          bVar15 = sVar9 == 0x1c;
          if (bVar15) {
            sVar9 = *(short *)(DAT_002cf9cc + (int)psVar13);
          }
          if (((!bVar15 || sVar9 != 0) && ((~uVar10 & 5) == 0)) &&
             ((int)*(float *)(psVar13 + 0x4a) < DAT_002cf9d0)) {
            in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(*(float *)(iVar8 + 0xa8) <= *(float *)(psVar13 + 0x4a)) << 0x1d;
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              *(short **)(param_2 + 0x114) = psVar13;
              *(undefined4 *)(iVar8 + 0xa8) = *(undefined4 *)(psVar13 + 0x4a);
            }
          }
        }
        if (psVar13 != psVar14) {
          sVar9 = (psVar13[0x49] + -0x8000) - *(short *)(iVar8 + 2);
          if (param_5 == 0) {
            if (sVar9 < 0) {
              sVar9 = -sVar9;
            }
            iVar11 = (int)sVar9;
            if (*(int *)(param_3 + 0xb7c) == 0) {
              if (iVar11 <= DAT_002cf9d4) {
                fVar17 = *(float *)(psVar13 + 0x4a);
                goto LAB_002cf878;
              }
            }
            else {
              bVar15 = iVar11 == 0x4000;
              if (iVar11 < 0x4001) {
                bVar15 = (*(uint *)(psVar13 + 2) & 0x8000000) == 0;
              }
              if (bVar15) {
                fVar17 = *(float *)(psVar13 + 0x4a);
                goto LAB_002cf7c8;
              }
            }
LAB_002cf860:
            fVar17 = fVar4;
          }
          else {
            if (sVar9 < 0) {
              sVar9 = -sVar9;
            }
            iVar11 = (int)sVar9;
            if (*(int *)(param_3 + 0xb7c) == 0) {
              fVar17 = *(float *)(psVar13 + 0x4a);
              fVar16 = *(float *)(iVar8 + 100);
              uVar10 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar16) << 0x1f |
                       (uint)(fVar17 == fVar16) << 0x1e;
              in_fpscr = uVar10 | (uint)(NAN(fVar17) || NAN(fVar16)) << 0x1c;
              bVar1 = (byte)(uVar10 >> 0x18);
              if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                iVar12 = iVar11;
                if (0x4000 < iVar11) {
                  iVar12 = iVar11 + -0x4000;
                }
                if (0x4000 < iVar11) {
                  iVar12 = (int)(short)iVar12;
                }
                fVar16 = (float)VectorSignedToFloat(0x4000 - iVar12,(byte)(in_fpscr >> 0x15) & 3);
                fVar17 = fVar17 - fVar17 * *(float *)(iVar8 + 0x68) * fVar16 * fVar3;
              }
              else if (DAT_002cf9d4 < iVar11) goto LAB_002cf860;
            }
            else {
              if ((*(uint *)(psVar13 + 2) & 0x8000000) != 0) goto LAB_002cf860;
              fVar17 = *(float *)(psVar13 + 0x4a);
              fVar16 = *(float *)(iVar8 + 100);
              uVar10 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar16) << 0x1f |
                       (uint)(fVar17 == fVar16) << 0x1e;
              in_fpscr = uVar10 | (uint)(NAN(fVar17) || NAN(fVar16)) << 0x1c;
              bVar1 = (byte)(uVar10 >> 0x18);
              if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
                if (0x4000 < iVar11) {
                  iVar11 = (int)(short)(sVar9 + -0x4000);
                }
              }
              else if (0x4000 < iVar11) goto LAB_002cf860;
LAB_002cf7c8:
              fVar16 = (float)VectorSignedToFloat(0x4000 - iVar11,(byte)(in_fpscr >> 0x15) & 3);
              fVar17 = fVar17 - fVar17 * fVar2 * fVar16 * fVar3;
            }
          }
LAB_002cf878:
          uVar10 = in_fpscr & 0xfffffff;
          in_fpscr = uVar10 | (uint)(*(float *)(iVar8 + 0xa4) <= fVar17) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar16 = *(float *)(DAT_002cf9d8 + *(char *)((int)psVar13 + 0x1f) * 8);
            uVar10 = uVar10 | (uint)(fVar16 < fVar17) << 0x1f | (uint)(fVar16 == fVar17) << 0x1e;
            in_fpscr = uVar10 | (uint)(NAN(fVar16) || NAN(fVar17)) << 0x1c;
            bVar1 = (byte)(uVar10 >> 0x18);
            if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              FUN_00368cc0(param_1,psVar13 + 0x1e,&local_64,&local_68);
              sVar9 = (short)(int)(fVar7 + local_60 * local_68 * fVar6);
              if ((((int)(short)(int)(fVar5 + local_64 * local_68 * fVar5) + 0x27U < DAT_002cf9dc)
                  && (-0xa0 < sVar9)) &&
                 ((sVar9 < 400 &&
                  ((iVar11 = FUN_003723c0(local_58,param_3 + 0x1e,psVar13 + 0x1e,auStack_6c,
                                          &local_5c,1,1,1,1,&local_60), iVar11 == 0 ||
                   (iVar11 = FUN_0035fe90(local_58,local_5c,local_60), iVar11 != 0)))))) {
                uVar10 = (uint)*(byte *)((int)psVar13 + 0x115);
                if (uVar10 == 0) {
                  *(short **)(iVar8 + 0x9c) = psVar13;
                  *(float *)(iVar8 + 0xa4) = fVar17;
                }
                else if ((int)uVar10 < *(int *)(iVar8 + 0xac)) {
                  *(uint *)(iVar8 + 0xac) = uVar10;
                  *(short **)(iVar8 + 0xa0) = psVar13;
                }
              }
            }
          }
        }
      }
      psVar13 = *(short **)(psVar13 + 0x98);
    } while (psVar13 != (short *)0x0);
  }
  return;
}
