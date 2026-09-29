// OoT3D decomp @ 001f294c  name=FUN_001f294c  size=468

void FUN_001f294c(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;

  local_2c = param_3[1];
  local_1c = param_3[2];
  local_20 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_24 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_20 = local_20 * DAT_001f2b20;
  local_24 = local_24 * DAT_001f2b20;
  local_3c = *param_3;
  local_48 = local_20 * 1.0;
  local_38 = local_20 * 0.0;
  local_28 = local_20 * 0.0;
  local_44 = local_24 * 0.0;
  local_34 = local_24 * 1.0;
  local_24 = local_24 * 0.0;
  local_40 = local_20 * 0.0;
  local_30 = local_20 * 0.0;
  local_20 = local_20 * 1.0;
  FUN_00371fac(&local_48,param_1 + 0x2fc);
  uVar1 = DAT_001f2b24;
  if ((param_2 & 1) != 0) {
    fVar2 = (float)FUN_003727f0();
    fVar3 = (float)FUN_00372674(uVar1);
    fVar4 = local_48 * fVar2;
    local_48 = local_48 * fVar3 - local_40 * fVar2;
    local_40 = fVar4 + local_40 * fVar3;
    fVar4 = local_38 * fVar2;
    local_38 = local_38 * fVar3 - local_30 * fVar2;
    local_30 = fVar4 + local_30 * fVar3;
    fVar4 = local_28 * fVar2;
    local_28 = local_28 * fVar3 - local_20 * fVar2;
    local_20 = fVar4 + local_20 * fVar3;
  }
  *(undefined1 *)(*(int *)param_3[0x1c] + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)param_3[0x1c],&local_48);
  FUN_00372170(*(undefined4 *)param_3[0x1c],0);
  return;
}
