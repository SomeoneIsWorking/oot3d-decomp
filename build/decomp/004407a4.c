// OoT3D decomp @ 004407a4  name=FUN_004407a4  size=712

void FUN_004407a4(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  float fVar6;

  fVar3 = DAT_00440a9c;
  iVar2 = DAT_00440a98;
  iVar1 = DAT_00440a94;
  iVar5 = DAT_00440a90;
  switch((char)param_1[1]) {
  case '\x01':
    fVar6 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar6;
    if ((int)fVar6 < 0x3f800000) {
      if (fVar6 <= fVar3) {
        param_1[5] = iVar5;
      }
      return;
    }
    param_1[5] = iVar1;
    return;
  case '\x02':
    fVar6 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar6;
    if ((int)fVar6 < 0x3f800000) {
      if (fVar6 <= fVar3) {
        param_1[5] = iVar5;
      }
    }
    else {
      param_1[5] = iVar1;
    }
    iVar5 = param_1[0x11c];
    param_1[0x11c] = iVar5 + -1;
    if (iVar5 + -1 < 1) {
      param_1[0x11c] = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    break;
  case '\x03':
    fVar6 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar6;
    if ((int)fVar6 < 0x3f800000) {
      if (fVar6 <= fVar3) {
        param_1[5] = iVar5;
      }
    }
    else {
      param_1[5] = iVar1;
    }
    uVar4 = 8;
    param_1[0x11c] = 0;
LAB_00440a3c:
    *(undefined1 *)(param_1 + 1) = uVar4;
    return;
  case '\x04':
    fVar6 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar6;
    if ((int)fVar6 < 0x3f800000) {
      if (fVar6 <= fVar3) {
        param_1[5] = iVar2;
      }
    }
    else {
      param_1[5] = DAT_00440aa0;
    }
    iVar5 = param_1[0x11c];
    param_1[0x11c] = iVar5 + -1;
    if (iVar5 + -1 < 1) {
      *(undefined1 *)(param_1 + 1) = 5;
      param_1[0x11c] = 5;
      param_1[5] = (int)fVar3;
      return;
    }
    break;
  case '\x05':
    iVar5 = param_1[0x11c];
    param_1[0x11c] = iVar5 + -1;
    if (iVar5 + -1 < 1) {
      param_1[0x51] = (int)fVar3;
      *(undefined1 *)(param_1 + 1) = 7;
      param_1[0x11c] = 0xf;
      return;
    }
    break;
  case '\a':
    iVar5 = param_1[0x11c];
    param_1[0x11c] = iVar5 + -1;
    if (iVar5 + -1 < 1) {
      uVar4 = 9;
      goto LAB_00440a3c;
    }
    break;
  case '\b':
    fVar6 = (float)param_1[0x51] + (float)param_1[5];
    param_1[0x51] = (int)fVar6;
    if ((int)fVar6 < 0x3f800000) {
      if (fVar6 <= fVar3) {
        param_1[5] = iVar5;
      }
    }
    else {
      param_1[5] = iVar1;
    }
    if (*(char *)((int)param_1 + 7) != '\0') {
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        iVar5 = FUN_0033f428(0,0,0x140,0xf0,1);
        *(bool *)((int)param_1 + 0xe) = iVar5 != 0;
      }
      else {
        iVar5 = FUN_003063a0();
        if (iVar5 != 0) {
          iVar5 = FUN_0033f428(0,0,0x140,0xf0,2);
          if (iVar5 == 0) {
            *(undefined1 *)((int)param_1 + 0xe) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 2) = 1;
            *(undefined1 *)(param_1 + 1) = 4;
            param_1[0x11c] = 0xf;
            param_1[5] = iVar2;
            param_1[0x51] = (int)fVar3;
          }
        }
      }
      iVar5 = FUN_002f43e8();
      if ((iVar5 == 0) && ((*(uint *)(*param_1 + 0x18) & 9) != 0)) {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)(param_1 + 1) = 4;
        param_1[0x11c] = 0xf;
        param_1[5] = iVar2;
        param_1[0x51] = (int)fVar3;
        return;
      }
    }
  }
  return;
}
