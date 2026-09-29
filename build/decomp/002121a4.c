// OoT3D decomp @ 002121a4  name=FUN_002121a4  size=80

void FUN_002121a4(int param_1)

{
  float fVar1;

  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) + DAT_002121f4;
  FUN_003731e0(param_1 + 0x1a4);
  FUN_0033526c(param_1);
  fVar1 = DAT_002121f8;
  if (DAT_002121f8 <= *(float *)(param_1 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xce8) = 3;
    *(float *)(param_1 + 0xc4) = fVar1;
  }
  return;
}
