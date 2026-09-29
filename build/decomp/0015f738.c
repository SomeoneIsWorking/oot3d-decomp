// OoT3D decomp @ 0015f738  name=FUN_0015f738  size=204

void FUN_0015f738(int param_1)

{
  short sVar1;
  float fVar2;

  fVar2 = *(float *)(param_1 + 0x1e0);
  if (((((fVar2 == DAT_0015f804) || ((uint)(DAT_0015f808 + (int)fVar2) < DAT_0015f80c)) ||
       ((uint)((int)fVar2 + DAT_0015f810) < DAT_0015f814)) ||
      (((uint)((int)fVar2 + DAT_0015f818) < DAT_0015f814 ||
       ((uint)((int)fVar2 + DAT_0015f818 + -0x100000) < DAT_0015f814)))) ||
     ((uint)((int)fVar2 + DAT_0015f81c) < DAT_0015f814)) {
    FUN_00375bcc(param_1,DAT_0015f820);
  }
  if ((*(short *)(param_1 + 0x74c) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x74c) + -1, *(short *)(param_1 + 0x74c) = sVar1, sVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x74c) = 0xc;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_0015f824;
  }
  return;
}
