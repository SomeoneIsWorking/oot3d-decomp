// OoT3D decomp @ 00470768  name=FUN_00470768  size=200

void FUN_00470768(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00470834;
  iVar1 = DAT_00470830;
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * DAT_00470838 * 4;
    if (*(char *)(iVar3 + 4) == '\x01') {
      (**(code **)(iVar2 + 0x10))(iVar3 + 8,param_1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * 0x28c;
    if (*(char *)(DAT_0047083c + iVar3) == '\x01') {
      (**(code **)(iVar2 + 0x24))(iVar3 + 0x7fe8,param_1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x19);
  iVar4 = 0;
  do {
    iVar3 = iVar1 + iVar4 * 0x1e0;
    if (*(char *)(DAT_00470840 + iVar3) == '\x01') {
      (**(code **)(iVar2 + 0x4c))(iVar3 + 0xbf94,param_1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return;
}

