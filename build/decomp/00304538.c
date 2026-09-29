// OoT3D decomp @ 00304538  name=FUN_00304538  size=124

int * FUN_00304538(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;

  *param_1 = 0;
  if (((*param_2 == DAT_003045b4) && (0x1ffffff < param_2[2])) &&
     (param_2[2] <= (DAT_003045b4 & DAT_003045b4 << 0xf))) {
    iVar1 = FUN_0040f660(param_2);
    iVar2 = FUN_0040f5f4(param_2);
    if (iVar1 != 0 && iVar2 != 0) {
      param_1[1] = iVar2 + 8;
      *param_1 = iVar1 + 8;
      return param_1;
    }
  }
  return param_1;
}
