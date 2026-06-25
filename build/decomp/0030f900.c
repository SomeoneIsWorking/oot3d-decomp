// OoT3D decomp @ 0030f900  name=FUN_0030f900  size=100

void FUN_0030f900(undefined4 param_1,uint param_2,uint param_3,int param_4,int param_5_00,
                 int param_5)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      FUN_002d4258(param_1,uVar1 == param_3,param_4 + uVar1 * 0x34,param_5_00 + uVar1 * 0x34,
                   param_5 + uVar1 * 0x34);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

