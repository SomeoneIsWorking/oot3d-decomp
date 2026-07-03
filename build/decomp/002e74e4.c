// OoT3D decomp @ 002e74e4  name=FUN_002e74e4  size=200

void FUN_002e74e4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar2 = DAT_002e75b0;
  *DAT_002e75ac = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 1;
  puVar2[1] = 0;
  iVar3 = DAT_002e75b4;
  puVar2[2] = 0;
  FUN_002ffb10(iVar3,0x2000);
  local_c = DAT_002e75b8;
  local_1c = 4;
  local_18 = DAT_002e75c0;
  local_14 = DAT_002e75c4;
  local_10 = DAT_002e75c8;
  uVar4 = FUN_0030dbf8(DAT_002e75cc,&local_1c,DAT_002e75bc,&local_c,
                       *(int *)(DAT_002e75b4 + 0xc) + *(int *)(DAT_002e75b4 + 8),0xf,0xfffffffe,0);
  uVar5 = uVar4 >> 0x1b;
  if ((uVar4 & 0x80000000) != 0) {
    uVar5 = uVar5 - 0x20;
  }
  if ((uVar5 != 0xfffffff9 && uVar5 != 0) && uVar5 != 1) {
    FUN_003351b4();
  }
  return;
}

