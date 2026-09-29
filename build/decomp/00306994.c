// OoT3D decomp @ 00306994  name=FUN_00306994  size=48

int FUN_00306994(void)

{
  int *piVar1;
  int iVar2;

  piVar1 = DAT_003069c4;
  if (*DAT_003069c4 == 0) {
    iVar2 = FUN_0035010c(DAT_003069c8);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      FUN_00306aa8();
    }
  }
  return *piVar1;
}
