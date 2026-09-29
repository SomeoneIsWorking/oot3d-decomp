// OoT3D decomp @ 003ed878  name=FUN_003ed878  size=324

void FUN_003ed878(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;

  *(undefined1 *)(param_1 + 0x38f) = 0xff;
  *(byte *)(param_1 + 0x38e) = *(byte *)(param_1 + 0x38e) & 0xfe;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    bVar3 = *(byte *)(param_1 + 0x38e);
    *(byte *)(param_1 + 0x38e) = bVar3 | 2;
    if ((bVar3 & 4) == 0) {
      bVar3 = bVar3 | 6;
    }
    else {
      bVar3 = bVar3 & 0xfb | 2;
    }
    *(byte *)(param_1 + 0x38e) = bVar3;
    iVar1 = DAT_003eda6c;
    fVar4 = DAT_003eda64;
    if (*(char *)(param_1 + 0x391) == '\x03') {
      fVar4 = DAT_003eda68;
    }
    fVar4 = *(float *)(param_1 + 100) * fVar4;
    *(float *)(param_1 + 100) = fVar4;
    if ((int)fVar4 < iVar1) {
      *(undefined2 *)(param_1 + 0xc0) = 0;
      uVar2 = DAT_003eda70;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x24c) = uVar2;
      FUN_0035a008(param_2,(int)(short)*(undefined4 *)(param_1 + 0x244));
    }
    FUN_0037547c(DAT_003eda7c,param_1 + 0x28,4,DAT_003eda78,DAT_003eda78,DAT_003eda74);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar4 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84);
  if ((*(byte *)(param_1 + 0x38e) & 4) != 0) {
    *(short *)(param_1 + 0xc0) = (short)(int)(fVar4 * DAT_003eda90);
    return;
  }
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar4 * DAT_003eda94);
  return;
}
