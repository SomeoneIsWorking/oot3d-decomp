// OoT3D decomp @ 003471c8  name=FUN_003471c8  size=116

void FUN_003471c8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                 undefined1 param_9,undefined2 param_10)

{
  int *piVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;

  *param_3 = param_4;
  *(undefined2 *)(param_3 + 1) = param_5;
  *(undefined2 *)((int)param_3 + 6) = param_6;
  *(undefined2 *)(param_3 + 2) = param_7;
  piVar1 = DAT_0034723c;
  *(undefined2 *)((int)param_3 + 10) = param_8;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(DAT_00347240 / fVar3 + DAT_00347244,3);
  *(char *)(param_3 + 4) = (char)uVar2;
  param_3[3] = param_1;
  *(undefined1 *)((int)param_3 + 0x11) = param_9;
  *(undefined2 *)((int)param_3 + 0x16) = param_10;
  return;
}
