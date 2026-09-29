// OoT3D decomp @ 00271d10  name=FUN_00271d10  size=92

void FUN_00271d10(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 5) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    *(ushort *)(DAT_00271d6c + 0xc) = *(ushort *)(DAT_00271d6c + 0xc) | 0x400;
    *(undefined1 *)(param_1 + 0x2fa) = 2;
    FUN_0034e37c(param_2,param_1);
    return;
  }
  return;
}
