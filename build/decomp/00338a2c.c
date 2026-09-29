// OoT3D decomp @ 00338a2c  name=FUN_00338a2c  size=100

void FUN_00338a2c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [6];
  short local_e;

  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_00342e8c(auStack_14,&local_20);
  local_e = local_e + *(short *)(param_1 + 0xe);
  FUN_00372448(param_1,auStack_14);
  *param_3 = extraout_s0;
  param_3[1] = extraout_s1;
  param_3[2] = extraout_s2;
  return;
}
