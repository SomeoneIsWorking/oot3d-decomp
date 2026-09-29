// OoT3D decomp @ 0043c590  name=FUN_0043c590  size=236

void FUN_0043c590(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar1,6,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined1 *)(param_1 + 0x1139) = 0;
  iVar1 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar1,6,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined1 *)(param_1 + 0x1155) = 0;
  iVar1 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x115c) + 0x2e0,1,*(int *)(param_1 + 0x1164) + iVar1,4,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined1 *)(param_1 + 0x1171) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 5;
  return;
}
