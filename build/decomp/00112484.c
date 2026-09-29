// OoT3D decomp @ 00112484  name=FUN_00112484  size=60

void FUN_00112484(int param_1)

{
  int iVar1;

  iVar1 = FUN_00369a48();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x444) = DAT_001124c0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  *(ushort *)(param_1 + 0x440) = *(ushort *)(param_1 + 0x440) | 1;
  return;
}
