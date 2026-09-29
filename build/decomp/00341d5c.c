// OoT3D decomp @ 00341d5c  name=FUN_00341d5c  size=140

void FUN_00341d5c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  uint in_fpscr;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_1c;

  local_28 = *DAT_00341de8;
  uStack_24 = DAT_00341de8[1];
  uStack_20 = DAT_00341de8[2];
  local_1c = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_00341dec;
  uVar1 = FUN_003687a8(*(undefined4 *)(param_2 + 0x28));
  FUN_003589cc(uVar1,4);
  FUN_00358964(uVar1,4,&local_28);
  FUN_0035e240(param_2,param_5 + 0x148,param_3,param_4,param_5,0);
  return;
}
