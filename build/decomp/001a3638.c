// OoT3D decomp @ 001a3638  name=FUN_001a3638  size=60

void FUN_001a3638(int param_1)

{
  int iVar1;

  if ((*(ushort *)(param_1 + 0xc3c) & 0x10) == 0) {
    iVar1 = FUN_003731e0(param_1 + 0x1a4);
    if (iVar1 != 0) {
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 0x10;
    }
    *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 8;
  }
  return;
}
