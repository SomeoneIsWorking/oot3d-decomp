// OoT3D decomp @ 002cf9e0  name=FUN_002cf9e0  size=696

undefined4 FUN_002cf9e0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar1 = DAT_002cfc98;
  fVar2 = *(float *)(param_1 + 0x1d4);
  if (fVar2 == DAT_002cfc98) {
    return 0;
  }
  if (fVar2 == 1.0) {
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1b8);
    *(float *)(param_1 + 0x1d4) = fVar1;
  }
  else {
    *(float *)(param_1 + 0x1bc) =
         *(float *)(param_1 + 0x1bc) +
         (*(float *)(param_1 + 0x1a4) - *(float *)(param_1 + 0x1bc)) * fVar2;
    *(float *)(param_1 + 0x1c0) =
         *(float *)(param_1 + 0x1c0) +
         (*(float *)(param_1 + 0x1a8) - *(float *)(param_1 + 0x1c0)) * fVar2;
    *(float *)(param_1 + 0x1c4) =
         *(float *)(param_1 + 0x1c4) +
         (*(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1c4)) * fVar2;
    *(float *)(param_1 + 0x1c8) =
         *(float *)(param_1 + 0x1c8) +
         (*(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1c8)) * fVar2;
    *(float *)(param_1 + 0x1cc) =
         *(float *)(param_1 + 0x1cc) +
         (*(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1cc)) * fVar2;
    *(float *)(param_1 + 0x1d0) =
         *(float *)(param_1 + 0x1d0) +
         (*(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1d0)) * fVar2;
  }
  fVar2 = DAT_002cfc9c;
  local_24 = DAT_002cfc9c;
  local_20 = fVar1;
  local_1c = fVar1;
  FUN_002c82d4(*(undefined4 *)(param_1 + 0x1bc),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  local_24 = fVar1;
  local_20 = fVar2;
  local_1c = fVar1;
  FUN_002c82d4(*(undefined4 *)(param_1 + 0x1c0),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  local_24 = fVar1;
  local_20 = fVar1;
  local_1c = fVar2;
  FUN_002c82d4(*(undefined4 *)(param_1 + 0x1c4),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  local_64 = *(undefined4 *)(param_1 + 0x1c8);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = *(undefined4 *)(param_1 + 0x1cc);
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = *(undefined4 *)(param_1 + 0x1d0);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  FUN_002d9688(param_2,param_2,&local_64);
  local_24 = fVar1;
  local_20 = fVar1;
  local_1c = fVar2;
  FUN_002c82d4(-*(float *)(param_1 + 0x1c4),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  local_24 = fVar1;
  local_20 = fVar2;
  local_1c = fVar1;
  FUN_002c82d4(-*(float *)(param_1 + 0x1c0),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  local_24 = fVar2;
  local_20 = fVar1;
  local_1c = fVar1;
  FUN_002c82d4(-*(float *)(param_1 + 0x1bc),&local_64,&local_24);
  FUN_002d9688(param_2,param_2,&local_64);
  return 1;
}

