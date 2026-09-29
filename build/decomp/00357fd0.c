// OoT3D decomp @ 00357fd0  name=FUN_00357fd0  size=280

void FUN_00357fd0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_28 [12];
  float local_1c;

  fVar1 = DAT_003580e8;
  if (param_3 != (float *)0x0) {
    if (DAT_003580e8 <=
        (*param_3 - *(float *)(param_1 + 0x2a20)) * *(float *)(param_1 + 0x2a38) +
        DAT_003580e8 * *(float *)(param_1 + 0x2a3c) +
        (param_3[2] - *(float *)(param_1 + 0x2a28)) * *(float *)(param_1 + 0x2a40)) {
      fVar3 = *(float *)(param_1 + 0x2a20) - *param_3;
      fVar1 = *(float *)(param_1 + 0x2a24) - param_3[1];
      fVar2 = *(float *)(param_1 + 0x2a28) - param_3[2];
      FUN_003312f4(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2),param_1,param_2);
      return;
    }
  }
  FUN_00313cd4(param_2);
  *(undefined1 *)(param_2 + 0x1b7) = *(undefined1 *)(param_2 + 0x1b6);
  *(undefined1 *)(param_2 + 0x1b6) = 0;
  FUN_00357a28(param_2,1,auStack_28);
  local_1c = fVar1;
  FUN_00358964(param_2,1,auStack_28);
  FUN_003589cc(param_2,1);
  *(undefined1 *)(param_2 + 0x1b6) = *(undefined1 *)(param_2 + 0x1b7);
  return;
}
