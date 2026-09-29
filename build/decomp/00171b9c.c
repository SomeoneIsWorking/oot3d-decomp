// OoT3D decomp @ 00171b9c  name=FUN_00171b9c  size=760

undefined4 FUN_00171b9c(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar3 = FUN_003769d8(param_1 + 0x28a0);
  iVar4 = DAT_00171e94;
  if (iVar3 == 2) {
    uVar5 = (uint)*(ushort *)(param_2 + 0x116);
    iVar4 = uVar5 - DAT_00171e98;
    if (uVar5 == DAT_00171e98) {
      *(ushort *)(DAT_00171e94 + 0x1c) = *(ushort *)(DAT_00171e94 + 0x1c) | 2;
      return 0;
    }
    if ((int)DAT_00171e98 < (int)uVar5) {
      if (iVar4 == 10) {
        uVar1 = *(ushort *)(DAT_00171e94 + 0x18) | 0x80;
      }
      else {
        if (10 < iVar4) {
          if (iVar4 == 0x67) {
            return 1;
          }
          if (iVar4 != 0x84) {
            return 0;
          }
          *(ushort *)(DAT_00171e94 + 0x26) = *(ushort *)(DAT_00171e94 + 0x26) | 0x80;
          return 0;
        }
        if (iVar4 != 2) {
          if (iVar4 != 5) {
            return 0;
          }
          uVar1 = *(ushort *)(DAT_00171e94 + 0x1a) | 2;
LAB_00171cc4:
          *(ushort *)(DAT_00171e94 + 0x1a) = uVar1;
          return 0;
        }
        uVar1 = *(ushort *)(DAT_00171e94 + 0x18) | 2;
      }
      *(ushort *)(DAT_00171e94 + 0x18) = uVar1;
    }
    else {
      if (uVar5 == DAT_00171e9c) {
        uVar1 = *(ushort *)(DAT_00171e94 + 0x14) | 0x40;
      }
      else if ((int)DAT_00171e9c < (int)uVar5) {
        if (uVar5 - DAT_00171e9c != 2) {
          if (uVar5 - DAT_00171e9c != 0x43) {
            return 0;
          }
          uVar1 = *(ushort *)(DAT_00171e94 + 0x1a) | 0x200;
          goto LAB_00171cc4;
        }
        uVar1 = *(ushort *)(DAT_00171e94 + 0x14) | 0x100;
      }
      else {
        if (uVar5 == 0x1005) {
          *(ushort *)(DAT_00171e94 + 0x12) = *(ushort *)(DAT_00171e94 + 0x12) | 0x4000;
          return 0;
        }
        if (uVar5 == 0x1008) {
          uVar1 = *(ushort *)(DAT_00171e94 + 0x14) | 4;
        }
        else {
          if (uVar5 != 0x100a) {
            return 0;
          }
          uVar1 = *(ushort *)(DAT_00171e94 + 0x14) | 0x10;
        }
      }
      *(ushort *)(DAT_00171e94 + 0x14) = uVar1;
    }
    return 0;
  }
  if (iVar3 == 3) {
    if ((*(short *)(param_2 + 0x116) == 0x10b7 || *(short *)(param_2 + 0x116) == 0x10b8) &&
       (*(char *)(param_2 + 0x2b4) == '\0')) {
      FUN_0037547c(DAT_00171ea8,0,4,DAT_00171ea4,DAT_00171ea4,DAT_00171ea0);
      *(undefined1 *)(param_2 + 0x2b4) = 1;
    }
    return 1;
  }
  if (iVar3 != 4) {
    if (iVar3 != 6) {
      return 1;
    }
    iVar4 = FUN_00346964(param_1);
    if (iVar4 == 0) {
      return 1;
    }
    return 3;
  }
  iVar3 = FUN_00346964(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  uVar5 = (uint)*(ushort *)(param_2 + 0x116);
  if (uVar5 == DAT_00171eac) {
    iVar4 = FUN_00369f3c(param_1);
    if (iVar4 == 0) {
      uVar2 = (undefined2)DAT_00171ed0;
    }
    else {
      uVar2 = 0x1040;
    }
  }
  else {
    if ((int)DAT_00171eac <= (int)uVar5) {
      if (uVar5 - DAT_00171eac == 0x79) {
        *(ushort *)(iVar4 + 0x26) = *(ushort *)(iVar4 + 0x26) | 0x1000;
      }
      else if (uVar5 - DAT_00171eac != 0x7a) {
        return 1;
      }
      iVar4 = FUN_00369f3c(param_1);
      if (iVar4 == 0) {
        uVar2 = (undefined2)DAT_00171ec0;
      }
      else {
        uVar2 = (undefined2)DAT_00171ebc;
      }
      *(undefined2 *)(param_2 + 0x116) = uVar2;
      iVar4 = FUN_00369f3c(param_1);
      if (iVar4 != 0) {
        return 1;
      }
      return 2;
    }
    if (uVar5 == 0x1035) {
      iVar4 = FUN_00369f3c(param_1);
      if (iVar4 == 0) {
        *(short *)(param_2 + 0x116) = (short)DAT_00171ec4;
        goto LAB_00171e48;
      }
      if (iVar4 == 1) {
        uVar2 = (undefined2)DAT_00171ecc;
      }
      else {
        uVar2 = (undefined2)DAT_00171ec8;
      }
    }
    else {
      if (uVar5 != 0x1038) {
        return 1;
      }
      iVar4 = FUN_00369f3c(param_1);
      if (iVar4 == 0) {
        uVar2 = (undefined2)DAT_00171eb0;
      }
      else {
        iVar4 = FUN_00369f3c(param_1);
        if (iVar4 == 1) {
          uVar2 = (undefined2)DAT_00171eb8;
        }
        else {
          uVar2 = (undefined2)DAT_00171eb4;
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 0x116) = uVar2;
LAB_00171e48:
  FUN_0036be34(param_1,*(undefined2 *)(param_2 + 0x116));
  return 1;
}
