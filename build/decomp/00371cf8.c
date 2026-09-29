// OoT3D decomp @ 00371cf8  name=FUN_00371cf8  size=288

undefined4 FUN_00371cf8(float param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  short *psVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;

  if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
    return 0;
  }
  fVar8 = *(float *)(param_2 + 100);
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_00371e2c) << 0x1f |
          (uint)(fVar8 == DAT_00371e2c) << 0x1e;
  uVar7 = uVar3 | (uint)(NAN(fVar8) || NAN(DAT_00371e2c)) << 0x1c;
  bVar4 = (byte)(uVar3 >> 0x18);
  if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
    if (*(short *)(param_2 + 0xef4) != 0) {
      uVar1 = *(short *)(param_2 + 0xef4) - 1;
      *(ushort *)(param_2 + 0xef4) = uVar1;
      uVar5 = DAT_00371e34;
      if (uVar1 != 0) {
        if (param_4 == 0) {
          return 1;
        }
        if ((uVar1 & 1) == 0) {
          fVar8 = *(float *)(param_2 + 0x2c) - DAT_00371e30;
        }
        else {
          fVar8 = *(float *)(param_2 + 0x2c) + DAT_00371e30;
        }
        *(float *)(param_2 + 0x2c) = fVar8;
        FUN_00375bcc(param_2,uVar5);
        return 1;
      }
    }
    psVar6 = (short *)(param_2 + 0xf00);
    if (1 < *psVar6) {
      uVar5 = DAT_00371e38;
      if ((*(ushort *)(param_2 + 0x1c) & 0x1f) == 0) {
        uVar5 = DAT_00371e3c;
      }
      FUN_00375bcc(param_2,uVar5);
    }
    sVar2 = *psVar6 + -1;
    *psVar6 = sVar2;
    if (sVar2 < 1) {
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003702c8(0x3c,0x1e);
      }
      *psVar6 = (short)param_3;
    }
    fVar9 = (float)VectorSignedToFloat(param_3,(byte)(uVar7 >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*psVar6,(byte)(uVar7 >> 0x15) & 3);
    *(float *)(param_2 + 100) = (fVar8 / fVar9) * param_1;
    return 1;
  }
  return 0;
}
