// OoT3D decomp @ 0020d794  name=FUN_0020d794  size=248

undefined4
FUN_0020d794(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_28;
  undefined4 auStack_24 [3];

  local_28 = *DAT_0020d88c;
  auStack_24[0] = DAT_0020d88c[1];
  auStack_24[1] = DAT_0020d88c[2];
  auStack_24[2] = DAT_0020d88c[3];
  uVar2 = FUN_0033a904(param_1,0,(int)*(short *)(&local_28 + *(int *)(DAT_0020d890 + 4) * 2),
                       auStack_24[*(int *)(DAT_0020d890 + 4) * 2],0xffffffff);
  param_3[0x1b] = uVar2;
  param_3[0x1e] = 1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *param_3 = *param_4;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[0xb] = *param_3;
  param_3[0xc] = param_3[1];
  param_3[0xd] = param_3[2];
  *(undefined2 *)((int)param_3 + 0x46) = *(undefined2 *)(param_4 + 3);
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_4 + 3));
  fVar6 = DAT_0020d894;
  param_3[3] = fVar4 * DAT_0020d894;
  fVar5 = (float)FUN_00338f60((int)*(short *)(param_4 + 3));
  fVar4 = DAT_0020d8a4;
  piVar1 = DAT_0020d8a0;
  param_3[5] = fVar5 * fVar6;
  param_3[4] = DAT_0020d898;
  param_3[7] = DAT_0020d89c;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x18) = (short)(int)(fVar4 / fVar6 + DAT_0020d8a8);
  param_3[10] = DAT_0020d8ac;
  param_3[9] = DAT_0020d8b0;
  return 1;
}
