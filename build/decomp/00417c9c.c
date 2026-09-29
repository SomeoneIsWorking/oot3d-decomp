// OoT3D decomp @ 00417c9c  name=FUN_00417c9c  size=56

void FUN_00417c9c(void)

{
  int *piVar1;
  int iVar2;
  int local_10;

  piVar1 = DAT_00417cd4;
  if (*DAT_00417cd4 == 0) {
    local_10 = 0;
    iVar2 = FUN_0041a4a4(&local_10);
    if (-1 < iVar2) {
      *piVar1 = local_10;
    }
  }
  return;
}
