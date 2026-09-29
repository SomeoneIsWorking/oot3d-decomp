// OoT3D decomp @ 002456fc  name=FUN_002456fc  size=1560

void FUN_002456fc(float param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar7;
  undefined4 extraout_s0_01;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d10;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_20;
  undefined4 local_1c;
  float local_14;

  *(undefined1 *)(*(int *)((int)param_1 + 0x36c) + 0xad) = 0;
  local_20 = param_1;
  switch(*(undefined2 *)((int)param_1 + 0x1c)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    goto switchD_00245724_caseD_0;
  case 3:
    local_20 = (float)((ulonglong)unaff_d10 >> 0x20);
    FUN_002cfca0((int)(short)((short)*(undefined4 *)(param_2 + 0xf8) * 200));
    FUN_00338f60((int)(short)((short)*(undefined4 *)(param_2 + 0xf8) * 200));
    FUN_00338f60((int)(short)((short)*(undefined4 *)(param_2 + 0xf8) * 200));
    iVar5 = FUN_003695f8();
    uVar7 = DAT_003a0e4c;
    uVar8 = extraout_s0_01;
    if (iVar5 != 0) {
      uVar8 = DAT_003a0e4c;
    }
    if (iVar5 == 0) {
      uVar8 = *(undefined4 *)((int)param_1 + 0x438);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1cc) + 0xc) + 0xc) = uVar8;
    iVar6 = *(int *)(*(int *)((int)param_1 + 0x1cc) + 0x10);
    FUN_00331094(iVar6,0,0,&local_74);
    local_68 = *(float *)((int)param_1 + 0x478) * DAT_003a0e50;
    FUN_003688a8(iVar6,0,0,&local_74);
    pfVar1 = DAT_003a0e5c;
    iVar5 = DAT_003a0e54;
    *(undefined1 *)(*(int *)(iVar6 + 4) + 10) = 1;
    fVar10 = DAT_003a0e60;
    fVar9 = DAT_003a0e58;
    if (((*(uint *)(iVar5 + 0x14) & 1) == 0) && (iVar6 = FUN_003679b4(iVar5 + 0x14), iVar6 != 0)) {
      *pfVar1 = DAT_003a0e64;
      pfVar1[1] = fVar9;
      pfVar1[2] = fVar10;
    }
    puVar2 = DAT_003a0e68;
    if (((*(uint *)(iVar5 + 0x10) & 1) == 0) && (iVar6 = FUN_003679b4(DAT_003a0e6c), iVar6 != 0)) {
      *puVar2 = uVar7;
      puVar2[1] = uVar7;
      puVar2[2] = fVar10;
    }
    pfVar3 = DAT_003a0e70;
    if (((*(uint *)(iVar5 + 0xc) & 1) == 0) && (iVar6 = FUN_003679b4(DAT_003a0e74), iVar6 != 0)) {
      *pfVar3 = DAT_003a0e78;
      pfVar3[1] = fVar9;
      pfVar3[2] = fVar10;
    }
    puVar4 = DAT_003a0e7c;
    if (((*(uint *)(iVar5 + 8) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_003a0e80), uVar8 = DAT_003a0e84, iVar5 != 0)) {
      *puVar4 = uVar7;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
    }
    if (*(short *)(param_2 + 0x104) == 0x43) {
      local_70 = *puVar2;
      local_6c = puVar2[1];
      local_68 = (float)puVar2[2];
      local_5c = 0.0;
      local_60 = 0.0;
      local_64 = 1.0;
      local_54 = 0.0;
      local_50 = 1.0;
      local_40 = 0.0;
      local_3c = 1.0;
      local_4c = 0.0;
      local_44 = 0.0;
      local_58 = local_70;
      local_48 = local_6c;
      local_38 = local_68;
      FUN_0036c174(&local_64,&local_64,(int)param_1 + 0x148);
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
    }
    else {
      local_70 = *puVar4;
      local_6c = puVar4[1];
      local_68 = (float)puVar4[2];
      local_5c = 0.0;
      local_60 = 0.0;
      local_64 = 1.0;
      local_54 = 0.0;
      local_50 = 1.0;
      local_40 = 0.0;
      local_3c = 1.0;
      local_4c = 0.0;
      local_44 = 0.0;
      local_58 = local_70;
      local_48 = local_6c;
      local_38 = local_68;
      FUN_0036c174(&local_64,&local_64,(int)param_1 + 0x148);
      fVar9 = *pfVar3;
      fVar10 = pfVar3[1];
      fVar11 = pfVar3[2];
    }
    local_64 = local_64 * fVar9;
    local_54 = local_54 * fVar9;
    local_44 = local_44 * fVar9;
    local_60 = local_60 * fVar10;
    local_50 = local_50 * fVar10;
    local_40 = local_40 * fVar10;
    local_5c = local_5c * fVar11;
    local_4c = local_4c * fVar11;
    local_3c = local_3c * fVar11;
    local_74 = 0;
    FUN_0035e240((int)param_1 + 0x1a4,&local_64,0,0,param_1);
    FUN_003731e0((int)param_1 + 0x1a4);
    return;
  case 0xfffe:
    iVar6 = FUN_003695f8();
    uVar7 = DAT_002458c8;
    iVar5 = extraout_r1_00;
    if (iVar6 == 0) {
      iVar5 = (int)param_1 + 0x400;
      uVar7 = extraout_s0_00;
    }
    if (iVar6 == 0) {
      uVar7 = *(undefined4 *)(iVar5 + 0x38);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1cc) + 0xc) + 0xc) = uVar7;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x1cc) + 0x10);
    FUN_00331094(iVar5,0,0,&local_20);
    local_14 = *(float *)((int)param_1 + 0x478) * DAT_002458cc;
    FUN_003688a8(iVar5,0,0,&local_20);
    *(undefined1 *)(*(int *)(iVar5 + 4) + 10) = 1;
    local_1c = 0;
    FUN_0035e240((int)param_1 + 0x1a4,(int)param_1 + 0x148,0);
    FUN_003731e0((int)param_1 + 0x1a4);
    return;
  case 0xffff:
    iVar6 = FUN_003695f8();
    uVar7 = DAT_002458c8;
    iVar5 = extraout_r1;
    if (iVar6 == 0) {
      iVar5 = (int)param_1 + 0x400;
      uVar7 = extraout_s0;
    }
    if (iVar6 == 0) {
      uVar7 = *(undefined4 *)(iVar5 + 0x38);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x1cc) + 0xc) + 0xc) = uVar7;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x1cc) + 0x10);
    FUN_00331094(iVar5,0,0,&local_20);
    local_14 = *(float *)((int)param_1 + 0x478) * DAT_002458cc;
    FUN_003688a8(iVar5,0,0,&local_20);
    *(undefined1 *)(*(int *)(iVar5 + 4) + 10) = 1;
    local_1c = 0;
    FUN_0035e240((int)param_1 + 0x1a4,(int)param_1 + 0x148,0);
    FUN_003731e0((int)param_1 + 0x1a4);
switchD_00245724_caseD_0:
    local_20 = (float)unaff_d8;
    local_1c = (undefined4)((ulonglong)unaff_d8 >> 0x20);
    iVar5 = FUN_003695f8(param_1,param_2);
    uVar7 = DAT_002af42c;
    if (iVar5 == 0) {
      uVar7 = *(undefined4 *)((int)param_1 + 0x438);
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x36c) + 0xc) + 0xc) = uVar7;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x36c) + 0x10);
    FUN_00333abc(iVar5,0,&local_60);
    fVar9 = DAT_002af430;
    local_54 = *(float *)((int)param_1 + 0x474) * DAT_002af430;
    FUN_00333a38(iVar5,0,&local_60);
    **(undefined1 **)(iVar5 + 4) = 1;
    FUN_00333abc(iVar5,1,&local_60);
    local_54 = *(float *)((int)param_1 + 0x470) * fVar9;
    FUN_00333a38(iVar5,1,&local_60);
    *(undefined1 *)(*(int *)(iVar5 + 4) + 0x124) = 1;
    local_50 = 1.0;
    local_4c = 0.0;
    local_48 = 0;
    local_44 = *(float *)((int)param_1 + 0x28);
    local_3c = 1.0;
    local_40 = 0.0;
    local_38 = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x36c) + 0xad) = 1;
    local_5c = 0.0;
    local_60 = param_1;
    FUN_003334b4((int)param_1 + 0x360,&local_50,0);
    return;
  default:
    return;
  }
}
