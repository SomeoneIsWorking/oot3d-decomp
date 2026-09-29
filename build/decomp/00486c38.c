// OoT3D decomp @ 00486c38  name=FUN_00486c38  size=1080

undefined4
FUN_00486c38(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined2 uStack_42;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  if (*(char *)(param_1 + 0x80) == '\0') {
    return 0;
  }
  uVar9 = param_2[1];
  uVar12 = param_2[2];
  uVar14 = param_2[3];
  uVar16 = param_2[4];
  uVar17 = param_2[5];
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  *(undefined4 *)(param_1 + 0x54) = uVar14;
  *(undefined4 *)(param_1 + 0x58) = uVar16;
  *(undefined4 *)(param_1 + 0x5c) = uVar17;
  uVar9 = param_2[7];
  uVar12 = param_2[8];
  uVar14 = param_2[9];
  uVar16 = param_2[10];
  uVar17 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x60) = param_2[6];
  *(undefined4 *)(param_1 + 100) = uVar9;
  *(undefined4 *)(param_1 + 0x68) = uVar12;
  *(undefined4 *)(param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 0x70) = uVar16;
  *(undefined4 *)(param_1 + 0x74) = uVar17;
  iVar15 = 0;
  uVar9 = param_2[0xd];
  *(undefined4 *)(param_1 + 0x78) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x7c) = uVar9;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0x7c) + param_6 + 8;
  if (0 < *(int *)(param_1 + 0xe14)) {
    do {
      iVar6 = iVar15 * 5 + param_3;
      iVar13 = param_1 + iVar15 * 0x20;
      FUN_00304380(iVar13 + 0x1f28);
      uVar3 = 0;
      if (*(byte *)(iVar6 + 2) != 0) {
        uVar3 = *(byte *)(iVar6 + 2) & 1;
      }
      if (uVar3 == 1) {
        *(uint *)(DAT_00487070 + iVar13) = param_1 + (uint)*(byte *)(iVar6 + 3) * 0x220 + 0xe1c;
      }
      if (uVar3 < *(byte *)(iVar6 + 2)) {
        do {
          iVar7 = iVar6 + uVar3;
          iVar10 = iVar13 + uVar3 * 4;
          *(uint *)(iVar10 + 0x1f20) = param_1 + (uint)*(byte *)(iVar7 + 3) * 0x220 + 0xe1c;
          uVar3 = uVar3 + 2;
          *(uint *)(iVar10 + 0x1f24) = param_1 + (uint)*(byte *)(iVar7 + 4) * 0x220 + 0xe1c;
        } while ((int)uVar3 < (int)(uint)*(byte *)(iVar6 + 2));
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0xe14));
  }
  iVar15 = FUN_00309474(*(undefined1 *)(param_1 + 0x48));
  if ((iVar15 == 3) && (iVar15 = 0, 0 < *(int *)(param_1 + 0xe18))) {
    do {
      iVar6 = param_1 + iVar15 * 0x220;
      FUN_0034338c(iVar6 + 0xe20,param_4 + iVar15 * 0x26,0x26);
      FUN_0035fb94(iVar6 + 0xe46,param_5 + iVar15 * 6);
      *(undefined2 *)(iVar6 + 0x1030) = *(undefined2 *)(iVar6 + 0xe40);
      *(undefined2 *)(iVar6 + 0x1032) = *(undefined2 *)(iVar6 + 0xe42);
      *(undefined2 *)(iVar6 + 0x1034) = *(undefined2 *)(iVar6 + 0xe44);
      if (*(char *)(param_1 + 0x49) != '\0') {
        *(undefined2 *)(iVar6 + 0x1036) = *(undefined2 *)(iVar6 + 0xe46);
        *(undefined2 *)(iVar6 + 0x1038) = *(undefined2 *)(iVar6 + 0xe48);
        *(undefined2 *)(iVar6 + 0x103a) = *(undefined2 *)(iVar6 + 0xe4a);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0xe18));
  }
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xe0c) + 8);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  iVar15 = FUN_003093a4(param_1,&local_24,&local_28,&local_2c);
  if (iVar15 == 0) {
    return 0;
  }
  uVar12 = FUN_00339384(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0xbc) = uVar12;
  uVar3 = *(uint *)(param_1 + 0x58);
  bVar2 = true;
  *(uint *)(param_1 + 0xc0) = uVar3 - 1;
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x5c);
  if (*(uint *)(param_1 + 0x5c) < 0x2001) {
    uVar4 = FUN_00339384(uVar9);
    *(uint *)(param_1 + 0x9c) = uVar4;
    if (3 < uVar4) {
      if (0x20 < uVar4) {
        uVar4 = 0x20;
      }
      *(uint *)(param_1 + 0x9c) = uVar4;
      *(uint *)(param_1 + 0xa0) = uVar4 - 1;
      *(uint *)(param_1 + 0x94) = uVar4 - 1;
      *(undefined4 *)(param_1 + 0xb8) = local_24;
      *(undefined4 *)(param_1 + 0xac) = local_24;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      if (*(char *)(param_1 + 0x86) == '\0') {
        *(uint *)(param_1 + 0xa4) = uVar4;
        uVar3 = uVar4;
      }
      else {
        *(uint *)(param_1 + 0xa4) = uVar3;
      }
      *(uint *)(param_1 + 0xb0) = uVar3;
      goto LAB_00486ed4;
    }
  }
  bVar2 = false;
LAB_00486ed4:
  if (!bVar2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      FUN_00309638(param_1);
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      if (*(char *)(param_1 + 0x8a) != '\0') break;
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0xa0));
  }
  uVar9 = DAT_00487074;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0xe18)) {
    do {
      iVar6 = param_1 + iVar15 * 0x220;
      uVar12 = FUN_0030c6e0();
      local_40 = iVar6 + 0xe1c;
      iVar13 = FUN_00308d4c(uVar12,1,uVar9,DAT_00487078);
      if (iVar13 == 0) {
        iVar6 = 0;
        if (0 < iVar15) {
          do {
            iVar13 = param_1 + iVar6 * 0x220;
            if (*(int *)(iVar13 + 0xe4c) != 0) {
              FUN_0030a40c();
              *(undefined4 *)(iVar13 + 0xe4c) = 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar15);
        }
        iVar15 = 0;
        if (*(int *)(param_1 + 0xe18) < 1) {
          return 0;
        }
        do {
          iVar6 = param_1 + iVar15 * 0x220;
          if (*(int *)(iVar6 + 0xe1c) != 0) {
            FUN_00309208(*(undefined4 *)(param_1 + 0xe0c));
            *(undefined4 *)(iVar6 + 0xe1c) = 0;
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(param_1 + 0xe18));
        return 0;
      }
      FUN_00309ea4(iVar13,(int)*(char *)(param_1 + 0x26));
      *(int *)(iVar6 + 0xe4c) = iVar13;
      iVar13 = FUN_00309474(*(undefined1 *)(param_1 + 0x48));
      if (iVar13 == 3) {
        uVar11 = *(undefined2 *)(iVar6 + 0xe20);
        puVar8 = &uStack_42;
        iVar13 = 8;
        puVar5 = (undefined2 *)(iVar6 + 0xe1e);
        do {
          uVar1 = puVar5[2];
          puVar8[1] = uVar11;
          uVar11 = puVar5[3];
          iVar13 = iVar13 + -1;
          puVar8 = puVar8 + 2;
          *puVar8 = uVar1;
          puVar5 = puVar5 + 2;
        } while (iVar13 != 0);
        FUN_00493568(*(undefined4 *)(iVar6 + 0xe4c),0,&local_40);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 0xe18));
  }
  return 1;
}
