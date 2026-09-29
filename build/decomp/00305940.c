// OoT3D decomp @ 00305940  name=FUN_00305940  size=16

/* WARNING: Removing unreachable block (ram,0x00305964) */

void FUN_00305940(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x528);
  FUN_003051cc(iVar1 + 8);
  *(int *)(iVar1 + 0x60) = iVar1 + 0x74;
  return;
}
