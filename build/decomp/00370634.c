// OoT3D decomp @ 00370634  name=FUN_00370634  size=244

void FUN_00370634(int param_1)

{
  float fVar1;

  FUN_00370350(DAT_00370728,param_1 + 0x1a4,1);
  fVar1 = DAT_0037072c;
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x77c);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x780);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x784);
  *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x770);
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x774);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x778);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x6fc);
  *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_1 + 0x700);
  *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x704);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(param_1 + 0x6f4);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(param_1 + 0x6f8);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0x794);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x798);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x79c);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 0x788);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_1 + 0x78c);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 0x790);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x714);
  *(undefined4 *)(param_1 + 0x70c) = *(undefined4 *)(param_1 + 0x718);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 0x71c);
  fVar1 = *(float *)(param_1 + 0x2c) - fVar1;
  *(float *)(param_1 + 0x780) = fVar1;
  *(float *)(param_1 + 0x774) = fVar1;
  *(float *)(param_1 + 0x700) = fVar1;
  *(float *)(param_1 + 0x6f4) = fVar1;
  *(float *)(param_1 + 0x798) = fVar1;
  *(float *)(param_1 + 0x78c) = fVar1;
  *(float *)(param_1 + 0x718) = fVar1;
  *(float *)(param_1 + 0x70c) = fVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
  *(float *)(param_1 + 0x6ac) = *(float *)(param_1 + 0x2c);
  *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) | 1;
  *(undefined1 *)(param_1 + 0x6a5) = 0;
  *(undefined4 *)(param_1 + 0x6a0) = DAT_00370730;
  return;
}
