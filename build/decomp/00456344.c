// OoT3D decomp @ 00456344  name=FUN_00456344  size=144

undefined4 FUN_00456344(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_002fb9c4();
  uVar1 = FUN_00303ea8(*(undefined4 *)(param_1 + 8));
  FUN_002ff8e0(param_1 + 0x74,uVar1,0);
  uVar1 = FUN_00303ea8(*(undefined4 *)(param_1 + 0xc));
  FUN_002ff8e0(param_1 + 200,uVar1,0);
  *(undefined4 *)(param_1 + 0x934) = 0xffffffff;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  uVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x928) = uVar2;
  *(undefined4 *)(param_1 + 0x92c) = uVar1;
  FUN_0046a49c(param_1);
  FUN_0046a2e4(param_1);
  *(undefined1 *)(param_1 + 4) = 1;
  return 1;
}
