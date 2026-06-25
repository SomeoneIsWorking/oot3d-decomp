// OoT3D decomp @ 002d4a10  name=FUN_002d4a10  size=76

void FUN_002d4a10(float param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 < DAT_002d4a5c) {
    param_1 = DAT_002d4a5c;
  }
  uVar1 = FUN_0030b44c((undefined4 *)(param_2 + 0xa0));
  *(undefined4 *)(param_2 + 0xa0) = uVar1;
  *(float *)(param_2 + 0xa4) = param_1;
  *(undefined4 *)(param_2 + 0xa8) = param_3;
  *(undefined4 *)(param_2 + 0xac) = 0;
  return;
}

