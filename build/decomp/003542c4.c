// OoT3D decomp @ 003542c4  name=FUN_003542c4  size=144

void FUN_003542c4(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;

  iVar2 = 0xd2;
  do {
    *(undefined1 *)(*(int *)(param_1 + 0x918 + iVar2 * 4 + 0x418) + 0x6c) = 1;
    FUN_00307840(param_1 + 0x918,0,iVar2,0x1e);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xda);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = param_3;
  uVar1 = *(int *)(param_1 + 0x10) * 1000;
  iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_00354354 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  FUN_002fcf80(param_1,(iVar2 >> 4) - (iVar2 >> 0x1f),DAT_00354354,1);
  return;
}
