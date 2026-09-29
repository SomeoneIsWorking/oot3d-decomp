// OoT3D decomp @ 00441a88  name=FUN_00441a88  size=1068

void FUN_00441a88(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined2 *local_150;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;

  fVar2 = DAT_00441e8c;
  uVar4 = DAT_00441e88;
  puVar1 = DAT_00441e84;
  if (DAT_00441e84[2] == 0) {
    if (DAT_00441e84[0x19] != 0) {
      iVar3 = FUN_0031b9c0(DAT_00441e84[0x19],0);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*(int *)*DAT_00441ea0 + 8))((int *)*DAT_00441ea0,0x54);
        uVar5 = 0;
        if (iVar3 != 0) {
          uVar5 = FUN_00303ea8(puVar1[0x19]);
          uVar5 = FUN_003012b4(iVar3,uVar5,0);
        }
        *puVar1 = uVar5;
        FUN_00303ea8(puVar1[0x19]);
        FUN_0034fc6c();
        FUN_0031b99c(puVar1[0x19]);
        uVar5 = DAT_00441ea8;
        local_160 = DAT_00441ea4;
        puVar1[0x19] = 0;
        FUN_00348a64(puVar1[1],0,*puVar1,uVar5,uVar5,local_160);
        if (((*DAT_00441eac & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00441eac), iVar3 != 0)) {
          FUN_0036788c(DAT_00441eb0);
        }
        iVar3 = BoardModelFactory_0034897c(*(undefined4 *)(DAT_00441ebc + 0x47c),puVar1[1],0);
        puVar1[2] = iVar3;
        *(uint *)(iVar3 + 0x178) = *(uint *)(iVar3 + 0x178) | 2;
        pfVar6 = (float *)FUN_002fc3fc(puVar1[6],0);
        iVar3 = DAT_00441ec0;
        *pfVar6 = *(float *)(*(int *)(DAT_00441ec0 + param_1 * 4) + param_2 * 4) + *pfVar6;
        pfVar6[3] = *(float *)(*(int *)(iVar3 + param_1 * 4) + param_2 * 4) + pfVar6[3];
        pfVar6[6] = *(float *)(*(int *)(iVar3 + param_1 * 4) + param_2 * 4) + pfVar6[6];
        iVar8 = iVar3 + 0x28;
        pfVar6[9] = *(float *)(*(int *)(iVar3 + param_1 * 4) + param_2 * 4) + pfVar6[9];
        pfVar6[1] = *(float *)(*(int *)(iVar8 + param_1 * 4) + param_2 * 4) + pfVar6[1];
        pfVar6[4] = *(float *)(*(int *)(iVar8 + param_1 * 4) + param_2 * 4) + pfVar6[4];
        pfVar6[7] = *(float *)(*(int *)(iVar8 + param_1 * 4) + param_2 * 4) + pfVar6[7];
        pfVar6[10] = *(float *)(*(int *)(iVar8 + param_1 * 4) + param_2 * 4) + pfVar6[10];
        if (*(char *)(DAT_00441ec4 + 0xe) == '\x01') {
          pfVar6 = (float *)FUN_002fc3fc(puVar1[6],0);
          fVar9 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(DAT_00441ecc + puVar1[0xd] * 4)
                                                           + puVar1[0x10]),
                                             (byte)(in_fpscr >> 0x15) & 3);
          fVar9 = (DAT_00441ec8 - *(float *)(*(int *)(iVar3 + puVar1[0xd] * 4) + puVar1[0x10] * 4))
                  + fVar9 + DAT_00441ed0;
          pfVar6[6] = fVar9;
          *pfVar6 = fVar9;
          pfVar6[9] = fVar9 + fVar2;
          pfVar6[3] = fVar9 + fVar2;
          puVar7 = (undefined4 *)FUN_002fc3f0(puVar1[6],0);
          uVar5 = DAT_00441f04;
          *puVar7 = DAT_00441f04;
          puVar7[2] = uVar4;
          puVar7[4] = uVar5;
          puVar7[6] = uVar4;
        }
        puVar1[0x16] = 0;
      }
      FUN_002fbc50();
      return;
    }
    DAT_00441e84[0xd] = param_1;
    puVar1[0x17] = uVar4;
    local_28 = 0;
    uStack_24 = 0;
    local_2c = *(undefined4 *)(DAT_00441e90 + 0x20);
    local_30 = *(undefined4 *)(DAT_00441e90 + 0x1c);
    local_38 = 0;
    uStack_34 = 0;
    local_3c = 0;
    iVar3 = FUN_00313ce0(0x20);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_002fc694(fVar2,fVar2,iVar3,1);
    }
    puVar1[6] = uVar4;
    FUN_002fc534(uVar4,&local_28,&local_30,1,0);
    FUN_002fc40c(puVar1[6],&local_38,&local_30,1,0);
    FUN_002fcdec(puVar1[6],&local_3c,1,0);
    local_48 = 0;
    local_46 = 2;
    local_44 = 1;
    local_42 = 1;
    local_40 = 2;
    local_3e = 3;
    FUN_00371738(&local_160,DAT_00441e94,0x118);
    local_160 = FUN_002fc3fc(puVar1[6],0);
    local_15c = FUN_002fc3f0(puVar1[6],0);
    local_158 = FUN_002fc3e4(puVar1[6],0);
    local_150 = &local_48;
    iVar3 = (**(code **)(*(int *)*DAT_00441e98 + 8))((int *)*DAT_00441e98,0x1b8);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00348f34(iVar3,&local_160);
    }
    puVar1[1] = uVar4;
    uVar4 = FUN_00301300(*(undefined4 *)(*(int *)(DAT_00441e9c + param_1 * 4) + param_2 * 4),0,0);
    puVar1[0x19] = uVar4;
  }
  return;
}
