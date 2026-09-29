// OoT3D decomp @ 0044b9ac  name=FUN_0044b9ac  size=308

void FUN_0044b9ac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;

  iVar1 = DAT_0044bae4;
  uVar3 = DAT_0044bae0;
  iVar4 = 0;
  do {
    local_28[0] = uVar3;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),local_28,1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x4e);
  local_20 = 0;
  local_1c = 0;
  iVar4 = 0;
  do {
    if (iVar4 - 6U < 8) {
      FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar4);
    }
    uVar2 = DAT_0044baec;
    uVar3 = DAT_0044bae8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x2b);
  iVar4 = 0x16;
  do {
    local_20 = uVar3;
    local_1c = uVar2;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1f);
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
  iVar4 = FUN_00313ce0(0x4c);
  uVar3 = 0;
  if (iVar4 != 0) {
    local_28[0] = 0;
    uVar3 = FUN_002f57f0(iVar4,DAT_0044baf0,0x20,0x1c);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  return;
}
