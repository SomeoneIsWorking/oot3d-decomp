// OoT3D decomp @ 0036e980  name=FUN_0036e980  size=52

undefined4 FUN_0036e980(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20ac);
  *(undefined *)(iVar2 + 0x12bc) = param_3;
  iVar1 = DAT_0036e9b4;
  *(undefined4 *)(iVar2 + 0x12c0) = param_2;
  *(undefined2 *)(iVar1 + iVar2) = 0;
  *(undefined2 *)(iVar2 + 0x12e2) = 1;
  return 1;
}

