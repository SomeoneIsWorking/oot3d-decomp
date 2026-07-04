// OoT3D decomp @ 00416208  name=FUN_00416208  size=644

void FUN_00416208(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 local_5c;
  undefined2 *local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar3 = DAT_0041649c;
  uVar1 = DAT_00416494;
  iVar9 = DAT_00416490;
  *DAT_0041648c = (int)&local_5c;
  iVar4 = DAT_004164a0;
  puVar2 = DAT_00416498;
  local_5c = 0;
  local_58 = (undefined2 *)0x0;
  local_54 = (undefined2 *)0x0;
  local_50 = (undefined2 *)0x0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_28 = iVar9 + 0x34;
  local_2c = iVar9 + 0x68;
  local_30 = iVar9 + 0x9c;
  local_34 = iVar9 + 0xd0;
  local_38 = iVar9 + 0x104;
  local_3c = iVar9 + 0x138;
  local_40 = iVar9 + 0x16c;
  local_44 = iVar9 + 0x1a0;
  puVar10 = DAT_00416498 + 0x2002;
  do {
    uVar11 = *(undefined4 *)(iVar9 + 0x2c);
    iVar6 = FUN_0035010c(uVar11);
    FUN_00343280(iVar6,uVar11);
    *(undefined1 *)(iVar6 + 0x100) = *(undefined1 *)(iVar9 + 0x30);
    FUN_00416f60(iVar6,*(undefined4 *)(iVar9 + 0x18),&local_5c);
    uVar11 = DAT_004164a4;
    while (*(char *)(iVar6 + 0x101) != '\0') {
      local_58 = DAT_00416498 + 2;
      *DAT_00416498 = (short)uVar11;
      puVar2[0x2002] = (short)uVar1;
      local_5c = 0x4000;
      uVar8 = 0x4000;
      local_54 = local_58;
      local_50 = puVar10;
      if ((*DAT_004164a8 & 1) == 0) {
        uVar12 = FUN_003679b4(DAT_004164a8);
        uVar8 = (int)((ulonglong)uVar12 >> 0x20);
        if ((int)uVar12 != 0) {
          FUN_0036788c(DAT_004164ac);
          uVar8 = DAT_004164b4;
        }
      }
      uVar5 = DAT_004164ac;
      FUN_004198f0(DAT_004164ac,uVar8);
      FUN_00416f48(iVar6);
      FUN_00306f04();
      FUN_00301a30();
      *(bool *)(iVar4 + 0xa0) = *(char *)(iVar3 + 0xe) != '\0';
      FUN_00417648(iVar4);
      FUN_00417014(iVar6);
      FUN_00418b88(uVar5,iVar6);
      FUN_0031bebc(uVar5);
      FUN_0031bd30(uVar5);
      FUN_0031bb84(uVar5);
    }
    iVar7 = *(int *)(iVar6 + 0xc);
    iVar9 = DAT_00416490;
    if ((((((iVar7 != DAT_004164b8) && (iVar9 = local_28, iVar7 != DAT_004164bc)) &&
          (iVar9 = local_2c, iVar7 != DAT_004164c0)) &&
         ((iVar9 = local_30, iVar7 != DAT_004164c4 && (iVar9 = local_34, iVar7 != DAT_004164c8))))
        && ((iVar9 = local_38, iVar7 != DAT_004164cc &&
            ((iVar9 = local_3c, iVar7 != DAT_004164d0 && (iVar9 = local_40, iVar7 != DAT_004164d4)))
            ))) && (iVar9 = local_44, iVar7 != DAT_004164d8)) {
      iVar9 = 0;
    }
    FUN_0041a7f0(iVar6);
    FUN_0034fc6c(iVar6);
  } while (iVar9 != 0);
  return;
}

