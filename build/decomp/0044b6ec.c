// OoT3D decomp @ 0044b6ec  name=FUN_0044b6ec  size=348

void FUN_0044b6ec(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;

  iVar1 = DAT_0044b84c;
  uVar4 = DAT_0044b848;
  iVar5 = 0;
  do {
    local_28[0] = uVar4;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),local_28,1,iVar5);
    uVar2 = DAT_0044b850;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x4e);
  iVar5 = 0;
  do {
    if (iVar5 - 6U < 8) {
      local_1c = uVar2;
      local_20 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar5);
      local_1c = uVar2;
      local_20 = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar5);
    }
    uVar3 = DAT_0044b854;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x2b);
  iVar5 = 0x16;
  do {
    local_20 = uVar2;
    local_1c = uVar3;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1f);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  iVar5 = FUN_00313ce0(0x4c);
  uVar4 = 0;
  if (iVar5 != 0) {
    local_28[0] = 0;
    uVar4 = FUN_002f57f0(iVar5,DAT_0044b858,0x20,0x1c);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  return;
}
