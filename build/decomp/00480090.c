// OoT3D decomp @ 00480090  name=FUN_00480090  size=540

void FUN_00480090(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_380 [16];
  undefined1 auStack_370 [508];
  int local_174 [4];
  undefined4 local_164 [4];
  undefined1 auStack_154 [256];
  undefined4 local_54 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  uVar5 = DAT_004802b8;
  puVar1 = DAT_004802b4;
  iVar7 = DAT_004802b0;
  local_54[2] = *DAT_004802ac;
  local_54[3] = DAT_004802ac[1];
  uStack_44 = DAT_004802ac[2];
  uStack_40 = DAT_004802ac[3];
  uStack_3c = DAT_004802ac[4];
  uStack_38 = DAT_004802ac[5];
  uStack_34 = DAT_004802ac[6];
  uStack_30 = DAT_004802ac[7];
  uStack_2c = DAT_004802ac[8];
  uStack_28 = DAT_004802ac[9];
  iVar6 = 0;
  iVar8 = DAT_004802b0 + 0x54;
  local_54[0] = DAT_004802ac[-0x4e];
  local_54[1] = DAT_004802ac[-0x4d];
  do {
    FUN_002fc3a8(auStack_154,&DAT_004802bc,local_54[*(int *)(iVar7 + 0x40) + 2],local_54[iVar6]);
    FUN_00324f44(auStack_370,auStack_154,uVar5);
    uVar2 = FUN_00301300(auStack_370,0,0);
    FUN_0031b9c0(uVar2,1);
    iVar3 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1,0x54);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00303ea8(uVar2);
      uVar4 = FUN_003012b4(iVar3,uVar4,0);
    }
    *(undefined4 *)(iVar8 + iVar6 * 4) = uVar4;
    FUN_00303ea8(uVar2);
    FUN_0034fc6c();
    FUN_0031b99c(uVar2);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  local_164[0] = *DAT_004802c4;
  local_164[1] = DAT_004802c4[1];
  local_164[2] = DAT_004802c4[2];
  local_164[3] = DAT_004802c4[3];
  if (*(int *)(iVar7 + 0x40) == 0) {
    return;
  }
  iVar7 = 0;
  do {
    FUN_00324f44(auStack_380,local_164[iVar7],uVar5);
    iVar8 = FUN_00301300(auStack_380,0,0);
    iVar6 = DAT_004802c8;
    local_174[iVar7] = iVar8;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  do {
    iVar7 = 0;
    do {
      if ((local_174[iVar7] != 0) && (iVar8 = FUN_0031b9c0(local_174[iVar7],0), iVar8 != 0)) {
        uVar5 = *(undefined4 *)(local_174[iVar7] + 4);
        uVar4 = FUN_00303ea8(local_174[iVar7]);
        FUN_0034338c(iVar6 + iVar7 * 0x200,uVar4,uVar5);
        FUN_00303ea8(local_174[iVar7]);
        FUN_0034fc6c();
        FUN_0031b99c(local_174[iVar7]);
        local_174[iVar7] = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    iVar7 = 0;
    while (local_174[iVar7] == 0) {
      iVar7 = iVar7 + 1;
      if (3 < iVar7) {
        return;
      }
    }
    software_interrupt(10);
  } while( true );
}
