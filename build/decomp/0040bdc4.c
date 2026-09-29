// OoT3D decomp @ 0040bdc4  name=FUN_0040bdc4  size=64

void FUN_0040bdc4(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;

  if (param_3 == 0) {
    FUN_00305790(param_1 + 0x44);
  }
  else {
    FUN_003057a0(param_1 + 0x44,1);
  }
  if (param_2 == 0) {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 0xc;
  }
  *(undefined1 *)(param_1 + 0xf38) = uVar1;
  return;
}
