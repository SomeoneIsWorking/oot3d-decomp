// OoT3D decomp @ 002d2d74  name=FUN_002d2d74  size=36

bool FUN_002d2d74(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r4;

  FUN_002d2e04();
  FUN_0048a5a8(*param_1,3);
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
    FUN_0030cab0(param_1 + 1,param_1 + 2,puVar1,0,unaff_r4);
  }
  return puVar1 != (undefined4 *)0x0;
}
