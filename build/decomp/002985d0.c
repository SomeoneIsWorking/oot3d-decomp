// OoT3D decomp @ 002985d0  name=FUN_002985d0  size=32

undefined4 FUN_002985d0(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_2 + 0x5b88) = *(undefined1 *)(param_3 + 1);
  *(int *)(param_2 + 0x5b8c) = param_1 + *(int *)(param_3 + 4);
  return 1;
}

