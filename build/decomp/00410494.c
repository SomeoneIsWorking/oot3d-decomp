// OoT3D decomp @ 00410494  name=FUN_00410494  size=68

undefined4 FUN_00410494(int *param_1,int param_2)

{
  int iVar1;

  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((iVar1 != 0) && (*(int *)(param_2 + 0xc) == param_1[3])) {
    return 1;
  }
  return 0;
}
