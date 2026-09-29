// OoT3D decomp @ 003ef13c  name=FUN_003ef13c  size=164

void FUN_003ef13c(int param_1)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 100) = fVar2;
  fVar1 = DAT_003ef1e0;
  if (fVar2 < *(float *)(param_1 + 0x74)) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 0x74);
  }
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) * fVar1;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) * fVar1;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + *(short *)(param_1 + 0x34);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x36);
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + *(short *)(param_1 + 0x38);
  if (*(short *)(param_1 + 0x962) == 0) {
    FUN_00374428();
  }
  else {
    *(short *)(param_1 + 0x962) = *(short *)(param_1 + 0x962) + -1;
  }
  FUN_0036b96c(param_1);
  return;
}
