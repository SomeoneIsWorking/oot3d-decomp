// OoT3D decomp @ 00266c54  name=FUN_00266c54  size=928

void FUN_00266c54(int param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  fVar3 = DAT_00266f88;
  if (*(int *)(param_1 + 600) == DAT_00266f84) {
    uVar1 = *(ushort *)(param_1 + 0x25e);
    bVar2 = uVar1 == 0x3c;
    if ((short)uVar1 < 0x3d) {
      bVar2 = (uVar1 & 1) == 0;
    }
    if (!bVar2) {
      FUN_00372224(&local_54,param_1 + 0x148);
      local_60 = fVar3;
      local_5c = fVar3;
      local_58 = DAT_00267014;
      FUN_00372070(&local_54,&local_54,&local_60);
      *(undefined1 *)(*(int *)(param_1 + 0x608) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x608),&local_54);
      FUN_00372170(*(undefined4 *)(param_1 + 0x608),0);
      return;
    }
  }
  else {
    FUN_0035e240(param_1 + 0x1d4,param_1 + 0x148,0,DAT_00266f8c,param_1,0);
    fVar5 = DAT_00266f94;
    if (*(int *)(param_1 + 600) == DAT_00266f90) {
      fVar4 = *(float *)(param_1 + 0x3a0) * DAT_00266f94;
      local_78 = *(undefined4 *)(param_1 + 8);
      local_68 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3a0) * DAT_00266f98;
      local_58 = *(undefined4 *)(param_1 + 0x10);
      local_7c = 0.0;
      local_80 = 0.0;
      local_84 = 1.0;
      local_74 = 0.0;
      local_70 = 1.0;
      local_60 = 0.0;
      local_5c = 1.0;
      local_6c = 0.0;
      local_64 = 0.0;
      FUN_0036e88c(&local_84,(int)*(short *)(param_1 + 0x262),(int)*(short *)(param_1 + 0xbe),0,1);
      local_84 = local_84 * fVar4;
      local_74 = local_74 * fVar4;
      local_64 = local_64 * fVar4;
      local_80 = local_80 * fVar4;
      local_70 = local_70 * fVar4;
      local_60 = local_60 * fVar4;
      local_7c = local_7c * fVar4;
      local_6c = local_6c * fVar4;
      local_5c = local_5c * fVar4;
      *(undefined1 *)(*(int *)(param_1 + 0x5f8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x5f8),&local_84);
      FUN_0037322c(fVar3,param_1);
      FUN_00372170(*(undefined4 *)(param_1 + 0x5f8),0);
    }
    else {
      FUN_001cbf9c(param_1,param_2);
    }
    local_60 = *(float *)(param_1 + 8);
    local_5c = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)(param_1 + 0x3a0) * fVar5;
    local_58 = *(undefined4 *)(param_1 + 0x10);
    local_4c = 0.0;
    local_50 = 0.0;
    local_54 = 1.0;
    local_44 = 0.0;
    local_40 = 1.0;
    local_30 = 0.0;
    local_2c = 1.0;
    local_3c = 0.0;
    local_34 = 0.0;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_48 = local_60;
    local_38 = local_5c;
    local_28 = local_58;
    FUN_003735e8(fVar3 * DAT_00266f9c,&local_54,1);
    local_54 = local_54 * fVar5;
    local_44 = local_44 * fVar5;
    local_34 = local_34 * fVar5;
    local_50 = local_50 * fVar5;
    local_40 = local_40 * fVar5;
    local_30 = local_30 * fVar5;
    local_4c = local_4c * fVar5;
    local_3c = local_3c * fVar5;
    local_2c = local_2c * fVar5;
    *(undefined1 *)(*(int *)(param_1 + 0x604) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x604),&local_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x604),0);
    if (*(int *)(param_1 + 600) == DAT_00266fa0) {
      FUN_0036e88c(&local_54,(int)*(short *)(param_1 + 0x266),(int)*(short *)(param_1 + 0xbe),0,1);
      *(undefined1 *)(*(int *)(param_1 + 0x600) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x600),&local_54);
      FUN_00357750(0x37,param_1 + 0x3a8,&local_54);
      FUN_00357750(0x38,param_1 + 0x3a8,&local_54);
    }
  }
  return;
}
