// OoT3D decomp @ 00258c08  name=FUN_00258c08  size=68

void FUN_00258c08(int param_1)

{
  undefined2 uVar1;

  FUN_00370350(DAT_00258c4c,param_1 + 0x204,*(undefined4 *)(DAT_00258c50 + 0x14));
  if (*(int *)(param_1 + 0x1a4) == DAT_00258c54) {
    uVar1 = (undefined2)DAT_00258c58;
  }
  else {
    uVar1 = 2;
  }
  *(undefined2 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00258c5c;
  return;
}
