// OoT3D decomp @ 001b37c0  name=FUN_001b37c0  size=656

void FUN_001b37c0(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  short local_20 [2];
  ushort local_1c [2];

  FUN_0037322c(DAT_001b3a64);
  if ((*(byte *)(param_1 + 0x202) & 0x10) == 0) {
    if ((*(byte *)(param_1 + 0x1b5) & 2) != 0) {
      *(byte *)(param_1 + 0x1b5) = *(byte *)(param_1 + 0x1b5) & 0xfd;
      FUN_00363f20(param_1 + 0x248,DAT_001b3a68);
      switch(*(undefined1 *)(param_1 + 0xb9)) {
      case 0xb:
        *(undefined1 *)(param_1 + 0x203) = 0;
        *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 1;
        FUN_003422e4(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001b3a7c;
        break;
      case 0xc:
        *(undefined1 *)(param_1 + 0x203) = 0;
        *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 2;
        FUN_003422e4(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001b3a78;
        break;
      case 0xd:
        *(undefined1 *)(param_1 + 0x203) = 0;
        *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 1;
        FUN_003422e4(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001b3a74;
        break;
      case 0xe:
        *(undefined1 *)(param_1 + 0x203) = 0;
        *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 1;
        FUN_003422e4(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001b3a70;
        break;
      case 0xf:
        *(undefined1 *)(param_1 + 0x203) = 0;
        *(byte *)(param_1 + 0x202) = *(byte *)(param_1 + 0x202) | 1;
        FUN_003422e4(param_1);
        *(undefined4 *)(param_1 + 0x1fc) = DAT_001b3a6c;
      }
    }
    FUN_0037632c(param_1,param_1 + 0x1a4);
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  }
  (**(code **)(param_1 + 0x1fc))(param_1,param_2);
  if (*(char *)(param_1 + 0x200) == '\x02') {
    cVar3 = '\x02';
    iVar2 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar2 == 6) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
      if (*(short *)(param_1 + 0x116) == 0x2054) {
        cVar3 = '\x01';
        *(ushort *)(param_1 + 0x116) = (*(ushort *)(param_1 + 0x1c) & 0xff) + 0x400;
      }
      else {
        cVar3 = '\0';
      }
    }
    *(char *)(param_1 + 0x200) = cVar3;
    if (cVar3 != '\x01') {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x200) != '\x01') {
    iVar2 = FUN_0036bc98(param_1,param_2);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x200) = 2;
      return;
    }
    FUN_00363a20(param_2,param_1,local_1c,local_20);
    if (400 < local_1c[0]) {
      return;
    }
    if (local_20[0] < 0) {
      return;
    }
    if (0xf0 < local_20[0]) {
      return;
    }
    if (*(char *)(param_1 + 0x200) == '\x03') {
      return;
    }
    iVar2 = FUN_0036bb28(DAT_001b3a80,param_1,param_2);
    if (iVar2 != 1) {
      return;
    }
    iVar2 = FUN_0036ef98(param_2);
    if (iVar2 == 8) {
      uVar1 = (undefined2)DAT_001b3a88;
    }
    else {
      uVar1 = (undefined2)DAT_001b3a84;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar1;
    return;
  }
  FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
  *(undefined1 *)(param_1 + 0x200) = 2;
  return;
}
