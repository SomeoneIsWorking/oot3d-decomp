// OoT3D decomp @ 0044a788  name=FUN_0044a788  size=68

void FUN_0044a788(char *param_1)

{
  bool bVar1;
  char *pcVar2;

  if (*param_1 == '\0') {
    pcVar2 = param_1 + 0x30;
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar2);
    } while (!bVar1);
    pcVar2[0] = '\x01';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    *param_1 = '\x01';
    return;
  }
  return;
}
