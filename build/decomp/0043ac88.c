// OoT3D decomp @ 0043ac88  name=FUN_0043ac88  size=492

void FUN_0043ac88(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;

  iVar1 = DAT_0043ae74;
  iVar7 = 0;
  *(undefined4 *)(DAT_0043ae74 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 1;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  uVar2 = DAT_0043ae78;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0xfffffffe;
  do {
    local_38[0] = uVar2;
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),local_38,1,iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x4e);
  iVar7 = 0;
  local_30 = 0;
  uStack_2c = 0;
  do {
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_30,1,iVar7);
    do {
      iVar7 = iVar7 + 1;
      if (0x2a < iVar7) {
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
        FUN_002f43d8(1);
        puVar3 = DAT_0043ae80;
        iVar7 = DAT_0043ae7c;
        *DAT_0043ae80 = (uint)*(byte *)(DAT_0043ae7c + 0x2d);
        puVar3[1] = (uint)*(byte *)(iVar7 + 0x13d8);
        puVar3[2] = (uint)*(byte *)(iVar7 + 0xf);
        FUN_002e9658();
        FUN_002f74a4(3);
        uVar6 = DAT_0043ae8c;
        uVar5 = DAT_0043ae88;
        uVar4 = DAT_0043ae84;
        iVar7 = 0;
        do {
          local_28 = uVar4;
          local_24 = uVar5;
          FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_28,1,iVar7);
          do {
            if (iVar7 - 6U < 8) {
              local_28 = uVar2;
              local_24 = uVar4;
              FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_28,1,iVar7);
            }
            if (iVar7 - 0xeU < 8) {
              local_28 = uVar4;
              local_24 = uVar6;
              FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_28,1,iVar7);
            }
            iVar7 = iVar7 + 1;
            if (0x2a < iVar7) {
              local_28 = uVar2;
              iVar7 = 0;
              local_24 = DAT_0043ae90;
              do {
                FUN_002f9430(*(undefined4 *)(iVar1 + 0x14),&local_28,1,iVar7);
                iVar7 = iVar7 + 1;
              } while (iVar7 < 8);
              return;
            }
          } while (5 < iVar7);
        } while( true );
      }
    } while (0x15 < iVar7);
  } while( true );
}
