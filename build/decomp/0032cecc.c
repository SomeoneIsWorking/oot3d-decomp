// OoT3D decomp @ 0032cecc  name=FUN_0032cecc  size=644

void FUN_0032cecc(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  fVar6 = DAT_0032d15c;
  uVar1 = DAT_0032d158;
  if (param_9 != 0) {
    local_3c = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
    local_38 = (float)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
    local_34 = (float)VectorUnsignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = (float)VectorUnsignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
    local_3c = local_3c * DAT_0032d150;
    local_38 = local_38 * DAT_0032d150;
    local_34 = local_34 * DAT_0032d150;
    local_30 = local_30 * DAT_0032d150;
    if (((*DAT_0032d154 & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_0032d154), puVar2 = DAT_0032d160, iVar3 != 0)) {
      *DAT_0032d160 = uVar1;
      puVar2[1] = fVar6;
      puVar2[2] = fVar6;
      puVar2[3] = fVar6;
      puVar2[4] = fVar6;
      puVar2[5] = uVar1;
      puVar2[6] = fVar6;
      puVar2[7] = fVar6;
      puVar2[8] = fVar6;
      puVar2[9] = fVar6;
      puVar2[10] = uVar1;
      puVar2[0xb] = fVar6;
    }
    FUN_00372224(&local_6c,DAT_0032d160);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 <= param_4) << 0x1d;
    uVar4 = extraout_r1;
    if (!SUB41(uVar5 >> 0x1d,0)) {
      local_78 = DAT_0032d164;
      local_60 = 0;
      local_5c = 0;
      local_6c = DAT_0032d164;
      local_48 = 0;
      local_68 = 0;
      local_58 = uVar1;
      local_64 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_40 = 0;
      local_44 = uVar1;
      local_74 = fVar6;
      local_70 = fVar6;
      FUN_00372070(&local_6c,&local_6c,&local_78);
      uVar4 = extraout_r1_00;
    }
    if (((*DAT_0032d168 & 1) == 0) &&
       (uVar8 = FUN_003679b4(DAT_0032d168), uVar4 = (int)((ulonglong)uVar8 >> 0x20), (int)uVar8 != 0
       )) {
      FUN_0036788c(DAT_0032d16c);
      uVar4 = DAT_0032d174;
    }
    FUN_00347884(DAT_0032d178,uVar4);
    fVar6 = (float)VectorSignedToFloat(param_10,(byte)(uVar5 >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat(param_11,(byte)(uVar5 >> 0x15) & 3);
    local_78 = DAT_0032d180;
    local_74 = 0.0;
    FUN_00347790(2,(int)((param_1 - fVar6 * param_3) * DAT_0032d17c),
                 (int)((param_2 - fVar7 * param_3) * DAT_0032d17c),
                 (int)((param_1 + fVar6 * param_3) * DAT_0032d17c),
                 (int)((param_2 + fVar7 * param_3) * DAT_0032d17c),param_12,&local_6c,&local_3c);
  }
  return;
}
