// OoT3D decomp @ 0045a044  name=FUN_0045a044  size=56

void FUN_0045a044(int param_1,int param_2)

{
  if (param_2 != 0) {
    **(undefined4 **)(param_2 + -0xc) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(*(int *)(param_2 + -0x10) + 4) = *(undefined4 *)(param_2 + -0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
    FUN_0034fc6c();
    return;
  }
  return;
}
