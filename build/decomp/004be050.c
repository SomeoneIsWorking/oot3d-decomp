// OoT3D decomp @ 004be050  name=FUN_004be050  size=436

void FUN_004be050(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r5;
  uint unaff_r6;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_34 [4];
  
  iVar4 = DAT_004be208;
  iVar10 = 0;
  local_34[0] = *DAT_004be204;
  local_34[1] = DAT_004be204[1];
  local_34[2] = DAT_004be204[2];
  local_34[3] = DAT_004be204[3];
  iVar8 = 0xff;
  iVar11 = 0xff;
  while( true ) {
    iVar9 = local_34[iVar10];
    bVar6 = false;
    if (*(int *)(iVar4 + 4) == 0) {
      bVar1 = *(byte *)(iVar4 + iVar9 + 0x13a2);
    }
    else {
      bVar1 = *(byte *)(iVar4 + iVar9 + 0x138a);
    }
    if (*(char *)(iVar4 + (uint)bVar1 + 0x8c) == ',') break;
LAB_004be1e8:
    iVar10 = iVar10 + 1;
    if (3 < iVar10) {
      FUN_0033c25c(1);
      return;
    }
  }
  iVar5 = 0;
  do {
    if (*(int *)(iVar4 + 4) == 0) {
      bVar2 = *(byte *)(iVar4 + iVar5 + 0x13a2);
    }
    else {
      bVar2 = *(byte *)(iVar4 + iVar5 + 0x138a);
    }
    uVar7 = (uint)bVar2;
    if (uVar7 == 0xff) {
      if (*(int *)(iVar4 + 4) == 0) {
        *(byte *)(iVar4 + iVar5 + 0x13a2) = bVar1;
      }
      else {
        *(byte *)(iVar4 + iVar5 + 0x138a) = bVar1;
      }
      if (*(int *)(iVar4 + 4) == 0) {
        *(undefined *)(iVar4 + iVar9 + 0x13a2) = 0xff;
      }
      else {
        *(undefined *)(iVar4 + iVar9 + 0x138a) = 0xff;
      }
      bVar6 = true;
    }
    else {
      cVar3 = *(char *)(iVar4 + uVar7 + 0x8c);
      if (cVar3 == '\x02') {
        if (iVar8 == 0xff) {
          iVar8 = iVar5;
          unaff_r6 = uVar7;
        }
      }
      else if (cVar3 == '\t' && iVar11 == 0xff) {
        unaff_r5 = uVar7;
        iVar11 = iVar5;
      }
    }
    do {
      iVar5 = iVar5 + 1;
      if (0x17 < iVar5) {
        if (!bVar6) {
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
        goto LAB_004be1e8;
      }
    } while ((((iVar5 == 5 || iVar5 == 0xb) || iVar5 == 0x11) || iVar5 == 0x17) || (bVar6));
  } while( true );
}

