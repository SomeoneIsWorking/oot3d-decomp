// OoT3D decomp @ 002e61c8  name=FUN_002e61c8  size=76

undefined4 FUN_002e61c8(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;

  local_8 = param_4;
  iVar1 = FUN_00332754(*param_1 + DAT_002e6218,
                       param_1[1] + DAT_002e6214 + (uint)CARRY4(*param_1,DAT_002e6218),DAT_002e621c,
                       0);
  FUN_002da61c(0,0,&local_8,iVar1 + DAT_002e6220);
  return local_8;
}
