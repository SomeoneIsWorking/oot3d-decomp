// OoT3D decomp @ 00271d70  name=FUN_00271d70  size=68

undefined4 FUN_00271d70(int param_1,int param_2)

{
  undefined4 uVar1;

  if ((((*(uint *)(param_1 + 4) & 0x100) == 0) ||
      ((*(uint *)(*(int *)(param_2 + 0x20ac) + 0x1710) & 0x40) == 0)) ||
     (*(int *)(*(int *)(param_2 + 0x20ac) + 0x172c) != param_1)) {
    uVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
    uVar1 = 1;
  }
  return uVar1;
}
