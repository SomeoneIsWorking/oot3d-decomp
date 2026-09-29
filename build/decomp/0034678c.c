// OoT3D decomp @ 0034678c  name=FUN_0034678c  size=132

void FUN_0034678c(int param_1,int param_2)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  fVar3 = DAT_00346848;
  local_28 = DAT_00346810;
  uStack_24 = DAT_00346814;
  uStack_20 = DAT_00346818;
  uStack_1c = DAT_0034681c;
  uStack_18 = DAT_00346820;
  uStack_14 = DAT_00346824;
  local_40 = DAT_00346828;
  uStack_3c = DAT_0034682c;
  uStack_38 = DAT_00346830;
  uStack_34 = DAT_00346834;
  local_30 = DAT_00346838;
  uStack_2c = DAT_0034683c;
  *(char *)(DAT_00346840 + *(short *)(param_1 + 0x1c)) = (char)param_2;
  fVar1 = DAT_00346844;
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)((int)&local_28 + param_2),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1c0) = fVar3 + fVar2 * DAT_00346844;
  fVar3 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)((int)&local_40 + param_2),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1c8) = DAT_0034684c - fVar3 * fVar1;
  return;
}
