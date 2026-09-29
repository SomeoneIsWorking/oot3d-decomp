// OoT3D decomp @ 00401604  name=FUN_00401604  size=32

void FUN_00401604(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) =
       param_2 & 3 | *(ushort *)(*(int *)(param_1 + 0x68) + 0x1e) & 0xfffc;
  return;
}
