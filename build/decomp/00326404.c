// OoT3D decomp @ 00326404  name=FUN_00326404  size=100

void FUN_00326404(int param_1)

{
  float fVar1;

  FUN_0036e734(param_1 + 0x1a4,1);
  *(undefined1 *)(param_1 + 0x638) = 10;
  fVar1 = DAT_00326468;
  if (((*(ushort *)(param_1 + 0x90) & 3) != 0) ||
     ((*(short *)(param_1 + 0x1c) == -2 && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)))) {
    if (*(float *)(param_1 + 100) <= DAT_00326468) {
      *(float *)(param_1 + 0x70) = DAT_00326468;
      *(float *)(param_1 + 100) = fVar1;
      *(float *)(param_1 + 0x6c) = fVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x63c) = DAT_0032646c;
  return;
}
