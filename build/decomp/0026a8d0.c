// OoT3D decomp @ 0026a8d0  name=FUN_0026a8d0  size=1216

undefined8 FUN_0026a8d0(float param_1,undefined4 param_2)

{
  ushort uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [36];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  int local_40 [3];

  fVar11 = DAT_0026acc8;
  local_40[0] = *(int *)((int)param_1 + 0x418);
  local_40[1] = *(undefined4 *)((int)param_1 + 0x41c);
  local_40[2] = *(undefined4 *)((int)param_1 + 0x420);
  if (((*(uint *)(DAT_0026acc4 + 4) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_0026accc), pfVar2 = DAT_0026acd0, iVar6 != 0)) {
    *DAT_0026acd0 = fVar11;
    pfVar2[1] = fVar11;
    pfVar2[2] = fVar11;
  }
  iVar4 = DAT_0026ace0;
  fVar3 = DAT_0026acdc;
  iVar6 = DAT_0026acd8;
  fVar12 = fVar11;
  if (*(int *)((int)param_1 + 0x228) == DAT_0026acd4) {
    uVar1 = *(ushort *)((int)param_1 + 0x1c);
    bVar10 = uVar1 == 0x28;
    if ((short)uVar1 < 0x29) {
      bVar10 = (uVar1 & 1) == 0;
    }
    if (!bVar10) {
      FUN_00372224(auStack_ac,(int)param_1 + 0x148);
      local_b8 = fVar11;
      local_b4 = fVar11;
      local_b0 = DAT_0026ace4;
      FUN_00372070(auStack_ac,auStack_ac,&local_b8);
      *(undefined1 *)(*(int *)((int)param_1 + 0x424) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)((int)param_1 + 0x424),auStack_ac);
      FUN_00372170(*(undefined4 *)((int)param_1 + 0x424),0);
    }
  }
  else if (*(int *)((int)param_1 + 0x228) != DAT_0026ace8) {
    local_b8 = 2.8026e-45;
    FUN_0032d184(param_2,param_1,DAT_0026acec,1);
    local_b4 = 0.0;
    local_b8 = param_1;
    FUN_0035e240((int)param_1 + 0x1a4,(int)param_1 + 0x148,0);
    local_88 = *(undefined4 *)((int)param_1 + 0x28);
    local_84 = *(undefined4 *)((int)param_1 + 0x2c);
    local_80 = *(undefined4 *)((int)param_1 + 0x30);
    fVar12 = fVar3;
    if (*(int *)((int)param_1 + 0x228) == DAT_0026acf0 || *(int *)((int)param_1 + 0x228) == iVar6) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x1c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * DAT_0026acf4;
    }
    local_70 = fVar12 * 1.0;
    local_60 = fVar12 * 0.0;
    local_50 = fVar12 * 0.0;
    local_6c = fVar12 * 0.0;
    local_5c = fVar12 * 1.0;
    local_4c = fVar12 * 0.0;
    local_68 = fVar12 * 0.0;
    local_58 = fVar12 * 0.0;
    local_48 = fVar12 * 1.0;
    local_b8 = 1.4013e-45;
    local_64 = local_88;
    local_54 = local_84;
    local_44 = local_80;
    FUN_0036e88c(&local_70,(int)*(short *)((int)param_1 + 0xbc),(int)*(short *)((int)param_1 + 0xbe)
                 ,0);
    uVar5 = DAT_0026acf8;
    iVar8 = 0;
    if (*(int *)((int)param_1 + 0x228) == iVar4) {
      iVar9 = 2;
    }
    else {
      iVar9 = 3;
    }
    if (iVar9 != 0) {
      do {
        local_7c = fVar11;
        local_78 = fVar11;
        local_74 = uVar5;
        FUN_00372070(&local_70,&local_70,&local_7c);
        *(undefined1 *)(local_40[iVar8] + 0xac) = 1;
        FUN_003721e0(local_40[iVar8],&local_70);
        iVar7 = FUN_00372170(local_40[iVar8],0);
        if (iVar8 == 0) {
          iVar7 = *(int *)((int)param_1 + 0x228);
        }
        if (iVar8 == 0 && iVar7 == iVar4) {
          FUN_003735ac((int)param_1 + 0x3c,&local_70,DAT_0026acd0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
    }
  }
  local_b8 = 2.8026e-45;
  FUN_0032d184(param_2,param_1,DAT_0026acec,1);
  local_88 = *(undefined4 *)((int)param_1 + 8);
  local_84 = *(undefined4 *)((int)param_1 + 0xc);
  local_80 = *(undefined4 *)((int)param_1 + 0x10);
  if (*(int *)((int)param_1 + 0x228) != iVar6) {
    fVar12 = fVar3;
  }
  local_70 = fVar12 * 1.0;
  local_60 = fVar12 * 0.0;
  local_50 = fVar12 * 0.0;
  local_6c = fVar12 * 0.0;
  local_5c = fVar12 * 1.0;
  local_4c = fVar12 * 0.0;
  local_68 = fVar12 * 0.0;
  local_58 = fVar12 * 0.0;
  local_48 = fVar12 * 1.0;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x16),
                                      (byte)(in_fpscr >> 0x15) & 3);
  local_64 = local_88;
  local_54 = local_84;
  local_44 = local_80;
  FUN_003735e8(fVar11 * DAT_0026adc8,&local_70,1);
  *(undefined1 *)(*(int *)((int)param_1 + 0x428) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)((int)param_1 + 0x428),&local_70);
  FUN_00372170(*(undefined4 *)((int)param_1 + 0x428),0);
  if (*(int *)((int)param_1 + 0x228) == iVar4) {
    local_b8 = 1.4013e-45;
    FUN_0036e88c(&local_70,0xffffc000,
                 (int)(short)(*(short *)((int)param_1 + 0xbe) - *(short *)((int)param_1 + 0x16)));
    *(undefined1 *)(*(int *)((int)param_1 + 0x420) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)((int)param_1 + 0x420),&local_70);
    FUN_00372170(*(undefined4 *)((int)param_1 + 0x420),0);
  }
  return CONCAT44(param_1,param_2);
}
