// OoT3D decomp @ 002da0cc  name=FUN_002da0cc  size=24

undefined4 FUN_002da0cc(int param_1)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0x30) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x30) * 0x10);
  }
  return uVar1;
}
