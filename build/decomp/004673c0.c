// OoT3D decomp @ 004673c0  name=FUN_004673c0  size=644

void FUN_004673c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined2 *local_174;
  undefined2 local_164;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar9 = DAT_00467650;
  uVar3 = DAT_0046764c;
  uVar2 = DAT_00467648;
  uVar1 = DAT_00467644;
  iVar8 = 0;
  do {
    iVar4 = FUN_00313ce0(0x20);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_002fc694(uVar2,uVar1,iVar4,3);
    }
    iVar4 = DAT_00467654;
    iVar7 = DAT_00467654 + 0x2b0;
    *(undefined4 *)(DAT_00467654 + iVar8 * 4) = uVar5;
    FUN_002fc534(uVar5,iVar4 + 0x150,iVar7,3,0);
    FUN_002fc40c(*(undefined4 *)(iVar4 + iVar8 * 4),iVar4 + 0x570,iVar4 + 0x410,3,0);
    local_48 = uVar3;
    local_44 = uVar3;
    local_40 = uVar3;
    FUN_002fcdec(*(undefined4 *)(iVar4 + iVar8 * 4),&local_48,3,0);
    local_6c = 0;
    local_6a = 2;
    local_68 = 1;
    local_66 = 1;
    local_64 = 2;
    local_62 = 3;
    local_60 = 4;
    local_5e = 6;
    local_5c = 5;
    local_5a = 5;
    local_58 = 6;
    local_56 = 7;
    local_54 = 8;
    local_52 = 10;
    local_50 = 9;
    local_4e = 9;
    local_4c = 10;
    local_4a = 0xb;
    FUN_00371738(&local_184,DAT_00467658,0x118);
    local_184 = FUN_002fc3fc(*(undefined4 *)(iVar4 + iVar8 * 4),0);
    local_180 = FUN_002fc3f0(*(undefined4 *)(iVar4 + iVar8 * 4),0);
    local_17c = FUN_002fc3e4(*(undefined4 *)(iVar4 + iVar8 * 4),0);
    local_174 = &local_6c;
    if (iVar8 == 1) {
      local_164 = 2;
    }
    iVar7 = (**(code **)(*(int *)*DAT_0046765c + 8))((int *)*DAT_0046765c,0x1b8);
    uVar5 = 0;
    if (iVar7 != 0) {
      uVar5 = FUN_00348f34(iVar7,&local_184);
    }
    iVar7 = DAT_00467660;
    *(undefined4 *)(DAT_00467660 + iVar8 * 4) = uVar5;
    uVar5 = FUN_002e11d0(4);
    FUN_00348a64(*(undefined4 *)(iVar7 + iVar8 * 4),0,uVar5,DAT_00467668,DAT_00467668,DAT_00467664,
                 DAT_00467664);
    if (((*DAT_0046766c & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0046766c), iVar6 != 0)) {
      FUN_0036788c(DAT_00467670);
    }
    iVar7 = FUN_0034897c(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(iVar7 + iVar8 * 4),0);
    *(int *)(DAT_0046767c + iVar8 * 4) = iVar7;
    iVar8 = iVar8 + 1;
    *(uint *)(iVar7 + 0x178) = *(uint *)(iVar7 + 0x178) | 2;
  } while (iVar8 < 2);
  iVar9 = 0;
  local_3c = *DAT_00467680;
  local_38 = DAT_00467680[1];
  do {
    FUN_002f9430(*(undefined4 *)(iVar4 + 4),&local_3c,1,iVar9);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  return;
}

