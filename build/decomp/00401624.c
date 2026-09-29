// OoT3D decomp @ 00401624  name=FUN_00401624  size=36

void FUN_00401624(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       (param_2 & 3) << 2 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfff3;
  return;
}
