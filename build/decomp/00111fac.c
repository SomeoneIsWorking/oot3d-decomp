// OoT3D decomp @ 00111fac  name=FUN_00111fac  size=148

void FUN_00111fac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_0036be34(param_2,0x4000);
    uVar2 = FUN_0036ae14(param_1 + 0x1fc,2);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00112048,DAT_00112044,uVar2,DAT_00112040,param_1 + 0x1fc,2,0);
    *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) & 0xfffd;
    *(undefined4 *)(param_1 + 0x83c) = DAT_0011204c;
  }
  *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 1;
  return;
}
