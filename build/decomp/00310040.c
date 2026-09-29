// OoT3D decomp @ 00310040  name=FUN_00310040  size=40

void FUN_00310040(int param_1)

{
  undefined1 *puVar1;

  puVar1 = DAT_00310068;
  *DAT_00310068 = 0;
  if (param_1 != 0) {
    puVar1[3] = 3;
    FUN_002fa198(0);
    return;
  }
  return;
}
