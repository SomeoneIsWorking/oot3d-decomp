// OoT3D decomp @ 0015f5d8  name=FUN_0015f5d8  size=204

void FUN_0015f5d8(int param_1)

{
  short sVar1;
  float fVar2;

  fVar2 = *(float *)(param_1 + 0x1e0);
  if (((((fVar2 == DAT_0015f6a4) || ((uint)(DAT_0015f6a8 + (int)fVar2) < DAT_0015f6ac)) ||
       ((uint)((int)fVar2 + DAT_0015f6b0) < DAT_0015f6b4)) ||
      (((uint)((int)fVar2 + DAT_0015f6b8) < DAT_0015f6b4 ||
       ((uint)((int)fVar2 + DAT_0015f6b8 + -0x100000) < DAT_0015f6b4)))) ||
     ((uint)((int)fVar2 + DAT_0015f6bc) < DAT_0015f6b4)) {
    FUN_00375bcc(param_1,DAT_0015f6c0);
  }
  if ((*(short *)(param_1 + 0x940) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x940) + -1, *(short *)(param_1 + 0x940) = sVar1, sVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x93e) = 0xc;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_0015f6c4;
  }
  return;
}
