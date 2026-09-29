// OoT3D decomp @ 00311ee0  name=FUN_00311ee0  size=44

void FUN_00311ee0(int param_1,int param_2)

{
  bool bVar1;

  bVar1 = param_1 == 0x400;
  if (!bVar1) {
    param_2 = param_1 + -0x401;
    bVar1 = param_2 == 0;
  }
  if (bVar1) {
    param_1 = param_1 + -0x400;
  }
  else {
    if (param_2 != 0xf) {
      return;
    }
    param_1 = 2;
  }
  *(int *)(DAT_00311f0c + 0x124) = param_1;
  return;
}
