// OoT3D decomp @ 002fa414  name=FUN_002fa414  size=72

int FUN_002fa414(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_2;
  if (param_1 < -param_3) {
    param_2 = (int)(short)((short)param_2 + (short)((param_1 + param_3) * param_4 >> 7));
  }
  else if (param_3 < param_1) {
    return (int)(short)((short)param_2 + (short)((param_1 - param_3) * param_4 >> 7));
  }
  return param_2;
}
