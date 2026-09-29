// OoT3D decomp @ 00346bb4  name=FUN_00346bb4  size=132

void FUN_00346bb4(int param_1,undefined4 *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  uVar2 = DAT_00346c38;
  sVar1 = *(short *)(param_3 + 0x92);
  *(short *)(param_3 + 0xbe) = sVar1;
  *(short *)(param_3 + 0x36) = sVar1;
  *(short *)(param_1 + 0x2a8c) = sVar1 + -0x8000;
  *(undefined4 *)(param_1 + 0x2a88) = uVar2;
  *(undefined1 *)(param_1 + 0x2a99) = 1;
  *param_2 = 1;
  *(undefined1 *)(param_1 + 0x2aa6) = 2;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00346c3c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(char *)(param_1 + 0x2488) = (char)(int)(DAT_00346c40 / fVar3 + DAT_00346c44);
  *(undefined1 *)(param_1 + 0x2a9f) = 0;
  return;
}
