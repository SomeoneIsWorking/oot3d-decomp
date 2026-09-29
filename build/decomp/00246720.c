// OoT3D decomp @ 00246720  name=FUN_00246720  size=196

void FUN_00246720(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  byte bVar3;
  uint in_fpscr;
  float fVar4;

  fVar4 = *(float *)(*(int *)(DAT_00246844 + param_1) + 0x84);
  uVar2 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_3 + 4) == fVar4) << 0x1e |
          (uint)(fVar4 <= *(float *)(param_3 + 4)) << 0x1d;
  bVar3 = (byte)(uVar2 >> 0x18);
  if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
    *(undefined2 *)(param_3 + 0x60) = 0;
  }
  if (*(short *)(param_3 + 0x54) == 0) {
    if (*(short *)(param_3 + 0x5a) != 0) {
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0024685c + 0x110),
                                         (byte)(uVar2 >> 0x15) & 3);
      *(short *)(param_3 + 0x5a) =
           *(short *)(param_3 + 0x5a) -
           (short)(int)(DAT_00246868 + fVar4 * DAT_00246860 * DAT_00246864);
      return;
    }
  }
  else {
    sVar1 = *(short *)(param_3 + 0x54) + -1;
    *(short *)(param_3 + 0x54) = sVar1;
    if (sVar1 == 0) {
      FUN_0036c5bc(param_1,0);
      FUN_00368fec();
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
