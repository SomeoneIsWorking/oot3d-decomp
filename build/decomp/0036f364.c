// OoT3D decomp @ 0036f364  name=FUN_0036f364  size=148

void FUN_0036f364(int param_1,int param_2)

{
  char cVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;

  FUN_003705a0(*(undefined4 *)(*(int *)(DAT_0036f3f8 + param_2) + 0x2c),DAT_0036f3fc,param_1 + 0x2c)
  ;
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x91d) != 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x91d),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(DAT_0036f408 + fVar3 * DAT_0036f400 * DAT_0036f404);
  }
  fVar3 = (float)FUN_002cfca0((int)(short)(iVar2 << 0xb));
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar3 * DAT_0036f40c;
  cVar1 = *(char *)(param_1 + 0x91d);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x91d) = cVar1 + -1, cVar1 == '\x01')) {
    *(undefined1 *)(param_1 + 0x91d) = 0x30;
  }
  return;
}
