// OoT3D decomp @ 0027876c  name=FUN_0027876c  size=124

void FUN_0027876c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  switch(((uint)*(ushort *)(param_1 + 0x1c) << 0x15) >> 0x1d) {
  case 0:
  case 1:
  case 4:
    break;
  case 2:
  case 3:
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4),param_4,param_4);
  }
  FUN_00350f34(param_1,param_1 + 0x274,param_1 + 0x278,param_1 + 0x27c,0);
  return;
}
