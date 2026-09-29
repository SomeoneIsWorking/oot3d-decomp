// OoT3D decomp @ 003ffcf8  name=FUN_003ffcf8  size=100

undefined4 FUN_003ffcf8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_20;

  uVar1 = param_2[2];
  if (0x200 < uVar1) {
    return DAT_003ffd5c;
  }
  uVar4 = param_2[1];
  uVar5 = *param_2;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  local_20 = FUN_0030e680();
  uVar2 = FUN_004001a8(&local_20,0,uVar2,uVar3,uVar5,uVar4,uVar1);
  return uVar2;
}
