// OoT3D decomp @ 0029a69c  name=FUN_0029a69c  size=96

void FUN_0029a69c(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 1) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  FUN_00350f34(param_1,param_1 + 0x1c8,0);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_00350f34(param_1,param_1 + 0x1cc,0);
    return;
  }
  return;
}
