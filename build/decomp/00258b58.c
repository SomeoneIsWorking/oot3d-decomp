// OoT3D decomp @ 00258b58  name=FUN_00258b58  size=68

void FUN_00258b58(int param_1)

{
  undefined2 uVar1;

  FUN_00370350(DAT_00258b9c,param_1 + 0x208,*(undefined4 *)(DAT_00258ba0 + 0x1c));
  if (*(int *)(param_1 + 0x1a4) == DAT_00258ba4) {
    uVar1 = (undefined2)DAT_00258ba8;
  }
  else {
    uVar1 = 2;
  }
  *(undefined2 *)(param_1 + 0x1aa) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00258bac;
  return;
}
