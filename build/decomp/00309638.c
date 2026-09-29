// OoT3D decomp @ 00309638  name=FUN_00309638  size=512

void FUN_00309638(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  if (*(char *)(param_1 + 0x8a) == '\0') {
    uVar9 = 0;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    iVar2 = *(int *)(param_1 + 0xac);
    if (iVar2 == *(int *)(param_1 + 0xc0)) {
      uVar10 = *(undefined4 *)(param_1 + 0x6c);
      uVar11 = *(undefined4 *)(param_1 + 0x68);
      if (*(char *)(param_1 + 0x49) == '\0') {
        uVar9 = 1;
      }
    }
    else {
      uVar10 = *(undefined4 *)(param_1 + 0x5c);
      uVar11 = *(undefined4 *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(param_1 + 0x5c);
    bVar1 = *(byte *)(param_1 + 0x4a);
    iVar8 = *(int *)(param_1 + 0xc4);
    iVar3 = FUN_00309e5c(param_1 + 0x108);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_002c2ff8();
      *puVar4 = DAT_00309838;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[0x11] = 0;
      puVar4[0x13] = 0xffffffff;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x17) = 0;
      puVar4[0x18] = 0;
      puVar4[0x19] = 0;
    }
    puVar4[6] = param_1;
    puVar4[7] = *(undefined4 *)(param_1 + 0xe10);
    puVar4[0x10] = (uint)*(byte *)(param_1 + 0x4a);
    puVar4[0x11] = iVar2 * iVar7 * (uint)bVar1 + iVar8;
    puVar4[0x12] = uVar10;
    puVar4[0x14] = uVar11;
    puVar4[0x13] = *(undefined4 *)(param_1 + 0xa8);
    puVar4[0x15] = *(undefined4 *)(param_1 + 0x98);
    puVar4[0x16] = *(undefined4 *)(param_1 + 0xac);
    *(undefined1 *)((int)puVar4 + 0x5d) = uVar9;
    if ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xbc)) &&
       (*(char *)(param_1 + 0x49) != '\0')) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    *(undefined1 *)(puVar4 + 0x17) = uVar9;
    puVar4[5] = param_1;
    uVar5 = 0;
    if (*(byte *)(param_1 + 0x4a) != 0) {
      uVar5 = *(byte *)(param_1 + 0x4a) & 1;
    }
    if (uVar5 == 1) {
      puVar4[8] = *(undefined4 *)(param_1 + 0xe1c);
    }
    if (uVar5 < *(byte *)(param_1 + 0x4a)) {
      do {
        iVar2 = param_1 + uVar5 * 0x220;
        uVar6 = uVar5 + 2;
        puVar4[uVar5 + 8] = *(undefined4 *)(iVar2 + 0xe1c);
        puVar4[uVar5 + 9] = *(undefined4 *)(iVar2 + 0x103c);
        uVar5 = uVar6;
      } while ((int)uVar6 < (int)(uint)*(byte *)(param_1 + 0x4a));
    }
    FUN_0030cab0(param_1 + 0xfc,param_1 + 0x100,puVar4 + 0x18);
    uVar10 = FUN_0030c8bc();
    if (*(char *)(param_1 + 9) == '\0') {
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
    }
    FUN_0030ab9c(uVar10,puVar4,uVar11);
    iVar2 = *(int *)(param_1 + 0xac) + 1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (*(int *)(param_1 + 0xc0) < iVar2) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        *(undefined1 *)(param_1 + 0x8a) = 1;
        return;
      }
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xbc);
    }
    iVar2 = *(int *)(param_1 + 0xa8) + 1;
    *(int *)(param_1 + 0xa8) = iVar2;
    if (*(int *)(param_1 + 0xa4) <= iVar2) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x9c);
    }
  }
  return;
}
