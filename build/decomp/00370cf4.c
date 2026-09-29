// OoT3D decomp @ 00370cf4  name=FUN_00370cf4  size=108

void FUN_00370cf4(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;

  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_00370f5c(param_2,param_1 + 0x484,param_1 + 0x4a8,0x12);
  }
  else if ((*(short *)(param_1 + 0x450) == 0) && (*(char *)(param_1 + 0x47b) != '\a')) {
    *(undefined1 *)(param_1 + 0x47b) = 7;
    *(undefined1 *)(param_1 + 0x47a) = 0;
  }
  if (*(short *)(param_1 + 0x450) == 0) {
    if (*(int *)(param_1 + 0x1d4) == 0) goto LAB_00370f24;
    FUN_003717ac(param_1 + 0x1a4,DAT_00370f38,10);
    *(undefined1 *)(param_1 + 0x47b) = 0;
    goto LAB_00370ef4;
  }
  uVar3 = (uint)*(ushort *)(DAT_00370f30 + param_1);
  iVar4 = uVar3 - DAT_00370f34;
  if (uVar3 == DAT_00370f34) {
LAB_00370ed8:
    if (*(char *)(param_1 + 0x478) != '\0') goto LAB_00370f24;
    cVar1 = *(char *)(param_1 + 0x47b);
joined_r0x00370eec:
    if (cVar1 == '\x01') goto LAB_00370f24;
    *(undefined1 *)(param_1 + 0x47b) = 1;
  }
  else if ((int)uVar3 < (int)DAT_00370f34) {
    if (uVar3 == 0x102f) {
      cVar1 = *(char *)(param_1 + 0x478);
      if (cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0x47b);
        goto joined_r0x00370eec;
      }
      if (cVar1 == '\x02') {
        cVar1 = *(char *)(param_1 + 0x47b);
joined_r0x00370e40:
        if (cVar1 == '\x02') goto LAB_00370f24;
        *(undefined1 *)(param_1 + 0x47b) = 2;
      }
      else {
        if (cVar1 != '\x05') {
          if ((cVar1 == '\v') && (*(char *)(param_1 + 0x47b) != '\t')) {
            *(undefined1 *)(param_1 + 0x47b) = 9;
            *(undefined1 *)(param_1 + 0x47a) = 0;
          }
          goto LAB_00370f24;
        }
        if (*(char *)(param_1 + 0x47b) == '\b') goto LAB_00370f24;
        *(undefined1 *)(param_1 + 0x47b) = 8;
      }
    }
    else {
      if (uVar3 == 0x1030) goto LAB_00370ed8;
      if (uVar3 != 0x1033) goto LAB_00370f24;
      cVar1 = *(char *)(param_1 + 0x478);
      if (cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0x47b);
        goto joined_r0x00370eec;
      }
      if (cVar1 == '\x01') {
        cVar1 = *(char *)(param_1 + 0x47b);
        goto joined_r0x00370e40;
      }
      if (cVar1 == '\x05') {
        if (*(char *)(param_1 + 0x47b) == '\n') goto LAB_00370f24;
        uVar2 = 10;
        goto LAB_00370e0c;
      }
      if ((cVar1 != '\a') || (*(char *)(param_1 + 0x47b) == '\t')) goto LAB_00370f24;
      *(undefined1 *)(param_1 + 0x47b) = 9;
    }
  }
  else {
    if (iVar4 == 0x11) goto LAB_00370ed8;
    if (iVar4 == 0x12) {
      uVar3 = (uint)*(byte *)(param_1 + 0x478);
    }
    if ((iVar4 != 0x12 || uVar3 != 0) || (*(char *)(param_1 + 0x47b) == '\x06')) goto LAB_00370f24;
    uVar2 = 6;
LAB_00370e0c:
    *(undefined1 *)(param_1 + 0x47b) = uVar2;
  }
LAB_00370ef4:
  *(undefined1 *)(param_1 + 0x47a) = 0;
LAB_00370f24:
  FUN_00370818(param_1);
  return;
}
