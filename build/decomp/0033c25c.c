// OoT3D decomp @ 0033c25c  name=FUN_0033c25c  size=1196

/* WARNING: Removing unreachable block (ram,0x0033c510) */

void FUN_0033c25c(int param_1)

{
  sbyte sVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined uVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  float local_3c;
  float local_38;
  
  iVar10 = DAT_0033c658;
  uVar9 = DAT_0033c644;
  if (*(int *)(DAT_0033c648 + 0x3c) != 0) {
    sVar1 = *(sbyte *)(DAT_0033c650 + 3);
    iVar15 = *(int *)(DAT_0033c64c + 4);
    iVar18 = DAT_0033c658 + 0x8c;
    iVar16 = *(int *)(DAT_0033c64c + 8);
    bVar2 = *(byte *)(DAT_0033c654 + 4);
    bVar3 = *(byte *)(DAT_0033c654 + 0xc);
    bVar4 = *(byte *)(DAT_0033c654 + 0x12);
LAB_0033c2b8:
    if ((iVar15 << sVar1 & (uint)*(ushort *)(iVar10 + 0xb6)) != 0) {
      *(undefined *)(iVar10 + 0xa4) = 0x45;
    }
    if (((uint)*(ushort *)(iVar10 + 0xb6) & iVar16 << sVar1) != 0) {
      *(undefined *)(iVar10 + 0xa5) = 0x46;
    }
    puVar11 = DAT_0033c65c;
    *DAT_0033c65c = 1;
    if (*(char *)((uint)bVar2 + iVar18) == '\x04') {
      puVar11[1] = 1;
    }
    else {
      puVar11[1] = 0;
    }
    if (*(char *)((uint)bVar3 + iVar18) == '\f') {
      puVar11[2] = 1;
    }
    else {
      puVar11[2] = 0;
    }
    iVar20 = 0;
    puVar11[3] = (uint)(*(char *)((uint)bVar4 + iVar18) == '\x12');
    do {
      bVar5 = *(byte *)(iVar10 + iVar20 + 0x8c);
      bVar6 = *(byte *)(iVar10 + iVar20 + 0x1370);
      if (bVar6 != bVar5) {
        if (bVar6 != 0xff) {
          iVar17 = iVar10 + iVar20;
          iVar20 = 0x8000;
          *(byte *)(iVar17 + 0x1370) = bVar5;
          goto LAB_0033c39c;
        }
        if (bVar5 != 8) {
          if (bVar5 < 9) {
            if (bVar5 != 4 && bVar5 != 7) {
LAB_0033c37c:
              *(byte *)(iVar10 + iVar20 + 0x1370) = bVar5;
              goto LAB_0033c39c;
            }
          }
          else if (bVar5 != 0xc && bVar5 != 0x12) goto LAB_0033c37c;
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < 0x1a);
    iVar20 = -1;
LAB_0033c39c:
    uVar13 = DAT_0033c668;
    uVar12 = DAT_0033c664;
    iVar17 = DAT_0033c660;
    if (iVar20 == 0x8000) goto LAB_0033c520;
    if (iVar20 != -1) {
      bVar8 = false;
      iVar17 = 0;
      while (uVar7 = (undefined)iVar20, *(char *)(iVar10 + iVar17 + 0x138a) != -1) {
        do {
          iVar17 = iVar17 + 1;
          if (0x17 < iVar17) goto LAB_0033c404;
        } while (((iVar17 == 0xb || iVar17 == 0x11) || iVar17 == 5) || iVar17 == 0x17);
      }
      bVar8 = true;
      *(undefined *)(iVar10 + iVar17 + 0x138a) = uVar7;
      param_1 = 1;
LAB_0033c404:
      if (*(char *)(iVar10 + 0x138f) == -1 && !bVar8) {
        *(undefined *)(iVar10 + 0x138f) = uVar7;
LAB_0033c42c:
        param_1 = 1;
      }
      else {
        if (*(char *)(iVar10 + 0x1395) == -1 && !bVar8) {
          *(undefined *)(iVar10 + 0x1395) = uVar7;
          goto LAB_0033c42c;
        }
        if (*(char *)(iVar10 + 0x139b) == -1 && !bVar8) {
          *(undefined *)(iVar10 + 0x139b) = uVar7;
          goto LAB_0033c42c;
        }
        if (*(char *)(iVar10 + 0x13a1) == -1 && !bVar8) {
          *(undefined *)(iVar10 + 0x13a1) = uVar7;
          goto LAB_0033c42c;
        }
      }
      bVar8 = false;
      iVar20 = 0;
      while (*(char *)(iVar10 + iVar20 + 0x13a2) != -1) {
        do {
          iVar20 = iVar20 + 1;
          if (0x17 < iVar20) goto LAB_0033c4b4;
        } while (((iVar20 == 0xb || iVar20 == 0x11) || iVar20 == 5) || iVar20 == 0x17);
      }
      bVar8 = true;
      *(undefined *)(iVar10 + iVar20 + 0x13a2) = uVar7;
      param_1 = 1;
LAB_0033c4b4:
      if (*(char *)(iVar10 + 0x13a7) == -1 && !bVar8) {
        *(undefined *)(iVar10 + 0x13a7) = uVar7;
        goto LAB_0033c504;
      }
      if (*(char *)(iVar10 + 0x13ad) == -1 && !bVar8) {
        *(undefined *)(iVar10 + 0x13ad) = uVar7;
        goto LAB_0033c504;
      }
      if (*(char *)(iVar10 + 0x13b3) == -1 && !bVar8) {
        *(undefined *)(iVar10 + 0x13b3) = uVar7;
        goto LAB_0033c504;
      }
      if (*(char *)(iVar10 + 0x13b9) == -1 && !bVar8) {
        *(undefined *)(iVar10 + 0x13b9) = uVar7;
LAB_0033c504:
        param_1 = 1;
      }
      goto LAB_0033c2b8;
    }
    if (param_1 != 0) {
LAB_0033c520:
      iVar15 = 0;
      do {
        if (*(uint *)(iVar10 + 4) == 0) {
          bVar2 = *(byte *)(iVar10 + iVar15 + 0x13a2);
        }
        else {
          bVar2 = *(byte *)(iVar10 + iVar15 + 0x138a);
        }
        if (bVar2 == 0xff) {
          FUN_002f8d74(*(undefined4 *)(iVar17 + -0x524),iVar15,0xff);
          FUN_002e6c3c(uVar9,uVar9,*(undefined4 *)(iVar17 + -0x524),iVar15);
          if (iVar15 == 0xb) {
            *(undefined *)(iVar10 + 0x82) = 0xff;
            uVar19 = 0xff;
            *(undefined *)(iVar10 + 0x86) = 0xff;
            goto LAB_0033c6bc;
          }
          if (iVar15 == 0x11) {
            *(undefined *)(iVar10 + 0x81) = 0xff;
            uVar19 = 0xff;
            *(undefined *)(iVar10 + 0x85) = 0xff;
            goto LAB_0033c6d8;
          }
          if (iVar15 == 5) {
            *(undefined *)(iVar10 + 0x83) = 0xff;
            uVar19 = 0xff;
            *(undefined *)(iVar10 + 0x87) = 0xff;
            goto LAB_0033c6f4;
          }
          if (iVar15 == 0x17) {
            *(undefined *)(iVar10 + 0x84) = 0xff;
            uVar19 = 0xff;
            *(undefined *)(iVar10 + 0x88) = 0xff;
            goto LAB_0033c710;
          }
        }
        else {
          bVar3 = *(byte *)(iVar10 + (uint)bVar2 + 0x8c);
          uVar19 = (uint)bVar3;
          uVar14 = uVar13;
          if (*(byte *)(iVar17 + uVar19) != 9 &&
              *(uint *)(iVar10 + 4) != (uint)*(byte *)(iVar17 + uVar19)) {
            uVar14 = uVar12;
          }
          if ((1 < *(int *)(iVar17 + -0x528)) &&
             (((uVar19 != 3 && uVar19 != 0x38) && uVar19 != 0x39) && uVar19 != 0x3a)) {
            uVar14 = uVar12;
          }
          FUN_002f8d74(*(undefined4 *)(iVar17 + -0x524),iVar15,uVar19);
          FUN_002eb304(iVar15,&local_38,&local_3c);
          FUN_002f8d40(*(undefined4 *)(iVar17 + -0x524),iVar15,(int)local_38,(int)local_3c,0x2a,0x2a
                      );
          FUN_002e6c3c(uVar14,uVar13,*(undefined4 *)(iVar17 + -0x524),iVar15);
          if (iVar15 == 0xb) {
            *(byte *)(iVar10 + 0x82) = bVar3;
            *(byte *)(iVar10 + 0x86) = bVar2;
LAB_0033c6bc:
            uVar14 = 3;
          }
          else if (iVar15 == 0x11) {
            *(byte *)(iVar10 + 0x81) = bVar3;
            *(byte *)(iVar10 + 0x85) = bVar2;
LAB_0033c6d8:
            uVar14 = 4;
          }
          else if (iVar15 == 5) {
            *(byte *)(iVar10 + 0x83) = bVar3;
            *(byte *)(iVar10 + 0x87) = bVar2;
LAB_0033c6f4:
            uVar14 = 1;
          }
          else {
            if (iVar15 != 0x17) goto LAB_0033c718;
            *(byte *)(iVar10 + 0x84) = bVar3;
            *(byte *)(iVar10 + 0x88) = bVar2;
LAB_0033c710:
            uVar14 = 2;
          }
          FUN_002efea0(uVar14,uVar19);
        }
LAB_0033c718:
        iVar15 = iVar15 + 1;
      } while (iVar15 < 0x18);
    }
  }
  return;
}

