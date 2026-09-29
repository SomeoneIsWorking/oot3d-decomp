// OoT3D decomp @ 00134c8c  name=FUN_00134c8c  size=80

void FUN_00134c8c(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x28c) == 3) {
    *(short *)(DAT_00134ce0 + param_1) = (short)DAT_00134cdc;
    FUN_0036be34(param_2);
    *(undefined2 *)(param_1 + 0x28c) = 1;
    *(ushort *)(DAT_00134ce4 + 0xe) = *(ushort *)(DAT_00134ce4 + 0xe) | 2;
    *(undefined4 *)(param_1 + 0x228) = DAT_00134ce8;
  }
  return;
}
