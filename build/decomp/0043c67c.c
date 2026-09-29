// OoT3D decomp @ 0043c67c  name=FUN_0043c67c  size=340

void FUN_0043c67c(int param_1)

{
  undefined1 uVar1;
  int iVar2;

  iVar2 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar2,6,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  *(undefined1 *)(param_1 + 0x1139) = 0;
  iVar2 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar2,6,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  *(undefined1 *)(param_1 + 0x1155) = 0;
  iVar2 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1178) + 0x2e0,1,*(int *)(param_1 + 0x1180) + iVar2,4,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x118d) = 0;
  do {
    FUN_00307840(param_1 + 0x2e0,1,iVar2 + 5,0x15,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 9);
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  if (*(char *)(param_1 + 8) == '\n') {
    FUN_003655d0(0,0x1e);
  }
  else {
    FUN_002f87ec(5);
  }
  *(undefined1 *)(param_1 + 9) = 1;
  if (*(char *)(param_1 + 8) == '\n') {
    uVar1 = 0xb;
  }
  else {
    uVar1 = 0xf;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}
