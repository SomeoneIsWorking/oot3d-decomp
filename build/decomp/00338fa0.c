// OoT3D decomp @ 00338fa0  name=FUN_00338fa0  size=352

void FUN_00338fa0(int param_1)

{
  uint uVar1;
  uint uVar2;

  if (*(int *)(param_1 + 0x2cc) < 0) {
    uVar2 = *(byte *)(param_1 + 0x2fa) & 0xfe;
    if (*(int *)(param_1 + uVar2 * 4 + 0x2a4) == 0) {
      uVar1 = uVar2 + 2 & 0xff;
      if (uVar2 < 4) {
        if (3 < uVar1) {
          uVar1 = 0;
        }
        if (uVar1 == uVar2) {
          return;
        }
        while (*(int *)(param_1 + uVar1 * 4 + 0x2a4) == 0) {
          uVar1 = uVar1 + 2 & 0xff;
          if (3 < uVar1) {
            uVar1 = 0;
          }
          if (uVar1 == uVar2) {
            return;
          }
        }
      }
      else {
        if (7 < uVar1) {
          uVar1 = 4;
        }
        if (uVar1 == uVar2) {
          return;
        }
        while (*(int *)(param_1 + uVar1 * 4 + 0x2a4) == 0) {
          uVar1 = uVar1 + 2 & 0xff;
          if (7 < uVar1) {
            uVar1 = 4;
          }
          if (uVar1 == uVar2) {
            return;
          }
        }
      }
LAB_003390dc:
      *(char *)(param_1 + 0x2fa) = (char)uVar1;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2cc) < 1) {
      return;
    }
    uVar2 = *(byte *)(param_1 + 0x2fa) | 1;
    if (*(int *)(param_1 + uVar2 * 4 + 0x2a4) == 0) {
      uVar1 = uVar2 + 2 & 0xff;
      if (uVar2 < 4) {
        if (3 < uVar1) {
          uVar1 = 1;
        }
        if (uVar1 == uVar2) {
          return;
        }
        while (*(int *)(param_1 + uVar1 * 4 + 0x2a4) == 0) {
          uVar1 = uVar1 + 2 & 0xff;
          if (3 < uVar1) {
            uVar1 = 1;
          }
          if (uVar1 == uVar2) {
            return;
          }
        }
      }
      else {
        if (7 < uVar1) {
          uVar1 = 5;
        }
        if (uVar1 == uVar2) {
          return;
        }
        while (*(int *)(param_1 + uVar1 * 4 + 0x2a4) == 0) {
          uVar1 = uVar1 + 2 & 0xff;
          if (7 < uVar1) {
            uVar1 = 5;
          }
          if (uVar1 == uVar2) {
            return;
          }
        }
      }
      goto LAB_003390dc;
    }
  }
  *(char *)(param_1 + 0x2fa) = (char)uVar2;
  return;
}
