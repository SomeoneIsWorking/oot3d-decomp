// OoT3D decomp @ 0025ec00  name=FUN_0025ec00  size=88

void FUN_0025ec00(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x21b) != '\0') {
    *DAT_0025ec58 = 0;
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  FUN_00350f34(param_1,param_1 + 0x220,0);
  return;
}
