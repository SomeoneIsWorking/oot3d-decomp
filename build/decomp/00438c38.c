// OoT3D decomp @ 00438c38  name=FUN_00438c38  size=644

void FUN_00438c38(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar2 = DAT_00438eec;
  iVar1 = DAT_00438ee0;
  uVar3 = *(undefined4 *)(DAT_00438ee0 + 0xc);
  switch(*(undefined4 *)(DAT_00438ee0 + 0x18)) {
  case 1:
  case 2:
    FUN_00343270();
    uVar3 = DAT_00438ef4;
    uVar2 = DAT_00438ef0;
    iVar4 = 0x1d;
    do {
      local_1c = uVar2;
      local_18 = uVar3;
      FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x29);
    local_20 = DAT_00438ef8;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x15);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x16);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x17);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x1b);
    break;
  case 5:
    local_1c = DAT_00438ee4;
    local_18 = DAT_00438ee8;
    FUN_002f9430(uVar3,&local_1c,1,0x15);
    iVar4 = 0x20;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x23);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x15);
    break;
  case 6:
    local_1c = DAT_00438ee4;
    local_18 = DAT_00438ee8;
    FUN_002f9430(uVar3,&local_1c,1,0x17);
    iVar4 = 0x26;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x29);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x17);
    break;
  case 7:
    local_1c = DAT_00438ee4;
    local_18 = DAT_00438ee8;
    FUN_002f9430(uVar3,&local_1c,1,0x16);
    iVar4 = 0x23;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x26);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x16);
    break;
  case 8:
    local_1c = DAT_00438ee4;
    local_18 = DAT_00438ee8;
    FUN_002f9430(uVar3,&local_1c,1,0x1b);
    iVar4 = 0x1d;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 0xc),&local_1c,1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    local_20 = uVar2;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x1b);
  }
  iVar4 = FUN_0035b164();
  if (iVar4 != 0) {
    local_20 = DAT_00438efc;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 0xc),&local_20,1,0x16);
  }
  return;
}
