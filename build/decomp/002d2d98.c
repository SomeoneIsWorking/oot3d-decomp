// OoT3D decomp @ 002d2d98  name=FUN_002d2d98  size=108

bool FUN_002d2d98(undefined4 *param_1)

{
  undefined4 *puVar1;

  puVar1 = (undefined4 *)FUN_00308ab4(*param_1,0x14,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1 + 3;
    puVar1[4] = puVar1 + 3;
    FUN_0030cab0(param_1 + 1,param_1 + 2,puVar1);
  }
  return puVar1 != (undefined4 *)0x0;
}
