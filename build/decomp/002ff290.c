// OoT3D decomp @ 002ff290  name=FUN_002ff290  size=124

float FUN_002ff290(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  cVar1 = *(char *)(param_1 + 0x19);
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (cVar1 == '\0') {
    param_3 = (int)(short)(*(short *)(param_1 + 0x12) - *(short *)(param_1 + 0xc));
  }
  else if (cVar1 == '\x01') {
    param_3 = (int)(short)(*(short *)(param_1 + 0x14) - *(short *)(param_1 + 0xe));
  }
  else if (cVar1 == '\x02') {
    param_3 = 0x69;
  }
  if (param_2 != 0) {
    if (param_2 < param_3) {
      fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      return fVar2 / fVar3;
    }
    return DAT_002ff310;
  }
  return DAT_002ff30c;
}
