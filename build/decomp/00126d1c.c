// OoT3D decomp @ 00126d1c  name=FUN_00126d1c  size=164

void FUN_00126d1c(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_003705a0(DAT_00126dc4,DAT_00126dc0,param_1 + 0x54);
  fVar1 = DAT_00126dc8;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) + fVar1,DAT_00126dcc,param_1 + 0x2c);
  if (iVar2 != 0) {
    FUN_00362a74(param_1);
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1999;
  FUN_0036f9d0(DAT_00126dd0,param_2,param_1 + 8,0,0xc,5,1,0xffffffff,10,0);
  return;
}
