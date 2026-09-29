// OoT3D decomp @ 00177390  name=FUN_00177390  size=188

void FUN_00177390(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;

  *(undefined1 *)(param_1 + 0x448) = 9;
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00177450;
  uVar1 = DAT_0017744c;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x68);
  FUN_0036fc20(uVar2,uVar1,param_1 + 0x60);
  FUN_0036fc20(uVar2,uVar1,param_1 + 0x68);
  fVar3 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x23c) * (short)DAT_00177454));
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar3 * DAT_00177458;
  if (*(short *)(param_1 + 0x264) == 0) {
    FUN_00353b70(DAT_0017745c,param_1);
    *(undefined2 *)(param_1 + 0x264) = 0xf;
    *(undefined1 *)(param_1 + 0x271) = 1;
  }
  return;
}
