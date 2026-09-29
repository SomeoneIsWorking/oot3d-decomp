// OoT3D decomp @ 00196afc  name=FUN_00196afc  size=156

void FUN_00196afc(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  fVar2 = DAT_00196ba0;
  fVar1 = DAT_00196b9c;
  if (*(char *)(param_1 + 0xa0d) == '\0') {
    FUN_00374a58(DAT_00196b98,param_1 + 0x228,10);
    uVar3 = FUN_0036ae14(param_1 + 0x228,10);
    fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x88c) = fVar4;
    *(float *)(param_1 + 0x890) = (fVar4 - fVar1) - fVar2;
  }
  else {
    FUN_00374a58(DAT_00196b98,param_1 + 0x228,0xb);
    uVar3 = FUN_0036ae14(param_1 + 0x228,0xb);
    fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x88c) = fVar4;
    *(float *)(param_1 + 0x890) = (fVar4 - fVar1) - fVar2;
  }
  *(undefined4 *)(param_1 + 0x888) = DAT_00196ba4;
  return;
}
