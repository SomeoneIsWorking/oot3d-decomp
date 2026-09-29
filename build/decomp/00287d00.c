// OoT3D decomp @ 00287d00  name=FUN_00287d00  size=296

int FUN_00287d00(float param_1,int param_2,int *param_3,float *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int unaff_r5;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar4 = *param_3;
  uVar6 = (uint)*(ushort *)(iVar4 + 0x14);
  bVar7 = uVar6 != 0;
  if (bVar7) {
    unaff_r5 = *(int *)(iVar4 + 0x28);
  }
  if (bVar7 && unaff_r5 != 0) {
    iVar4 = 0;
  }
  if ((bVar7 && unaff_r5 != 0) && uVar6 != 0) {
    do {
      psVar5 = (short *)(unaff_r5 + iVar4 * 0x10);
      uVar1 = (*(uint *)(psVar5 + 6) << 0xd) >> 0x1a;
      if (((int)*(char *)(DAT_00287e28 + param_2) == uVar1 || uVar1 == 0x3f) &&
         ((*(uint *)(psVar5 + 6) & 0x80000) == 0)) {
        fVar8 = *param_4;
        fVar9 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(fVar8 <= fVar9) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar9 = (float)VectorSignedToFloat((int)*psVar5 + (int)psVar5[3],
                                             (byte)(in_fpscr >> 0x15) & 3);
          uVar2 = uVar1 | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
          bVar3 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar8 = param_4[2];
            fVar9 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
            in_fpscr = uVar1 | (uint)(fVar8 <= fVar9) << 0x1d;
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              fVar9 = (float)VectorSignedToFloat((int)psVar5[2] + (int)psVar5[4],
                                                 (byte)(in_fpscr >> 0x15) & 3);
              uVar2 = uVar1 | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
              in_fpscr = uVar2 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
              bVar3 = (byte)(uVar2 >> 0x18);
              if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                fVar9 = param_4[1] - param_1;
                fVar8 = (float)VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
                uVar2 = uVar1 | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
                in_fpscr = uVar2 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
                bVar3 = (byte)(uVar2 >> 0x18);
                if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  fVar8 = param_4[1] + param_1;
                  fVar9 = (float)VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
                  uVar1 = uVar1 | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
                  in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
                  bVar3 = (byte)(uVar1 >> 0x18);
                  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    *param_5 = psVar5;
                    return iVar4;
                  }
                }
              }
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar6);
  }
  *param_5 = 0;
  return -1;
}
