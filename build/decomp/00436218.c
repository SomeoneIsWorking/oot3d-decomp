// OoT3D decomp @ 00436218  name=FUN_00436218  size=16

undefined2 FUN_00436218(int param_1,undefined2 param_2)

{
  undefined2 uVar1;

  uVar1 = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x34) = param_2;
  return uVar1;
}
