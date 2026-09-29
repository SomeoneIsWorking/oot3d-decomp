// OoT3D decomp @ 00442a94  name=FUN_00442a94  size=716

void FUN_00442a94(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_00442d88;
  iVar1 = DAT_00442d7c;
  uVar3 = *(undefined4 *)(DAT_00442d7c + 0x10);
  switch(*(undefined4 *)(DAT_00442d7c + 0x38)) {
  case 1:
  case 2:
    FUN_00343270();
    uVar3 = DAT_00442d90;
    uVar2 = DAT_00442d8c;
    iVar4 = 0x12;
    do {
      local_1c = uVar2;
      local_18 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    local_20 = DAT_00442d94;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,4);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,5);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,6);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,10);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,0xb);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,9);
    break;
  case 3:
    local_1c = DAT_00442d80;
    local_18 = DAT_00442d84;
    FUN_002f9430(uVar3,&local_1c,1,10);
    FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,0xb);
    FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,9);
    iVar4 = 0x12;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x15);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,10);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,0xb);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,9);
    return;
  case 4:
    local_1c = DAT_00442d80;
    local_18 = DAT_00442d84;
    FUN_002f9430(uVar3,&local_1c,1,6);
    iVar4 = 0x1b;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1e);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,6);
    return;
  case 5:
    local_1c = DAT_00442d80;
    local_18 = DAT_00442d84;
    FUN_002f9430(uVar3,&local_1c,1,5);
    iVar4 = 0x18;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,5);
    return;
  case 6:
    local_1c = DAT_00442d80;
    local_18 = DAT_00442d84;
    FUN_002f9430(uVar3,&local_1c,1,4);
    iVar4 = 0x15;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x10),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x18);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x10),&local_20,1,4);
    return;
  }
  return;
}
