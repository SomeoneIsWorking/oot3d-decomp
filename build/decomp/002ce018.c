// OoT3D decomp @ 002ce018  name=FUN_002ce018  size=72

void FUN_002ce018(float param_1,int param_2)

{
  int iVar1;
  float fVar2;

  fVar2 = DAT_002ce03c;
  if (DAT_002ce03c <= param_1) {
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x1c) = fVar2;
  iVar1 = *(int *)(param_2 + 0x68);
  if (param_1 < DAT_00489c78) {
    param_1 = DAT_00489c78;
  }
  *(float *)(iVar1 + 0x24) = param_1;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 2;
  return;
}
