// OoT3D decomp @ 003fd1b8  name=FUN_003fd1b8  size=84

void FUN_003fd1b8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00324154(param_2 + 0x3410,param_4);
  *(undefined *)(iVar1 + 0x1c) = 6;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  return;
}

