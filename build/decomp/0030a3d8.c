// OoT3D decomp @ 0030a3d8  name=FUN_0030a3d8  size=32

void FUN_0030a3d8(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x17) != param_2) {
    *(char *)(param_1 + 0x17) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 2;
  }
  return;
}
