// OoT3D decomp @ 0021ded8  name=FUN_0021ded8  size=144

void FUN_0021ded8(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x240) + -1;
  *(int *)(param_1 + 0x240) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x24c) = DAT_0021df68;
    *(undefined4 *)(param_1 + 0x240) = 0;
    z_actor_003738d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),param_2 + 0x208c,param_2,0x8c,0,0,0,0x11,1);
    FUN_0037547c(DAT_0021df74,param_1 + 0x28,4,DAT_0021df70,DAT_0021df70,DAT_0021df6c);
  }
  return;
}
