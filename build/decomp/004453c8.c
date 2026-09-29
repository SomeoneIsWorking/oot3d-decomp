// OoT3D decomp @ 004453c8  name=FUN_004453c8  size=644

void FUN_004453c8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_00445674;
  iVar1 = DAT_00445668;
  uVar3 = *(undefined4 *)(DAT_00445668 + 0x24);
  switch(*(undefined4 *)(DAT_00445668 + 0x34)) {
  case 1:
  case 2:
    FUN_00343270();
    uVar3 = DAT_0044567c;
    uVar2 = DAT_00445678;
    iVar4 = 0x19;
    do {
      local_1c = uVar2;
      local_18 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x25);
    local_20 = DAT_00445680;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,9);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,10);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,0xb);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,5);
    break;
  case 3:
    local_1c = DAT_0044566c;
    local_18 = DAT_00445670;
    FUN_002f9430(uVar3,&local_1c,1,5);
    iVar4 = 0x19;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1c);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,5);
    break;
  case 4:
    local_1c = DAT_0044566c;
    local_18 = DAT_00445670;
    FUN_002f9430(uVar3,&local_1c,1,9);
    iVar4 = 0x1c;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1f);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,9);
    break;
  case 5:
    local_1c = DAT_0044566c;
    local_18 = DAT_00445670;
    FUN_002f9430(uVar3,&local_1c,1,10);
    iVar4 = 0x1f;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x22);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,10);
    break;
  case 6:
    local_1c = DAT_0044566c;
    local_18 = DAT_00445670;
    FUN_002f9430(uVar3,&local_1c,1,0xb);
    iVar4 = 0x22;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0x24),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x25);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,0xb);
  }
  iVar4 = FUN_0035b164();
  if (iVar4 != 0) {
    local_20 = DAT_00445684;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0x24),&local_20,1,10);
  }
  return;
}
