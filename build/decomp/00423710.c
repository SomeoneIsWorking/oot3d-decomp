// OoT3D decomp @ 00423710  name=FUN_00423710  size=964

undefined4 FUN_00423710(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;

  iVar3 = FUN_002fa230();
  iVar4 = FUN_00437388();
  pcVar1 = DAT_00423ad4;
  if (iVar4 != 0) {
    if (*(code **)(DAT_00423ad4 + 0x30) != (code *)0x0) {
      (**(code **)(DAT_00423ad4 + 0x30))(*(undefined4 *)(DAT_00423ad4 + 0x70));
    }
    FUN_00437398();
  }
  iVar4 = FUN_003100d4();
  if (iVar4 != 0) {
    if (*(code **)(pcVar1 + 0x3c) == (code *)0x0) {
      return 1;
    }
    (**(code **)(pcVar1 + 0x3c))(*(undefined4 *)(pcVar1 + 0x7c));
    return 1;
  }
  uVar8 = 0;
  if (iVar3 == 1 || iVar3 == 2) {
    iVar3 = FUN_0031006c();
    uVar8 = FUN_002fa230();
    FUN_00437674();
    if ((((*(code **)(pcVar1 + 0xc) == (code *)0x0) ||
         (iVar4 = (**(code **)(pcVar1 + 0xc))(*(undefined4 *)(pcVar1 + 0x4c),iVar3,uVar8),
         iVar4 != 0)) && (iVar3 != 0)) && (pcVar1[1] == '\0')) {
      pcVar1[1] = (char)uVar8;
    }
    return 0;
  }
  iVar3 = FUN_002fa220();
  if (iVar3 == 0) {
    iVar3 = FUN_004373ac();
    if (iVar3 != 0) {
      if (*(code **)(pcVar1 + 0x34) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x34))(*(undefined4 *)(pcVar1 + 0x74));
      }
      FUN_00437494();
      return 1;
    }
    piVar9 = &local_28;
    local_28 = 0;
    iVar3 = FUN_00437688(&local_1c,&local_20,DAT_00423ad8,0x1000,&local_24,piVar9);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,&DAT_00423adc,0,&DAT_00423adc);
      FUN_002fb928(0);
    }
    iVar3 = local_28;
    if (local_20 == 2) {
      local_2c = 0;
      pcVar7 = *(code **)(pcVar1 + 0x10);
      if (local_24 < 0x20) {
        uVar6 = 0;
      }
      else {
        uVar6 = *DAT_00423ad8;
      }
      puVar5 = DAT_00423ad8;
      if (pcVar7 != (code *)0x0) {
        puVar5 = *(undefined4 **)(pcVar1 + 0x50);
      }
      uVar8 = 0;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(puVar5,uVar6,&local_2c);
      }
      FUN_002fa0a8(1,local_1c,0);
      FUN_002f9e90(local_1c,3,0,0,local_2c,piVar9,*DAT_00423ae0,DAT_00423ae0[1]);
    }
    else if (local_20 == 5) {
      FUN_002fa0a8(1,local_1c,0);
      if (*(code **)(pcVar1 + 0x14) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x14))
                  (*(undefined4 *)(pcVar1 + 0x54),local_1c,DAT_00423ad8,local_24,iVar3);
      }
    }
    else if (local_20 == 8) {
      if (*(code **)(pcVar1 + 0x18) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x18))(*(undefined4 *)(pcVar1 + 0x58));
      }
      FUN_002fa148(0);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
      if (local_20 == 9) {
        FUN_002fa148(1);
        if (*(code **)(pcVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(pcVar1 + 0x1c))(*(undefined4 *)(pcVar1 + 0x5c));
        }
        uVar8 = 0;
      }
    }
    if (local_28 == 0) {
      return uVar8;
    }
    software_interrupt(0x23);
    return uVar8;
  }
  iVar3 = FUN_002fa220();
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      FUN_004373bc();
    }
    else if (iVar3 == 3) {
      if (*(code **)(pcVar1 + 0x2c) != (code *)0x0) {
        (**(code **)(pcVar1 + 0x2c))(*(undefined4 *)(pcVar1 + 0x6c));
      }
      pcVar1[3] = '\x05';
      FUN_00436070();
    }
    else if ((iVar3 == 4) && (*(code **)(pcVar1 + 0x24) != (code *)0x0)) {
      (**(code **)(pcVar1 + 0x24))(*(undefined4 *)(pcVar1 + 100));
    }
    goto code_r0x004238f4;
  }
  iVar3 = 0;
  if (*(code **)(pcVar1 + 0x20) != (code *)0x0) {
    iVar3 = (**(code **)(pcVar1 + 0x20))(*(undefined4 *)(pcVar1 + 0x60));
  }
  if ((*pcVar1 == '\0') && (iVar4 = FUN_0031006c(), iVar4 != 0)) {
    iVar3 = 0;
LAB_00423888:
    cVar2 = '\x03';
  }
  else {
    if (iVar3 == 2) {
      pcVar1[3] = '\x01';
      goto code_r0x004238f4;
    }
    if (iVar3 == 0) goto LAB_00423888;
    cVar2 = '\x02';
  }
  pcVar1[3] = cVar2;
  if (iVar3 == 1) {
    cVar2 = '\x02';
  }
  else {
    if (iVar3 != 0) goto code_r0x004238f4;
    cVar2 = '\x03';
  }
  pcVar1[3] = cVar2;
  FUN_002fa198(iVar3);
code_r0x004238f4:
  FUN_00437660();
  return 0;
}
