// OoT3D decomp @ 0015d054  name=FUN_0015d054  size=152

void FUN_0015d054(int param_1)

{
  short sVar1;

  if ((*(ushort *)(param_1 + 0x135c) & 1) != 0) {
    *(undefined2 *)(param_1 + 0x135e) = 3;
    FUN_0035ff0c(DAT_0015d0ec,param_1,DAT_0015d0f4,DAT_0015d0f0,param_1 + 0x1fc,param_1 + 0xaa0,2);
    sVar1 = 0x4000;
    *(undefined4 *)(param_1 + 0x1358) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 100) = DAT_0015d0f8;
    if (*(int *)(param_1 + 0x1378) == 10) {
      sVar1 = 0x6400;
    }
    if ((*(ushort *)(param_1 + 0x135c) & 0x40) == 0) {
      sVar1 = -sVar1;
    }
    *(short *)(param_1 + 0x1360) = *(short *)(param_1 + 0x36) + sVar1;
  }
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}
