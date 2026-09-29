// OoT3D decomp @ 002f43f8  name=FUN_002f43f8  size=732

void FUN_002f43f8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;

  uVar2 = DAT_002f46fc;
  uVar4 = DAT_002f46f8;
  iVar1 = DAT_002f46f4;
  local_20 = 0;
  uStack_1c = 0;
  local_38[0] = *DAT_002f46f0;
  local_38[1] = DAT_002f46f0[1];
  local_38[2] = DAT_002f46f0[2];
  local_38[3] = DAT_002f46f0[3];
  uStack_28 = DAT_002f46f0[4];
  uStack_24 = DAT_002f46f0[5];
  local_40 = DAT_002f46f0[-0x4a];
  local_3c = DAT_002f46f0[-0x49];
  puVar7 = (undefined4 *)(DAT_002f46f4 + 0x6c);
  uVar3 = *puVar7;
  switch(*(undefined4 *)(DAT_002f46f4 + 8)) {
  case 0:
  case 1:
    FUN_002f9430(uVar3,&local_20,1,0);
    local_20 = uVar2;
    FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,0);
    FUN_002fc40c(*puVar7,local_38 + *(int *)(iVar1 + 8) * 2,&local_40,1,0);
    break;
  case 2:
    if (*(int *)(DAT_002f46f4 + 0x40) != 0) {
      FUN_002f9430(uVar3,&local_20,1,0);
      local_20 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,0);
      FUN_002fc40c(*puVar7,local_38 + *(int *)(iVar1 + 0x20) * 2,&local_40,1,0);
      break;
    }
    FUN_002f9430(*(undefined4 *)(DAT_002f46f4 + 0x70),&local_20,1,0);
    local_20 = uVar2;
    FUN_002f9430(*puVar7,&local_20,1,0);
    puVar7 = local_38 + *(int *)(iVar1 + 0x20) * 2;
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
    goto LAB_002f4520;
  case 3:
    FUN_002f9430(*(undefined4 *)(DAT_002f46f4 + 0x70),&local_20,1,0);
    local_20 = uVar2;
    FUN_002f9430(*puVar7,&local_20,1,0);
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
    puVar7 = local_38;
LAB_002f4520:
    FUN_002fc40c(uVar4,puVar7,&local_40,1,0);
    break;
  case 4:
    local_20 = DAT_002f46fc;
    FUN_002f9430(uVar3,&local_20,1,0);
    iVar6 = 0;
    do {
      if (iVar6 - 0x10U < 0x12) {
        local_20 = uVar4;
      }
      else {
        local_20 = uVar2;
      }
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x3e);
    break;
  case 5:
    local_20 = DAT_002f46fc;
    FUN_002f9430(uVar3,&local_20,1,0);
    iVar6 = 0;
    do {
      uVar5 = iVar6 - 0x30;
      bVar8 = 8 < uVar5;
      if (bVar8) {
        uVar5 = iVar6 - 0x10;
      }
      if (bVar8 && 9 < uVar5) {
        local_20 = uVar2;
      }
      else {
        local_20 = uVar4;
      }
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x3e);
    break;
  case 6:
    local_20 = DAT_002f46fc;
    FUN_002f9430(uVar3,&local_20,1,0);
    iVar6 = 0;
    do {
      if (iVar6 - 0x10U < 10) {
        local_20 = uVar4;
      }
      else {
        local_20 = uVar2;
      }
      if (iVar6 - 0x39U < 3) {
        local_20 = uVar4;
      }
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x3e);
  }
  if (*(int *)(iVar1 + 8) < 4) {
    iVar6 = 0x10;
    do {
      local_20 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x70),&local_20,1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x3e);
  }
  return;
}
