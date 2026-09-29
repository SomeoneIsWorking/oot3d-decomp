// OoT3D decomp @ 001816f8  name=FUN_001816f8  size=104

void FUN_001816f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar3 = FUN_0036ae14(param_1 + 0x22c,9);
  uVar2 = DAT_00181768;
  uVar1 = DAT_00181760;
  *(short *)(param_1 + 0x1c0) = (short)uVar3;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar2,DAT_00181764,uVar3,uVar1,param_1 + 0x22c,9,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  *(undefined2 *)(param_1 + 0x1c2) = 1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0018176c;
  return;
}
