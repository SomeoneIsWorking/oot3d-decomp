// OoT3D decomp @ 0047dd44  name=FUN_0047dd44  size=24

bool FUN_0047dd44(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
  }
  return param_2 != 0;
}
