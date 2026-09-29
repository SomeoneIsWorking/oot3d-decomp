// OoT3D decomp @ 0039c068  name=FUN_0039c068  size=228

void FUN_0039c068(int param_1)

{
  ushort uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if (uVar1 == 2) {
    local_48 = DAT_0039c158;
    local_44 = DAT_0039c15c;
    local_40 = DAT_0039c160;
    FUN_00372070(auStack_3c,auStack_3c,&local_48);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1d8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1d8),auStack_3c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1d8),0);
      return;
    }
  }
  else if (uVar1 == 3) {
    local_48 = DAT_0039c14c;
    local_44 = DAT_0039c150;
    local_40 = DAT_0039c154;
    FUN_00372070(auStack_3c,auStack_3c,&local_48);
    if (*(int *)(param_1 + 0x1dc) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),auStack_3c);
      FUN_00372170(*(undefined4 *)(param_1 + 0x1dc),0);
    }
  }
  return;
}
