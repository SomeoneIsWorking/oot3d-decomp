// OoT3D decomp @ 002fd84c  name=FUN_002fd84c  size=136

void FUN_002fd84c(int param_1,int param_2)

{
  *(char *)(DAT_002fd8d4 + 7) = (char)param_1;
  if (param_1 != 0) {
    if (param_2 != 0) {
      FUN_0037547c(DAT_002fd8e0,0,4,DAT_002fd8dc,DAT_002fd8dc,DAT_002fd8d8);
    }
    FUN_002ddfd0(1);
    return;
  }
  if (param_2 != 0) {
    FUN_0037547c(DAT_002fd8e4,0,4,DAT_002fd8dc,DAT_002fd8dc,DAT_002fd8d8);
  }
  FUN_002ddfd0(0);
  return;
}
