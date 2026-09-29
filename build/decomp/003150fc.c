// OoT3D decomp @ 003150fc  name=FUN_003150fc  size=576

void FUN_003150fc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;

  FUN_00372224(&local_58,param_1 + 0x148);
  *(int *)(param_1 + 0x7c) = param_2;
  local_1c = (float)VectorSignedToFloat((int)*(short *)(param_2 + 10),(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_0031533c;
  local_18 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_18 = local_18 * DAT_0031533c;
  local_14 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_14 = local_14 * DAT_0031533c;
  if (((int)ABS(local_1c * *(float *)(param_1 + 0x1bc) + local_18 * *(float *)(param_1 + 0x1c0) +
                local_14 * *(float *)(param_1 + 0x1c4)) < DAT_00315340) &&
     (iVar2 = FUN_00333ed8(), iVar1 = DAT_00315344, DAT_00315344 <= iVar2)) {
    *(bool *)(param_1 + 0x1aa) = local_18 < DAT_00315348;
    local_28 = *(float *)(param_1 + 0x1c0) * local_14 - *(float *)(param_1 + 0x1c4) * local_18;
    local_24 = *(float *)(param_1 + 0x1c4) * local_1c - *(float *)(param_1 + 0x1bc) * local_14;
    local_20 = *(float *)(param_1 + 0x1bc) * local_18 - *(float *)(param_1 + 0x1c0) * local_1c;
    FUN_003625f8(&local_58,&local_28);
    FUN_003735ac(&local_28,&local_58,param_1 + 0x1c8);
    *(float *)(param_1 + 0x1c8) = local_28;
    *(float *)(param_1 + 0x1cc) = local_24;
    *(float *)(param_1 + 0x1d0) = local_20;
    fVar6 = *(float *)(param_1 + 0x1cc) * local_14 - *(float *)(param_1 + 0x1d0) * local_18;
    *(float *)(param_1 + 0x1b0) = fVar6;
    fVar4 = *(float *)(param_1 + 0x1d0) * local_1c - *(float *)(param_1 + 0x1c8) * local_14;
    *(float *)(param_1 + 0x1b4) = fVar4;
    fVar5 = *(float *)(param_1 + 0x1c8) * local_18 - *(float *)(param_1 + 0x1cc) * local_1c;
    *(float *)(param_1 + 0x1b8) = fVar5;
    fVar3 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
    if (iVar1 <= (int)fVar3) {
      fVar3 = DAT_0031534c / fVar3;
      *(float *)(param_1 + 0x1b0) = fVar6 * fVar3;
      *(float *)(param_1 + 0x1b4) = fVar4 * fVar3;
      *(float *)(param_1 + 0x1b8) = fVar5 * fVar3;
      *(float *)(param_1 + 0x1bc) = local_1c;
      *(float *)(param_1 + 0x1c0) = local_18;
      *(float *)(param_1 + 0x1c4) = local_14;
      local_58 = *(undefined4 *)(param_1 + 0x1c8);
      local_48 = *(undefined4 *)(param_1 + 0x1cc);
      local_38 = *(undefined4 *)(param_1 + 0x1d0);
      local_54 = local_1c;
      local_44 = local_18;
      local_34 = local_14;
      local_50 = *(undefined4 *)(param_1 + 0x1b0);
      local_40 = *(undefined4 *)(param_1 + 0x1b4);
      local_30 = *(undefined4 *)(param_1 + 0x1b8);
      FUN_003624c8(&local_58,param_1 + 0x34,0);
      *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0x34);
      return;
    }
    FUN_00333ddc(param_1,param_3);
  }
  return;
}
