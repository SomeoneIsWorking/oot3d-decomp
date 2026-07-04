// OoT3D decomp @ 00256c7c  name=FUN_00256c7c  size=40

undefined4 FUN_00256c7c(undefined4 param_1,int param_2,int param_3)

{
  *(undefined1 *)(iRam00256ca4 + param_2) = *(undefined1 *)(param_3 + 6);
  *(undefined2 *)(param_2 + 0x5000) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)(param_2 + 0x5002) = *(undefined2 *)(param_3 + 4);
  return 1;
}

