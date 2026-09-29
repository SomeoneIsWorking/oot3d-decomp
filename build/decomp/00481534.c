// OoT3D decomp @ 00481534  name=FUN_00481534  size=44

undefined4 FUN_00481534(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 uVar1;

  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = FUN_00488410(param_1 + 0xf4);
  }
  *param_3 = uVar1;
  return 1;
}
