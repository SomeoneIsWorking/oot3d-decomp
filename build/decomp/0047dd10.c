// OoT3D decomp @ 0047dd10  name=FUN_0047dd10  size=24

bool FUN_0047dd10(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
  }
  return param_2 != 0;
}
