// OoT3D decomp @ 00145c3c  name=FUN_00145c3c  size=40

void FUN_00145c3c(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_00369a48();
  uVar1 = DAT_00145c68;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xbac) = DAT_00145c64;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
  }
  return;
}
