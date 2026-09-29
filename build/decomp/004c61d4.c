// OoT3D decomp @ 004c61d4  name=FUN_004c61d4  size=64

void FUN_004c61d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = *(undefined4 *)(DAT_004c6214 + 0xc);
  local_c = *(undefined4 *)(DAT_004c6214 + 0x10);
  if (*(int *)(DAT_004c6218 + 4) == 0) {
    puVar1 = &local_c;
  }
  else {
    puVar1 = &local_8;
  }
  FUN_002b7714(param_1,param_2,puVar1,1);
  return;
}
