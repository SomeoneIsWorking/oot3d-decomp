// OoT3D decomp @ 0044e05c  name=FUN_0044e05c  size=104

void FUN_0044e05c(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(*piRam0044e0a8 + 0x110) = 2;
  FUN_002e5a38(param_1 + 0x104);
  FUN_003016e0(1);
  *(undefined4 *)(param_1 + 4) = uRam0044e0ac;
  *(undefined4 *)(param_1 + 8) = uRam0044e0b0;
  iVar1 = (*(uint *)(param_1 + 0xe0) & 0xfffffff0) - 0x8000;
  *(int *)(param_1 + 0xe0) = iVar1;
  *(int *)(param_1 + 0x2e0) = iVar1;
  return;
}

