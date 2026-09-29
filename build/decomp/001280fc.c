// OoT3D decomp @ 001280fc  name=FUN_001280fc  size=128

void FUN_001280fc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = DAT_00128180 -
          (*(float *)(*(int *)(DAT_0012817c + param_2) + 0x30) - *(float *)(param_1 + 0x30));
  fVar2 = DAT_00128184;
  if ((DAT_00128184 <= fVar1) && (fVar2 = fVar1, DAT_00128188 < (int)fVar1)) {
    fVar2 = DAT_0012818c;
  }
  *(short *)(param_1 + 0xc0) = (short)(int)(fVar2 * DAT_00128190);
  FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),4);
  if (*(short *)(param_1 + 0x1c) != 0) {
    *(short *)(param_1 + 0xc0) = -*(short *)(param_1 + 0xc0);
  }
  return;
}
