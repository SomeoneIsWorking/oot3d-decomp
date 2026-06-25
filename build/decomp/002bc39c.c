// OoT3D decomp @ 002bc39c  name=FUN_002bc39c  size=132

int FUN_002bc39c(short *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                short param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  param_6 = param_6 - *param_1;
  iVar2 = -param_7;
  iVar1 = (int)param_6;
  if ((iVar1 + param_7 < 0 == SBORROW4(iVar1,iVar2)) && (iVar2 = iVar1, param_7 < iVar1)) {
    iVar2 = param_7;
  }
  *param_1 = *param_1 + (param_6 - (short)iVar2);
  FUN_00370378(param_1);
  iVar1 = (int)*param_1;
  iVar2 = -param_5;
  if ((iVar1 + param_5 < 0 == SBORROW4(iVar1,-param_5)) && (iVar2 = iVar1, param_4 < iVar1)) {
    iVar2 = param_4;
  }
  *param_1 = (short)iVar2;
  return iVar1 - (short)iVar2;
}

