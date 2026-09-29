// OoT3D decomp @ 002998b0  name=FUN_002998b0  size=76

int FUN_002998b0(float param_1,short param_2,short param_3,int param_4)

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
    param_2 = param_3 + (short)(int)(DAT_00299904 + fVar3 * param_1 * DAT_002998fc * DAT_00299900);
  }
  return (int)param_2;
}
