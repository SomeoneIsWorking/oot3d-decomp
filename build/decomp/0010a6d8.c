// OoT3D decomp @ 0010a6d8  name=FUN_0010a6d8  size=480

void FUN_0010a6d8(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x9e6) != 0) {
    *(short *)(param_1 + 0x9e6) = *(short *)(param_1 + 0x9e6) + -1;
  }
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x9e6) < 1) {
    fVar4 = fVar4 * DAT_0010a8bc * DAT_0010a8c0 - DAT_0010a8c4;
  }
  else {
    fVar4 = DAT_0010a8c4 + fVar4 * DAT_0010a8bc * DAT_0010a8c0;
  }
  fVar4 = (float)VectorSignedToFloat((int)fVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = ((*(float *)(param_1 + 0x1ec) + DAT_0010a8b8) * DAT_0010a8c8 - fVar4) * DAT_0010a8cc;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 < DAT_0010a8d0) << 0x1f |
          (uint)(fVar4 == DAT_0010a8d0) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar4) || NAN(DAT_0010a8d0))) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),(byte)(uVar1 >> 0x15) & 3);
    if (*(short *)(param_1 + 0x9e6) < 1) {
      fVar4 = fVar4 * DAT_0010a8bc * DAT_0010a8c0 - DAT_0010a8c4;
    }
    else {
      fVar4 = DAT_0010a8c4 + fVar4 * DAT_0010a8bc * DAT_0010a8c0;
    }
    fVar4 = (float)VectorSignedToFloat((int)fVar4,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = ((*(float *)(param_1 + 0x1ec) + DAT_0010a8b8) * DAT_0010a8c8 - fVar4) * DAT_0010a8cc *
            DAT_0010a8bc * DAT_0010a8c0 - DAT_0010a8c4;
  }
  else {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e6),(byte)(uVar1 >> 0x15) & 3);
    if (*(short *)(param_1 + 0x9e6) < 1) {
      fVar4 = fVar4 * DAT_0010a8bc * DAT_0010a8c0 - DAT_0010a8c4;
    }
    else {
      fVar4 = DAT_0010a8c4 + fVar4 * DAT_0010a8bc * DAT_0010a8c0;
    }
    fVar4 = (float)VectorSignedToFloat((int)fVar4,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = DAT_0010a8c4 +
            ((*(float *)(param_1 + 0x1ec) + DAT_0010a8b8) * DAT_0010a8c8 - fVar4) * DAT_0010a8cc *
            DAT_0010a8bc * DAT_0010a8c0;
  }
  *(short *)(param_1 + 0xbe) = (short)(int)fVar4 + *(short *)(param_1 + 0xbe);
  if (*(short *)(param_1 + 0x9e6) == 0x1b || *(short *)(param_1 + 0x9e6) == 0xb) {
    FUN_00375bcc(param_1,DAT_0010a8d4);
  }
  if (*(short *)(param_1 + 0x9e6) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0010a8d8;
    if (*(char *)(param_1 + 0x9e0) == '\0') {
      *(undefined1 *)(param_1 + 0xa84) = 9;
      uVar3 = DAT_0010a8dc;
      *(byte *)(param_1 + 0xa81) = *(byte *)(param_1 + 0xa81) | 4;
      FUN_00370350(uVar3,param_1 + 0x1a4,3);
    }
    *(undefined2 *)(param_1 + 0x9e6) = 8;
    uVar3 = DAT_0010a8e0;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) | 8;
    *(undefined4 *)(param_1 + 0x9dc) = uVar3;
  }
  return;
}
