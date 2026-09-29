// OoT3D decomp @ 00425140  name=FUN_00425140  size=324

void FUN_00425140(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];

  iVar1 = DAT_00425284;
  if (*(int *)(DAT_00425284 + 0x28) != 0) {
    FUN_002f9484(auStack_20,auStack_24,local_28);
    iVar6 = *(int *)(iVar1 + 0x28);
    if (iVar6 == 1) {
      if (local_28[0] == '\0') {
        FUN_002f74a4(3);
        *(undefined4 *)(iVar1 + 0x28) = 2;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0x34) = 1;
        *(undefined4 *)(iVar1 + 0x38) = 0;
        uVar5 = DAT_00425294;
        uVar4 = DAT_00425290;
        uVar3 = DAT_0042528c;
        uVar2 = DAT_00425288;
        iVar6 = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        do {
          local_30 = uVar2;
          local_2c = uVar3;
          FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_30,1,iVar6);
          do {
            if (iVar6 - 6U < 8) {
              local_30 = uVar4;
              local_2c = uVar2;
              FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_30,1,iVar6);
            }
            if (iVar6 - 0xeU < 8) {
              local_30 = uVar2;
              local_2c = uVar5;
              FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_30,1,iVar6);
            }
            iVar6 = iVar6 + 1;
            if (0x2a < iVar6) {
              return;
            }
          } while (5 < iVar6);
        } while( true );
      }
    }
    else {
      if (iVar6 == 2) {
        FUN_004392a8(param_1);
        return;
      }
      if (iVar6 == 3) {
        FUN_0043ae94();
      }
    }
  }
  return;
}
