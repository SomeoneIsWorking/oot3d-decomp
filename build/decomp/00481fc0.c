// OoT3D decomp @ 00481fc0  name=FUN_00481fc0  size=64

void FUN_00481fc0(void)

{
  int *piVar1;

  piVar1 = DAT_00482000;
  if (*DAT_00482000 != 0) {
    if ((code *)*DAT_00482004 != (code *)0x0) {
      (*(code *)*DAT_00482004)(0x10000,0x100,0);
    }
    *piVar1 = 0;
  }
  return;
}
