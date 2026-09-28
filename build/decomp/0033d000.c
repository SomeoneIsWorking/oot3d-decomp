// OoT3D decomp @ 0033d000  name=FUN_0033d000  size=300

void FUN_0033d000(int param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(param_1 + 0x918);
  if (iVar1 == iRam0033d12c) {
    uVar2 = *(byte *)(param_1 + 0x926) + 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    *(char *)(param_1 + 0x926) = (char)uVar2;
    iVar1 = *(byte *)(param_1 + 0x927) - 5;
    if (iVar1 < 0x32) {
      iVar1 = 0x32;
    }
    *(char *)(param_1 + 0x927) = (char)iVar1;
    uVar2 = *(byte *)(param_1 + 0x928) - 5;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
  }
  else if (iVar1 == iRam0033d130) {
    uVar2 = *(byte *)(param_1 + 0x926) + 5;
    if (0x50 < uVar2) {
      uVar2 = 0x50;
    }
    *(char *)(param_1 + 0x926) = (char)uVar2;
    uVar2 = *(byte *)(param_1 + 0x927) + 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    *(char *)(param_1 + 0x927) = (char)uVar2;
    uVar2 = *(byte *)(param_1 + 0x928) + 5;
    if (0xe1 < uVar2) {
      uVar2 = 0xe1;
    }
  }
  else if (iVar1 == iRam0033d134) {
    if ((*(ushort *)(iRam0033d138 + param_1) & 2) == 0) {
      *(undefined1 *)(param_1 + 0x926) = 0x50;
      *(undefined1 *)(param_1 + 0x927) = 0xff;
      uVar2 = 0xe1;
    }
    else {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x926) = 0;
      *(undefined1 *)(param_1 + 0x927) = 0;
    }
  }
  else {
    uVar2 = *(byte *)(param_1 + 0x926) + 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    *(char *)(param_1 + 0x926) = (char)uVar2;
    uVar2 = *(byte *)(param_1 + 0x927) + 5;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    *(char *)(param_1 + 0x927) = (char)uVar2;
    uVar2 = (uint)*(byte *)(param_1 + 0x928);
    if (uVar2 < 0xd3) {
      uVar2 = uVar2 + 5;
      if (uVar2 < 0xd3) goto LAB_0033d0cc;
    }
    else {
      uVar2 = uVar2 - 5;
      if (0xd1 < (int)uVar2) goto LAB_0033d0cc;
    }
    uVar2 = 0xd2;
  }
LAB_0033d0cc:
  *(char *)(param_1 + 0x928) = (char)uVar2;
  return;
}
