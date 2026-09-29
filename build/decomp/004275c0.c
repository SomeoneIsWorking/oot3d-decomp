// OoT3D decomp @ 004275c0  name=FUN_004275c0  size=300

void FUN_004275c0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  do {
    iVar2 = param_1 + iVar4 * 0x1c;
    iVar2 = FUN_002fde08(*(int *)(iVar2 + 0x1124) + 0x2e0,1,*(int *)(iVar2 + 0x112c) + 3);
    if (iVar2 == 0) {
      return;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_002fda08(param_1 + 0x1120);
  FUN_002fda08(param_1 + 0x113c);
  FUN_002fda08(param_1 + 0x1174);
  if (*(char *)(param_1 + 9) == '\x02') {
    *(undefined1 *)(*(int *)(param_1 + 0xee0) + 0x6c) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xae0) + 0x6c) = 1;
    FUN_00307840(param_1 + 0x2e0,0,1,0x13,1);
    FUN_00307840(param_1 + 0x2e0,1,0xfa,0x10,1);
    FUN_00307840(param_1 + 0x2e0,0,0xfa,0x10,1);
    uVar1 = 0x10;
  }
  else {
    iVar4 = 0;
    do {
      iVar3 = param_1 + 0x2e0 + iVar4 * 4;
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar3 + 0x418);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x6c) = 0;
      }
      iVar2 = *(int *)(iVar3 + 0x818);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x6c) = 0;
      }
    } while (iVar4 < 0x100);
    uVar1 = 0x11;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}
