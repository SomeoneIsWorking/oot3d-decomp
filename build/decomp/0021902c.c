// OoT3D decomp @ 0021902c  name=FUN_0021902c  size=156

void FUN_0021902c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  iVar2 = FUN_0036b4ec(param_2 + 0x254,param_1);
  if (iVar2 != 0) {
    FUN_003404a8(DAT_002190c8,param_2 + 0x254,param_1,DAT_002190cc);
    *(undefined2 *)(param_2 + 0x2238) = 1;
  }
  if ((*(short *)(param_2 + 0x2238) == 0) ||
     (fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002190d0 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3),
     (int)(uint)*(ushort *)(DAT_002190dc + param_1) < (int)(DAT_002190d4 / fVar3 + DAT_002190d8))) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_2 + 0x1b5) = uVar1;
  return;
}
