// OoT3D decomp @ 002cd710  name=FUN_002cd710  size=52

undefined4 FUN_002cd710(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_002c454c(*(undefined4 *)(param_1 + 0x920));
  bVar2 = uVar1 != 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x520) + 0x390);
  }
  if (!bVar2 || uVar1 == 0) {
    return 0;
  }
  return 1;
}

