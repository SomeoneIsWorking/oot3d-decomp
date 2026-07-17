// OoT3D decomp @ 003769d8  name=FUN_003769d8  size=216

undefined4 FUN_003769d8(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (((*puRam00376a24 & 1) == 0) && (iVar4 = func_0x003679b4(puRam00376a24), iVar4 != 0)) {
    func_0x0036788c(uRam00376a28);
  }
  cVar1 = *(char *)(iRam00376a34 + 0xf38);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar2 = *(char *)(iRam002c27d8 + *(int *)(iRam00376a34 + 8));
  if (cVar2 == '\x1a') {
    return 7;
  }
  if (*(short *)(*(int *)(iRam00376a34 + 8) + 0x2b7e) != 3) {
    if (cVar2 == '\x1f') {
      return 9;
    }
    switch(cVar1) {
    case '\x05':
      return 10;
    case '\x06':
      if (*(int *)(iRam00376a34 + 0xfac) == -1) {
        uVar3 = 6;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    case '\a':
      return 4;
    case '\b':
    case '\t':
      goto LAB_002c27d0;
    default:
      if ((cVar1 == '\x0e') && (*(int *)(iRam00376a34 + 0xfa4) < 2)) {
        return 2;
      }
LAB_002c27d0:
      return 3;
    case '\v':
    case '\f':
      return 5;
    }
  }
  return 8;
}

