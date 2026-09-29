// OoT3D decomp @ 001e7db4  name=FUN_001e7db4  size=112

void FUN_001e7db4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_001e7e24;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_001e7e24;
    *(undefined2 *)(param_1 + 0x7e0) = 0;
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,2);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001e7e2c,uVar1,uVar3,DAT_001e7e28,param_1 + 0x1a4,2);
    *(undefined4 *)(param_1 + 0x7dc) = DAT_001e7e30;
  }
  return;
}
