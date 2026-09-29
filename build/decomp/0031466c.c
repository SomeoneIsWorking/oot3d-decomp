// OoT3D decomp @ 0031466c  name=FUN_0031466c  size=92

void FUN_0031466c(undefined4 *param_1,int param_2)

{
  undefined4 local_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_24 = *DAT_003146c8;
  uStack_20 = DAT_003146c8[1];
  uStack_1c = DAT_003146c8[2];
  uStack_18 = DAT_003146c8[3];
  uStack_14 = DAT_003146c8[4];
  if (param_2 == 0) {
    local_24 = 0;
  }
  local_3c[0] = *DAT_003146cc;
  local_3c[1] = DAT_003146cc[1];
  local_3c[2] = DAT_003146cc[2];
  local_3c[3] = DAT_003146cc[3];
  uStack_2c = DAT_003146cc[4];
  uStack_28 = DAT_003146cc[5];
  FUN_00307bd8(*param_1,local_3c[param_2],5,1,0xf,&local_24);
  return;
}
