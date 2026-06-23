// OoT3D decomp @ 00372f0c  name=FUN_00372f0c  size=44

undefined4 FUN_00372f0c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x30) * 0x10);
  }
  if (param_2 < uVar1) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x58) + param_2 * 4);
  }
  return uVar2;
}

