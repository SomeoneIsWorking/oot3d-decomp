// OoT3D decomp @ 0025a824  name=FUN_0025a824  size=92

void FUN_0025a824(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0032d8e8(param_1,param_2,1,0,2,0,100);
  if (iVar1 != 0) {
    FUN_003666a0(param_2);
    *(undefined1 *)(DAT_0025a880 + param_2) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0025a884;
  }
  return;
}
