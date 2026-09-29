// OoT3D decomp @ 00446af0  name=FUN_00446af0  size=880

void FUN_00446af0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float local_20;
  float local_1c;

  iVar8 = DAT_00446e30;
  iVar9 = DAT_00446e2c;
  uVar6 = DAT_00446e28;
  uVar5 = DAT_00446e24;
  iVar4 = DAT_00446e20;
  bVar11 = *(int *)(DAT_00446e20 + 0x34) == 8;
  if (bVar11) {
    param_3 = *(int *)(DAT_00446e30 + 4);
  }
  if ((!bVar11 || param_3 != 0) ||
     (cVar1 = *(char *)((uint)*(byte *)(*(int *)(DAT_00446e20 + 0x50) + DAT_00446e30 + 0x13a2) +
                        DAT_00446e30 + 0x8c),
     ((cVar1 != '\x03' && cVar1 != '8') && cVar1 != '9') && cVar1 != ':')) {
LAB_00446d30:
    FUN_002e63f8(*(undefined4 *)(DAT_00446e20 + 0x2c),0);
    FUN_0044c9ac(*(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar9 + 4),*(undefined4 *)(iVar9 + 8)
                 ,*(undefined4 *)(iVar9 + 0xc));
    iVar7 = *(int *)(iVar8 + 4);
    iVar9 = 0;
    while( true ) {
      if (iVar7 == 0) {
        bVar2 = *(byte *)(iVar8 + iVar9 + 0x13a2);
      }
      else {
        bVar2 = *(byte *)(iVar8 + iVar9 + 0x138a);
      }
      cVar1 = *(char *)((uint)bVar2 + iVar8 + 0x8c);
      if (((cVar1 == '\x03' || cVar1 == '8') || cVar1 == '9') || cVar1 == ':') break;
      iVar9 = iVar9 + 1;
      if (0x17 < iVar9) {
        return;
      }
    }
    iVar10 = *(int *)(iVar4 + 0x50) + iVar8;
    if (iVar7 == 0) {
      bVar2 = *(byte *)(iVar10 + 0x13a2);
    }
    else {
      bVar2 = *(byte *)(iVar10 + 0x138a);
    }
    cVar1 = *(char *)((uint)bVar2 + iVar8 + 0x8c);
    iVar10 = *(int *)(iVar4 + 0x54) + iVar8;
    if (iVar7 == 0) {
      bVar2 = *(byte *)(iVar10 + 0x13a2);
    }
    else {
      bVar2 = *(byte *)(iVar10 + 0x138a);
    }
    cVar3 = *(char *)((uint)bVar2 + iVar8 + 0x8c);
    if ((*(int *)(iVar4 + 0x34) < 9) ||
       ((((cVar3 != '\x03' && cVar3 != '8') && cVar3 != '9') && cVar3 != ':') &&
        (((cVar1 != '\x03' && cVar1 != '8') && cVar1 != '9') && cVar1 != ':'))) {
      FUN_002eb304(iVar9,&local_1c,&local_20);
      FUN_002e63ec(local_1c,local_20,*(undefined4 *)(iVar4 + 0x2c));
      return;
    }
LAB_00446e04:
    FUN_002e63ec(uVar6,uVar5,*(undefined4 *)(iVar4 + 0x2c));
    return;
  }
  iVar7 = 0;
LAB_00446b6c:
  bVar2 = *(byte *)(DAT_00446e30 + iVar7 + 0x13a2);
  do {
    if (*(char *)((uint)bVar2 + DAT_00446e30 + 0x8c) == cVar1) {
      FUN_002eb304(iVar7,&local_1c,&local_20);
      iVar8 = *(int *)(iVar9 + 4);
      if (iVar8 == 1) {
        if (*(int *)(iVar9 + 8) == 0) {
          if (*(int *)(iVar9 + 0xc) == 0) {
            FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),0);
            goto LAB_00446cec;
          }
        }
        else {
LAB_00446c38:
          if (*(int *)(iVar9 + 8) == 1) {
            if (*(int *)(iVar9 + 0xc) != 0) goto LAB_00446cd8;
            FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),3);
            goto LAB_00446cec;
          }
          if (*(int *)(iVar9 + 8) != 0) goto LAB_00446ccc;
        }
        if (*(int *)(iVar9 + 0xc) == 1) {
          FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),4);
        }
      }
      else if (iVar8 == 0) {
        if (*(int *)(iVar9 + 8) == 1) {
          if (*(int *)(iVar9 + 0xc) == 0) {
            FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),1);
          }
          else {
LAB_00446ca4:
            if (*(int *)(iVar9 + 0xc) == 1) {
              FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),5);
            }
          }
        }
        else if (*(int *)(iVar9 + 8) == 0) {
          if (*(int *)(iVar9 + 0xc) == 1) {
            FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),2);
          }
        }
        else {
LAB_00446c98:
          if (*(int *)(iVar9 + 8) == 1) goto LAB_00446ca4;
        }
      }
      else {
        if (iVar8 == 1) goto LAB_00446c38;
        if (iVar8 == 0) goto LAB_00446c98;
        if (iVar8 != 1) goto LAB_00446cec;
LAB_00446ccc:
        if (*(int *)(iVar9 + 8) == 1) {
LAB_00446cd8:
          if (*(int *)(iVar9 + 0xc) == 1) {
            FUN_002e6454(*(undefined4 *)(iVar4 + 0x2c),6);
          }
        }
      }
LAB_00446cec:
      FUN_002e63f8(*(undefined4 *)(iVar4 + 0x2c),0,1);
      FUN_002f7af4(local_1c - DAT_00446e34,local_20 - DAT_00446e34,*(undefined4 *)(iVar4 + 0x2c));
      goto LAB_00446e04;
    }
    iVar7 = iVar7 + 1;
    if (0x17 < iVar7) goto LAB_00446d30;
    if (param_3 == 0) goto LAB_00446b6c;
    bVar2 = *(byte *)(DAT_00446e30 + iVar7 + 0x138a);
  } while( true );
}
