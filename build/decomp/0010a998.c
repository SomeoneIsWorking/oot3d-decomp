// OoT3D decomp @ 0010a998  name=FUN_0010a998  size=128

void FUN_0010a998(int param_1,int param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if (((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) &&
     (*(char *)(param_1 + 0x8c2) == '\0')) {
    *(ushort *)(DAT_0010aa18 + 0xf4) = *(ushort *)(DAT_0010aa18 + 0xf4) | 0x4000;
    FUN_003716f0(param_2,0x47e,0x14);
    iVar1 = DAT_0010aa1c;
    *(undefined1 *)(param_1 + 0x8c2) = 1;
    *(undefined1 *)(iVar1 + 0x5ab) = 0x2e;
  }
  return;
}
