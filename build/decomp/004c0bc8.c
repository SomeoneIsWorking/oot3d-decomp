// OoT3D decomp @ 004c0bc8  name=FUN_004c0bc8  size=104

int FUN_004c0bc8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_002cd2b4();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4000) = param_3;
    if (param_4 == 0) {
      FUN_002cd974(param_1,0);
      FUN_002cd744(DAT_004c0c30,param_1);
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

