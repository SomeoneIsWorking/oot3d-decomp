// OoT3D decomp @ 00357388  name=FUN_00357388  size=440

void FUN_00357388(int param_1,float *param_2,undefined4 param_3,int param_4)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;

  if (param_4 == 0) {
    FUN_00358964(*(undefined4 *)(param_1 + 0x178),param_3,param_2);
  }
  else {
    FUN_00357a28(*(undefined4 *)(param_1 + 0x178),param_3,&local_24);
    if (param_4 == 6) {
      local_24 = local_24 - *param_2;
      local_20 = local_20 - param_2[1];
      local_1c = local_1c - param_2[2];
      local_18 = local_18 - param_2[3];
    }
    else if (param_4 < 7) {
      if (param_4 == 1) {
        local_24 = *param_2;
        local_20 = param_2[1];
        local_1c = param_2[2];
      }
      else if (param_4 == 2) {
        local_18 = param_2[3];
      }
      else if (param_4 == 3) {
        local_24 = local_24 + *param_2;
        local_20 = local_20 + param_2[1];
        local_1c = local_1c + param_2[2];
        local_18 = local_18 + param_2[3];
      }
    }
    else if (param_4 == 9) {
      local_24 = local_24 * *param_2;
      local_20 = local_20 * param_2[1];
      local_1c = local_1c * param_2[2];
      local_18 = local_18 * param_2[3];
    }
    else if (param_4 == 0xc) {
      local_24 = local_24 * *param_2;
      local_20 = local_20 * param_2[1];
      local_1c = local_1c * param_2[2];
      local_18 = param_2[3];
    }
    FUN_00358964(*(undefined4 *)(param_1 + 0x178),param_3,&local_24);
  }
  FUN_003589cc(*(undefined4 *)(param_1 + 0x178),param_3);
  return;
}
