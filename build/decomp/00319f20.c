// OoT3D decomp @ 00319f20  name=FUN_00319f20  size=220

undefined4 FUN_00319f20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  uint in_fpscr;
  float fVar4;

  iVar2 = DAT_0031a000;
  cVar1 = *(char *)(param_2 + DAT_00319ffc);
  if ((*(char *)(param_1 + 0xbdd) != cVar1) && ((*(ushort *)(DAT_0031a000 + 0x38) & 8) != 0)) {
    *(undefined4 *)(param_1 + 0xbbc) = 0x2e;
    if ((*(ushort *)(iVar2 + 0x38) & 1) == 0) {
      *(short *)(param_1 + 0xbb0) = (short)DAT_0031a004;
      uVar3 = 0x3c;
    }
    else {
      uVar3 = 0xffff;
    }
    *(undefined2 *)(param_1 + 0xbb2) = uVar3;
    return 0;
  }
  if (((*(char *)(param_1 + 0xbdc) != cVar1 || *(char *)(param_1 + 0xbdd) != cVar1) &&
      (fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0031a008 + 0x1474),
                                          (byte)(in_fpscr >> 0x15) & 3),
      fVar4 + DAT_0031a00c < *(float *)(param_1 + 0x88))) &&
     (*(int *)(param_1 + 0xbbc) != 0x21 && *(int *)(param_1 + 0xbbc) != 0x2e)) {
    *(undefined4 *)(param_1 + 0xbbc) = 0x21;
    *(undefined4 *)(param_1 + 0xbc0) = 2;
    *(undefined4 *)(param_1 + 0xbfc) = DAT_0031a010;
    *(undefined4 *)(param_1 + 0xc00) = 0xff;
  }
  return 1;
}
