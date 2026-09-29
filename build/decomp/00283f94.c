// OoT3D decomp @ 00283f94  name=FUN_00283f94  size=172

void FUN_00283f94(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x1f) = 1;
  FUN_0037572c(DAT_00284040,param_1);
  FUN_00372f38(param_1,param_2,param_1 + 0x598,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x3c8,8);
  if (*(int *)(DAT_00284044 + 4) != 0) {
    *(undefined2 *)(param_1 + 0x570) = 0x14;
  }
  *(undefined2 *)(param_1 + 0x57a) = 0x14;
  *(undefined2 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x590) = DAT_00284048;
  *(undefined2 *)(param_1 + 0xb0) = 100;
  *(undefined4 *)(param_1 + 0x568) = DAT_0028404c;
  return;
}
