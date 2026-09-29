// OoT3D decomp @ 002dd628  name=FUN_002dd628  size=168

void FUN_002dd628(int param_1,int param_2,int param_3,short *param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_50 [48];

  if (param_3 == 1) {
    FUN_00372070(param_2,*(int *)(param_1 + 0x14) + *param_4 * 0x30,param_5);
    return;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      FUN_00372070(auStack_50,*(int *)(param_1 + 8) + param_4[iVar1] * 0x30,param_5);
      FUN_0036c174(param_2 + iVar1 * 0x30,*(int *)(param_1 + 0x14) + param_4[iVar1] * 0x30,
                   auStack_50);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}
