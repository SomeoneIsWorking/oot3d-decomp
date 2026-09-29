// OoT3D decomp @ 0045fce8  name=FUN_0045fce8  size=164

void FUN_0045fce8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = DAT_0045fd90;
  iVar1 = DAT_0045fd8c;
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * DAT_0045fd94 * 4;
    *(undefined1 *)(iVar3 + 4) = 0;
    (**(code **)(iVar2 + 8))(iVar3 + 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * 0x28c;
    *(undefined1 *)(DAT_0045fd98 + iVar3) = 0;
    (**(code **)(iVar2 + 0x1c))(iVar3 + 0x7fe8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * 0x1e0;
    *(undefined1 *)(DAT_0045fd9c + iVar3) = 0;
    (**(code **)(iVar2 + 0x44))(iVar3 + 0xbf94);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return;
}
