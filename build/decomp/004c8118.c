// OoT3D decomp @ 004c8118  name=FUN_004c8118  size=32

void FUN_004c8118(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1 = param_1 + param_2 * 0x10;
  uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  uVar2 = *(undefined4 *)(param_1 + 0x2c8);
  uVar3 = *(undefined4 *)(param_1 + 0x2cc);
  *param_3 = *(undefined4 *)(param_1 + 0x2c0);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  return;
}

