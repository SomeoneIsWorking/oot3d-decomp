// OoT3D decomp @ 00330d5c  name=FUN_00330d5c  size=40

undefined4 FUN_00330d5c(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20ac);
  *(undefined *)(iVar1 + 0x12bc) = param_3;
  *(undefined4 *)(iVar1 + 0x12c0) = param_2;
  *(undefined2 *)(iVar1 + 0x12e2) = 0;
  return 1;
}

