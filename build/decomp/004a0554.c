// OoT3D decomp @ 004a0554  name=FUN_004a0554  size=56

void FUN_004a0554(uint *param_1)

{
  if ((param_1[0x1f] & 0x8000) != 0) {
    FUN_004a3980(DAT_004a058c,*param_1 & 0xff,(int)(short)param_1[1]);
    *(ushort *)(param_1 + 0x1f) = (ushort)param_1[0x1f] & 0x7fff;
  }
  return;
}
