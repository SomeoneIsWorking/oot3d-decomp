// OoT3D decomp @ 002d7854  name=FUN_002d7854  size=32

void FUN_002d7854(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = DAT_002d7874 + param_1 * 0x40 + param_2 * 0x10;
  *(undefined *)(iVar1 + 9) = 1;
  *(undefined2 *)(iVar1 + 0xe) = param_3;
  *(undefined *)(iVar1 + 8) = 1;
  return;
}

