// OoT3D decomp @ 00379188  name=FUN_00379188  size=32

undefined4 FUN_00379188(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_2 + 0x322c) = *(undefined1 *)(param_3 + 1);
  *(int *)(param_2 + 0x3230) = param_1 + *(int *)(param_3 + 4);
  return 1;
}

