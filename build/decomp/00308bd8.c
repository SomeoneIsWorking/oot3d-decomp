// OoT3D decomp @ 00308bd8  name=FUN_00308bd8  size=40

void FUN_00308bd8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  FUN_004a0640(*(undefined4 *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  return;
}
