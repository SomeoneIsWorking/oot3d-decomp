// OoT3D decomp @ 00443184  name=FUN_00443184  size=596

void FUN_00443184(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_00443400;
  iVar1 = DAT_004433f4;
  uVar3 = *(undefined4 *)(DAT_004433f4 + 0x14);
  switch(*(undefined4 *)(DAT_004433f4 + 0x38)) {
  case 1:
  case 2:
    FUN_00343270();
    uVar3 = DAT_00443408;
    uVar2 = DAT_00443404;
    iVar4 = 0x26;
    do {
      local_1c = uVar2;
      local_18 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x32);
    local_20 = DAT_0044340c;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,6);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,7);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,8);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,0xc);
    break;
  case 3:
    local_1c = DAT_004433f8;
    local_18 = DAT_004433fc;
    FUN_002f9430(uVar3,&local_1c,1,0xc);
    iVar4 = 0x26;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x29);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,0xc);
    return;
  case 4:
    local_1c = DAT_004433f8;
    local_18 = DAT_004433fc;
    FUN_002f9430(uVar3,&local_1c,1,8);
    iVar4 = 0x2f;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x32);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,8);
    return;
  case 5:
    local_1c = DAT_004433f8;
    local_18 = DAT_004433fc;
    FUN_002f9430(uVar3,&local_1c,1,7);
    iVar4 = 0x2c;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x2f);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,7);
    return;
  case 6:
    local_1c = DAT_004433f8;
    local_18 = DAT_004433fc;
    FUN_002f9430(uVar3,&local_1c,1,6);
    iVar4 = 0x29;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x2c);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x14),&local_20,1,6);
    return;
  }
  return;
}
