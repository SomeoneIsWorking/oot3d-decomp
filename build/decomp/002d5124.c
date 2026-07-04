// OoT3D decomp @ 002d5124  name=FUN_002d5124  size=784

void FUN_002d5124(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int aiStack_84 [4];
  int iStack_74;
  int iStack_70;
  int aiStack_6c [4];
  int iStack_5c;
  int iStack_58;
  int aiStack_54 [4];
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  puVar1 = UNK_002d5438;
  aiStack_54[0] = *UNK_002d5434;
  aiStack_54[1] = UNK_002d5434[1];
  aiStack_54[2] = UNK_002d5434[2];
  aiStack_54[3] = UNK_002d5434[3];
  iStack_44 = UNK_002d5434[4];
  iStack_40 = UNK_002d5434[5];
  aiStack_6c[0] = UNK_002d5434[6];
  aiStack_6c[1] = UNK_002d5434[7];
  aiStack_6c[2] = UNK_002d5434[8];
  aiStack_6c[3] = UNK_002d5434[9];
  iStack_5c = UNK_002d5434[10];
  iStack_58 = UNK_002d5434[0xb];
  aiStack_84[0] = UNK_002d5434[0xc];
  aiStack_84[1] = UNK_002d5434[0xd];
  aiStack_84[2] = UNK_002d5434[0xe];
  aiStack_84[3] = UNK_002d5434[0xf];
  iStack_74 = UNK_002d5434[0x10];
  iStack_70 = UNK_002d5434[0x11];
  piStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (((*UNK_002d5438 & 1) == 0) && (iVar6 = FUN_003679b4(UNK_002d5438), iVar6 != 0)) {
    FUN_0036788c(UNK_002d543c);
  }
  *(undefined4 *)*param_1 = *(undefined4 *)(UNK_002d543c + 0x174);
  if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(UNK_002d5438), iVar6 != 0)) {
    FUN_0036788c(UNK_002d543c);
  }
  piVar11 = *(int **)(UNK_002d543c + 0x17c);
  piVar11[2] = *param_1;
  if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(UNK_002d5438), iVar6 != 0)) {
    FUN_0036788c(UNK_002d543c);
  }
  uVar3 = UNK_002d5454;
  uVar2 = UNK_002d5450;
  iVar6 = UNK_002d544c;
  uVar12 = 0;
  uVar7 = *(undefined4 *)(UNK_002d5448 + 0x47c);
  if (uStack_2c == 0) {
LAB_002d5420:
    piVar11[2] = 0;
    return;
  }
  piStack_38 = param_1 + 8;
  piStack_3c = param_1 + 4;
LAB_002d5278:
  piVar5 = piStack_38;
  iVar13 = 0;
  do {
    iVar8 = (**(code **)(*(int *)*UNK_002d545c + 0xc))
                      ((int *)*UNK_002d545c,0x1b8,UNK_002d5458,UNK_002d5460);
    iVar9 = 0;
    if (iVar8 != 0) {
      iVar9 = FUN_00348f34(iVar8,iVar6 + aiStack_54[iVar13] * 0x118);
    }
    param_1[iVar13 * 4 + uVar12 + 0xc] = iVar9;
    FUN_00348be4();
    uVar10 = FUN_00372c90(uStack_30,aiStack_84[iVar13] + uVar12 * 2);
    if (iVar13 == 2) {
      FUN_00348a64(piVar5[uVar12 + 0xc],0,uVar10,uVar3,uVar3,uVar2,UNK_002d5464);
    }
    else {
      FUN_00348a64(param_1[iVar13 * 4 + uVar12 + 0xc],0,uVar10,uVar3,uVar3,uVar2,uVar2);
    }
    piVar4 = piStack_3c;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  iVar13 = 0;
  do {
    iVar9 = FUN_0034897c(uVar7,param_1[aiStack_6c[iVar13] * 4 + uVar12 + 0xc],0);
    param_1[iVar13 * 4 + uVar12 + 0x24] = iVar9;
    while( true ) {
      iVar13 = iVar13 + 1;
      if (2 < iVar13) {
        iVar13 = FUN_00358ef8(uStack_30,param_5 + uVar12);
        param_1[uVar12 + 4] = iVar13;
        iVar13 = (**(code **)(*piVar11 + 8))(piVar11,iVar13,1);
        param_1[uVar12 + 8] = iVar13;
        FUN_0047d548(iVar13,2);
        uVar12 = uVar12 + 1;
        if (uStack_2c <= uVar12) goto LAB_002d5420;
        goto LAB_002d5278;
      }
      if (iVar13 != 1) break;
      iVar9 = FUN_00340d00(uVar7,param_1[aiStack_6c[1] * 4 + uVar12 + 0xc],0);
      piVar4[uVar12 + 0x24] = iVar9;
      *(uint *)(iVar9 + 0x178) = *(uint *)(iVar9 + 0x178) | 0x80000;
    }
  } while( true );
}

