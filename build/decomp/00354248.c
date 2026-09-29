// OoT3D decomp @ 00354248  name=FUN_00354248  size=112

void FUN_00354248(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  float fVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;

  fVar1 = DAT_003542bc;
  *param_3 = param_4;
  *(undefined2 *)(param_3 + 1) = param_5;
  *(undefined2 *)((int)param_3 + 6) = param_6;
  *(undefined2 *)(param_3 + 2) = param_7;
  *(undefined2 *)((int)param_3 + 10) = param_8;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003542b8 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(fVar1 / fVar3 + DAT_003542c0,3);
  *(char *)(param_3 + 4) = (char)uVar2;
  *(undefined1 *)((int)param_3 + 0x11) = 0;
  *(undefined2 *)((int)param_3 + 0x16) = 0;
  param_3[3] = param_1;
  return;
}
