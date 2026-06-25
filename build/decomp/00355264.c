// OoT3D decomp @ 00355264  name=FUN_00355264  size=88

void FUN_00355264(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_2 + 0x12e4);
  if (iVar1 != -1) {
    param_3 = *(int *)(param_1 + iVar1 * 4 + 0xa54);
  }
  if ((iVar1 != -1 && param_3 != 0) && (*(short *)(param_3 + 0x1b0) == 0x44c)) {
    FUN_0035a008();
    *(undefined2 *)(param_2 + 0x12e4) = 0xffff;
  }
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xfffff3ff;
  return;
}

