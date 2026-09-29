// OoT3D decomp @ 00215ec8  name=FUN_00215ec8  size=224

void FUN_00215ec8(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;

  uVar1 = *(ushort *)(param_1 + 0x1c);
  bVar2 = (uVar1 & 7) != 0;
  if (bVar2) {
    uVar1 = uVar1 & 7;
  }
  if (!bVar2 || uVar1 == 1) {
    FUN_00351034(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
  }
  uVar1 = *(ushort *)(param_1 + 0x1c) & 7;
  if (uVar1 == 1 || uVar1 == 2) {
    FUN_0034f6e8(param_2,param_1 + 0x1d8);
  }
  else if (uVar1 == 3 || uVar1 == 4) {
    FUN_00350b88(param_2,param_1 + 0x1d8);
  }
  FUN_003685a0(param_1 + 0x2c4);
  FUN_003685a0(param_1 + 0x35c);
  FUN_003685a0(param_1 + 0x3f4);
  FUN_003685a0(param_1 + 0x48c);
  FUN_003685a0(param_1 + 0x524);
  FUN_00350f34(param_1,param_1 + 0x2b0,param_1 + 0x2b4,param_1 + 0x2b8,param_1 + 700,param_1 + 0x2c0
               ,0);
  return;
}
