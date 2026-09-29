// OoT3D decomp @ 00363f44  name=FUN_00363f44  size=268

undefined4
FUN_00363f44(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,float *param_6,undefined4 *param_7,short *param_8,undefined4 param_9,int param_10)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint in_fpscr;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  uVar3 = FUN_0036e168(*param_7,param_1,param_2,param_3,param_6);
  if (param_10 == 0) {
    uVar3 = FUN_0036e168(*param_7,param_1,param_2,param_3,param_6);
    FUN_00368d94(*param_8,param_9);
    fVar2 = DAT_00364058;
    fVar5 = DAT_00364054;
    fVar1 = DAT_00364050;
    fVar6 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat(extraout_r1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)FUN_003727f0(fVar4 * (DAT_00364050 / fVar6) * DAT_00364054 * DAT_00364058);
    *(float *)(param_4 + 0x218) = fVar1 + fVar4 * *param_6;
    FUN_00368d94(*param_8,param_9);
    fVar6 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat(extraout_r1_00,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)FUN_003727f0(fVar4 * (fVar1 / fVar6) * fVar5 * fVar2);
    *(float *)(param_4 + 0x21c) = fVar1 - fVar5 * *param_6;
    *param_8 = *param_8 + 1;
  }
  return uVar3;
}
