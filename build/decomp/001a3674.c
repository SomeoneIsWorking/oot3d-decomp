// OoT3D decomp @ 001a3674  name=FUN_001a3674  size=60

void FUN_001a3674(int param_1)

{
  int iVar1;

  if ((*(ushort *)(param_1 + 0x8a8) & 4) == 0) {
    iVar1 = FUN_003731e0(param_1 + 0x1fc);
    if (iVar1 != 0) {
      *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) | 4;
    }
    *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) | 8;
  }
  return;
}
