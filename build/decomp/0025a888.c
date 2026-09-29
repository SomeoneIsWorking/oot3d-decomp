// OoT3D decomp @ 0025a888  name=FUN_0025a888  size=84

void FUN_0025a888(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0032d8e8(param_1,param_2,1,0,2,0,0x3c);
  if (iVar1 != 0) {
    *(undefined1 *)(DAT_0025a8dc + param_2) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0025a8e0;
  }
  return;
}
