// OoT3D decomp @ 00407b08  name=FUN_00407b08  size=32

void FUN_00407b08(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}
