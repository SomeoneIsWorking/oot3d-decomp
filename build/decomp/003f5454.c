// OoT3D decomp @ 003f5454  name=FUN_003f5454  size=156

void FUN_003f5454(int param_1,int param_2)

{
  int iVar1;
  float fVar2;

  if ((*(char *)(*(int *)(DAT_003f54f0 + param_2) + 0x1a7) == '\x02') ||
     (iVar1 = FUN_0036adf4(param_1), iVar1 == 0)) {
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x1c0)) {
      fVar2 = *(float *)(param_1 + 0x2c) + DAT_003f54fc;
      *(float *)(param_1 + 0x2c) = fVar2;
      if (*(float *)(param_1 + 0x1c0) < fVar2) {
        fVar2 = *(float *)(param_1 + 0x1c0);
      }
      *(float *)(param_1 + 0x2c) = fVar2;
      return;
    }
  }
  else if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x1c0)) {
    *(undefined4 *)(param_1 + 0x1cc) = DAT_003f54f4;
    *(undefined2 *)(param_1 + 0x1c8) = 0x1e;
  }
  else {
    *(undefined4 *)(param_1 + 0x1cc) = DAT_003f54f8;
    *(undefined2 *)(param_1 + 0x1c8) = 0x1e;
  }
  return;
}
