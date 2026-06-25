// OoT3D decomp @ 002fe05c  name=FUN_002fe05c  size=132

undefined4 * FUN_002fe05c(undefined4 *param_1,undefined4 param_2)

{
  undefined auStack_18 [4];
  undefined auStack_14 [8];
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0x80;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)((int)param_1 + 0x49) = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  FUN_004370b0();
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  FUN_002ea37c(param_1);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)((int)param_1 + 0x49) = 0;
  FUN_00436d18(param_1,auStack_14,auStack_18,1);
  return param_1;
}

