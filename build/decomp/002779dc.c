// OoT3D decomp @ 002779dc  name=FUN_002779dc  size=80

void FUN_002779dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;

  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (uVar1 != 2 && uVar1 != 3) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4),param_4,param_4);
  }
  FUN_00350f34(param_1,param_1 + 0x1d4,param_1 + 0x1d8,param_1 + 0x1dc,0);
  return;
}
