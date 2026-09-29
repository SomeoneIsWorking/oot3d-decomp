// OoT3D decomp @ 0044fbd4  name=FUN_0044fbd4  size=720

void FUN_0044fbd4(void)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;

  iVar4 = DAT_0044fec0;
  piVar11 = (int *)(DAT_0044fec0 + -0x1000);
  uVar9 = (uint)*(short *)(DAT_0044fec0 + -0xf82);
  if (uVar9 == 0xd) {
LAB_0044fc00:
    iVar10 = (int)*(short *)(DAT_0044fec4 + uVar9 * 2);
  }
  else if ((int)uVar9 < 0xe) {
    if (uVar9 < 0xd) goto LAB_0044fc00;
switchD_0044fc2c_caseD_10:
    if ((uVar9 == 0x34) || (iVar10 = DAT_0044fed4, *(int *)(DAT_0044fec0 + -0xffc) != 0)) {
      *piVar11 = 0xbb;
      goto LAB_0044fce0;
    }
  }
  else {
    iVar10 = DAT_0044fec8;
    if (uVar9 != 0x15) {
      if ((int)uVar9 < 0x16) {
        switch(uVar9) {
        case 0xe:
        case 0xf:
          goto switchD_0044fc2c_caseD_e;
        default:
          goto switchD_0044fc2c_caseD_10;
        case 0x11:
          *piVar11 = 0;
          goto LAB_0044fce0;
        case 0x12:
          iVar10 = 4;
          break;
        case 0x13:
          iVar10 = 0x28;
          break;
        case 0x14:
          iVar10 = DAT_0044fed0;
        }
      }
      else {
        if (uVar9 != 0x19) {
          if ((int)uVar9 < 0x1a) {
            if (uVar9 == 0x16) {
              iVar10 = 0x10;
            }
            else if (uVar9 == 0x17) {
              iVar10 = 0x82;
            }
            else {
              if (uVar9 != 0x18) goto switchD_0044fc2c_caseD_10;
              iVar10 = 0x37;
            }
            goto LAB_0044fc98;
          }
          if (uVar9 != 0x1a && uVar9 != 0x4f) goto switchD_0044fc2c_caseD_10;
        }
switchD_0044fc2c_caseD_e:
        iVar10 = DAT_0044fecc;
      }
    }
  }
LAB_0044fc98:
  *piVar11 = iVar10;
LAB_0044fce0:
  if (*(short *)(iVar4 + -0xfbc) < 0x30) {
    *(undefined2 *)(iVar4 + -0xfbc) = 0x30;
  }
  if (*(char *)(iVar4 + -0xa8) != '\0') {
    FUN_00470758(*DAT_0044fedc,DAT_0044fed8,0x360);
  }
  if (*(char *)(iVar4 + 0x2dd) != '\0') {
    FUN_00470758(*DAT_0044fee4,DAT_0044fee0,0x80);
  }
  iVar6 = DAT_0044fef4;
  iVar5 = DAT_0044fef0;
  iVar10 = DAT_0044feec;
  if (((*(ushort *)(DAT_0044fee8 + 0xf4) & 1) != 0) &&
     ((*(uint *)(iVar4 + -0xf44) & *(uint *)(DAT_0044feec + 0x30)) == 0)) {
    *(ushort *)(DAT_0044fee8 + 0xf4) = *(ushort *)(DAT_0044fee8 + 0xf4) & 0xfffe;
    *(undefined1 *)((uint)*(byte *)(iVar5 + 0x23) + iVar6) = 0x22;
    if (*(char *)(iVar4 + -0xf7f) == '#') {
      *(undefined1 *)(iVar4 + -0xf7f) = 0x22;
    }
    if (*(char *)(iVar4 + -0xf7e) == '#') {
      *(undefined1 *)(iVar4 + -0xf7e) = 0x22;
    }
    if (*(char *)(iVar4 + -0xf7d) == '#') {
      *(undefined1 *)(iVar4 + -0xf7d) = 0x22;
    }
  }
  if (*(int *)(iVar4 + -0xffc) == 0) {
    uVar9 = *(int *)(iVar10 + 4) << *DAT_0044fef8;
    if ((uVar9 & *(ushort *)(iVar4 + -0xf4a)) == 0) {
      *(ushort *)(iVar4 + -0xf4a) = *(ushort *)(iVar4 + -0xf4a) | (ushort)uVar9;
      *(undefined1 *)(iVar4 + -0xf80) = 0x3c;
      *(ushort *)(iVar4 + -0xf76) = *(ushort *)(iVar4 + -0xf76) & 0xfff0 | 2;
    }
  }
  psVar8 = DAT_0044ff00;
  puVar7 = DAT_0044fefc;
  uVar9 = (uint)*(byte *)(iVar5 + 0x2d);
  uVar1 = *DAT_0044fefc;
  if (*(byte *)(uVar9 + iVar6) == uVar1) {
    uVar3 = (undefined1)*DAT_0044ff00;
    *(undefined1 *)((uint)*(byte *)(iVar5 + *DAT_0044ff00) + iVar6) = uVar3;
    if (*(byte *)(iVar4 + -0xf7f) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7f) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7e) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7e) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7d) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7d) = uVar3;
    }
  }
  uVar1 = puVar7[1];
  if (*(byte *)(uVar9 + iVar6) == uVar1) {
    sVar2 = psVar8[1];
    uVar3 = (undefined1)sVar2;
    *(undefined1 *)((uint)*(byte *)(iVar5 + sVar2) + iVar6) = uVar3;
    if (*(byte *)(iVar4 + -0xf7f) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7f) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7e) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7e) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7d) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7d) = uVar3;
    }
  }
  uVar1 = puVar7[2];
  if (*(byte *)(uVar9 + iVar6) == uVar1) {
    sVar2 = psVar8[2];
    uVar3 = (undefined1)sVar2;
    *(undefined1 *)((uint)*(byte *)(iVar5 + sVar2) + iVar6) = uVar3;
    if (*(byte *)(iVar4 + -0xf7f) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7f) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7e) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7e) = uVar3;
    }
    if (*(byte *)(iVar4 + -0xf7d) == uVar1) {
      *(undefined1 *)(iVar4 + -0xf7d) = uVar3;
    }
  }
  *(undefined1 *)(iVar4 + -0xfba) = 0;
  return;
}
