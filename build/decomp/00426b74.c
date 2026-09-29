// OoT3D decomp @ 00426b74  name=FUN_00426b74  size=268

void FUN_00426b74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = FUN_002fde08(param_1 + 0x2e0,1,0xf,param_4,param_4);
  if (iVar1 != 0) {
    FUN_002f4fac(param_1,0xcb);
    iVar1 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar1,5,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    FUN_00307770(param_1 + 0x1120);
    *(undefined1 *)(param_1 + 0x1139) = 0;
    iVar1 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar1,5,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    FUN_00307770(param_1 + 0x113c);
    *(undefined1 *)(param_1 + 0x1155) = 0;
    FUN_00344670(*(undefined4 *)(param_1 + 0xb68),0x26);
    FUN_00344670(*(undefined4 *)(param_1 + 0xb7c),0x27);
    FUN_002fda08(param_1 + 0x1158);
    if (*(int *)(param_1 + 0x10) != -1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 8) = 9;
  }
  return;
}
