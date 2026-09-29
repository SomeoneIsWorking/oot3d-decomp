// OoT3D decomp @ 003c3c04  name=FUN_003c3c04  size=116

void FUN_003c3c04(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_0036ae14(param_1 + 0x210,*(undefined4 *)(DAT_003c3c78 + 4));
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(param_1 + 0x24c) == fVar2) {
    FUN_00375bcc(param_1,DAT_003c3c7c);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003c3c80;
    *(undefined1 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}
