// OoT3D decomp @ 00309ee4  name=FUN_00309ee4  size=24

void FUN_00309ee4(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_2 + 0xf4) = param_1;
  *(undefined4 *)(param_2 + 0xfc) = param_3;
  *(undefined1 *)(param_2 + 200) = param_4;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  return;
}
