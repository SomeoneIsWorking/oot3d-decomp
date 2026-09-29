// OoT3D decomp @ 00404008  name=FUN_00404008  size=268

void FUN_00404008(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      FUN_0030b4ac(*(int *)(param_1 + 0x24) + uVar3 * 0x48,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x20));
  }
  uVar1 = FUN_0030c550();
  uVar2 = FUN_0030c0dc(uVar1,1);
  FUN_0030c074(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_004066ec(param_1 + 0x80);
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0030d538(param_1 + 0x34,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38);
    FUN_0030d538(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2c),param_1 + 0x2c);
    FUN_00309e1c(param_1 + 0x74,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0xa0));
    FUN_0030d538(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x50),param_1 + 0x50);
    FUN_0030d538(param_1 + 0x40,*(undefined4 *)(param_1 + 0x44),param_1 + 0x44);
    FUN_0030d538(param_1 + 100,*(undefined4 *)(param_1 + 0x68),param_1 + 0x68);
    FUN_0030d538(param_1 + 0x58,*(undefined4 *)(param_1 + 0x5c),param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}
