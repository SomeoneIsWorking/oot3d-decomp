// OoT3D decomp @ 00287224  name=FUN_00287224  size=68

void FUN_00287224(int param_1,int param_2)

{
  if ((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x10) < 0) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
    return;
  }
  FUN_003508b8(param_1,*(int *)(param_1 + 0x1d0),0);
  return;
}
