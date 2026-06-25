// OoT3D decomp @ 0032eadc  name=FUN_0032eadc  size=76

void FUN_0032eadc(short *param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = (int)*param_1;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  iVar1 = (int)(short)(int)(fVar2 * DAT_0032eb28 * DAT_0032eb2c);
  if (iVar1 < 400) {
    iVar1 = 400;
  }
  else if (4000 < iVar1) {
    iVar1 = 4000;
  }
  FUN_00370378(param_1,0,iVar1);
  return;
}

