// OoT3D decomp @ 002063c4  name=FUN_002063c4  size=84

void FUN_002063c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;

  uVar4 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar3 = uRam00206420;
  uVar2 = uRam0020641c;
  uVar1 = uRam00206418;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x938) = uVar4;
  FUN_00375c08(uVar3,uVar2,uVar4,uVar1,param_1 + 0x1a4,2);
  *(undefined1 *)(param_1 + 0x954) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = uRam00206424;
  return;
}
