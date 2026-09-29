// OoT3D decomp @ 0035b578  name=FUN_0035b578  size=108

void FUN_0035b578(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar3 = FUN_0036ae14(param_1 + 0x1e0,4);
  uVar2 = DAT_0035b5e8;
  uVar1 = DAT_0035b5e4;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0xcdc) != 0) {
    *(undefined2 *)(param_1 + 0xcdc) = 0xffff;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xcb8) = 7;
  *(undefined4 *)(param_1 + 0xccc) = 0xf;
  FUN_00353020(uVar1,uVar1,uVar3,uVar2,param_1 + 0x1e0,DAT_0035b5ec,3);
  *(undefined4 *)(param_1 + 0xcc0) = DAT_0035b5f0;
  return;
}
