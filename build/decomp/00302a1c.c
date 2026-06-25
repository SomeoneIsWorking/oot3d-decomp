// OoT3D decomp @ 00302a1c  name=FUN_00302a1c  size=356

void FUN_00302a1c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  puVar3 = DAT_00302b88;
  puVar2 = DAT_00302b84;
  iVar1 = DAT_00302b80;
  iVar8 = *(int *)(DAT_00302b80 + 0x9c);
  puVar5 = (undefined4 *)*DAT_00302b84;
  uVar7 = (int)puVar5 - *(int *)(iVar8 + 4);
  bVar9 = (uVar7 & 8) != 0;
  if (bVar9) {
    puVar5 = (undefined4 *)(uVar7 + 0x18);
  }
  *(uint *)(iVar8 + 0xc) = uVar7;
  if (bVar9) {
    *(undefined4 **)(iVar8 + 0xc) = puVar5;
  }
  else {
    *(uint *)(iVar8 + 0xc) = uVar7 + 0x20;
    if (puVar5 < (undefined4 *)*puVar3) {
      *puVar5 = 0;
      puVar5[1] = DAT_00302b8c;
      *puVar2 = puVar5 + 2;
    }
  }
  uVar4 = DAT_00302b90;
  puVar5 = (undefined4 *)*puVar2;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
    *puVar2 = puVar5;
  }
  uVar4 = DAT_00302b94;
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = 1;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
    *puVar2 = puVar5;
  }
  if (puVar5 < (undefined4 *)*puVar3) {
    *puVar5 = DAT_00302b98;
    puVar5[1] = DAT_00302b9c;
    *puVar2 = puVar5 + 2;
  }
  puVar6 = (undefined *)(*(int *)(iVar8 + 0x18) + *(int *)(iVar8 + 0x20) * 0x1c);
  *puVar6 = 1;
  *(int *)(puVar6 + 4) = *(int *)(iVar8 + 4) + *(int *)(iVar8 + 0x14);
  *(int *)(puVar6 + 8) = *(int *)(iVar8 + 0xc) - *(int *)(iVar8 + 0x14);
  uVar7 = *(uint *)(puVar6 + 0xc);
  *(uint *)(puVar6 + 0xc) = uVar7 & 0xfffffffd;
  if (*(char *)(iVar8 + 0x35) != '\0') {
    *(uint *)(puVar6 + 0xc) = uVar7 & 0xfffffffd | 1;
  }
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar8 + 0xc);
  FUN_0030e038();
  *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
  if (((*(int *)(iVar1 + 0xa0) == iVar8) && (*(char *)(iVar1 + 0x12) != '\0')) &&
     (*(char *)(iVar1 + 0x11) == '\0')) {
    *(undefined *)(iVar1 + 0x11) = 1;
    FUN_003027dc();
  }
  FUN_0030dfd8();
  return;
}

