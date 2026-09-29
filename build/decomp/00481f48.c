// OoT3D decomp @ 00481f48  name=FUN_00481f48  size=116

double FUN_00481f48(int param_1,uint param_2)

{
  double dVar1;
  int local_18;
  uint uStack_14;

  dVar1 = SQRT((double)CONCAT44(param_2,param_1));
  local_18 = SUB84(dVar1,0);
  uStack_14 = (uint)((ulonglong)dVar1 >> 0x20);
  if (((int)(DAT_00481fbc - ((uint)(local_18 != 0) | uStack_14 & 0x7fffffff)) < 0) &&
     (-1 < (int)(DAT_00481fbc - ((uint)(param_1 != 0) | param_2 & 0x7fffffff)))) {
    FUN_002eb01c(1);
  }
  return dVar1;
}
