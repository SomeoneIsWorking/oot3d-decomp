// OoT3D decomp @ 003393ec  name=FUN_003393ec  size=132

void FUN_003393ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8,int param_9,
                 undefined4 param_10)

{
  byte bVar1;
  
  bVar1 = param_6 != 0;
  if (param_7 != 0) {
    bVar1 = bVar1 | 2;
  }
  if (param_8 != 0) {
    bVar1 = bVar1 | 4;
  }
  if (param_9 != 0) {
    bVar1 = bVar1 | 8;
  }
  FUN_00324758(DAT_00339470,param_1,0,0,param_2,param_3,param_4,param_5,param_10,0,bVar1 | 0x10);
  return;
}

