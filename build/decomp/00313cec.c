// OoT3D decomp @ 00313cec  name=FUN_00313cec  size=96

void FUN_00313cec(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00313d54;
  uVar2 = DAT_00313d50;
  uVar1 = DAT_00313d4c;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  *(short *)(param_1 + 3) = (short)uVar3;
  *(undefined2 *)((int)param_1 + 0xe) = 0xf;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined *)((int)param_1 + 0x11) = 0;
  *(undefined *)((int)param_1 + 0x12) = 1;
  *(undefined *)((int)param_1 + 0x13) = 1;
  param_1[5] = uVar1;
  *(undefined *)(param_1 + 6) = 0;
  param_1[7] = 0x18;
  param_1[0xd] = uVar1;
  param_1[0xc] = uVar1;
  param_1[0xb] = uVar1;
  param_1[10] = uVar1;
  return;
}

