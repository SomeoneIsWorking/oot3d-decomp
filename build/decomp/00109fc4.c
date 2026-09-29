// OoT3D decomp @ 00109fc4  name=FUN_00109fc4  size=176

void FUN_00109fc4(int param_1)

{
  int iVar1;
  float fVar2;

  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + *(short *)(param_1 + 0x34);
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + *(short *)(param_1 + 0x38);
  iVar1 = DAT_0010a078;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    if ((uint)*(float *)(param_1 + 100) < 0xc1000001) {
      FUN_00374428(param_1);
    }
    else {
      fVar2 = *(float *)(param_1 + 100) * DAT_0010a074;
      *(float *)(param_1 + 100) = fVar2;
      if (iVar1 < (int)fVar2) {
        fVar2 = DAT_0010a07c;
      }
      *(float *)(param_1 + 100) = fVar2;
      *(undefined4 *)(param_1 + 0x6c) = DAT_0010a080;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffc;
    }
  }
  if (*(short *)(param_1 + 0x1c2) != 0) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
