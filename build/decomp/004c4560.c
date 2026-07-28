// OoT3D decomp @ 004c4560  name=FUN_004c4560  size=712

/* WARNING: Removing unreachable block (ram,0x004c7c0c) */

void FUN_004c4560(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_144 [192];
  undefined1 auStack_84 [72];
  uint auStack_3c [4];
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  iVar1 = iRam004c478c;
  uVar9 = 0;
  *(uint *)(iRam004c478c + 0x3c) = (uint)*(byte *)(param_1 + 0x1b4);
  *(uint *)(iVar1 + 0x40) = (uint)*(byte *)(param_1 + 0x1b5);
  *(undefined1 *)(*(int *)(param_1 + 0x27c) + 0xad) = 1;
  iVar4 = func_0x002bb71c(*(undefined4 *)(param_1 + 0x27c));
  puVar3 = puRam004c4794;
  iVar2 = iRam004c4790;
  if (iVar4 != 0) {
    do {
      auStack_3c[0] = *puVar3;
      auStack_3c[1] = puVar3[1];
      auStack_3c[2] = puVar3[2];
      auStack_3c[3] = puVar3[3];
      uStack_2c = puVar3[4];
      uStack_28 = puVar3[5];
      uStack_24 = puVar3[6];
      uStack_20 = puVar3[7];
      puVar5 = *(uint **)(iVar2 + 4);
      uVar8 = auStack_3c[(int)puVar5];
      bVar11 = uVar8 == uVar9;
      puVar6 = puVar5;
      if (!bVar11) {
        puVar6 = auStack_3c + (int)puVar5;
        uVar8 = auStack_3c[(int)puVar5 + 2];
      }
      bVar12 = uVar8 == uVar9;
      if (!bVar11 && !bVar12) {
        uVar8 = puVar6[4];
      }
      if (((bVar11 || bVar12) || uVar8 == uVar9) || (puVar6[6] == uVar9)) {
        FUN_002b9bf8(param_1,uVar9,1);
      }
      else {
        FUN_002b9bf8(param_1,uVar9,0);
      }
      uVar9 = uVar9 + 1;
      uVar8 = func_0x002bb71c(*(undefined4 *)(param_1 + 0x27c));
    } while (uVar9 < uVar8);
  }
  if ((((*(char *)(param_1 + 0x1749) == '\x01') && (*(int *)(iVar2 + 4) != 0)) &&
      (*(char *)(param_1 + 0x1ac) == '\x06')) && (*(int *)(param_1 + 0x121c) < iRam004c4798)) {
    FUN_002b9bf8(param_1,0x1a,0);
  }
  func_0x004c71dc(param_1);
  iVar4 = iRam004c479c;
  iVar7 = *(int *)(param_1 + 0x1bc);
  if (*(int *)(iVar1 + 0x40) == 10) {
    iVar7 = iVar7 + *(char *)(param_1 + 0x1a6) * 0x10;
  }
  else if (((*(char *)(param_1 + 0x1b5) == '\b') && (0x40000000 < *(int *)(param_1 + 0x6c))) &&
          ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0)) {
    iVar7 = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 0x40) = 9;
    iVar7 = iVar4 + iVar7 * 4;
  }
  FUN_002b9bf8(param_1,*(undefined4 *)(iVar7 + *(int *)(iVar1 + 0x38) * 4),1);
  iVar1 = iRam004c47a0;
  if (*(char *)(param_1 + 0x1b5) == '\v' || *(char *)(param_1 + 0x1b5) == '\f') {
    FUN_002b9bf8(param_1,*(undefined4 *)(iRam004c47a0 + *(int *)(iVar2 + 4) * 0x30),1);
  }
  func_0x004c70c4(param_1);
  if (*(char *)(param_1 + 0x1b5) == '\v' || *(char *)(param_1 + 0x1b5) == '\f') {
    FUN_002b9bf8(param_1,*(undefined4 *)(iVar1 + *(int *)(iVar2 + 4) * 0x30),1);
  }
  uVar9 = *(uint *)(iRam004c47a4 + param_1);
  bVar11 = (uVar9 & 2) != 0;
  if (bVar11) {
    uVar9 = (uint)*(byte *)(param_1 + 0x1749);
  }
  if (bVar11 && uVar9 != 2) {
    func_0x00371738(auStack_84,uRam004c7c38,0x6c);
    func_0x00371738(auStack_144,uRam004c7c3c,0xc0);
    uVar9 = 0;
    if (*(int *)(iRam004c7c40 + 4) == 0) {
      uVar8 = 0x30;
      puVar10 = auStack_144;
    }
    else {
      uVar8 = 0x1b;
      puVar10 = auStack_84;
    }
    if (uVar8 != 0) {
      do {
        if (*(int *)(puVar10 + uVar9 * 4) != -1) {
          func_0x0036932c(*(undefined4 *)(param_1 + 0x27c));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar8);
    }
    return;
  }
  return;
}

