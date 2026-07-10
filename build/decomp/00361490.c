// OoT3D decomp @ 00361490  name=FUN_00361490  size=72

float FUN_00361490(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)VectorSignedToFloat(param_1 - param_2,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar2 == fRam003614d8) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar3 = (float)VectorSignedToFloat(param_1 - param_3,(byte)(uVar1 >> 0x15) & 3);
    fVar2 = fRam003614dc - fVar3 / fVar2;
    if ((int)fVar2 < 0x3f800000) {
      return fVar2;
    }
  }
  return fRam003614dc;
}

