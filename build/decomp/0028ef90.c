// OoT3D decomp @ 0028ef90  name=FUN_0028ef90  size=176

void FUN_0028ef90(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint in_fpscr;
  float fVar3;

  FUN_0032a998(param_1,9);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0028f040 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0028f044 / fVar3 + DAT_0028f048) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_0037547c(DAT_0028f054,param_1 + 0x28,4,DAT_0028f050,DAT_0028f050,DAT_0028f04c);
  }
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x2300);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 2)) {
    *(undefined4 *)(param_1 + 0x1bc) = 0xf;
  }
  return;
}
