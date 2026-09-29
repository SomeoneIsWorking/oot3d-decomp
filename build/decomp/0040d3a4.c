// OoT3D decomp @ 0040d3a4  name=FUN_0040d3a4  size=112

undefined4 *
FUN_0040d3a4(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;

  if (((*(char *)(param_1 + 0x168) != '\0') && (0x43 < param_3)) && (param_2 != 0)) {
    puVar1 = (undefined4 *)FUN_00402394(param_2,param_4);
    *puVar1 = DAT_0040d414;
    puVar1[0xf] = param_5;
    puVar1[0x10] = param_6;
    if (param_6 == 0) {
      puVar1[0x10] = puVar1[5];
    }
    FUN_0030d62c(puVar1,param_5,0);
    return puVar1;
  }
  return (undefined4 *)0x0;
}
