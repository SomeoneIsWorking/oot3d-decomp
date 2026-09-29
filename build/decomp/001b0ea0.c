// OoT3D decomp @ 001b0ea0  name=FUN_001b0ea0  size=980

void FUN_001b0ea0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  float local_44;
  float local_40 [2];
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;

  fVar7 = DAT_001b1274;
  *(int *)(param_1 + 0xc28) = *(int *)(param_1 + 0xc28) + 1;
  FUN_0037572c(*(float *)(param_1 + 0xc5c) * fVar7,param_1);
  fVar4 = DAT_001b128c;
  iVar6 = DAT_001b1288;
  uVar3 = DAT_001b1280;
  fVar7 = DAT_001b127c;
  uVar2 = DAT_001b1278;
  if (*(char *)(param_1 + 0xc39) == '\0') {
    FUN_0037322c(DAT_001b128c,param_1);
    (**(code **)(param_1 + 0xc30))(param_1);
    (**(code **)(param_1 + 0xc04))(param_1,param_2);
    iVar6 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                         param_2 + 0xa98,&local_30,&local_2c);
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0xc37) = *(undefined1 *)(param_1 + 0xc36);
      if (local_30 < *(float *)(param_1 + 0x2c)) {
        *(undefined1 *)(param_1 + 0xc36) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xc36) = 1;
      }
    }
    if (*(char *)(param_1 + 0xc36) != *(char *)(param_1 + 0xc37)) {
      local_34 = *(float *)(param_1 + 0x28);
      local_30 = *(float *)(param_1 + 0x2c) - fVar4;
      local_2c = *(undefined4 *)(param_1 + 0x30);
      FUN_0036e670(param_2,&local_34,0,0,1,1);
      if (*(char *)(param_1 + 0xc36) == '\0') {
        FUN_00375bcc(param_1,DAT_001b1290);
      }
      else {
        FUN_00375bcc(param_1,DAT_001b1294);
      }
    }
    FUN_003731e0(param_1 + 0x1a4);
    FUN_003731e0(param_1 + 0xa48);
    sVar1 = *(short *)(param_1 + 0xbe);
    *(short *)(param_1 + 0xc66) = *(short *)(param_1 + 0xc66) + 0x1000;
    fVar4 = DAT_001b1298;
    local_64 = *(undefined4 *)(param_1 + 0x28);
    local_54 = *(undefined4 *)(param_1 + 0x2c);
    local_44 = *(float *)(param_1 + 0x30);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0x3f800000;
    local_60 = 0;
    uStack_5c = 0x3f800000;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    uStack_48 = 0x3f800000;
    FUN_0036e88c(&local_70,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                 (int)*(short *)(param_1 + 0x38),1);
    local_30 = fVar4;
    local_34 = fVar4;
    local_2c = uVar2;
    FUN_003735ac(local_40,&local_70,&local_34);
    fVar8 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xc66) << 1));
    fVar8 = fVar8 * DAT_001b129c;
    fVar9 = (float)FUN_002cfca0((int)sVar1);
    *(float *)(param_1 + 0xc68) = local_40[0] + fVar8 * fVar9;
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xc66));
    *(float *)(param_1 + 0xc6c) = DAT_001b12a0 + fVar9 * fVar7 + *(float *)(param_1 + 0xc4c);
    fVar7 = (float)FUN_00338f60((int)sVar1);
    local_44 = local_38 + fVar8 * fVar7;
    *(float *)(param_1 + 0xc70) = local_44;
    local_64 = *(undefined4 *)(param_1 + 0xc68);
    local_54 = *(undefined4 *)(param_1 + 0xc6c);
    local_68 = 0;
    local_6c = 0;
    local_70 = 0x3f800000;
    local_60 = 0;
    uStack_5c = 0x3f800000;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    uStack_48 = 0x3f800000;
    FUN_0036e88c(&local_70,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                 (int)*(short *)(param_1 + 0x38),1);
    local_34 = fVar4;
    local_30 = DAT_001b12a4;
    local_2c = DAT_001b12a8;
    FUN_003735ac(param_1 + 0xc74,&local_70,&local_34);
    FUN_00376864(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xc3b) == '\0') {
    FUN_00373500(*(undefined4 *)(DAT_001b1288 + (uint)*(byte *)(param_1 + 0xc3a) * 4),DAT_001b127c,
                 DAT_001b1278,param_1 + 0xc5c);
    fVar7 = *(float *)(iVar6 + (uint)*(byte *)(param_1 + 0xc3a) * 4);
    if (fVar7 <= *(float *)(param_1 + 0xc5c)) {
      *(float *)(param_1 + 0xc5c) = fVar7;
      if (*(byte *)(param_1 + 0xc3a) < 3) {
        *(undefined1 *)(param_1 + 0xc3b) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xc35) = 0;
        *(undefined1 *)(param_1 + 0xc39) = 0;
      }
      return;
    }
  }
  else if ((*(char *)(param_1 + 0xc3b) == '\x01') &&
          (FUN_00373500(DAT_001b1280,DAT_001b127c,DAT_001b1278,param_1 + 0xc5c),
          *(int *)(param_1 + 0xc5c) <= DAT_001b1284)) {
    *(undefined4 *)(param_1 + 0xc5c) = uVar3;
    bVar5 = *(char *)(param_1 + 0xc3a) + 1;
    *(byte *)(param_1 + 0xc3a) = bVar5;
    if (3 < bVar5) {
      *(undefined1 *)(param_1 + 0xc3a) = 3;
    }
    *(undefined1 *)(param_1 + 0xc3b) = 0;
  }
  return;
}
