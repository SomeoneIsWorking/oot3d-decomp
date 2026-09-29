// OoT3D decomp @ 00207130  name=FUN_00207130  size=188

void FUN_00207130(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  uint in_fpscr;
  float fVar3;

  iVar1 = FUN_0037571c(param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    unaff_r5 = param_2 + 0x2000;
    iVar2 = *(int *)(&DAT_000022e4 + param_2);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    if ((*(short *)(param_2 + 0x104) == 0x53) && (*(short *)(DAT_002071ec + param_2) == 0x226)) {
      FUN_00375bcc(param_1,DAT_002071f0);
    }
    if (**(short **)(unaff_r5 + 0x2e4) == 2) {
      fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002071f4 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_002071f8 / fVar3 + DAT_002071fc) <= (int)*(short *)(param_1 + 0x1c0)) {
        FUN_00374428(param_1);
        return;
      }
      *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + 1;
    }
  }
  return;
}
