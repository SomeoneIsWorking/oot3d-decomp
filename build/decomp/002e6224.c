// OoT3D decomp @ 002e6224  name=FUN_002e6224  size=76

undefined4 FUN_002e6224(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;

  local_8 = param_4;
  iVar1 = FUN_00332754(*param_1 + DAT_002e6274,
                       param_1[1] + DAT_002e6270 + (uint)CARRY4(*param_1,DAT_002e6274),DAT_002e6278,
                       0);
  FUN_002da61c(0,&local_8,0,iVar1 + DAT_002e627c);
  return local_8;
}
