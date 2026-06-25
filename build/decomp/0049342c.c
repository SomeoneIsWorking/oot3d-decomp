// OoT3D decomp @ 0049342c  name=FUN_0049342c  size=52

void FUN_0049342c(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = DAT_00493460;
  *(undefined *)(param_1 + 0x1c) = 5;
  *(char *)(param_1 + 8) = (char)*(undefined4 *)(iVar1 + 8);
  *(undefined *)(param_1 + 9) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  return;
}

