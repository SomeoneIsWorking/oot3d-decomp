// OoT3D decomp @ 0036c2e8  name=FUN_0036c2e8  size=392

undefined4 FUN_0036c2e8(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;

  uVar1 = DAT_0036c47c;
  pcVar5 = (char *)(*(int *)(DAT_0036c470 + param_2) +
                   (uint)(*(ushort *)(param_1 + 0x1c) >> 10) * 0x10);
  cVar2 = *(char *)(param_1 + 0x1c2);
  cVar3 = *pcVar5;
  iVar4 = DAT_0036c474 + (uint)*(byte *)(param_1 + 0x1c3) * 4;
  if (cVar2 != '\v') {
    if ((pcVar5[2] == cVar3) &&
       ((int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x92)) + 0x3fffU <=
        DAT_0036c478)) {
      cVar3 = -1;
    }
    if (*(char *)(param_1 + 3) == cVar3) {
      if (cVar2 == '\a') {
        cVar2 = '\x01';
      }
      else {
        if (cVar2 != '\x05') goto LAB_0036c390;
        cVar2 = '\x03';
      }
    }
    else if (cVar2 == '\0') {
LAB_0036c390:
      *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(iVar4 + 2);
      goto LAB_0036c458;
    }
  }
  *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(iVar4 + 3);
  if (cVar2 == '\x01') {
    iVar4 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = DAT_0036c480;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = uVar1;
      return 1;
    }
  }
  else {
    if (cVar2 == '\x02' || cVar2 == '\a') {
      iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x1d0) = DAT_0036c488;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1d0) = DAT_0036c484;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = uVar1;
      return 1;
    }
    if (cVar2 == '\x03') {
      *(undefined4 *)(param_1 + 0x1d0) = DAT_0036c48c;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      return 0;
    }
  }
LAB_0036c458:
  *(undefined4 *)(param_1 + 0x1d0) = DAT_0036c490;
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  return 0;
}
