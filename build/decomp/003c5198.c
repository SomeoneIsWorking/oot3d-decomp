// OoT3D decomp @ 003c5198  name=FUN_003c5198  size=160

void FUN_003c5198(int param_1)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;

  fVar7 = DAT_003c5248;
  fVar4 = DAT_003c5244;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    fVar6 = *(float *)(param_1 + 100);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_003c5248) << 0x1f |
            (uint)(fVar6 == DAT_003c5248) << 0x1e;
    uVar5 = uVar2 | (uint)(NAN(fVar6) || NAN(DAT_003c5248)) << 0x1c;
    bVar3 = (byte)(uVar2 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      return;
    }
    FUN_00375bcc(param_1,DAT_003c524c);
    sVar1 = *(short *)(param_1 + 0x6bc) + -1;
    *(short *)(param_1 + 0x6bc) = sVar1;
    if (sVar1 < 1) {
      if (sVar1 == 0) {
        *(float *)(param_1 + 100) = fVar7;
        goto LAB_003c5224;
      }
      *(undefined2 *)(param_1 + 0x6bc) = 3;
    }
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x6bc),(byte)(uVar5 >> 0x15) & 3);
    *(float *)(param_1 + 100) = (fVar7 / DAT_003c5250) * fVar4;
    if (*(short *)(param_1 + 0x6bc) == 0) {
LAB_003c5224:
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(300,0x96);
    }
  }
  return;
}
