// OoT3D decomp @ 001ff2dc  name=FUN_001ff2dc  size=716

void FUN_001ff2dc(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;

  fVar2 = DAT_001ff5b0;
  bVar1 = *(byte *)(param_1 + 0x2fa);
  FUN_00373500(DAT_001ff5b0,DAT_001ff5ac,DAT_001ff5a8,param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) <= DAT_001ff5b4) {
    *(float *)(param_1 + 0x378) = fVar2;
  }
  FUN_0034e418(param_1);
  if (*(float *)(param_1 + 0x378) != fVar2) {
    sVar5 = 3;
LAB_001ff354:
    *(short *)(param_1 + 0x28a) = sVar5;
    return;
  }
  if (*(short *)(param_1 + 0x28a) != 0) {
    sVar5 = *(short *)(param_1 + 0x28a) + -1;
    goto LAB_001ff354;
  }
  *(undefined1 *)(param_1 + 0x2f9) = 0xff;
  *(undefined4 *)(param_1 + 0x368) = 1;
  FUN_0034e27c(param_2,param_1);
  iVar6 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar6 != 5) {
    return;
  }
  iVar6 = FUN_00339100(param_2,param_1,param_2 + 0x14);
  uVar3 = DAT_001ff5b8;
  if (iVar6 != 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x2c8);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    if (iVar6 < 1) {
      if (-0x1f5 < iVar6) goto LAB_001ff550;
      uVar7 = (uint)*(byte *)(param_1 + 0x2fa);
      if (uVar7 < 8) {
        do {
          uVar7 = uVar7 + 2 & 0xff;
          if (7 < uVar7) goto LAB_001ff540;
        } while (*(int *)(param_1 + uVar7 * 4 + 0x2a4) == 0);
      }
      else {
LAB_001ff540:
        uVar7 = 0xff;
      }
      uVar4 = (undefined1)uVar7;
      goto joined_r0x001ff548;
    }
    if (iVar6 < 0x1f5) goto LAB_001ff550;
    uVar7 = (uint)*(byte *)(param_1 + 0x2fa);
    if (uVar7 < 4) {
LAB_001ff4c8:
      uVar7 = 0xff;
    }
    else {
      do {
        if ((7 < uVar7) || (uVar7 = uVar7 - 2 & 0xff, uVar7 < 4)) goto LAB_001ff4c8;
      } while ((7 < uVar7) || (*(int *)(param_1 + uVar7 * 4 + 0x2a4) == 0));
    }
    uVar4 = (undefined1)uVar7;
joined_r0x001ff4d0:
    if (uVar7 == 0xff) {
      FUN_0037547c(DAT_001ff5b8,0,4,DAT_001ff5c0,DAT_001ff5c0,DAT_001ff5bc);
      *(undefined1 *)(param_1 + 0x2f9) = 0;
      *(undefined2 *)(param_1 + 0x2a0) = 8;
      return;
    }
  }
  else {
    if (0 < iVar6) {
      uVar7 = (uint)*(byte *)(param_1 + 0x2fa);
      if (uVar7 < 4) {
LAB_001ff41c:
        uVar7 = 0xff;
      }
      else {
        do {
          if ((7 < uVar7) || (uVar7 = uVar7 - 2 & 0xff, uVar7 < 4)) goto LAB_001ff41c;
        } while ((7 < uVar7) || (*(int *)(param_1 + uVar7 * 4 + 0x2a4) == 0));
      }
      uVar4 = (undefined1)uVar7;
      goto joined_r0x001ff4d0;
    }
    if (-1 < iVar6) goto LAB_001ff550;
    uVar7 = (uint)*(byte *)(param_1 + 0x2fa);
    if (uVar7 < 8) {
      do {
        uVar7 = uVar7 + 2 & 0xff;
        if (7 < uVar7) goto LAB_001ff464;
      } while (*(int *)(param_1 + uVar7 * 4 + 0x2a4) == 0);
    }
    else {
LAB_001ff464:
      uVar7 = 0xff;
    }
    uVar4 = (undefined1)uVar7;
joined_r0x001ff548:
    if (uVar7 == 0xff) goto LAB_001ff550;
  }
  *(undefined1 *)(param_1 + 0x2fa) = uVar4;
LAB_001ff550:
  FUN_00338fa0(param_1);
  if ((uint)*(byte *)(param_1 + 0x2fa) == (uint)bVar1) {
    return;
  }
  FUN_0036be34(param_2,*(undefined2 *)
                        (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116));
  FUN_0037547c(uVar3,0,4,DAT_001ff5c0,DAT_001ff5c0,DAT_001ff5bc);
  return;
}
