// OoT3D decomp @ 00379664  name=FUN_00379664  size=76

void FUN_00379664(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar4 = FUN_0036ae14(param_1 + 0x1a4,5);
  uVar3 = DAT_003796b8;
  uVar2 = DAT_003796b4;
  uVar1 = DAT_003796b0;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x8d4) = uVar4;
  FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a4,5,2);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_003796bc;
  return;
}
