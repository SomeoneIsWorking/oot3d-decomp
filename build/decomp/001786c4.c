// OoT3D decomp @ 001786c4  name=FUN_001786c4  size=96

void FUN_001786c4(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0xe0,0,
                       (int)*(short *)(param_1 + 0x92),0,0);
  *(int *)(param_1 + 0x1a8) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00178724;
  }
  return;
}
