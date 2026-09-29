// OoT3D decomp @ 003d6d70  name=FUN_003d6d70  size=176

void FUN_003d6d70(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  iVar1 = FUN_003731e0(param_1 + 0x1bc);
  if (iVar1 != 0) {
    FUN_0036d15c(param_2,param_2 + 0xae8,*(undefined4 *)(param_1 + 0x1a4));
    if (*(int *)(param_1 + 0x4b4) == DAT_00364668) {
      *(undefined2 *)(param_1 + 0x4b8) = 300;
    }
    else {
      *(undefined2 *)(param_1 + 0x4b8) = 0;
    }
    *(undefined2 *)(param_1 + 0x4ba) = 0;
    *(undefined4 *)(param_1 + 0x4b4) = DAT_0036466c;
    return;
  }
  if (0x40ffffff < *(int *)(param_1 + 0x1f8)) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if (DAT_003d6e24 <= *(int *)(param_1 + 0x1f8)) {
      *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 + DAT_003d6e28);
      return;
    }
    *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 - DAT_003d6e28);
    return;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 - DAT_003d6e20);
  return;
}
