// OoT3D decomp @ 00406d34  name=FUN_00406d34  size=560

undefined4 FUN_00406d34(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 local_48 [8];
  undefined2 auStack_38 [8];
  undefined4 local_28;
  int local_24 [2];

  local_28 = *(undefined4 *)(param_1 + 0x1c);
  FUN_0030a5ec(local_24);
  iVar2 = FUN_00405630(&local_28,DAT_00406f64,0x4000);
  if (iVar2 != 0) {
    iVar2 = FUN_0030c4f4();
    iVar3 = FUN_0030c20c(iVar2,0x73);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 0x180);
    *(undefined1 *)(iVar3 + 4) = 0x29;
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_1 + 0x18);
    iVar4 = FUN_0040df3c(&local_28,iVar3 + 0x14);
    if (iVar4 != 0) {
      uVar5 = 0;
      if (local_24[0] != 0) {
        uVar5 = FUN_0040da5c();
      }
      *(undefined4 *)(iVar3 + 0x1c0) = uVar5;
      uVar5 = FUN_0040df14(&local_28);
      *(undefined4 *)(iVar3 + 0x1c4) = uVar5;
      uVar5 = FUN_0040df64(&local_28);
      *(undefined4 *)(iVar3 + 0x1c8) = uVar5;
      uVar11 = 0;
      if (*(int *)(iVar3 + 0x1c4) != 0) {
        do {
          iVar4 = FUN_0040df8c(&local_28,uVar11 * 5 + iVar3 + 0x4c,uVar11);
          if (iVar4 == 0) {
            return 0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(iVar3 + 0x1c4));
      }
      iVar4 = FUN_00309474(*(undefined1 *)(iVar3 + 0x14));
      if (iVar4 == 3) {
        uVar11 = 0;
        if (*(int *)(iVar3 + 0x1c8) != 0) {
          do {
            iVar4 = FUN_0040dfb4(&local_28,iVar3 + uVar11 * 0x26 + 0x60,iVar3 + uVar11 * 6 + 400,
                                 uVar11);
            if (iVar4 == 0) {
              return 0;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(iVar3 + 0x1c8));
        }
        uVar11 = *(uint *)(param_1 + 0x24);
        if (uVar11 != 0) {
          uVar6 = uVar11;
          if ((*(char *)(param_1 + 0x20) != '\0') &&
             (uVar6 = 0, *(char *)(param_1 + 0x20) == '\x01')) {
            uVar6 = (uint)((ulonglong)(uVar11 * *(int *)(iVar3 + 0x18)) * (ulonglong)DAT_00406f68 >>
                          0x26);
          }
          uVar5 = FUN_00368d94(uVar6,*(undefined4 *)(iVar3 + 0x2c));
          iVar4 = FUN_0040571c(&local_28,auStack_38,local_48,uVar5,*(undefined4 *)(iVar3 + 0x1c8));
          if (iVar4 == 0) {
            return 0;
          }
          iVar4 = *(int *)(iVar3 + 0x1c8);
          if (iVar4 != 0) {
            puVar9 = local_48;
            puVar10 = (undefined2 *)(iVar3 + 0x82);
            puVar7 = (undefined2 *)(iVar3 + 0x84);
            puVar8 = auStack_38;
            do {
              *puVar10 = *puVar8;
              uVar1 = *puVar9;
              puVar10 = puVar10 + 0x13;
              iVar4 = iVar4 + -1;
              puVar9 = puVar9 + 1;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 0x13;
              puVar8 = puVar8 + 1;
            } while (iVar4 != 0);
          }
        }
      }
      FUN_0030c1e8(iVar2,iVar3);
      FUN_0030c0dc(iVar2,1);
      return 1;
    }
  }
  return 0;
}
