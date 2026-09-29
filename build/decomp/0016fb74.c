// OoT3D decomp @ 0016fb74  name=FUN_0016fb74  size=1168

void FUN_0016fb74(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];

  uVar8 = DAT_0016fedc;
  iVar7 = DAT_0016fed8;
  if (((*(uint *)(DAT_0016fed8 + 0x24) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016fed8 + 0x24), puVar2 = DAT_0016fee8, uVar1 = DAT_0016fee4,
     iVar6 != 0)) {
    *DAT_0016fee8 = DAT_0016fee0;
    puVar2[1] = uVar1;
    puVar2[2] = uVar8;
  }
  uVar1 = DAT_0016feec;
  if (((*(uint *)(iVar7 + 0x20) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016fef0), puVar2 = DAT_0016fef4, iVar6 != 0)) {
    *DAT_0016fef4 = uVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar8;
  }
  if (((*(uint *)(iVar7 + 0x1c) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016fef8), puVar2 = DAT_0016ff00, uVar3 = DAT_0016fefc, iVar6 != 0))
  {
    *DAT_0016ff00 = uVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar8;
  }
  uVar3 = DAT_0016ff04;
  if (((*(uint *)(iVar7 + 0x18) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016ff08), puVar2 = DAT_0016ff0c, iVar6 != 0)) {
    *DAT_0016ff0c = uVar3;
    puVar2[1] = uVar1;
    puVar2[2] = uVar8;
  }
  uVar1 = DAT_0016ff10;
  if (((*(uint *)(iVar7 + 0x14) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016ff14), puVar2 = DAT_0016ff18, iVar6 != 0)) {
    *DAT_0016ff18 = uVar8;
    puVar2[1] = uVar1;
    puVar2[2] = uVar8;
  }
  uVar4 = DAT_0016ff1c;
  if (((*(uint *)(iVar7 + 0x10) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016ff20), puVar2 = DAT_0016ff28, uVar5 = DAT_0016ff24, iVar6 != 0))
  {
    *DAT_0016ff28 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
  }
  if (((*(uint *)(iVar7 + 0xc) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016ff2c), puVar2 = DAT_0016ff34, uVar5 = DAT_0016ff30, iVar6 != 0))
  {
    *DAT_0016ff34 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
  }
  if (((*(uint *)(iVar7 + 8) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0016ff38), puVar2 = DAT_0016ff3c, iVar6 != 0)) {
    *DAT_0016ff3c = uVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar8;
  }
  if (((*(uint *)(iVar7 + 4) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_0016ff40), puVar2 = DAT_0016ff44, iVar7 != 0)) {
    *DAT_0016ff44 = uVar8;
    puVar2[1] = uVar8;
    puVar2[2] = uVar8;
  }
  if (param_2 == 0xd) {
    FUN_003735ac(param_4 + 0xb28,param_3,DAT_0016ff18);
    FUN_003735ac(param_4 + 0xb1c,param_3,DAT_0016ff28);
    FUN_003735ac(param_4 + 0xb40,param_3,DAT_0016ff34);
    FUN_003735ac(param_4 + 0xb34,param_3,DAT_0016ff3c);
    FUN_0035479c(param_4 + 0xadc,param_4 + 0xb1c,param_4 + 0xb28,param_4 + 0xb34,param_4 + 0xb40);
    FUN_003735ac(auStack_54,param_3,DAT_0016ff00);
    FUN_003735ac(auStack_60,param_3,DAT_0016ff0c);
    if (*(int *)(param_4 + 0xa48) == 9) {
      if (*(int *)(param_4 + 0x1e0) < DAT_0016ff48) {
        FUN_00362384(*(undefined4 *)(param_4 + 0xa80));
        FUN_0035eb74();
      }
      else if (*(int *)(param_4 + 0x1e0) < DAT_001700b8) {
        uVar8 = FUN_00362384(*(undefined4 *)(param_4 + 0xa80));
        FUN_003620f0(uVar8,auStack_54,auStack_60);
      }
    }
  }
  else {
    FUN_0034cbb4(param_4,param_3,param_2,3,DAT_0016fef4,6,DAT_0016fef4);
  }
  if (param_2 == 3) {
    FUN_003735ac(param_4 + 0xb68,param_3,DAT_0016fef4);
  }
  else if (param_2 == 6) {
    FUN_003735ac(param_4 + 0xb5c,param_3,DAT_0016fef4);
  }
  if (*(short *)(DAT_001700bc + param_4) != 0) {
    switch(param_2) {
    case 0:
      iVar7 = 5;
      break;
    default:
      return;
    case 2:
      iVar7 = 8;
      break;
    case 5:
      iVar7 = 7;
      break;
    case 7:
      iVar7 = 2;
      break;
    case 9:
      iVar7 = 4;
      break;
    case 0xc:
      iVar7 = 3;
      break;
    case 0xd:
      iVar7 = 6;
      break;
    case 0xe:
      iVar7 = 1;
      break;
    case 0xf:
      iVar7 = 0;
    }
    FUN_003735ac(param_4 + iVar7 * 0xc + 0xb74,param_3,DAT_0016ff44);
  }
  return;
}
