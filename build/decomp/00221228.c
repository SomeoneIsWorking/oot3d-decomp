// OoT3D decomp @ 00221228  name=FUN_00221228  size=72

void FUN_00221228(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x1c2) != '\0') {
    *DAT_00221270 = 0;
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  FUN_00350f34(param_1,param_1 + 0x1c4,0);
  return;
}
