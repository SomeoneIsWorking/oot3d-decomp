// OoT3D decomp @ 003aa608  name=FUN_003aa608  size=136

void FUN_003aa608(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8,int param_9,
                 undefined4 param_10,undefined4 param_11)

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
  FUN_00324758(DAT_003aa690,param_1,2,0,param_2,param_3,param_4,param_5,param_10,param_11,
               bVar1 | 0x10);
  return;
}
