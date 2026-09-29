// OoT3D decomp @ 003301b8  name=FUN_003301b8  size=132

void FUN_003301b8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,3);
  uVar1 = DAT_00330240;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00330244,DAT_00330240,uVar2,DAT_0033023c,param_1 + 0x1a4,3,2);
  uVar2 = DAT_0033024c;
  if (*(short *)(param_1 + 0x1c) == -2) {
    *(undefined4 *)(param_1 + 0x1e4) = DAT_00330248;
  }
  *(byte *)(param_1 + 0xaec) = *(byte *)(param_1 + 0xaec) & 0xfb;
  *(undefined4 *)(param_1 + 0xa48) = 9;
  FUN_00375bcc(param_1,uVar2);
  uVar2 = DAT_00330250;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xa54) = uVar2;
  return;
}
