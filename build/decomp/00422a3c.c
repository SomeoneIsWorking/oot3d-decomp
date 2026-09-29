// OoT3D decomp @ 00422a3c  name=FUN_00422a3c  size=36

void FUN_00422a3c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 local_10;

  puVar1 = DAT_00422a60;
  *(undefined4 *)(DAT_00422a60 + 0xc) = param_1;
  local_10 = param_1;
  FUN_00435dc8(&local_10);
  *puVar1 = 0;
  return;
}
