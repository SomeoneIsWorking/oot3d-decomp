// OoT3D decomp @ 00404674  name=FUN_00404674  size=180

void FUN_00404674(int param_1)

{
  ushort uVar1;

  FUN_00404310();
  uVar1 = *(ushort *)(DAT_00404728 + param_1);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x20a4) < *(int *)(param_1 + 0x20a0))) {
    *(int *)(param_1 + 0x20a4) = *(int *)(param_1 + 0x20a4) + 1;
  }
  if (((uVar1 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x20b4) < *(int *)(param_1 + 0x20b0))) {
    *(int *)(param_1 + 0x20b4) = *(int *)(param_1 + 0x20b4) + 1;
  }
  if (((uVar1 >> 2 & 1) != 0) && (*(int *)(param_1 + 0x20c4) < *(int *)(param_1 + 0x20c0))) {
    *(int *)(param_1 + 0x20c4) = *(int *)(param_1 + 0x20c4) + 1;
  }
  if (((int)((uint)(uVar1 >> 2) << 0x1e) < 0) &&
     (*(int *)(param_1 + 0x20d4) < *(int *)(param_1 + 0x20d0))) {
    *(int *)(param_1 + 0x20d4) = *(int *)(param_1 + 0x20d4) + 1;
  }
  return;
}
