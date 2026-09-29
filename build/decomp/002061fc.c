// OoT3D decomp @ 002061fc  name=FUN_002061fc  size=120

void FUN_002061fc(int param_1,int param_2)

{
  int iVar1;

  if (*(short *)(param_1 + 0x1b0) == 0) {
    iVar1 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(float *)(param_1 + 0x30) + DAT_00206274,param_2 + 0x208c,param_1,param_2,
                         0x168,0,0,0,(int)*(short *)(param_1 + 0x1b2));
    *(int *)(param_1 + 0x238) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00206278;
    }
  }
  return;
}
