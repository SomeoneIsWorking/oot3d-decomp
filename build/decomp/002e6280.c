// OoT3D decomp @ 002e6280  name=FUN_002e6280  size=76

undefined4 FUN_002e6280(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;

  local_8 = param_4;
  iVar1 = FUN_00332754(*param_1 + DAT_002e62d0,
                       param_1[1] + DAT_002e62cc + (uint)CARRY4(*param_1,DAT_002e62d0),DAT_002e62d4,
                       0);
  FUN_002da61c(&local_8,0,0,iVar1 + DAT_002e62d8);
  return local_8;
}
