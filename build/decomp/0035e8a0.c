// OoT3D decomp @ 0035e8a0  name=FUN_0035e8a0  size=236

undefined4
FUN_0035e8a0(float param_1,float param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  short *psVar5;
  short *unaff_r4;
  bool bVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;

  psVar5 = (short *)*param_4;
  puVar2 = (ushort *)(psVar5 + 10);
  bVar6 = *puVar2 != 0;
  if (bVar6) {
    psVar5 = *(short **)(psVar5 + 0x14);
  }
  if (bVar6 && psVar5 != (short *)0x0) {
    unaff_r4 = psVar5 + (uint)*puVar2 * 8;
  }
  if ((bVar6 && psVar5 != (short *)0x0) && psVar5 < unaff_r4) {
    do {
      uVar1 = (*(uint *)(psVar5 + 6) << 0xd) >> 0x1a;
      if (((int)*(char *)(param_3 + DAT_0035e98c) == uVar1 || uVar1 == 0x3f) &&
         ((*(uint *)(psVar5 + 6) & 0x80000) == 0)) {
        fVar8 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(param_1 <= fVar8) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar8 = (float)VectorSignedToFloat((int)*psVar5 + (int)psVar5[3],
                                             (byte)(in_fpscr >> 0x15) & 3);
          uVar3 = uVar1 | (uint)(fVar8 < param_1) << 0x1f | (uint)(fVar8 == param_1) << 0x1e;
          in_fpscr = uVar3 | (uint)(NAN(fVar8) || NAN(param_1)) << 0x1c;
          bVar4 = (byte)(uVar3 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar8 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
            in_fpscr = uVar1 | (uint)(param_2 <= fVar8) << 0x1d;
            if (!SUB41(in_fpscr >> 0x1d,0)) {
              fVar8 = (float)VectorSignedToFloat((int)psVar5[2] + (int)psVar5[4],
                                                 (byte)(in_fpscr >> 0x15) & 3);
              uVar1 = uVar1 | (uint)(fVar8 < param_2) << 0x1f | (uint)(fVar8 == param_2) << 0x1e;
              in_fpscr = uVar1 | (uint)(NAN(fVar8) || NAN(param_2)) << 0x1c;
              bVar4 = (byte)(uVar1 >> 0x18);
              if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                *param_6 = psVar5;
                uVar7 = VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
                *param_5 = uVar7;
                return 1;
              }
            }
          }
        }
      }
      psVar5 = psVar5 + 8;
    } while (psVar5 < unaff_r4);
  }
  return 0;
}
