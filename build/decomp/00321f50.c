// OoT3D decomp @ 00321f50  name=FUN_00321f50  size=292

void FUN_00321f50(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  if (*(int *)(DAT_00322074 + 8) < DAT_00322078) {
    return;
  }
  if (*(char *)(param_1 + 0x6028) != '\0') {
    if (*(char *)(param_1 + 0x101) != '\x02') {
      return;
    }
    if (*(char *)(param_1 + 0x6029) == '\0') {
      iVar1 = FUN_002c2d78();
      if (iVar1 == 0) {
        *(undefined2 *)(param_2 + 0x20) = 0;
        return;
      }
      FUN_0048b178(param_1 + 0x601c);
      *(undefined2 *)(param_2 + 0x20) = 0;
      return;
    }
  }
  if (*(short *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x21a0) = 0;
    *(undefined1 *)(param_2 + 0x27a) = 0;
  }
  if ((*(char *)(param_1 + 0x6028) != '\0') && (-1 < *(int *)(DAT_0032207c + param_1))) {
    fVar2 = (float)VectorSignedToFloat(*(int *)(DAT_0032207c + param_1),(byte)(in_fpscr >> 0x15) & 3
                                      );
    iVar1 = (int)(fVar2 * DAT_00322080 * DAT_00322084);
    if (iVar1 <= (int)(uint)*(ushort *)(param_2 + 0x20)) {
      return;
    }
    do {
      *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + 1;
      FUN_002c5ba0(param_1,param_2,*(undefined4 *)(param_1 + 0x229c));
    } while ((int)(uint)*(ushort *)(param_2 + 0x20) < iVar1);
    return;
  }
  *(short *)(param_2 + 0x20) = *(short *)(param_2 + 0x20) + 1;
  FUN_002c5ba0(param_1,param_2,*(undefined4 *)(param_1 + 0x229c));
  return;
}
