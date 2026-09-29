// OoT3D decomp @ 0030c388  name=FUN_0030c388  size=44

undefined4 FUN_0030c388(uint param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    param_1 = **(uint **)(param_1 + 4);
  }
  if (iVar2 != 0 && param_2 < param_1) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
    *(undefined4 *)(iVar2 + param_2 * 4) = param_3;
    return uVar1;
  }
  return 0;
}
