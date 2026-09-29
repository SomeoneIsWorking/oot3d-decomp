// OoT3D decomp @ 00414bec  name=FUN_00414bec  size=120

undefined4 FUN_00414bec(void)

{
  int *piVar1;
  int iVar2;

  if ((code *)*DAT_00414c64 == (code *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)*DAT_00414c64)(0x10000,0x100,0,0x24);
  }
  piVar1 = DAT_00414c68;
  *DAT_00414c68 = iVar2;
  if (iVar2 != 0) {
    FUN_00414a5c();
    FUN_00410c5c(*piVar1 + 4);
    FUN_00303490(*piVar1 + 0x1c);
    FUN_00411334(*piVar1 + 0x20);
    return 0;
  }
  return 0xffffffff;
}
