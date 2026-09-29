// OoT3D decomp @ 0044b85c  name=FUN_0044b85c  size=320

void FUN_0044b85c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;

  iVar1 = DAT_0044b9a0;
  uVar3 = DAT_0044b99c;
  iVar4 = 0;
  do {
    local_28[0] = uVar3;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),local_28,1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x4e);
  iVar4 = 0;
  local_20 = 0;
  uStack_1c = 0;
  do {
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_20,1,iVar4);
    iVar5 = iVar4;
    do {
      iVar4 = iVar5 + 1;
      if (0x2a < iVar4) {
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
          uVar3 = FUN_002f57f0(iVar4,DAT_0044b9a4,0x20,0x10);
        }
        *(undefined4 *)(iVar1 + 0x1c) = uVar3;
        iVar4 = FUN_00313ce0(0x4c);
        uVar3 = 0;
        if (iVar4 != 0) {
          local_28[0] = 0;
          uVar3 = FUN_002f57f0(iVar4,DAT_0044b9a8,0x20,0xc3);
        }
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
        return;
      }
    } while ((5 < iVar4) && (uVar2 = iVar5 - 0x15, iVar5 = iVar4, 8 < uVar2));
  } while( true );
}
