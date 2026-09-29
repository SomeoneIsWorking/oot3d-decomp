// OoT3D decomp @ 004571a8  name=FUN_004571a8  size=324

void FUN_004571a8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar3 = DAT_004572f0;
  iVar2 = DAT_004572ec;
  iVar5 = 0;
  do {
    iVar6 = iVar3 + iVar5 * DAT_004572f4 * 4;
    cVar1 = *(char *)(iVar6 + 4);
    if (cVar1 == '\x01') {
      iVar4 = (**(code **)(iVar2 + 0xc))(iVar6 + 8);
      if (iVar4 == 1) {
LAB_004571f8:
        *(undefined1 *)(iVar6 + 4) = 3;
      }
    }
    else {
      if (cVar1 == '\x02') goto LAB_004571f8;
      if (cVar1 == '\x03') {
        FUN_002da47c(param_1,iVar5);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x18);
  iVar5 = 0;
  do {
    iVar6 = iVar3 + iVar5 * 0x28c;
    cVar1 = *(char *)(iVar6 + 0x7fe4);
    if (cVar1 == '\x01') {
      iVar4 = (**(code **)(iVar2 + 0x20))(iVar6 + 0x7fe8);
      if (iVar4 == 1) {
LAB_00457260:
        *(undefined1 *)(iVar6 + 0x7fe4) = 3;
      }
    }
    else {
      if (cVar1 == '\x02') goto LAB_00457260;
      if (cVar1 == '\x03') {
        FUN_002da47c(param_1,iVar5 + 0x18);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x19);
  iVar5 = 0;
  do {
    iVar6 = iVar3 + iVar5 * 0x1e0;
    cVar1 = *(char *)(iVar6 + 0xbf90);
    if (cVar1 == '\x01') {
      iVar4 = (**(code **)(iVar2 + 0x48))(iVar6 + 0xbf94);
      if (iVar4 == 1) {
LAB_004572c4:
        *(undefined1 *)(iVar6 + 0xbf90) = 3;
      }
    }
    else {
      if (cVar1 == '\x02') goto LAB_004572c4;
      if (cVar1 == '\x03') {
        FUN_002da47c(param_1,iVar5 + 0x31);
      }
    }
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      return;
    }
  } while( true );
}
