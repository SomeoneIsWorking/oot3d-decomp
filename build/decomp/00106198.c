// OoT3D decomp @ 00106198  name=FUN_00106198  size=144

void FUN_00106198(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;

  fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00106228 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x1a4) = (short)(int)(DAT_0010622c / fVar4 + DAT_00106230);
  if (*(char *)(param_2 + 0x3270) == '\0') {
    *(undefined1 *)(param_2 + 0x3272) = 0x14;
    pcVar2 = DAT_00106234;
    *(undefined1 *)(param_2 + 0x325d) = 1;
    cVar1 = *pcVar2;
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)(param_2 + 0x31a8);
    }
    if (!bVar3 || cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0x325e) = 1;
    }
    *(undefined1 *)(param_2 + 0x325f) = 1;
    FUN_003665b4();
  }
  *(undefined4 *)(param_1 + 0x1a8) = DAT_00106238;
  return;
}
