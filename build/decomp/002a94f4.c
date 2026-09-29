// OoT3D decomp @ 002a94f4  name=FUN_002a94f4  size=180

undefined4 FUN_002a94f4(undefined4 param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_2 == 1) {
    fVar3 = *(float *)(param_4 + 0x660) * DAT_002a95a8;
    if (fVar3 != DAT_002a95ac) {
      fVar1 = (float)FUN_003727f0();
      fVar3 = (float)FUN_00372674(fVar3);
      fVar2 = *param_3;
      *param_3 = fVar2 * fVar3 + param_3[1] * fVar1;
      param_3[1] = param_3[1] * fVar3 - fVar2 * fVar1;
      fVar2 = param_3[4];
      param_3[4] = fVar2 * fVar3 + param_3[5] * fVar1;
      param_3[5] = param_3[5] * fVar3 - fVar2 * fVar1;
      fVar2 = param_3[8];
      param_3[8] = fVar2 * fVar3 + param_3[9] * fVar1;
      param_3[9] = param_3[9] * fVar3 - fVar2 * fVar1;
    }
  }
  return 0;
}
