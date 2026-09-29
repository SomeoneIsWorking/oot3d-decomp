// OoT3D decomp @ 00320db4  name=FUN_00320db4  size=112

void FUN_00320db4(int param_1)

{
  short sVar1;
  short sVar2;

  sVar1 = *(short *)(param_1 + 0x92);
  sVar2 = sVar1 - *(short *)(param_1 + 0x36);
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  FUN_00375a18((short *)(param_1 + 0x10f0),(int)sVar2,5,DAT_00320e24,100);
  FUN_00375a18((undefined2 *)(param_1 + 0x36),(int)sVar1,5,(int)*(short *)(param_1 + 0x10f0),100);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
