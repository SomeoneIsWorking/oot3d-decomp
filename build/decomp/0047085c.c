// OoT3D decomp @ 0047085c  name=FUN_0047085c  size=616

void FUN_0047085c(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined8 uVar7;
  undefined1 auStack_74 [48];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  FUN_003016e0(1);
  uVar5 = DAT_00470ac4;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  do {
    iVar3 = param_1 + iVar6 * 0xc;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar3 + 0x520) = uVar5;
    *(undefined4 *)(iVar3 + 0x524) = uVar5;
    *(undefined4 *)(iVar3 + 0x528) = uVar5;
    uVar1 = DAT_00470ac8;
  } while (iVar6 < 6);
  puVar4 = (undefined4 *)(param_1 + 0x564);
  iVar6 = 5;
  do {
    puVar4[1] = uVar1;
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + -1;
    *puVar4 = uVar1;
  } while (iVar6 != 0);
  uVar5 = FUN_002fde54();
  *(undefined4 *)(param_1 + 0x184) = uVar5;
  uVar5 = FUN_0033f238();
  *(undefined4 *)(param_1 + 0x188) = uVar5;
  uVar5 = FUN_003063a0();
  *(undefined4 *)(param_1 + 0x18c) = uVar5;
  if (*(int *)(param_1 + 0x114) == 0) {
    if (*(int *)(param_1 + 0x110) == 0) {
      (**(code **)(DAT_00470ad0 + *(int *)(param_1 + 0x104) * 4))(param_1);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x110) + -1;
      *(int *)(param_1 + 0x110) = iVar6;
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      *(int *)(param_1 + 0x110) = iVar6;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x114) + -1;
    *(int *)(param_1 + 0x114) = iVar6;
    if (iVar6 < 1) {
      iVar6 = (**(code **)(DAT_00470acc + *(int *)(param_1 + 0x108) * 4))(param_1);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x114) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
    }
  }
  FUN_00483cf0(param_1);
  puVar2 = DAT_00470ad4;
  if (*(int *)(param_1 + 0x104) != 2 && *(int *)(param_1 + 0x104) != 4) {
    local_18 = *(undefined4 *)(param_1 + 0x568);
    local_24 = uVar1;
    local_20 = uVar1;
    local_1c = uVar1;
    uVar5 = extraout_r1;
    if ((*DAT_00470ad4 & 1) == 0) {
      uVar7 = FUN_003679b4(DAT_00470ad4);
      uVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) {
        FUN_0036788c(DAT_00470ad8);
        uVar5 = DAT_00470ae0;
      }
    }
    uVar5 = FUN_00347884(DAT_00470ae4,uVar5);
    local_34 = *DAT_00470ae8;
    uStack_30 = DAT_00470ae8[1];
    uStack_2c = DAT_00470ae8[2];
    uStack_28 = DAT_00470ae8[3];
    local_3c = DAT_00470aec;
    local_44 = DAT_00470af0;
    local_38 = DAT_00470af4;
    local_40 = DAT_00470af8;
    FUN_00371348(DAT_00470b00,DAT_00470afc,uVar1,auStack_74,0);
    if (((*puVar2 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00470ad4), iVar6 != 0)) {
      FUN_0036788c(DAT_00470ad8);
    }
    FUN_002d04c0(uVar5,DAT_00470b04,4,&local_24,&local_44,*(undefined4 *)(param_1 + 0x1a4),&local_34
                 ,auStack_74,0);
  }
  return;
}
