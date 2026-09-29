// OoT3D decomp @ 002a2598  name=FUN_002a2598  size=200

void FUN_002a2598(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [48];

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x56),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_002a2660;
  FUN_0035619c(param_1,auStack_54,auStack_64,(int)*(short *)(param_3 + 0x44),
               (int)*(short *)(param_3 + 0x46),(int)*(short *)(param_3 + 0x48),
               (int)*(short *)(param_3 + 0x4a),(int)*(short *)(param_3 + 0x4c),
               (int)*(short *)(param_3 + 0x4e),(int)*(short *)(param_3 + 0x50));
  FUN_0033e6c8(param_1,auStack_44,param_3);
  local_70 = fVar1 * DAT_002a2664;
  local_6c = local_70;
  local_68 = local_70;
  if (*(int *)(*(int *)(param_3 + 100) + 0x1fc) == 0) {
    FUN_003429c8(*(int *)(param_3 + 100),1,auStack_64);
  }
  FUN_00371f1c(*(undefined4 *)(param_3 + 100),0,auStack_44,&local_70,auStack_54,0);
  return;
}
