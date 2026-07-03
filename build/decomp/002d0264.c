// OoT3D decomp @ 002d0264  name=FUN_002d0264  size=176

void FUN_002d0264(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_002d031c;
  uVar2 = DAT_002d0318;
  iVar1 = DAT_002d0314;
  if (*(byte *)(DAT_002d0314 + 0x24) != param_1) {
    if (param_1 == 0) {
      if (*(char *)(DAT_002d0314 + 0x25) == '\0') {
        FUN_002f48d4(DAT_002d0318);
      }
      else {
        if (*(byte *)(DAT_002d0314 + 0x24) == 2) {
          *(undefined1 *)(DAT_002d0314 + 0x3e) = 1;
        }
        FUN_002cfe34(1);
      }
      *(undefined1 *)(iVar1 + 0x14) = 0;
      *(undefined1 *)(iVar1 + 0x3e) = 0;
    }
    else {
      *(undefined4 *)(DAT_002d0314 + 0xac) = *(undefined4 *)(DAT_002d0314 + 0xd8);
      *(undefined1 *)(iVar1 + 0x26) = 0xff;
      *(undefined1 *)(iVar1 + 0x27) = 0x57;
      *(undefined1 *)(iVar1 + 0x28) = 0;
      *(undefined1 *)(iVar1 + 0x29) = 0;
      *(undefined1 *)(iVar1 + 0x2a) = 0;
      *(undefined1 *)(iVar1 + 0x25) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 1;
      *(undefined1 *)(iVar1 + 0x3e) = 0;
      FUN_002f48d4(uVar3,uVar2);
    }
    *(char *)(iVar1 + 0x24) = (char)param_1;
  }
  return;
}

