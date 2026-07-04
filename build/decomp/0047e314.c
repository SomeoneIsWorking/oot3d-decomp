// OoT3D decomp @ 0047e314  name=FUN_0047e314  size=92

void FUN_0047e314(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(float *)(param_1 + 0x74) = *param_2 - *(float *)(param_1 + 0x68);
    *(float *)(param_1 + 0x78) = param_2[1] - *(float *)(param_1 + 0x6c);
    *(float *)(param_1 + 0x7c) = param_2[2] - *(float *)(param_1 + 0x70);
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x68) = *param_2;
  *(float *)(param_1 + 0x6c) = fVar1;
  *(float *)(param_1 + 0x70) = fVar2;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

