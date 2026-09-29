// OoT3D decomp @ 002dd5d4  name=FUN_002dd5d4  size=84

void FUN_002dd5d4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;

  iVar1 = 0;
  if (0 < param_3) {
    do {
      FUN_00372070(param_2 + iVar1 * 0x30,
                   *(int *)(param_1 + 0x14) + *(short *)(param_4 + iVar1 * 2) * 0x30,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}
