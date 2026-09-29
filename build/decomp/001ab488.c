// OoT3D decomp @ 001ab488  name=FUN_001ab488  size=104

void FUN_001ab488(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x1c) == 1 || *(short *)(param_1 + 0x1c) == 2) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  FUN_00350f34(param_1,param_1 + 0x200,param_1 + 0x204,param_1 + 0x208,param_1 + 0x20c,
               param_1 + 0x210,param_1 + 0x214,param_1 + 0x218,0);
  return;
}
