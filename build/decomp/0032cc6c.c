// OoT3D decomp @ 0032cc6c  name=FUN_0032cc6c  size=208

void FUN_0032cc6c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;

  iVar1 = *(int *)(DAT_0032cd3c + 0x4e8);
  bVar3 = iVar1 == 4;
  if (bVar3) {
    iVar1 = (int)*(short *)(param_2 + 0x104);
  }
  if (bVar3 && iVar1 == 0x5c) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032cd44 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    uVar2 = DAT_0032cd58;
    if (((int)(DAT_0032cd48 / fVar4 + DAT_0032cd4c) == (uint)*(ushort *)(DAT_0032cd40 + param_2)) ||
       (fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032cd44 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3), uVar2 = DAT_0032cd60,
       (int)(DAT_0032cd5c / fVar4 + DAT_0032cd4c) == (uint)*(ushort *)(DAT_0032cd40 + param_2))) {
      FUN_0037547c(uVar2,0,4,DAT_0032cd54,DAT_0032cd54,DAT_0032cd50);
    }
  }
  return;
}
