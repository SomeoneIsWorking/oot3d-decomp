// OoT3D decomp @ 00358778  name=FUN_00358778  size=492

void FUN_00358778(int param_1,int param_2,int param_3,float *param_4,int param_5)

{
  int iVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if (param_5 == 0) {
      FUN_003688a8(iVar1,param_2,param_3,param_4);
    }
    else {
      FUN_00331094(iVar1,param_2,param_3,&local_28);
      if (param_5 == 6) {
        local_28 = local_28 - *param_4;
        local_24 = local_24 - param_4[1];
        local_20 = local_20 - param_4[2];
        local_1c = local_1c - param_4[3];
      }
      else if (param_5 < 7) {
        if (param_5 == 1) {
          local_28 = *param_4;
          local_24 = param_4[1];
          local_20 = param_4[2];
        }
        else if (param_5 == 2) {
          local_1c = param_4[3];
        }
        else if (param_5 == 3) {
          local_28 = local_28 + *param_4;
          local_24 = local_24 + param_4[1];
          local_20 = local_20 + param_4[2];
          local_1c = local_1c + param_4[3];
        }
      }
      else if (param_5 == 9) {
        local_28 = local_28 * *param_4;
        local_24 = local_24 * param_4[1];
        local_20 = local_20 * param_4[2];
        local_1c = local_1c * param_4[3];
      }
      else if (param_5 == 0xc) {
        local_28 = local_28 * *param_4;
        local_24 = local_24 * param_4[1];
        local_20 = local_20 * param_4[2];
        local_1c = param_4[3];
      }
      FUN_003688a8(iVar1,param_2,param_3,&local_28);
    }
    *(undefined *)(*(int *)(iVar1 + 4) + param_2 * 0x124 + param_3 + 10) = 1;
  }
  return;
}

