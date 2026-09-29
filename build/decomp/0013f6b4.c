// OoT3D decomp @ 0013f6b4  name=FUN_0013f6b4  size=92

void FUN_0013f6b4(int param_1,int param_2)

{
  if (*(short *)(param_2 + 0x2b7e) != 0xf) {
    FUN_0035a050(param_1,param_2,1);
    return;
  }
  *(undefined2 *)(param_2 + 0x2b7e) = 4;
  FUN_003725e0(param_2);
  FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0013f710;
  return;
}
