// OoT3D decomp @ 0048ac60  name=FUN_0048ac60  size=56

void FUN_0048ac60(undefined4 param_1,uint param_2,int param_3)

{
  if (1 < param_2) {
    if (param_2 == 2 || param_2 == 3) {
      *(undefined4 *)(param_3 + 0x30) = 0;
    }
    return;
  }
  FUN_0030a40c();
  *(undefined4 *)(param_3 + 0x30) = 0;
  return;
}
