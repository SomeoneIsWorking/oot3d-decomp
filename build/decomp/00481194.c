// OoT3D decomp @ 00481194  name=FUN_00481194  size=436

undefined4 FUN_00481194(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_3d0 [524];
  undefined1 auStack_1c4 [256];
  int local_c4 [16];
  undefined4 local_84 [16];
  undefined4 auStack_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  auStack_44[0] = *DAT_00481348;
  auStack_44[1] = DAT_00481348[1];
  auStack_44[2] = DAT_00481348[2];
  auStack_44[3] = DAT_00481348[3];
  uStack_34 = DAT_00481348[4];
  uStack_30 = DAT_00481348[5];
  uStack_2c = DAT_00481348[6];
  uStack_28 = DAT_00481348[7];
  uStack_24 = DAT_00481348[8];
  uStack_20 = DAT_00481348[9];
  local_84[0] = DAT_00481348[10];
  local_84[1] = DAT_00481348[0xb];
  local_84[2] = DAT_00481348[0xc];
  local_84[3] = DAT_00481348[0xd];
  local_84[4] = DAT_00481348[0xe];
  local_84[5] = DAT_00481348[0xf];
  local_84[6] = DAT_00481348[0x10];
  local_84[7] = DAT_00481348[0x11];
  local_84[8] = DAT_00481348[0x12];
  local_84[9] = DAT_00481348[0x13];
  local_84[10] = DAT_00481348[0x14];
  local_84[0xb] = DAT_00481348[0x15];
  local_84[0xc] = DAT_00481348[0x16];
  local_84[0xd] = DAT_00481348[0x17];
  local_84[0xe] = DAT_00481348[0x18];
  local_84[0xf] = DAT_00481348[0x19];
  if (((*DAT_0048134c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0048134c), iVar3 != 0)) {
    FUN_0036788c(DAT_00481350);
  }
  uVar5 = DAT_00481360;
  iVar3 = 0;
  iVar6 = *(int *)(DAT_0048135c + 0xf3c);
  do {
    FUN_002fc3a8(auStack_1c4,DAT_00481364,auStack_44[iVar6],local_84[iVar3]);
    FUN_00324f44(auStack_3d0,auStack_1c4,uVar5);
    iVar4 = FUN_00301300(auStack_3d0,0,0);
    iVar2 = DAT_0048136c;
    puVar1 = DAT_00481368;
    local_c4[iVar3] = iVar4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  do {
    iVar3 = 0;
    do {
      if ((local_c4[iVar3] != 0) && (iVar6 = FUN_0031b9c0(local_c4[iVar3],0), iVar6 != 0)) {
        iVar6 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1,0x54);
        uVar5 = 0;
        if (iVar6 != 0) {
          uVar5 = FUN_00303ea8(local_c4[iVar3]);
          uVar5 = FUN_003012b4(iVar6,uVar5,0);
        }
        *(undefined4 *)(iVar2 + iVar3 * 4) = uVar5;
        FUN_00303ea8(local_c4[iVar3]);
        FUN_0034fc6c();
        FUN_0031b99c(local_c4[iVar3]);
        local_c4[iVar3] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    while (local_c4[iVar3] == 0) {
      iVar3 = iVar3 + 1;
      if (0xf < iVar3) {
        return 1;
      }
    }
    software_interrupt(10);
  } while( true );
}
