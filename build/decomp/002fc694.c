// OoT3D decomp @ 002fc694  name=FUN_002fc694  size=180

int * FUN_002fc694(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  
  *param_3 = param_4;
  param_3[1] = param_1;
  param_3[2] = param_2;
  iVar1 = FUN_0035010c(param_4 * 0x30);
  param_3[3] = iVar1;
  FUN_00343280(iVar1,*param_3 * 0x30);
  iVar1 = FUN_0035010c(*param_3 * 0x30);
  param_3[4] = iVar1;
  FUN_00343280(iVar1,*param_3 * 0x30);
  iVar1 = FUN_0035010c(*param_3 << 5);
  param_3[5] = iVar1;
  FUN_00343280(iVar1,*param_3 << 5);
  iVar1 = FUN_0035010c(*param_3 << 6);
  param_3[6] = iVar1;
  FUN_00343280(iVar1,*param_3 << 6);
  iVar1 = FUN_0035010c(*param_3 << 3);
  param_3[7] = iVar1;
  FUN_00343280(iVar1,*param_3 << 3);
  return param_3;
}

