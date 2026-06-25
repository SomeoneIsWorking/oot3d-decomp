// OoT3D decomp @ 00340bdc  name=FUN_00340bdc  size=288

void FUN_00340bdc(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  iVar1 = DAT_00340cfc;
  if (*(byte *)(param_1 + 0x2a90) == param_2) {
    return;
  }
  if (param_2 == 5) goto LAB_00340cf4;
  pcVar5 = (char *)(DAT_00340cfc + param_2 * 4);
  if (*(char *)(DAT_00340cfc + (uint)*(byte *)(param_1 + 0x2a90) * 4) == '\0') {
    if (*pcVar5 != '\0') {
      iVar4 = FUN_0043c1ec();
      if ((iVar4 == 0) || (iVar4 = FUN_0043c1ec(), iVar4 == 3)) {
        if (pcVar5[3] == '\0') {
          FUN_0032c570(0);
        }
        else {
          sVar3 = *(short *)(param_1 + 0x2b80);
          if (sVar3 != 1) {
            sVar3 = 0;
          }
          FUN_0032c570(sVar3);
        }
      }
      if (*(char *)(iVar1 + (uint)*(byte *)(param_1 + 0x2a90) * 4) != '\0') goto LAB_00340c84;
    }
  }
  else {
LAB_00340c84:
    if ((*pcVar5 == '\0') &&
       (cVar2 = *(char *)(param_1 + 0x2a90), (cVar2 != '\x1e' && cVar2 != '\x1f') && cVar2 != '\x1a'
       )) {
      cVar2 = *(char *)(param_1 + 0x2ba1);
      if (cVar2 != '\0') {
        cVar2 = '\x01';
      }
      FUN_004bdea4(cVar2);
    }
  }
  cVar2 = pcVar5[1];
  if (cVar2 != '\0') {
    cVar2 = '\x01';
  }
  FUN_0032c560(cVar2);
  cVar2 = pcVar5[2];
  if (cVar2 != '\0') {
    cVar2 = '\x01';
  }
  FUN_0032c550(cVar2);
  cVar2 = pcVar5[3];
  if (cVar2 != '\0') {
    cVar2 = '\x01';
  }
  FUN_0032c540(cVar2);
LAB_00340cf4:
  *(char *)(param_1 + 0x2a90) = (char)param_2;
  return;
}

