// OoT3D decomp @ 0048b2cc  name=FUN_0048b2cc  size=588

undefined4 FUN_0048b2cc(int param_1,undefined1 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;

  if (*(char *)(param_1 + 9) != '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)(param_1 + 0xb) = param_2;
  local_28 = FUN_0035010c(0x60000);
  if (local_28 != 0) {
    FUN_0032b184(local_28,0x60000);
    iVar7 = 0;
    do {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_44 = 0x1000200;
      local_40 = CONCAT22((short)DAT_0048b51c,(short)DAT_0048b518);
      local_4c = 0x60000;
      local_48 = 1;
      iVar8 = param_1 + iVar7 * 0xa8;
      FUN_0032b1c4(iVar8 + 0x1ec,&local_4c,local_28,0);
      FUN_0032b1c4(iVar8 + 0x240,&local_4c,local_28,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    FUN_0034fc6c(local_28);
    FUN_00498f34();
    uVar2 = FUN_004932fc();
    uVar3 = FUN_004932f0();
    FUN_00328428(param_1 + 0x17c,uVar2,uVar3,0);
    puVar6 = (undefined4 *)(param_1 + 0x1d4);
    do {
      uVar2 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = 1;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    iVar7 = FUN_0035010c(0x1000,uVar2);
    *(int *)(param_1 + 0x178) = iVar7;
    if (iVar7 != 0) {
      FUN_004959b0(DAT_0048b520,DAT_0048b524);
      FUN_004959dc(DAT_0048b520,DAT_0048b524);
      FUN_00495a30(DAT_0048b528,DAT_0048b524);
      FUN_004934c8();
      do {
        bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x16c));
      } while (!bVar1);
      *(undefined4 *)(param_1 + 0x16c) = 1;
      *(undefined4 *)(param_1 + 0x170) = 0;
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined1 *)(param_1 + 8) = 2;
      *(undefined1 *)(param_1 + 10) = 0;
      local_3c = 4;
      local_38 = DAT_0048b530;
      local_34 = DAT_0048b534;
      local_30 = DAT_0048b538;
      local_4c = 0x14;
      local_48 = 0xfffffffe;
      local_44 = 0;
      local_2c = param_1;
      uVar4 = FUN_0030dbf8(param_1 + 0x164,&local_3c,DAT_0048b52c,&local_2c,
                           *(int *)(param_1 + 0x178) + 0x1000);
      uVar5 = uVar4 >> 0x1b;
      if ((uVar4 & 0x80000000) != 0) {
        uVar5 = uVar5 - 0x20;
      }
      if ((uVar5 == 0xfffffff9 || uVar5 == 0) || uVar5 == 1) {
        return 1;
      }
      FUN_003351b4();
      return 1;
    }
  }
  FUN_002e69d0(param_1);
  return 0;
}
