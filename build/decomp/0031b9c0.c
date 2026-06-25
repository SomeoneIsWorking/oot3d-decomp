// OoT3D decomp @ 0031b9c0  name=FUN_0031b9c0  size=424

char FUN_0031b9c0(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1_00;
  undefined8 uVar7;
  
  puVar2 = DAT_0031bb6c;
  puVar1 = DAT_0031bb68;
  if (param_2 == 0) {
    iVar6 = 0;
    if ((*DAT_0031bb68 & 1) == 0) {
      uVar7 = FUN_003679b4(DAT_0031bb68);
      iVar6 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) {
        FUN_0031ff30(DAT_0031bb70);
        iVar6 = DAT_0031bb78;
      }
    }
    FUN_0031fe84(DAT_0031bb70,iVar6);
    uVar5 = extraout_r1_00;
    if ((*puVar2 & 1) == 0) {
      uVar7 = FUN_003679b4(DAT_0031bb6c);
      uVar5 = (int)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 != 0) {
        FUN_0036788c(DAT_0031bb7c);
        uVar5 = DAT_0031bb80;
      }
    }
    uVar3 = DAT_0031bb7c;
    FUN_0031bebc(DAT_0031bb7c,uVar5);
    FUN_0031bd30(uVar3);
    FUN_0031bb84(uVar3);
  }
  else {
    cVar4 = *(char *)(param_1 + 8);
    while (cVar4 != '\x01') {
      if ((*puVar1 & 1) == 0) {
        uVar7 = FUN_003679b4(DAT_0031bb68,param_2);
        param_2 = (int)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != 0) {
          FUN_0031ff30(DAT_0031bb70);
          param_2 = DAT_0031bb78;
        }
      }
      FUN_0031fe84(DAT_0031bb70,param_2);
      uVar5 = extraout_r1;
      if ((*puVar2 & 1) == 0) {
        uVar7 = FUN_003679b4(DAT_0031bb6c);
        uVar5 = (int)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 != 0) {
          FUN_0036788c(DAT_0031bb7c);
          uVar5 = DAT_0031bb80;
        }
      }
      uVar3 = DAT_0031bb7c;
      FUN_0031bebc(DAT_0031bb7c,uVar5);
      FUN_0031bd30(uVar3);
      FUN_0031bb84(uVar3);
      param_2 = 0;
      software_interrupt(10);
      cVar4 = *(char *)(param_1 + 8);
    }
  }
  cVar4 = *(char *)(param_1 + 8);
  if (cVar4 != '\x01') {
    cVar4 = '\0';
  }
  return cVar4;
}

