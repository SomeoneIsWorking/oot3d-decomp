// OoT3D decomp @ 0023f898  name=FUN_0023f898  size=136

void FUN_0023f898(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_003532e8(param_1,0,param_3,param_4,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar1 = FUN_00353fd4(param_1,param_2,2);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  uVar1 = DAT_0023f920;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1bc) = DAT_0023f924;
  return;
}
