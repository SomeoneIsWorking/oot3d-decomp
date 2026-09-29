// OoT3D decomp @ 0033ff0c  name=FUN_0033ff0c  size=48

undefined4 FUN_0033ff0c(undefined4 param_1)

{
  int iVar1;

  iVar1 = DAT_0033ff38;
  *(char *)(DAT_0033ff38 + 0x11) = (char)param_1;
  FUN_002c59e8();
  *(char *)(iVar1 + 0xf) = (char)param_1;
  FUN_002c59d8(param_1);
  return param_1;
}
