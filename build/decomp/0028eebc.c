// OoT3D decomp @ 0028eebc  name=FUN_0028eebc  size=188

void FUN_0028eebc(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint in_fpscr;
  float fVar3;

  FUN_0032ae1c(param_1,param_2,7);
  FUN_0032a998(param_1,7);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0028ef78 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0028ef7c / fVar3 + DAT_0028ef80) == (uint)*(ushort *)(param_2 + 0x22b8)) {
    FUN_0037547c(DAT_0028ef8c,param_1 + 0x28,4,DAT_0028ef88,DAT_0028ef88,DAT_0028ef84);
  }
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22f8);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 2)) {
    *(undefined4 *)(param_1 + 0x1bc) = 0xe;
  }
  return;
}
