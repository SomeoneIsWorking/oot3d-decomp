// OoT3D decomp @ 00447a8c  name=FUN_00447a8c  size=1188

void FUN_00447a8c(uint param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  byte *pbVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  int *local_38;

  pbVar8 = (byte *)0x0;
  bVar1 = true;
  puVar11 = (uint *)*DAT_00447f34;
  iVar10 = *(int *)(DAT_00447f30 + 0x9c);
  puVar9 = *(uint **)(DAT_00447f30 + (param_1 & 0x1f) * 4 + 0x1c);
  if (puVar9 != (uint *)0x0) {
    do {
      uVar5 = *puVar9;
      if (uVar5 != param_1) {
        puVar9 = (uint *)puVar9[0xe];
      }
    } while (uVar5 != param_1 && puVar9 != (uint *)0x0);
  }
  puVar2 = (undefined4 *)*DAT_00447f38;
  uVar5 = (int)puVar2 - *(int *)(iVar10 + 4);
  *(uint *)(iVar10 + 0xc) = uVar5;
  piVar7 = DAT_00447f38;
  if (*(uint *)(iVar10 + 0x14) == uVar5) goto LAB_00447b98;
  if (param_7 == 0) {
    if ((uVar5 & 8) != 0) goto LAB_00447b38;
LAB_00447b40:
    iVar3 = 0x20;
  }
  else {
    if (param_5 == 0) goto LAB_00447b98;
    if (*(char *)(puVar9[6] + param_4 * 0x1c) == '\x01') {
      if ((uVar5 & 8) != 0) {
        if (puVar2 < (undefined4 *)*DAT_00447f3c) {
          *puVar2 = 0;
          puVar2[1] = DAT_00447f40;
          *piVar7 = (int)(puVar2 + 2);
        }
        *(int *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + 8;
      }
      goto LAB_00447b98;
    }
    if ((uVar5 & 8) == 0) goto LAB_00447b40;
LAB_00447b38:
    iVar3 = 0x18;
  }
  if (iVar3 != 0) {
    FUN_00302a1c();
  }
LAB_00447b98:
  param_6 = param_6 & ~puVar11[2];
  if ((param_6 & 1) != 0) {
    *puVar11 = *puVar11 | 0x100000;
  }
  if ((param_6 & 2) != 0) {
    *puVar11 = *puVar11 | 0x10000;
  }
  if ((param_6 & 4) != 0) {
    *puVar11 = *puVar11 | 0x1800000;
  }
  if ((param_6 & 8) != 0) {
    *puVar11 = *puVar11 | 0x600000;
  }
  if ((param_6 & 0x10) != 0) {
    *puVar11 = *puVar11 | 0x10000;
  }
  if ((param_6 & 0x20) != 0) {
    *puVar11 = *puVar11 | 0x80000;
  }
  if ((param_6 & 0x40) != 0) {
    *puVar11 = *puVar11 | DAT_00447f44;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      puVar11[iVar3 + 0x43] = 0;
      puVar11[iVar3 + 100] = 0;
      iVar3 = iVar4;
    } while (iVar4 < 0x21);
  }
  if ((param_6 & 0x80) != 0) {
    *puVar11 = *puVar11 | 0x1c00;
  }
  if ((param_6 & 0x100) != 0) {
    *puVar11 = *puVar11 | 1;
  }
  if ((param_6 & 0x200) != 0) {
    *puVar11 = *puVar11 | 0x80c2;
  }
  if ((param_6 & 0x400) != 0) {
    *puVar11 = *puVar11 | 4;
  }
  if ((param_6 & 0x800) != 0) {
    *puVar11 = *puVar11 | 0x100;
  }
  if ((param_6 & 0x1000) != 0) {
    *puVar11 = *puVar11 | 0x200;
  }
  puVar11[1] = puVar11[1] | param_6;
  if (param_5 != 0) {
    FUN_00371738(*(int *)(iVar10 + 0x18) + *(int *)(iVar10 + 0x20) * 0x1c,puVar9[6] + param_4 * 0x1c
                 ,param_5 * 0x1c);
    pbVar8 = (byte *)(*(int *)(iVar10 + 0x18) + *(int *)(iVar10 + 0x20) * 0x1c);
  }
  iVar3 = 0;
  if (param_7 == 0) {
    if (0 < param_5) {
      do {
        uVar5 = (uint)*pbVar8;
        bVar13 = uVar5 == 1;
        if (bVar13) {
          uVar5 = *(uint *)(pbVar8 + 0xc);
        }
        if (bVar13 && (uVar5 & 2) == 0) {
          if (bVar1) {
            *(uint *)(pbVar8 + 8) =
                 *(int *)(pbVar8 + 8) - ((puVar9[1] + param_2) - *(int *)(pbVar8 + 4));
            bVar1 = false;
            *(uint *)(pbVar8 + 4) = puVar9[1] + param_2;
          }
          *(uint *)(pbVar8 + 0xc) = uVar5 | 2;
        }
        pbVar8[1] = 0;
        iVar3 = iVar3 + 1;
        pbVar8[2] = 0;
        pbVar8 = pbVar8 + 0x1c;
      } while (iVar3 < param_5);
    }
  }
  else {
    iVar4 = 0;
    local_38 = (int *)0x0;
    iVar3 = 0;
    iVar12 = 0;
    if (0 < param_5) {
      do {
        if (*pbVar8 == 1) {
          if (bVar1) {
            bVar1 = false;
            if ((*(uint *)(pbVar8 + 0xc) & 2) == 0) {
              *(uint *)(pbVar8 + 8) =
                   *(int *)(pbVar8 + 8) - ((puVar9[1] + param_2) - *(int *)(pbVar8 + 4));
              *(uint *)(pbVar8 + 4) = puVar9[1] + param_2;
            }
            uVar6 = *(undefined4 *)(pbVar8 + 4);
            uVar5 = *(uint *)(pbVar8 + 8);
            *(uint *)(pbVar8 + 8) = (*(int *)(iVar10 + 0xc) - *(int *)(iVar10 + 0x14)) + uVar5;
            iVar3 = *(int *)(iVar10 + 4) + *(int *)(iVar10 + 0x14);
          }
          else {
            uVar6 = *(undefined4 *)(pbVar8 + 4);
            uVar5 = *(uint *)(pbVar8 + 8);
            iVar3 = iVar3 + iVar4;
          }
          *(int *)(pbVar8 + 4) = iVar3;
          FUN_0034338c(*DAT_00447f38,uVar6,uVar5);
          piVar7 = DAT_00447f38;
          *DAT_00447f38 = (uVar5 & 0xfffffffc) + *DAT_00447f38;
          bVar13 = (*(uint *)(pbVar8 + 0xc) & 2) == 0;
          if (bVar13) {
            piVar7 = local_38;
          }
          if (bVar13) {
            local_38 = (int *)((int)piVar7 + uVar5);
          }
          *(uint *)(pbVar8 + 0xc) = *(uint *)(pbVar8 + 0xc) & 0xfffffffd;
          iVar3 = *(int *)(pbVar8 + 8);
          iVar4 = *(int *)(pbVar8 + 4);
          *(int *)(iVar10 + 0x14) = *(int *)(iVar10 + 0x14) + iVar3;
        }
        pbVar8[1] = 0;
        iVar12 = iVar12 + 1;
        pbVar8[2] = 0;
        pbVar8 = pbVar8 + 0x1c;
      } while (iVar12 < param_5);
    }
    piVar7 = DAT_00447f38;
    if ((int)local_38 < param_3) {
      FUN_0034338c(*DAT_00447f38,(int)local_38 + puVar9[1] + param_2,param_3 - (int)local_38);
      *piVar7 = (param_3 - (int)local_38 & 0xfffffffcU) + *piVar7;
    }
    *(int *)(iVar10 + 0xc) = *DAT_00447f38 - *(int *)(iVar10 + 4);
  }
  if (param_5 != 0) {
    FUN_0030e038();
    *(int *)(iVar10 + 0x20) = *(int *)(iVar10 + 0x20) + param_5;
    if (((*(int *)(DAT_00447f30 + 0xa0) == iVar10) && (*(char *)(DAT_00447f30 + 0x12) != '\0')) &&
       (*(char *)(DAT_00447f30 + 0x11) == '\0')) {
      *(undefined1 *)(DAT_00447f30 + 0x11) = 1;
      FUN_003027dc();
    }
    FUN_0030dfd8();
    return;
  }
  return;
}
