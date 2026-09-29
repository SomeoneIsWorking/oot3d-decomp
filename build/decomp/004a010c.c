// OoT3D decomp @ 004a010c  name=FUN_004a010c  size=56

uint FUN_004a010c(int param_1)

{
  int iVar1;

  iVar1 = FUN_002e1ef0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)
                (*(int *)(param_1 + (uint)*(ushort *)(DAT_004a0144 + param_1) * 4 + 0x10a8) + 2);
}
