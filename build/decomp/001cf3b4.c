// OoT3D decomp @ 001cf3b4  name=FUN_001cf3b4  size=400

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001cf3b4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;

  if (*(byte *)(param_1 + 0x2a90) - 9 < 0x2b) {
    return;
  }
  *(undefined2 *)(DAT_001cf544 + param_1) = 1;
  iVar3 = DAT_00340cfc;
  iVar4 = DAT_001cf548;
  uVar2 = (uint)*(ushort *)(param_1 + 0x2b80);
  if (uVar2 == 0x2a) {
    uVar2 = 0x21;
  }
  else {
    if (uVar2 == 0x2b) {
      FUN_003523dc(1);
      FUN_003523dc(1);
      iVar3 = FUN_0033f400();
      *(int *)(param_1 + 0x2a80) = iVar3;
      *(undefined2 *)(iVar4 + 4) = 0;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined1 *)(iVar3 + 2) = 0;
      FUN_0033f2d8();
      *(undefined1 *)(param_1 + 0x2b73) = 5;
      FUN_00340bdc(param_1,0x23);
      FUN_0033f248(0xf,1);
      return;
    }
    if (uVar2 == 0x2c) {
      uVar2 = 0x24;
    }
    else {
      if (uVar2 == 0x2d) {
        FUN_003523dc(1);
        FUN_003523dc(1);
        iVar3 = FUN_0033f400();
        *(int *)(param_1 + 0x2a80) = iVar3;
        *(undefined2 *)(iVar4 + 4) = 0;
        *(undefined2 *)(iVar4 + 2) = 0;
        *(undefined1 *)(iVar3 + 2) = 0;
        FUN_0033f2d8();
        *(undefined1 *)(param_1 + 0x2b73) = 5;
        FUN_00340bdc(param_1,0x28);
        FUN_0033f248(0xd,1);
        return;
      }
      if (uVar2 == 0x2e) {
        uVar2 = 0x29;
      }
      else if (uVar2 == 0x2f) {
        uVar2 = 0x31;
      }
      else if (uVar2 < 2 || 0x21 < uVar2) {
        uVar2 = 9;
      }
      else {
        if (0xb < uVar2 - 2) {
          FUN_00340bdc(param_1,0xb);
          return;
        }
        uVar2 = 10;
      }
    }
  }
  if (*(byte *)(param_1 + 0x2a90) == uVar2) {
    return;
  }
  if (uVar2 == 5) goto LAB_00340cf4;
  pcVar5 = (char *)(DAT_00340cfc + uVar2 * 4);
  if (*(char *)(DAT_00340cfc + (uint)*(byte *)(param_1 + 0x2a90) * 4) == '\0') {
    if (*pcVar5 != '\0') {
      iVar4 = FUN_0043c1ec();
      if ((iVar4 == 0) || (iVar4 = FUN_0043c1ec(), iVar4 == 3)) {
        if (pcVar5[3] == '\0') {
          FUN_0032c570(0);
        }
        else {
          FUN_0032c570(*(short *)(param_1 + 0x2b80) == 1);
        }
      }
      if (*(char *)(iVar3 + (uint)*(byte *)(param_1 + 0x2a90) * 4) != '\0') goto LAB_00340c84;
    }
  }
  else {
LAB_00340c84:
    if ((*pcVar5 == '\0') &&
       (cVar1 = *(char *)(param_1 + 0x2a90), (cVar1 != '\x1e' && cVar1 != '\x1f') && cVar1 != '\x1a'
       )) {
      FUN_004bdea4(*(char *)(param_1 + 0x2ba1) != '\0');
    }
  }
  FUN_0032c560(pcVar5[1] != '\0');
  FUN_0032c550(pcVar5[2] != '\0');
  FUN_0032c540(pcVar5[3] != '\0');
LAB_00340cf4:
  *(char *)(param_1 + 0x2a90) = (char)uVar2;
  return;
}
