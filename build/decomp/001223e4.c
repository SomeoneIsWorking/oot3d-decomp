// OoT3D decomp @ 001223e4  name=FUN_001223e4  size=240

void FUN_001223e4(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;

  uVar5 = DAT_001224f4;
  uVar4 = DAT_001224f0;
  uVar3 = DAT_001224ec;
  fVar2 = DAT_001224d4;
  if (*(char *)(param_1 + 0x203) == '\0') {
    FUN_00375bcc(param_1,DAT_001224d8);
    *(undefined4 *)(param_1 + 0x24c) = DAT_001224dc;
    *(float *)(param_1 + 0x250) = fVar2;
    *(undefined2 *)(param_1 + 0x264) = 0;
    *(undefined1 *)(param_1 + 0x203) = 1;
  }
  else if (*(char *)(param_1 + 0x203) == '\x01') {
    fVar6 = (float)VectorUnsignedToFloat
                             (*(ushort *)(param_1 + 0x264) & 7,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = (short)(int)(fVar6 * DAT_001224e0 * DAT_001224e4 * DAT_001224e8);
    *(short *)(param_1 + 0x208) = sVar1;
    *(short *)(param_1 + 0x20e) = -sVar1;
    fVar6 = (float)FUN_00363f44(uVar5,uVar4,uVar3,param_1,param_2,param_1 + 0x24c,param_1 + 0x250,
                                param_1 + 0x264,7,0);
    uVar3 = DAT_001224f8;
    if (fVar6 == fVar2) {
      *(undefined1 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = uVar3;
    }
    return;
  }
  return;
}
