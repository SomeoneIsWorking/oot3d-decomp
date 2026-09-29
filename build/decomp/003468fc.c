// OoT3D decomp @ 003468fc  name=FUN_003468fc  size=92

void FUN_003468fc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  uVar3 = FUN_0036ae14(param_1 + 0x1a4,0xc);
  uVar2 = DAT_0034695c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
  uVar1 = DAT_00346958;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x6c) = DAT_00346958;
  *(undefined1 *)(param_1 + 0xe0c) = 4;
  FUN_00375c08(uVar1,uVar1,uVar3,uVar2,param_1 + 0x1a4,0xc,0);
  *(undefined4 *)(param_1 + 0xe1c) = DAT_00346960;
  return;
}
