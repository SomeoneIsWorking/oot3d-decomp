// OoT3D decomp @ 002992dc  name=FUN_002992dc  size=100

void FUN_002992dc(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c4) != 0x762) {
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + -1;
    FUN_0036d940(param_1);
    if (*(int *)(param_1 + 0x1c0) == 0) {
      FUN_00375bcc(param_1,DAT_00299340);
      FUN_0036beac(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00299344;
    }
  }
  return;
}
