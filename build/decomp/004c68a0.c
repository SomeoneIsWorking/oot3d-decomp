// OoT3D decomp @ 004c68a0  name=FUN_004c68a0  size=44

undefined4 FUN_004c68a0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (*(int *)(param_1 + 0x38) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38) * 0x10);
  }
  if (param_2 < uVar1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 100) + param_2 * 4);
  }
  return uVar2;
}
