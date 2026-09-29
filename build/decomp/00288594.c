// OoT3D decomp @ 00288594  name=FUN_00288594  size=76

void FUN_00288594(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar4 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar3 = DAT_002885e8;
  uVar2 = DAT_002885e4;
  uVar1 = DAT_002885e0;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x938) = uVar4;
  FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a4,2);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_002885ec;
  return;
}
