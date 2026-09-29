// OoT3D decomp @ 0040e198  name=FUN_0040e198  size=88

undefined4 FUN_0040e198(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;

  iVar1 = FUN_003042d4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
  if ((iVar1 != 0) && (iVar2 = FUN_0030429c(iVar1), iVar2 == 2)) {
    puVar3 = (undefined2 *)FUN_0040dbd8(iVar1);
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    return 1;
  }
  return 0;
}
