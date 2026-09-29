// OoT3D decomp @ 004824b8  name=FUN_004824b8  size=64

void FUN_004824b8(void)

{
  int *piVar1;

  piVar1 = DAT_004824f8;
  if (*DAT_004824f8 != 0) {
    if ((code *)*DAT_004824fc != (code *)0x0) {
      (*(code *)*DAT_004824fc)(0x10000,0x100,0);
    }
    *piVar1 = 0;
  }
  return;
}
