// OoT3D decomp @ 0041ef94  name=FUN_0041ef94  size=140

void FUN_0041ef94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_194 [384];

  FUN_00371738(auStack_194,DAT_0041f020,0x180);
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_00301260();
      FUN_0031b99c(*(undefined4 *)(iVar3 + 8));
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  iVar2 = 0;
  do {
    uVar1 = FUN_00301300(auStack_194 + iVar2 * 0x40,0,0);
    iVar3 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_1 + iVar3 + 8) = uVar1;
  } while (iVar2 < 6);
  return;
}
