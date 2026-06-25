// OoT3D decomp @ 004bdc74  name=FUN_004bdc74  size=52

void FUN_004bdc74(int param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = DAT_004bdca8;
  *(undefined *)(param_1 + 0x1c) = 4;
  *(char *)(param_1 + 8) = (char)*(undefined4 *)(iVar1 + 8);
  *(undefined *)(param_1 + 9) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  return;
}

