// OoT3D decomp @ 00353c6c  name=FUN_00353c6c  size=40

void FUN_00353c6c(int param_1)

{
  undefined4 uVar1;

  uVar1 = uRam00353c98;
  *(undefined4 *)(param_1 + 0x1a4) = uRam00353c94;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0x5bc) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
