// OoT3D decomp @ 0039ded0  name=FUN_0039ded0  size=32

undefined4 FUN_0039ded0(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_2 + 0x5c04) = *(undefined1 *)(param_3 + 1);
  *(int *)(param_2 + 0x5c08) = param_1 + *(int *)(param_3 + 4);
  return 1;
}

