// OoT3D decomp @ 002f9c44  name=FUN_002f9c44  size=44

void FUN_002f9c44(int param_1)

{
  bool bVar1;

  bVar1 = param_1 == 0x800;
  if (bVar1) {
    param_1 = 0;
  }
  if (!bVar1) {
    if (param_1 != 0x801) {
      return;
    }
    param_1 = 1;
  }
  *(char *)(*DAT_002f9c70 + 0xc) = (char)param_1;
  return;
}
