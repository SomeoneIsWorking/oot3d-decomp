// OoT3D decomp @ 0035e6e0  name=FUN_0035e6e0  size=48

void FUN_0035e6e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined2 param_5)

{
  int iVar1;

  iVar1 = *(int *)(param_3 + 0x20ac);
  *(undefined1 *)(iVar1 + 0x2290) = 0;
  *(undefined1 *)(iVar1 + 0x2291) = 1;
  *(undefined4 *)(iVar1 + 0x2294) = param_1;
  *(undefined2 *)(iVar1 + 0x2292) = param_5;
  *(undefined4 *)(iVar1 + 0x2298) = param_2;
  return;
}
