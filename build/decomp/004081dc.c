// OoT3D decomp @ 004081dc  name=FUN_004081dc  size=108

undefined4 * FUN_004081dc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = (undefined4 *)FUN_00308ab4(*param_1,(param_2 + 0x1fU & 0xffffffe0) + 0x20,0x20);
  puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + 8;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = puVar2;
    puVar1[3] = param_2;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
    FUN_0030cab0(param_1[3] + 8,param_1[3] + 0xc);
  }
  return puVar2;
}
