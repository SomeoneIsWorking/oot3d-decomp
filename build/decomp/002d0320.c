// OoT3D decomp @ 002d0320  name=FUN_002d0320  size=104

int FUN_002d0320(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_002cd2b4();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4000) = 0;
    if (param_3 == 0) {
      FUN_002cd974(param_1,0);
      FUN_002cd744(DAT_002d0388,param_1);
    }
    else {
      *(undefined *)(param_1 + 0xf38) = 1;
      *(undefined4 *)(param_1 + 0xfa4) = 2;
    }
    FUN_00340bdc(*(undefined4 *)(param_1 + 8),0);
    iVar1 = 1;
  }
  return iVar1;
}

