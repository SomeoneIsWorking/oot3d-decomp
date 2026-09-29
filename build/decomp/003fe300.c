// OoT3D decomp @ 003fe300  name=FUN_003fe300  size=64

void FUN_003fe300(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(char *)(param_1 + 0x76) != '\0') {
    FUN_0030f900();
    return;
  }
  FUN_0030f6b0(param_2,*(undefined1 *)(param_1 + 0x75),param_3,param_4,param_5);
  return;
}
