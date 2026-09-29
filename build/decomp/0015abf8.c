// OoT3D decomp @ 0015abf8  name=FUN_0015abf8  size=320

void FUN_0015abf8(int param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;

  piVar2 = DAT_0015ad3c;
  pfVar1 = DAT_0015ad38;
  fVar6 = *DAT_0015ad38;
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 <= *(float *)(param_1 + 0x54)) << 0x1d;
  if (SUB41(uVar5 >> 0x1d,0)) {
    if ((*(uint *)(param_2 + 0xf8) & 1) != 0) {
      fVar6 = fVar6 * DAT_0015ad48;
    }
    *(float *)(param_1 + 0x54) = fVar6;
  }
  else {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015ad3c + 0x110),
                                       (byte)(uVar5 >> 0x15) & 3);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + fVar6 * DAT_0015ad40 * DAT_0015ad44;
  }
  iVar3 = FUN_0037571c(param_2);
  psVar4 = (short *)0x0;
  if (iVar3 != 0) {
    psVar4 = *(short **)(DAT_0015ad4c + param_2);
  }
  if ((iVar3 != 0 && psVar4 != (short *)0x0) && (*psVar4 == 2)) {
    *(undefined4 *)(param_1 + 0x2e8) = DAT_0015ad50;
    *(float *)(param_1 + 0x54) = *pfVar1;
    *(undefined2 *)(param_1 + 0x2ee) = 0;
  }
  FUN_0037572c(*(undefined4 *)(param_1 + 0x54),param_1);
  *(short *)(param_1 + 0x2f0) = *(short *)(param_1 + 0x2f0) + 1;
  if (*(short *)(param_2 + 0x104) == 0xd) {
    fVar6 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(DAT_0015ad54 + *(short *)(param_1 + 0x1c) * 2 + -6),
                              (byte)(uVar5 >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(uVar5 >> 0x15) & 3);
    if ((int)(uint)*(ushort *)(DAT_0015ad60 + param_2) <
        (int)((fVar6 * DAT_0015ad58) / fVar7 + DAT_0015ad5c)) {
      FUN_00373264(param_1,DAT_0015ad64);
      return;
    }
  }
  return;
}
