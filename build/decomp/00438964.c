// OoT3D decomp @ 00438964  name=FUN_00438964  size=672

void FUN_00438964(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;

  puVar1 = DAT_00438c04;
  if (((*DAT_00438c04 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00438c04), iVar3 != 0)) {
    FUN_0036788c(DAT_00438c08);
  }
  iVar5 = DAT_00438c18;
  iVar3 = DAT_00438c14;
  if (*(int *)(DAT_00438c18 + 0x24) == *(int *)(DAT_00438c18 + 0x20)) {
    return;
  }
  *(int *)(DAT_00438c18 + 0x24) = *(int *)(DAT_00438c18 + 0x20);
  iVar4 = FUN_002e9d78();
  iVar2 = DAT_00438c34;
  if (iVar4 == 0) {
    FUN_002e9b00(0xffffffff);
    uVar6 = extraout_r1;
    if ((*puVar1 & 1) == 0) {
      uVar8 = FUN_003679b4(DAT_00438c04);
      uVar6 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        FUN_0036788c(DAT_00438c08);
        uVar6 = DAT_00438c10;
      }
    }
    FUN_002e9a1c(iVar3,uVar6);
    return;
  }
  iVar4 = *(int *)(iVar5 + 0x20);
  if (iVar4 == 0x17) {
    iVar7 = (int)(DAT_00438c1c[1] & *(uint *)(DAT_00438c24 + 0xb8)) >> (uint)DAT_00438c20[1];
    if (iVar7 != 0) {
      iVar7 = iVar7 + 0x4c;
      goto LAB_00438ab8;
    }
    goto LAB_00438b40;
  }
  if (iVar4 < 0x18) {
    if (iVar4 == 2) {
      if (*(char *)(DAT_00438c24 + 0x52) == '\0') {
        if (((uint)*(ushort *)(DAT_00438c24 + 0xb6) & *(uint *)(DAT_00438c30 + 0xc)) == 0)
        goto LAB_00438b40;
        iVar7 = 0x55;
      }
      else {
        iVar7 = 0x7b;
      }
    }
    else {
      if (iVar4 != 0x12) {
        if (iVar4 == 0x16) {
          if (*(int *)(DAT_00438c24 + 4) == 0) {
            iVar7 = (int)(*DAT_00438c1c & *(uint *)(DAT_00438c24 + 0xb8)) >> (uint)*DAT_00438c20;
            if (iVar7 != 0) {
              iVar7 = iVar7 + 0x49;
              goto LAB_00438ab8;
            }
          }
          else {
            iVar7 = (int)(DAT_00438c1c[5] & *(uint *)(DAT_00438c24 + 0xb8)) >> (uint)DAT_00438c20[5]
            ;
            if (iVar7 != 0) {
              iVar7 = iVar7 + 0x46;
              goto LAB_00438ab8;
            }
          }
        }
        goto LAB_00438b40;
      }
      if (*(char *)((uint)*(byte *)(DAT_00438c28 + 7) + DAT_00438c2c) == '\a') {
        iVar7 = 7;
      }
      else {
        if (*(char *)((uint)*(byte *)(DAT_00438c28 + 8) + DAT_00438c2c) != '\b') goto LAB_00438b40;
        iVar7 = 8;
      }
    }
LAB_00438ac0:
    FUN_002e9b00(iVar7);
    FUN_002e9a3c(iVar3,iVar7 + 0x700,1);
  }
  else {
    if (iVar4 == 0x18) {
      iVar7 = (int)(DAT_00438c1c[2] & *(uint *)(DAT_00438c24 + 0xb8)) >> (uint)DAT_00438c20[2];
      if (iVar7 != 0) {
        iVar7 = iVar7 + 0x4f;
        goto LAB_00438ab8;
      }
    }
    else if ((iVar4 == 0x19) &&
            (iVar7 = (int)(DAT_00438c1c[3] & *(uint *)(DAT_00438c24 + 0xb8)) >>
                     (uint)DAT_00438c20[3], iVar7 != 0)) {
      iVar7 = iVar7 + 0x52;
LAB_00438ab8:
      if (iVar7 != -1) goto LAB_00438ac0;
    }
LAB_00438b40:
    FUN_002e9b00(*(undefined4 *)(DAT_00438c34 + iVar4 * 4));
    FUN_002e9a3c(iVar3,*(int *)(iVar2 + *(int *)(iVar5 + 0x20) * 4) + 0x700,1);
  }
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00438c04), iVar5 != 0)) {
    FUN_0036788c(DAT_00438c08);
  }
  *(undefined1 *)(iVar3 + 0xd) = 1;
  return;
}
