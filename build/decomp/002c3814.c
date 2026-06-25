// OoT3D decomp @ 002c3814  name=FUN_002c3814  size=44

void FUN_002c3814(undefined4 param_1,int param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = DAT_002c3840;
  *(undefined *)(param_2 + 0x1c) = 2;
  *(char *)(param_2 + 8) = (char)*(undefined4 *)(iVar1 + 8);
  *(undefined *)(param_2 + 9) = param_3;
  *(undefined4 *)(param_2 + 0xc) = param_4;
  *(undefined4 *)(param_2 + 0x10) = param_5;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}

