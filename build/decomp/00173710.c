// OoT3D decomp @ 00173710  name=FUN_00173710  size=96

void FUN_00173710(int param_1,int param_2)

{
  *(uint *)(*(int *)(DAT_00173770 + param_2) + 0x1714) =
       *(uint *)(*(int *)(DAT_00173770 + param_2) + 0x1714) | 0x800000;
  if (*(short *)(param_1 + 0xc10) == 2) {
    FUN_003523dc(2);
    FUN_0037073c(param_2,9);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
    *(undefined4 *)(param_1 + 0xbac) = DAT_00173774;
  }
  return;
}
