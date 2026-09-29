// OoT3D decomp @ 00416194  name=FUN_00416194  size=108

int FUN_00416194(void)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;

  FUN_00416c50();
  if (*(char *)(DAT_00416200 + 2) != '\0') {
    *(undefined1 *)(DAT_00416200 + 4) = 1;
    FUN_00417f7c(DAT_00416204,0x100,1,extraout_r3,unaff_r4);
    iVar1 = FUN_004181ac(0x300,0,0xf);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return 0;
}
