// OoT3D decomp @ 00331440  name=FUN_00331440  size=60

int FUN_00331440(float param_1,short param_2,short param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  iVar1 = (int)(short)(param_2 - param_3);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (param_4 <= iVar2) {
    param_2 = param_3 + (short)(int)(DAT_0033147c + fVar3 * param_1);
  }
  return (int)param_2;
}
