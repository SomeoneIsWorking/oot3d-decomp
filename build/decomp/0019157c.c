// OoT3D decomp @ 0019157c  name=FUN_0019157c  size=684

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0019157c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 != 4) {
    return;
  }
  if ((*(uint *)(param_2 + 0x18) & *DAT_00191828) != 0) {
    iVar2 = *(int *)(param_2 + 0x20ac);
    *(undefined2 *)(*DAT_0034e270 + 0x4d2) = 0;
    FUN_0036bc98(param_1,param_2);
    FUN_00371680(param_2,4,0);
    *(uint *)(iVar2 + 0x1714) = *(uint *)(iVar2 + 0x1714) & 0xdfffffff;
    FUN_00340a1c(param_2,1);
    FUN_0034be04(0x32);
    *(undefined1 *)(param_1 + 0x2f9) = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    uVar5 = DAT_0034e274;
    *(undefined4 *)(param_1 + 0x368) = 0;
    FUN_0034e32c(uVar5,param_1,param_2);
    uVar1 = FUN_00372b50(param_1);
    *(undefined2 *)(DAT_0034e278 + param_1) = uVar1;
    *(undefined2 *)(param_1 + 0x2a0) = 0;
    return;
  }
  iVar2 = FUN_00346964(param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0x2a0) = 3;
      (**(code **)(DAT_00191838 + *(short *)(param_1 + 0x1c) * 4))(param_2);
      *(undefined4 *)(param_1 + 0x330) = 0;
      *(undefined4 *)(param_1 + 0x368) = 0;
      uVar3 = DAT_00191834;
      uVar5 = DAT_00191830;
      goto LAB_0019173c;
    }
    if (iVar2 == 1) {
      FUN_0034e1d0(param_2,param_1);
      uVar3 = DAT_00191834;
      uVar5 = DAT_00191830;
      goto LAB_0019173c;
    }
  }
  uVar3 = DAT_0019183c;
  if (-1 < *(int *)(param_1 + 0x2c8)) {
    if (*(int *)(param_1 + 0x2c8) < 1) {
      return;
    }
    uVar4 = *(byte *)(param_1 + 0x2fa) & 1;
    if ((*(byte *)(param_1 + 0x2fa) & 1) == 0) {
      do {
        if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_001917f0;
        uVar4 = uVar4 + 2 & 0xff;
      } while (uVar4 < 4);
      uVar4 = 1;
      do {
        if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_001917f0;
        uVar4 = uVar4 + 2 & 0xff;
      } while (uVar4 < 4);
    }
    else {
      uVar4 = 1;
      do {
        if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_001917f0;
        uVar4 = uVar4 + 2 & 0xff;
      } while (uVar4 < 4);
      uVar4 = 0;
      do {
        if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_001917f0;
        uVar4 = uVar4 + 2 & 0xff;
      } while (uVar4 < 4);
    }
    uVar4 = 0xff;
LAB_001917f0:
    if (uVar4 == 0xff) {
      return;
    }
    *(char *)(param_1 + 0x2fa) = (char)uVar4;
    uVar5 = DAT_00191830;
    *(undefined2 *)(param_1 + 0x2a0) = 5;
    *(undefined4 *)(param_1 + 0x368) = 0;
    FUN_0037547c(uVar3,0,4,uVar5);
    return;
  }
  if ((*(byte *)(param_1 + 0x2fa) & 1) == 0) {
    uVar4 = 4;
    do {
      if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_00191710;
      uVar4 = uVar4 + 2 & 0xff;
    } while (uVar4 < 8);
    uVar4 = 5;
    do {
      if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_00191710;
      uVar4 = uVar4 + 2 & 0xff;
    } while (uVar4 < 8);
  }
  else {
    uVar4 = 5;
    do {
      if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_00191710;
      uVar4 = uVar4 + 2 & 0xff;
    } while (uVar4 < 8);
    uVar4 = 4;
    do {
      if (*(int *)(param_1 + uVar4 * 4 + 0x2a4) != 0) goto LAB_00191710;
      uVar4 = uVar4 + 2 & 0xff;
    } while (uVar4 < 8);
  }
  uVar4 = 0xff;
LAB_00191710:
  if (uVar4 == 0xff) {
    return;
  }
  *(char *)(param_1 + 0x2fa) = (char)uVar4;
  *(undefined2 *)(param_1 + 0x2a0) = 4;
  uVar5 = DAT_00191830;
  *(undefined4 *)(param_1 + 0x330) = 0;
LAB_0019173c:
  FUN_0037547c(uVar3,0,4,uVar5);
  return;
}
