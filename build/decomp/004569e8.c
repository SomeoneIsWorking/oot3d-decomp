// OoT3D decomp @ 004569e8  name=FUN_004569e8  size=452

void FUN_004569e8(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  uint unaff_r5;
  uint unaff_r6;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_34 [4];

  iVar4 = DAT_00456bb0;
  iVar10 = 0;
  local_34[0] = *DAT_00456bac;
  local_34[1] = DAT_00456bac[1];
  local_34[2] = DAT_00456bac[2];
  local_34[3] = DAT_00456bac[3];
  iVar8 = 0xff;
  iVar11 = 0xff;
  while( true ) {
    iVar9 = local_34[iVar10];
    if (*(uint *)(iVar4 + 4) == 0) {
      bVar1 = *(byte *)(iVar4 + iVar9 + 0x13a2);
    }
    else {
      bVar1 = *(byte *)(iVar4 + iVar9 + 0x138a);
    }
    bVar7 = false;
    uVar5 = (uint)*(byte *)(DAT_00456bb4 + (uint)*(byte *)(iVar4 + (uint)bVar1 + 0x8c));
    if ((uVar5 != 9 && bVar1 != 0xff) && *(uint *)(iVar4 + 4) != uVar5) break;
LAB_00456b90:
    iVar10 = iVar10 + 1;
    if (3 < iVar10) {
      FUN_0033c25c(1);
      return;
    }
  }
  iVar6 = 0;
  do {
    if (*(int *)(iVar4 + 4) == 0) {
      bVar2 = *(byte *)(iVar4 + iVar6 + 0x13a2);
    }
    else {
      bVar2 = *(byte *)(iVar4 + iVar6 + 0x138a);
    }
    uVar5 = (uint)bVar2;
    if (uVar5 == 0xff) {
      if (*(int *)(iVar4 + 4) == 0) {
        *(byte *)(iVar4 + iVar6 + 0x13a2) = bVar1;
      }
      else {
        *(byte *)(iVar4 + iVar6 + 0x138a) = bVar1;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        *(undefined1 *)(iVar4 + iVar9 + 0x13a2) = 0xff;
      }
      else {
        *(undefined1 *)(iVar4 + iVar9 + 0x138a) = 0xff;
      }
      bVar7 = true;
    }
    else {
      cVar3 = *(char *)(iVar4 + uVar5 + 0x8c);
      if (cVar3 == '\x02') {
        if (iVar8 == 0xff) {
          iVar8 = iVar6;
          unaff_r6 = uVar5;
        }
      }
      else if (cVar3 == '\t' && iVar11 == 0xff) {
        unaff_r5 = uVar5;
        iVar11 = iVar6;
      }
    }
    do {
      iVar6 = iVar6 + 1;
      if (0x17 < iVar6) {
        if (!bVar7) {
          if (iVar8 == 0xff) {
            if (iVar11 != 0xff) {
              if (*(int *)(iVar4 + 4) == 0) {
                *(byte *)(iVar4 + iVar11 + 0x13a2) = bVar1;
              }
              else {
                *(byte *)(iVar4 + iVar11 + 0x138a) = bVar1;
              }
              if (*(int *)(iVar4 + 4) == 0) {
                *(char *)(iVar4 + iVar9 + 0x13a2) = (char)unaff_r5;
              }
              else {
                *(char *)(iVar4 + iVar9 + 0x138a) = (char)unaff_r5;
              }
            }
          }
          else {
            if (*(int *)(iVar4 + 4) == 0) {
              *(byte *)(iVar4 + iVar8 + 0x13a2) = bVar1;
            }
            else {
              *(byte *)(iVar4 + iVar8 + 0x138a) = bVar1;
            }
            if (*(int *)(iVar4 + 4) == 0) {
              *(char *)(iVar4 + iVar9 + 0x13a2) = (char)unaff_r6;
            }
            else {
              *(char *)(iVar4 + iVar9 + 0x138a) = (char)unaff_r6;
            }
          }
        }
        goto LAB_00456b90;
      }
    } while ((((iVar6 == 5 || iVar6 == 0xb) || iVar6 == 0x11) || iVar6 == 0x17) || (bVar7));
  } while( true );
}
