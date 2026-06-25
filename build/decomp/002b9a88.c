// OoT3D decomp @ 002b9a88  name=FUN_002b9a88  size=348

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002b9a88(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined auStack_e8 [48];
  undefined auStack_b8 [48];
  undefined auStack_88 [48];
  undefined4 uStack_58;
  float afStack_54 [4];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  local_40 = *DAT_002b9be4;
  local_3c = (float)DAT_002b9be4[1];
  uStack_38 = DAT_002b9be4[2];
  uStack_34 = DAT_002b9be4[3];
  uStack_30 = DAT_002b9be4[4];
  fStack_2c = (float)DAT_002b9be4[5];
  local_28 = (float)DAT_002b9be4[6];
  fStack_24 = (float)DAT_002b9be4[7];
  fStack_20 = (float)DAT_002b9be4[8];
  uStack_1c = DAT_002b9be4[9];
  afStack_54[3] = *(float *)(DAT_002b9be8 + 0xc);
  uStack_44 = *(undefined4 *)(DAT_002b9be8 + 0x10);
  uVar2 = FUN_00362384(*(undefined4 *)(DAT_002b9bec + param_2));
  iVar4 = DAT_002b9bf0;
  uVar6 = 0;
  do {
    if ((int)*(char *)(param_2 + 0x1ac) == (int)*(short *)(&local_40 + uVar6 * 2)) {
      *(char *)(uVar2 + 0x282) = (char)*(undefined2 *)((int)&local_40 + uVar6 * 8 + 2);
      if (*(char *)(iVar4 + 0x4e) == '\0') break;
      cVar1 = *(char *)(DAT_002b9bf4 + param_2);
      if (cVar1 == '\x1a' || cVar1 == '\x1b') {
        uVar5 = (undefined)*(undefined2 *)((int)&local_3c + uVar6 * 8 + 2);
      }
      else {
        if (cVar1 != '\x18' && cVar1 != '\x19') break;
        uVar5 = (undefined)*(undefined2 *)(&local_3c + uVar6 * 2);
      }
      *(undefined *)(uVar2 + 0x282) = uVar5;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 5);
  if (*(char *)(param_2 + 0x1ac) == '\x04' || *(char *)(param_2 + 0x1ac) == '\x03') {
    afStack_54[0] = *param_4;
    afStack_54[1] = param_4[1];
    afStack_54[2] = param_4[2];
    fVar7 = afStack_54[*(char *)(param_2 + 0x1ac)];
    afStack_54[0] = (*param_4 - *param_3) * fVar7 + *param_3;
    afStack_54[1] = (param_4[1] - param_3[1]) * fVar7 + param_3[1];
    afStack_54[2] = (param_4[2] - param_3[2]) * fVar7 + param_3[2];
    FUN_003620f0(uVar2,afStack_54,param_3);
    return;
  }
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar2 != 0) {
    uVar3 = (uint)*(byte *)(uVar2 + 0x25e);
    uVar6 = uVar3 - 0x10;
  }
  if ((int)uVar6 < 0 != (uVar2 != 0 && SBORROW4(uVar3,0x10))) {
    *(undefined *)(uVar2 + uVar3 * 0x24) = 1;
    if ((*(ushort *)(uVar2 + 0x248) & 2) == 0) {
      iVar4 = uVar2 + uVar3 * 0x24;
      *(float *)(iVar4 + 8) = *param_4;
      *(float *)(iVar4 + 0xc) = param_4[1];
      *(float *)(iVar4 + 0x10) = param_4[2];
      *(float *)(iVar4 + 0x14) = *param_3;
      *(float *)(iVar4 + 0x18) = param_3[1];
      *(float *)(iVar4 + 0x1c) = param_3[2];
    }
    else {
      iVar4 = uVar2 + uVar3 * 0x24;
      local_28 = (*param_4 + *param_3) * DAT_00362374;
      fVar10 = local_28 - (*(float *)(iVar4 + -0x1c) + *(float *)(iVar4 + -0x10)) * DAT_00362374;
      local_3c = (param_4[1] + param_3[1]) * DAT_00362374;
      fVar8 = local_3c - (*(float *)(iVar4 + -0x18) + *(float *)(iVar4 + -0xc)) * DAT_00362374;
      fStack_2c = (param_4[2] + param_3[2]) * DAT_00362374;
      fVar9 = fStack_2c - (*(float *)(iVar4 + -0x14) + *(float *)(iVar4 + -8)) * DAT_00362374;
      fVar7 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
      if (DAT_00362378 <= (int)ABS(fVar7)) {
        afStack_54[1] = 0.0;
        fVar7 = DAT_0036237c / fVar7;
        afStack_54[0] = 0.0;
        uStack_58 = 0x3f800000;
        afStack_54[3] = 0.0;
        uStack_44 = 0x3f800000;
        local_40 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0x3f800000;
        fStack_24 = local_3c;
        fStack_20 = fStack_2c;
        afStack_54[2] = local_28;
        FUN_004c8ab0(fVar10 * fVar7,fVar8 * fVar7,fVar9 * fVar7,auStack_88,
                     (int)*(short *)(uVar2 + 0x24c));
        FUN_0036c174(auStack_b8,&uStack_58,auStack_88);
        afStack_54[2] = local_28 * DAT_00362380;
        local_3c = fStack_24 * DAT_00362380;
        fStack_2c = fStack_20 * DAT_00362380;
        uStack_58 = 0x3f800000;
        afStack_54[0] = 0.0;
        local_40 = 0;
        afStack_54[1] = 0.0;
        afStack_54[3] = 0.0;
        uStack_44 = 0x3f800000;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0x3f800000;
        FUN_0036c174(auStack_e8,auStack_b8,&uStack_58);
        FUN_00373598(auStack_e8,param_4,&uStack_100);
        FUN_00373598(auStack_e8,param_3,&uStack_f4);
        *(undefined4 *)(iVar4 + 8) = uStack_100;
        *(undefined4 *)(iVar4 + 0xc) = uStack_fc;
        *(undefined4 *)(iVar4 + 0x10) = uStack_f8;
        *(undefined4 *)(iVar4 + 0x14) = uStack_f4;
        *(undefined4 *)(iVar4 + 0x18) = uStack_f0;
        *(undefined4 *)(iVar4 + 0x1c) = uStack_ec;
      }
    }
    *(undefined4 *)(uVar2 + uVar3 * 0x24 + 4) = 1;
    *(char *)(uVar2 + 0x25e) = *(char *)(uVar2 + 0x25e) + '\x01';
  }
  return;
}

