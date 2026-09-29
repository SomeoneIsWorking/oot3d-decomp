// OoT3D decomp @ 0013f218  name=FUN_0013f218  size=92

void FUN_0013f218(int param_1)

{
  short sVar1;

  FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_0013f274,param_1 + 0x2c);
  FUN_00373264(param_1,DAT_0013f278);
  if ((*(short *)(param_1 + 0x1c2) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x1c2) + -1, *(short *)(param_1 + 0x1c2) = sVar1, sVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x1c2) = 0x78;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0013f27c;
  }
  return;
}
