// OoT3D decomp @ 0032d48c  name=FUN_0032d48c  size=148

void FUN_0032d48c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;

  FUN_00374a58(DAT_0032d520,param_1 + 0x1d4,1,param_3,param_4,param_4);
  fVar1 = DAT_0032d528;
  *(short *)(DAT_0032d524 + param_1) = (short)param_2;
  *(byte *)(param_1 + 0x3b9) = *(byte *)(param_1 + 0x3b9) & 0xfe;
  FUN_0037572c(*(float *)(param_1 + 0x3a0) * fVar1,param_1);
  if (param_2 == 2) {
    FUN_00375ed8(param_1,0,0x9b,0,0x3e);
  }
  else {
    FUN_00375ed8(param_1,0x400000,0xff,0,0x2a);
  }
  *(undefined4 *)(param_1 + 600) = DAT_0032d52c;
  return;
}
