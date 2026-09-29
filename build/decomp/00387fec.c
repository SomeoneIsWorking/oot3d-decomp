// OoT3D decomp @ 00387fec  name=FUN_00387fec  size=128

void FUN_00387fec(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00370734(param_1 + 0x1e0);
  uVar1 = DAT_0038813c;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  iVar2 = FUN_003736fc(param_1 + 0x1e0);
  if ((iVar2 == 0) && (iVar2 = FUN_003736fc(DAT_00388140,uVar1,param_1 + 0x1e0), iVar2 == 0)) {
    return;
  }
  FUN_00375bcc(param_1,DAT_00388144);
  return;
}
