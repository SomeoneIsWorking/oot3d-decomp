// OoT3D decomp @ 001808a0  name=FUN_001808a0  size=40

void FUN_001808a0(int param_1)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 0x140) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  uVar1 = DAT_001808c8;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x8ac) = uVar1;
  return;
}
