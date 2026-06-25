// OoT3D decomp @ 00324128  name=FUN_00324128  size=40

void FUN_00324128(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00324150;
  *(undefined *)(param_1 + 0x1c) = 1;
  *(char *)(param_1 + 8) = (char)*(undefined4 *)(iVar1 + 8);
  *(undefined *)(param_1 + 9) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}

