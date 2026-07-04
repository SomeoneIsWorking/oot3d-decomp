// OoT3D decomp @ 00375750  name=FUN_00375750  size=44

undefined4 FUN_00375750(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x34) * 0x10);
  }
  if (param_2 < uVar1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x60) + param_2 * 4);
  }
  return uVar2;
}

