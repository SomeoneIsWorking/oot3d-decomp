// OoT3D decomp @ 002644c8  name=FUN_002644c8  size=208

void FUN_002644c8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint in_fpscr;
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_00264598;
  FUN_0035619c(param_1,auStack_20,auStack_30,(int)*(short *)(param_3 + 0x12),
               (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),
               (int)*(short *)((int)param_3 + 0x4e),(int)*(short *)(param_3 + 0x14),
               (int)*(short *)((int)param_3 + 0x52),(int)*(short *)(param_3 + 0x15));
  local_3c = *param_3;
  local_38 = param_3[1];
  local_34 = param_3[2];
  local_48 = fVar1 * DAT_0026459c;
  local_44 = local_48;
  local_40 = local_48;
  if (*(int *)(param_3[0x19] + 0x1fc) == 0) {
    FUN_003429c8(param_3[0x19],1,auStack_30);
  }
  FUN_00371f1c(param_3[0x19],&local_3c,0,&local_48,auStack_20,0);
  return;
}
