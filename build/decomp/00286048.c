// OoT3D decomp @ 00286048  name=FUN_00286048  size=428

void FUN_00286048(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;

  FUN_00372224(&local_44,param_1 + 0x148);
  uVar3 = DAT_002861f4;
  fVar4 = (float)FUN_003727f0();
  fVar5 = (float)FUN_00372674(uVar3);
  uVar3 = DAT_002861f8;
  fVar7 = local_40 * fVar4;
  local_40 = local_40 * fVar5 - local_44 * fVar4;
  fVar1 = local_30 * fVar4;
  local_30 = local_30 * fVar5 - local_34 * fVar4;
  fVar2 = local_20 * fVar4;
  local_20 = local_20 * fVar5 - local_24 * fVar4;
  local_44 = local_44 * fVar5 + fVar7;
  local_34 = local_34 * fVar5 + fVar1;
  local_24 = local_24 * fVar5 + fVar2;
  fVar5 = (float)FUN_003727f0(DAT_002861f8);
  fVar6 = (float)FUN_00372674(uVar3);
  uVar3 = DAT_00286200;
  fVar4 = DAT_002861fc;
  fVar7 = local_3c * fVar5;
  local_3c = local_3c * fVar6 - local_40 * fVar5;
  fVar1 = local_2c * fVar5;
  local_2c = local_2c * fVar6 - local_30 * fVar5;
  fVar2 = local_1c * fVar5;
  local_1c = local_1c * fVar6 - local_20 * fVar5;
  if (*(int *)(param_1 + 0x25c) != 0) {
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
    local_40 = local_40 * fVar6 + fVar7;
    local_30 = local_30 * fVar6 + fVar1;
    local_20 = local_20 * fVar6 + fVar2;
    FUN_003695cc(DAT_00286200,DAT_00286200,DAT_00286200,fVar5 * DAT_002861fc,
                 *(int *)(param_1 + 0x25c),0,4);
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x1a8),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(uVar3,uVar3,uVar3,fVar7 * fVar4,*(undefined4 *)(param_1 + 0x25c),1,4,0);
    *(undefined1 *)(*(int *)(param_1 + 0x25c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x25c),&local_44);
    FUN_00372170(*(undefined4 *)(param_1 + 0x25c),0);
  }
  return;
}
