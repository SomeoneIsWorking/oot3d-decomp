// OoT3D decomp @ 003620f0  name=FUN_003620f0  size=644

void FUN_003620f0(uint param_1,float *param_2,float *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined auStack_e8 [48];
  undefined auStack_b8 [48];
  undefined auStack_88 [48];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  bVar3 = (int)param_1 < 0;
  uVar1 = param_1;
  if (param_1 != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x25e);
    bVar3 = (int)(uVar1 - 0x10) < 0;
  }
  if (bVar3 != (param_1 != 0 && SBORROW4(uVar1,0x10))) {
    *(undefined *)(param_1 + uVar1 * 0x24) = 1;
    if ((*(ushort *)(param_1 + 0x248) & 2) == 0) {
      iVar2 = param_1 + uVar1 * 0x24;
      *(float *)(iVar2 + 8) = *param_2;
      *(float *)(iVar2 + 0xc) = param_2[1];
      *(float *)(iVar2 + 0x10) = param_2[2];
      *(float *)(iVar2 + 0x14) = *param_3;
      *(float *)(iVar2 + 0x18) = param_3[1];
      *(float *)(iVar2 + 0x1c) = param_3[2];
    }
    else {
      iVar2 = param_1 + uVar1 * 0x24;
      local_4c = (*param_2 + *param_3) * DAT_00362374;
      fVar7 = local_4c - (*(float *)(iVar2 + -0x1c) + *(float *)(iVar2 + -0x10)) * DAT_00362374;
      local_3c = (param_2[1] + param_3[1]) * DAT_00362374;
      fVar5 = local_3c - (*(float *)(iVar2 + -0x18) + *(float *)(iVar2 + -0xc)) * DAT_00362374;
      local_2c = (param_2[2] + param_3[2]) * DAT_00362374;
      fVar6 = local_2c - (*(float *)(iVar2 + -0x14) + *(float *)(iVar2 + -8)) * DAT_00362374;
      fVar4 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      if (DAT_00362378 <= (int)ABS(fVar4)) {
        local_50 = 0;
        fVar4 = DAT_0036237c / fVar4;
        local_54 = 0;
        local_58 = 0x3f800000;
        local_48 = 0;
        uStack_44 = 0x3f800000;
        local_40 = 0;
        local_38 = 0;
        local_34 = 0;
        uStack_30 = 0x3f800000;
        local_28 = local_4c;
        local_24 = local_3c;
        local_20 = local_2c;
        FUN_004c8ab0(fVar7 * fVar4,fVar5 * fVar4,fVar6 * fVar4,auStack_88,
                     (int)*(short *)(param_1 + 0x24c));
        FUN_0036c174(auStack_b8,&local_58,auStack_88);
        local_4c = local_28 * DAT_00362380;
        local_3c = local_24 * DAT_00362380;
        local_2c = local_20 * DAT_00362380;
        local_58 = 0x3f800000;
        local_54 = 0;
        local_40 = 0;
        local_50 = 0;
        local_48 = 0;
        uStack_44 = 0x3f800000;
        local_38 = 0;
        local_34 = 0;
        uStack_30 = 0x3f800000;
        FUN_0036c174(auStack_e8,auStack_b8,&local_58);
        FUN_00373598(auStack_e8,param_2,&local_100);
        FUN_00373598(auStack_e8,param_3,&local_f4);
        *(undefined4 *)(iVar2 + 8) = local_100;
        *(undefined4 *)(iVar2 + 0xc) = local_fc;
        *(undefined4 *)(iVar2 + 0x10) = local_f8;
        *(undefined4 *)(iVar2 + 0x14) = local_f4;
        *(undefined4 *)(iVar2 + 0x18) = local_f0;
        *(undefined4 *)(iVar2 + 0x1c) = local_ec;
      }
    }
    *(undefined4 *)(param_1 + uVar1 * 0x24 + 4) = 1;
    *(char *)(param_1 + 0x25e) = *(char *)(param_1 + 0x25e) + '\x01';
  }
  return;
}

