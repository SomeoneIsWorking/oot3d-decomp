// OoT3D decomp @ 00360f54  name=FUN_00360f54  size=208

void FUN_00360f54(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = ((param_2[1] + *(float *)(param_1 + 0x984)) - *(float *)(param_1 + 0x2c)) * DAT_00361024;
  fVar2 = ABS(fVar1);
  fVar3 = DAT_0036102c;
  if (DAT_00361028 <= fVar1) {
    fVar3 = DAT_00361030;
  }
  fVar1 = DAT_00361028;
  if ((DAT_00361028 <= fVar2) && (fVar1 = fVar2, DAT_00361034 < (int)fVar2)) {
    fVar1 = DAT_00361038;
  }
  FUN_003705a0(fVar1 * fVar3,DAT_0036103c,param_1 + 100);
  *(float *)(param_1 + 0x60) = (*param_2 + *(float *)(param_1 + 0x980)) - *(float *)(param_1 + 0x28)
  ;
  *(float *)(param_1 + 0x68) =
       (param_2[2] + *(float *)(param_1 + 0x988)) - *(float *)(param_1 + 0x30);
  FUN_0036b96c(param_1);
  *(float *)(param_1 + 0x28) = *param_2 + *(float *)(param_1 + 0x980);
  *(float *)(param_1 + 0x30) = param_2[2] + *(float *)(param_1 + 0x988);
  return;
}
