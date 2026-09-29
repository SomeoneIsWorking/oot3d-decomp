// OoT3D decomp @ 0026e9dc  name=FUN_0026e9dc  size=1748

void FUN_0026e9dc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [48];
  short local_68;
  short local_66;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  uVar1 = DAT_0026ed08;
  local_48 = DAT_0026ed08;
  local_44 = DAT_0026ed08;
  local_40 = DAT_0026ed0c;
  local_54 = DAT_0026ed08;
  local_50 = DAT_0026ed08;
  local_4c = DAT_0026ed10;
  iVar9 = *(int *)(DAT_0026ed14 + param_2);
  iVar7 = FUN_003478bc(*(undefined4 *)(iVar9 + 0x27c),0xc);
  iVar8 = FUN_003478bc(*(undefined4 *)(iVar9 + 0x27c),0xb);
  uVar2 = DAT_0026ed20;
  fVar11 = (*(float *)(iVar7 + 0x1c) + *(float *)(iVar8 + 0x1c)) * DAT_0026ed18;
  fVar12 = (*(float *)(iVar7 + 0xc) + *(float *)(iVar8 + 0xc)) * DAT_0026ed18;
  fVar13 = (*(float *)(iVar7 + 0x2c) + *(float *)(iVar8 + 0x2c)) * DAT_0026ed18;
  if (((*DAT_0026ed1c & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_0026ed1c), puVar3 = DAT_0026ed24, iVar7 != 0)) {
    *DAT_0026ed24 = uVar2;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar1;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
    puVar3[6] = uVar1;
    puVar3[7] = uVar1;
    puVar3[8] = uVar1;
    puVar3[9] = uVar1;
    puVar3[10] = uVar2;
    puVar3[0xb] = uVar1;
  }
  FUN_00372224(auStack_98,DAT_0026ed24);
  local_5c = DAT_0026ed2c;
  if (*(int *)(DAT_0026ed28 + 4) == 0) {
    local_5c = DAT_0026ed30;
  }
  local_5c = fVar11 + local_5c;
  fVar11 = *(float *)(param_1 + 0x98);
  local_60 = fVar12;
  local_58 = fVar13;
  if ((DAT_0026ed34 < (int)fVar11) && (*(char *)(param_1 + 0x36c) == '\0')) {
    if (((*(uint *)(iVar9 + 0x1714) & 0x80) != 0) && (*(int *)(iVar9 + 0x124) == param_1)) {
      *(uint *)(iVar9 + 0x1714) = *(uint *)(iVar9 + 0x1714) & 0xffffff7f;
      iVar7 = DAT_0026f108;
      *(undefined4 *)(iVar9 + 0x124) = 0;
      *(undefined2 *)(iVar7 + iVar9) = 200;
    }
    *(undefined2 *)(param_1 + 0x18) = 1;
    FUN_00375a18(param_1 + 0x370,0,1,1000,0);
    FUN_00375a18(param_1 + 0x36e,DAT_0026f118,1,1000,0);
    FUN_003731e0(param_1 + 0x1a4);
  }
  else {
    *(undefined2 *)(param_1 + 0x376) = 0;
    *(undefined2 *)(param_1 + 0x374) = 0;
    *(undefined2 *)(param_1 + 0x372) = 0;
    fVar12 = *(float *)(param_1 + 0x37c) - fVar12;
    fVar10 = *(float *)(param_1 + 0x380) - local_5c;
    fVar13 = *(float *)(param_1 + 900) - fVar13;
    fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar13 * fVar13);
    if (DAT_0026ed38 < (int)fVar11) {
      local_5c = local_5c + (fVar11 - DAT_0026ed3c) * DAT_0026ed40;
      *(short *)(param_1 + 0x378) =
           (short)(int)((*(float *)(param_1 + 0x98) - DAT_0026ed3c) * DAT_0026ed44);
    }
    else {
      *(short *)(param_1 + 0x378) = (short)(int)((fVar11 - DAT_0026ed3c) * DAT_0026ed3c);
    }
    iVar7 = DAT_0026ed48;
    if (DAT_0026ed48 < (int)fVar13) {
      if (((*(uint *)(iVar9 + 0x1714) & 0x80) != 0) && (*(int *)(iVar9 + 0x124) == param_1)) {
        *(uint *)(iVar9 + 0x1714) = *(uint *)(iVar9 + 0x1714) & 0xffffff7f;
        iVar8 = DAT_0026f108;
        *(undefined4 *)(iVar9 + 0x124) = 0;
        *(undefined2 *)(iVar8 + iVar9) = 200;
      }
      if (*(short *)(param_1 + 0x18) != 0) {
        FUN_00375bcc(param_1,DAT_0026f10c);
        *(undefined2 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x36c) == '\0') {
        iVar8 = (**(code **)(DAT_0026ed4c + param_2))(param_2,iVar9);
        if (iVar8 != 0) {
          *(char *)(param_1 + 0x36c) = *(char *)(param_1 + 0x36c) + '\x01';
          *(undefined2 *)(param_1 + 0x36a) = 0;
          if (*(int *)(param_1 + 0x124) != 0) {
            *(undefined2 *)(*(int *)(param_1 + 0x124) + 0x1c) = 1;
          }
LAB_0026ecac:
          FUN_00375bcc(param_1,DAT_0026ed5c);
        }
      }
      else {
        *(short *)(param_1 + 0x36a) = *(short *)(param_1 + 0x36a) + 3000;
        fVar12 = (float)FUN_002cfca0();
        *(short *)(param_1 + 0x372) = (short)(int)(fVar12 * DAT_0026ed50);
        if ((*(uint *)(DAT_0026ed54 + iVar9) & 0x80) == 0) goto LAB_0026f0ec;
        if (*(short *)(param_1 + 0x36a) <= DAT_0026ed58) goto LAB_0026ecac;
      }
      FUN_0036654c(param_1 + 0x388,&local_60,param_1 + 0x374,0);
      *(short *)(param_1 + 0x376) =
           *(short *)(param_1 + 0x376) - (*(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x372));
      *(short *)(param_1 + 0x374) =
           *(short *)(param_1 + 0x374) -
           (*(short *)(param_1 + 0xbc) + *(short *)(param_1 + 0x36e) + *(short *)(param_1 + 0x370));
    }
    uVar5 = FUN_003758b0(local_58 - *(float *)(param_1 + 0x30),local_60 - *(float *)(param_1 + 0x28)
                        );
    *(undefined2 *)(param_1 + 0xbe) = uVar5;
    uVar4 = DAT_0026f110;
    if (iVar7 < (int)fVar13) {
      FUN_0036e168(local_60,uVar2,DAT_0026f110,uVar1,param_1 + 0x37c);
      FUN_0036e168(local_5c,uVar2,uVar4,uVar1,param_1 + 0x380);
      FUN_0036e168(local_58,uVar2,uVar4,uVar1,param_1 + 900);
    }
    else {
      *(float *)(param_1 + 0x37c) = local_60;
      *(float *)(param_1 + 0x380) = local_5c;
      *(float *)(param_1 + 900) = local_58;
    }
    FUN_0036654c(param_1 + 0x394,param_1 + 0x37c,&local_68,0);
    local_bc = *(undefined4 *)(param_1 + 0x37c);
    local_ac = *(undefined4 *)(param_1 + 0x380);
    local_9c = *(undefined4 *)(param_1 + 900);
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = 0x3f800000;
    local_b8 = 0;
    uStack_b4 = 0x3f800000;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x3f800000;
    FUN_0036e88c(&local_c8,(int)local_68,(int)local_66,0,1);
    FUN_003735ac(param_1 + 0x394,&local_c8,&local_54);
    local_bc = *(undefined4 *)(param_1 + 0x28);
    local_ac = *(undefined4 *)(param_1 + 0x2c);
    local_9c = *(undefined4 *)(param_1 + 0x30);
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = 0x3f800000;
    local_b8 = 0;
    uStack_b4 = 0x3f800000;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 0;
    uStack_a0 = 0x3f800000;
    FUN_0036654c(param_1 + 0x28,param_1 + 0x394,&local_68,0);
    FUN_0036e88c(&local_c8,(int)local_68,(int)local_66,0,1);
    FUN_003735ac(param_1 + 0x394,&local_c8,&local_48);
    fVar12 = *(float *)(param_1 + 0x394) - *(float *)(param_1 + 0x28);
    fVar13 = *(float *)(param_1 + 0x39c) - *(float *)(param_1 + 0x30);
    uVar5 = FUN_003758b0(SQRT(fVar12 * fVar12 + fVar13 * fVar13),
                         *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x398));
    *(undefined2 *)(param_1 + 0x36e) = uVar5;
    sVar6 = FUN_003758b0(*(float *)(param_1 + 0x39c) - *(float *)(param_1 + 0x30),
                         *(float *)(param_1 + 0x394) - *(float *)(param_1 + 0x28));
    if (DAT_0026f114 < (int)(short)(sVar6 - *(short *)(param_1 + 0xbe)) + 0x3fffU) {
      *(short *)(param_1 + 0x36e) = -(*(short *)(param_1 + 0x36e) + -0x8000);
    }
    fVar12 = *(float *)(param_1 + 0x37c) - *(float *)(param_1 + 0x394);
    fVar13 = *(float *)(param_1 + 900) - *(float *)(param_1 + 0x39c);
    sVar6 = FUN_003758b0(SQRT(fVar12 * fVar12 + fVar13 * fVar13),
                         *(float *)(param_1 + 0x398) - *(float *)(param_1 + 0x380));
    sVar6 = sVar6 - *(short *)(param_1 + 0x36e);
    *(short *)(param_1 + 0x370) = sVar6;
    if (sVar6 < 0) {
      *(short *)(param_1 + 0x36e) = *(short *)(param_1 + 0x36e) + sVar6 * 2;
      *(short *)(param_1 + 0x370) = sVar6 * -2;
    }
  }
  iVar7 = FUN_00374be8(param_2,10);
  if (iVar7 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x36c) == '\0') {
    return;
  }
LAB_0026f0ec:
  uVar1 = DAT_0026f11c;
  *(undefined1 *)(param_1 + 0x36c) = 0;
  *(undefined2 *)(param_1 + 0x368) = 0x17;
  *(undefined4 *)(param_1 + 0x364) = uVar1;
  return;
}
