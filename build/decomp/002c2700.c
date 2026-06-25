// OoT3D decomp @ 002c2700  name=FUN_002c2700  size=184

undefined4 FUN_002c2700(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0xf38);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar2 = *(char *)(DAT_002c27d8 + *(int *)(param_1 + 8));
  if (cVar2 == '\x1a') {
    return 7;
  }
  if (*(short *)(*(int *)(param_1 + 8) + 0x2b7e) == 3) {
    return 8;
  }
  if (cVar2 != '\x1f') {
    switch(cVar1) {
    case '\x05':
      return 10;
    case '\x06':
      if (*(int *)(param_1 + 0xfac) == -1) {
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
      goto switchD_002c2760_caseD_8;
    default:
      if ((cVar1 == '\x0e') && (*(int *)(param_1 + 0xfa4) < 2)) {
        return 2;
      }
switchD_002c2760_caseD_8:
      return 3;
    case '\v':
    case '\f':
      return 5;
    }
  }
  return 9;
}

