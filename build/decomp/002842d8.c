// OoT3D decomp @ 002842d8  name=FUN_002842d8  size=192

void FUN_002842d8(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  FUN_0037422c(DAT_00284398,param_1 + 0x1e0,3);
  FUN_003731e0(param_1 + 0x1e0);
  uVar1 = in_fpscr & 0xfffffff |
          (uint)(*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x84)) << 0x1e |
          (uint)(*(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x2c)) << 0x1d;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
    *(undefined4 *)(param_1 + 0x220) = DAT_0028439c;
    *(undefined1 *)(param_1 + 0x1c4c) = 0xc;
    uVar3 = DAT_002843ac;
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c68),(byte)(uVar1 >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c68),(byte)(uVar1 >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat((int)(fVar5 * DAT_002843a0),(byte)(uVar1 >> 0x15) & 3);
    if ((int)(fVar4 * DAT_002843a0) < 1) {
      fVar4 = fVar5 * DAT_002843a4 * DAT_002843a8 - DAT_002843a8;
    }
    else {
      fVar4 = DAT_002843a8 + fVar5 * DAT_002843a4 * DAT_002843a8;
    }
    *(int *)(param_1 + 0x1c6c) = (int)fVar4;
    FUN_00375bcc(param_1,uVar3);
    *(undefined4 *)(param_1 + 0x1c50) = DAT_002843b0;
  }
  return;
}
