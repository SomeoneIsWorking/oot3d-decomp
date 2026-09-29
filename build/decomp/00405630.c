// OoT3D decomp @ 00405630  name=FUN_00405630  size=236

undefined4 FUN_00405630(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [72];

  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,auStack_60,0x40);
  if (iVar1 == 0x40) {
    FUN_0030a5ec(auStack_80);
    iVar1 = FUN_0040dfdc(auStack_80,auStack_60);
    if (iVar1 != 0) {
      iVar1 = FUN_0030a5b4(auStack_60);
      iVar2 = FUN_0040da24(auStack_60);
      uVar4 = iVar1 + iVar2;
      if (uVar4 <= param_3) {
        (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
        uVar3 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_2,uVar4);
        if (uVar3 == uVar4) {
          FUN_0040580c(param_1 + 1,param_2);
          return 1;
        }
      }
    }
  }
  return 0;
}
