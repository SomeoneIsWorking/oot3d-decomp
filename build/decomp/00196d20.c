// OoT3D decomp @ 00196d20  name=FUN_00196d20  size=140

void FUN_00196d20(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;

  fVar1 = DAT_00196db0;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_00196dac;
  iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) - fVar1,param_1 + 0x2c);
  fVar1 = DAT_00196db8;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_00196db4;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
    iVar2 = FUN_0036a7a0(param_2);
    if (iVar2 != 0) {
      FUN_0036e980(param_2,param_1,7);
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00196dbc;
  }
  return;
}
