// OoT3D decomp @ 00416c68  name=FUN_00416c68  size=60

int FUN_00416c68(undefined4 param_1,char *param_2)

{
  int iVar1;

  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_00303414(DAT_00416ca4 + 0x416c8c), iVar1 != 0)) {
    return 0;
  }
  return (int)&DAT_00416ca4 + DAT_00416ca8;
}
