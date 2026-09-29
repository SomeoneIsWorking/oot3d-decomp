// OoT3D decomp @ 004698a0  name=FUN_004698a0  size=616

void FUN_004698a0(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *local_19c;
  undefined4 *puStack_198;
  undefined4 *local_18c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  iVar9 = DAT_00469b0c;
  local_54 = *DAT_00469b08;
  uStack_50 = DAT_00469b08[1];
  uStack_4c = DAT_00469b08[2];
  uStack_48 = DAT_00469b08[3];
  uStack_44 = DAT_00469b08[4];
  uStack_40 = DAT_00469b08[5];
  local_3c = DAT_00469b08[6];
  uStack_38 = DAT_00469b08[7];
  uStack_34 = DAT_00469b08[8];
  uStack_30 = DAT_00469b08[9];
  uStack_2c = DAT_00469b08[10];
  uStack_28 = DAT_00469b08[0xb];
  local_74 = DAT_00469b08[0xc];
  uStack_70 = DAT_00469b08[0xd];
  uStack_6c = DAT_00469b08[0xe];
  uStack_68 = DAT_00469b08[0xf];
  uStack_64 = DAT_00469b08[0x10];
  local_60 = DAT_00469b08[0x11];
  uStack_5c = DAT_00469b08[0x12];
  uStack_58 = DAT_00469b08[0x13];
  local_7c = *(undefined4 *)(DAT_00469b0c + 8);
  local_78 = *(undefined4 *)(DAT_00469b0c + 0xc);
  FUN_00371738(&local_19c,DAT_00469b10,0x120);
  puVar1 = DAT_00469b14;
  local_18c = &local_7c;
  local_19c = &local_54;
  puStack_198 = &local_74;
  iVar4 = (**(code **)(*(int *)*DAT_00469b14 + 8))((int *)*DAT_00469b14,0x1b8);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = FUN_003432d4(iVar4,&local_19c);
  }
  iVar4 = DAT_00469b18;
  *(undefined4 *)(DAT_00469b18 + 0x7c) = uVar5;
  uVar6 = FUN_002e11d0(1);
  uVar5 = DAT_00469b1c;
  FUN_00348a64(*(undefined4 *)(iVar4 + 0x7c),0,uVar6,DAT_00469b20,DAT_00469b20,DAT_00469b1c,
               DAT_00469b1c);
  puVar2 = DAT_00469b24;
  if (((*DAT_00469b24 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00469b24), iVar7 != 0)) {
    FUN_0036788c(DAT_00469b28);
  }
  iVar7 = DAT_00469b34;
  iVar8 = BoardModelFactory_0034897c
                    (*(undefined4 *)(DAT_00469b34 + 0x47c),*(undefined4 *)(iVar4 + 0x7c),0);
  *(int *)(iVar4 + 0x80) = iVar8;
  *(uint *)(iVar8 + 0x178) = *(uint *)(iVar8 + 0x178) | 3;
  local_54 = *DAT_00469b38;
  uStack_50 = DAT_00469b38[1];
  uStack_4c = DAT_00469b38[2];
  uStack_48 = DAT_00469b38[3];
  uStack_44 = DAT_00469b38[4];
  uStack_40 = DAT_00469b38[5];
  local_3c = DAT_00469b38[6];
  uStack_38 = DAT_00469b38[7];
  uStack_34 = DAT_00469b38[8];
  uStack_30 = DAT_00469b38[9];
  uStack_2c = DAT_00469b38[10];
  uStack_28 = DAT_00469b38[0xb];
  local_74 = *DAT_00469b3c;
  uStack_70 = DAT_00469b3c[1];
  uStack_6c = DAT_00469b3c[2];
  uStack_68 = DAT_00469b3c[3];
  uStack_64 = DAT_00469b3c[4];
  local_60 = DAT_00469b3c[5];
  uStack_5c = DAT_00469b3c[6];
  uStack_58 = DAT_00469b3c[7];
  local_7c = *(undefined4 *)(iVar9 + 0x10);
  local_78 = *(undefined4 *)(iVar9 + 0x14);
  FUN_00371738(&local_19c,DAT_00469b40,0x120);
  local_18c = &local_7c;
  local_19c = &local_54;
  puStack_198 = &local_74;
  iVar9 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1,0x1b8);
  uVar6 = 0;
  if (iVar9 != 0) {
    uVar6 = FUN_003432d4(iVar9,&local_19c);
  }
  *(undefined4 *)(iVar4 + 0x84) = uVar6;
  uVar6 = FUN_002e11d0(1);
  FUN_00348a64(*(undefined4 *)(iVar4 + 0x84),0,uVar6,DAT_00469b20,DAT_00469b20,uVar5,uVar5);
  if (((*puVar2 & 1) == 0) && (iVar9 = FUN_003679b4(DAT_00469b24), iVar9 != 0)) {
    FUN_0036788c(DAT_00469b28);
  }
  iVar9 = BoardModelFactory_0034897c(*(undefined4 *)(iVar7 + 0x47c),*(undefined4 *)(iVar4 + 0x84),0)
  ;
  *(int *)(iVar4 + 0x88) = iVar9;
  uVar6 = DAT_00469b48;
  uVar5 = DAT_00469b44;
  *(uint *)(iVar9 + 0x178) = *(uint *)(iVar9 + 0x178) | 1;
  uVar3 = DAT_00469b4c;
  *(undefined4 *)(iVar9 + 0x3c) = uVar5;
  *(undefined4 *)(iVar9 + 0x40) = uVar6;
  *(undefined4 *)(iVar9 + 0x44) = uVar3;
  *(undefined1 *)(iVar4 + 1) = 0xff;
  return;
}
