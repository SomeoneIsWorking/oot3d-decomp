// OoT3D decomp @ 00358b3c  name=FUN_00358b3c  size=180

undefined4 FUN_00358b3c(float param_1,int param_2,int param_3,short param_4)

{
  int iVar1;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined auStack_14 [4];
  
  if (0x40000000 < (int)ABS(param_1)) {
    local_24 = *(undefined4 *)(param_3 + 0x2340);
    local_1c = *(undefined4 *)(param_3 + 0x2348);
    local_18 = *(float *)(param_3 + 0x2c);
    iVar1 = FUN_0033eeb8(param_2,param_2 + 0xa98,&local_18,auStack_14);
    if (iVar1 != 0) {
      if ((int)(local_18 - *(float *)(param_3 + 0x2c)) < DAT_00358bf0) {
        local_20 = local_18;
        FUN_0036e670(param_2,&local_24,0,0,0,(int)param_4);
        return 1;
      }
    }
  }
  return 0;
}

