// OoT3D decomp @ 00290924  name=FUN_00290924  size=436

void FUN_00290924(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined1 auStack_60 [4];
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;

  fVar3 = DAT_00290ae8;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                     (byte)(in_fpscr >> 0x15) & 3);
  local_24 = *(float *)(DAT_00290adc + 4) * DAT_00290ae0 * fVar5 * DAT_00290ad8;
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                     (byte)(in_fpscr >> 0x15) & 3);
  local_20 = local_24;
  local_1c = local_24;
  FUN_003735e8(fVar5 * DAT_00290ae4 * DAT_00290ae8,auStack_60,0);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_00290aec * fVar3;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == DAT_00290af0) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar6 = (float)FUN_003727f0();
    fVar7 = (float)FUN_00372674(fVar5);
    fVar5 = local_58 * fVar6;
    local_58 = local_58 * fVar7 - local_5c * fVar6;
    fVar1 = local_48 * fVar6;
    local_48 = local_48 * fVar7 - local_4c * fVar6;
    fVar2 = local_38 * fVar6;
    local_38 = local_38 * fVar7 - local_3c * fVar6;
    local_5c = local_5c * fVar7 + fVar5;
    local_4c = local_4c * fVar7 + fVar1;
    local_3c = local_3c * fVar7 + fVar2;
  }
  local_64 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(uVar4 >> 0x15) & 3);
  local_70 = DAT_00290af4;
  local_6c = DAT_00290af4;
  local_68 = DAT_00290af4;
  local_64 = local_64 * DAT_00290af8;
  FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + 0x24),&local_30,auStack_60,&local_24,&local_70,0);
  FUN_003735e8(fVar3,auStack_60,1);
  FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + 0x24),&local_30,auStack_60,&local_24,&local_70,0);
  return;
}
