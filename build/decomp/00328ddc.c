// OoT3D decomp @ 00328ddc  name=FUN_00328ddc  size=44

undefined4 FUN_00328ddc(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (*(int *)(param_1 + 0x3c) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x3c) * 0x10);
  }
  if (param_2 < uVar1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x68) + param_2 * 4);
  }
  return uVar2;
}
