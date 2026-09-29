// OoT3D decomp @ 00369d44  name=FUN_00369d44  size=496

void FUN_00369d44(float param_1,float param_2,int param_3,float *param_4)

{
  uint in_fpscr;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar1;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  undefined1 auStack_30 [4];
  short local_2c;
  short local_2a;
  float local_28;
  short local_24;
  short local_22;
  float local_20;
  float local_1c;
  float local_18;

  local_20 = DAT_00369f34;
  if (*(short *)(param_3 + 0x1a) == 0) {
    local_1c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 10),(byte)(in_fpscr >> 0x15) & 3
                                         );
    local_1c = local_1c * param_1;
    local_18 = DAT_00369f34;
    local_28 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xc),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * param_2;
    local_24 = *(undefined2 *)(param_3 + 0x12);
    local_22 = *(undefined2 *)(param_3 + 0x14);
    FUN_0035579c(&local_28,*(int *)(param_3 + 4) + 0x8c,*(int *)(param_3 + 4) + 0x80);
    local_20 = local_20 + extraout_s0_01;
    local_1c = local_1c + extraout_s1_01;
    local_18 = local_18 + extraout_s2_01;
  }
  else {
    local_1c = DAT_00369f34;
    local_18 = DAT_00369f34;
    FUN_00372474(auStack_30);
    local_28 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 10),(byte)(in_fpscr >> 0x15) & 3
                                         );
    local_28 = local_28 * param_1;
    local_24 = local_2c + *(short *)(param_3 + 0x12) + 0x4000;
    local_22 = local_2a + *(short *)(param_3 + 0x14);
    FUN_0035579c(&local_28);
    local_20 = local_20 + extraout_s0;
    local_1c = local_1c + extraout_s1;
    local_18 = local_18 + extraout_s2;
    local_28 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xc),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * param_2;
    local_24 = local_2c + *(short *)(param_3 + 0x12);
    local_22 = local_2a + *(short *)(param_3 + 0x14) + 0x4000;
    FUN_0035579c(&local_28);
    local_20 = local_20 + extraout_s0_00;
    local_1c = local_1c + extraout_s1_00;
    local_18 = local_18 + extraout_s2_00;
  }
  fVar1 = param_1 * DAT_00369f38;
  param_4[3] = local_20;
  param_4[4] = local_1c;
  param_4[5] = local_18;
  *param_4 = param_4[3];
  param_4[1] = param_4[4];
  param_4[2] = param_4[5];
  *(short *)((int)param_4 + 0x1a) = (short)(int)fVar1;
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_4 + 6) = (short)(int)(fVar1 * param_1);
  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_4 + 7) = (short)(int)(fVar1 * param_1);
  return;
}
