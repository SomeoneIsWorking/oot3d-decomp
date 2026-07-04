// OoT3D decomp @ 002d4f10  name=FUN_002d4f10  size=420

void FUN_002d4f10(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int aiStack_4c [6];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  aiStack_4c[3] = *UNK_002d50b4;
  aiStack_4c[4] = UNK_002d50b4[1];
  aiStack_4c[5] = UNK_002d50b4[2];
  aiStack_4c[0] = UNK_002d50b4[3];
  aiStack_4c[1] = UNK_002d50b4[4];
  aiStack_4c[2] = UNK_002d50b4[5];
  iStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  if (((*UNK_002d50b8 & 1) == 0) && (iVar1 = FUN_003679b4(UNK_002d50b8), iVar1 != 0)) {
    FUN_0036788c(UNK_002d50bc);
  }
  uVar5 = UNK_002d50d0;
  iVar1 = UNK_002d50cc;
  iVar6 = 0;
  uVar2 = *(undefined4 *)(UNK_002d50c8 + 0x47c);
  do {
    iVar3 = (**(code **)(*(int *)*UNK_002d50d8 + 0xc))
                      ((int *)*UNK_002d50d8,0x1b8,UNK_002d50d4,UNK_002d50dc);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00348f34(iVar3,iVar1 + aiStack_4c[iVar6 + 3] * 0x118);
    }
    iVar3 = param_1 + iVar6 * 0x10 + param_3 * 4;
    *(undefined4 *)(iVar3 + 0x60) = uVar4;
    FUN_00348be4();
    uVar4 = FUN_00372c90(uStack_30,param_4 + iVar6);
    if (iVar6 == 0) {
      FUN_00348a64(*(undefined4 *)(param_1 + param_3 * 4 + 0x60),0,uVar4,uVar5,uVar5,UNK_002d50e4,
                   UNK_002d50e4);
    }
    else {
      FUN_00348a64(*(undefined4 *)(iVar3 + 0x60),0,uVar4,uVar5,uVar5,UNK_002d50e0,UNK_002d50e0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  iVar1 = 0;
  do {
    uVar5 = FUN_0034897c(uVar2,*(undefined4 *)
                                (param_1 + aiStack_4c[iVar1] * 0x10 + param_3 * 4 + 0x30),0);
    iVar6 = iVar1 * 0x10;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(param_1 + iVar6 + param_3 * 4 + 0xc0) = uVar5;
  } while (iVar1 < 3);
  return;
}

