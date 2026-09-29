// OoT3D decomp @ 0044d914  name=FUN_0044d914  size=60

int FUN_0044d914(undefined4 param_1,char *param_2)

{
  int iVar1;

  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar1 = FUN_00303414(DAT_0044d950 + 0x44d938), iVar1 != 0)) {
    return 0;
  }
  return (int)&DAT_0044d950 + DAT_0044d954;
}
