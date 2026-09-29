// OoT3D decomp @ 00309208  name=FUN_00309208  size=72

void FUN_00309208(int *param_1,int param_2)

{
  uint uVar1;

  uVar1 = FUN_00339384(param_2 - *param_1,param_1[2]);
  *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) =
       *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) & ~(byte)(1 << (uVar1 & 7));
  param_1[4] = param_1[4] + -1;
  return;
}
