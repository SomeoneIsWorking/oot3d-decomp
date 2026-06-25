// OoT3D decomp @ 0036ea98  name=FUN_0036ea98  size=304

void FUN_0036ea98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined *param_5,undefined *param_6,undefined2 param_7,undefined4 param_8)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  undefined auStack_64 [12];
  undefined auStack_58 [4];
  float local_54;
  undefined auStack_4c [4];
  float local_48;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined local_2c;
  
  FUN_0036df4c(auStack_64);
  FUN_0036df4c(auStack_58,param_3);
  fVar1 = (float)FUN_003759d0();
  fVar2 = DAT_0036ebc8;
  local_54 = (local_54 + fVar1 * local_54) * DAT_0036ebc8;
  FUN_0036df4c(auStack_4c,param_4);
  fVar1 = (float)FUN_003759d0();
  local_48 = (local_48 + fVar1 * local_48) * fVar2;
  local_2c = 0;
  local_34 = param_8;
  local_30 = (undefined2)DAT_0036ebcc;
  fVar2 = (float)FUN_003759d0();
  local_36 = param_7;
  local_2e = (undefined2)(int)(fVar2 * DAT_0036ebd0);
  local_40 = *param_5;
  local_3f = param_5[1];
  local_3e = param_5[2];
  local_3d = param_5[3];
  local_3c = *param_6;
  local_3b = param_6[1];
  local_3a = param_6[2];
  local_39 = param_6[3];
  fVar2 = (float)VectorSignedToFloat(local_34,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = (undefined2)(int)((DAT_0036ebd4 / fVar2) * DAT_0036ebd8);
  FUN_00342c10(param_1,1,0x80,auStack_64);
  return;
}

