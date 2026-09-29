// OoT3D decomp @ 0039db30  name=FUN_0039db30  size=220

void FUN_0039db30(int param_1)

{
  float fVar1;

  fVar1 = DAT_0039dc0c;
  FUN_0036e168(DAT_0039dc14,DAT_0039dc14,DAT_0039dc10,DAT_0039dc0c,param_1 + 0x6c);
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + (*(short *)(param_1 + 0x34) >> 1);
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + (*(short *)(param_1 + 0x38) >> 1);
  if ((*(float *)(param_1 + 0x6c) != fVar1) && ((*(ushort *)(param_1 + 0x90) & 8) != 0)) {
    *(short *)(param_1 + 0x36) =
         (*(short *)(param_1 + 0x82) * 2 - *(short *)(param_1 + 0x36)) + -0x8000;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
  }
  fVar1 = DAT_0039dc1c;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    if ((uint)*(float *)(param_1 + 100) < 0xc1000001) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) * DAT_0039dc18;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar1;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffc;
  }
  return;
}
