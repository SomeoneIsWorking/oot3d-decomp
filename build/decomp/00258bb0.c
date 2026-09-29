// OoT3D decomp @ 00258bb0  name=FUN_00258bb0  size=68

void FUN_00258bb0(int param_1)

{
  undefined2 uVar1;

  FUN_00370350(DAT_00258bf4,param_1 + 0x5b0,*(undefined4 *)(DAT_00258bf8 + 0x18));
  if (*(int *)(param_1 + 0x1a4) == DAT_00258bfc) {
    uVar1 = (undefined2)DAT_00258c00;
  }
  else {
    uVar1 = 3;
  }
  *(undefined2 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00258c04;
  return;
}
