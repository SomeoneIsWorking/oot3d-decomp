// OoT3D decomp @ 0049f2e0  name=FUN_0049f2e0  size=156

undefined4 FUN_0049f2e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;

  piVar1 = (int *)(DAT_0049f37c + 0x50);
  *(int *)(DAT_0049f37c + 0x4c) = *piVar1;
  if ((*piVar1 == 0) && (iVar2 = FUN_0036b4ec(param_1 + 0x1764,param_2), iVar2 == 0)) {
    return 1;
  }
  FUN_0035d27c(param_1,*(undefined4 *)(DAT_0049f384 + *(char *)(DAT_0049f380 + param_1) * 4));
  FUN_00359aa0(param_1 + 0x1764,param_2,
               *(undefined4 *)(DAT_0049f388 + (uint)*(byte *)(param_1 + 0x1b3) * 4));
  *(undefined1 *)(DAT_0049f38c + param_1) = 0;
  (**(code **)(DAT_0049f390 + param_1))(param_1,param_2);
  return 0;
}
