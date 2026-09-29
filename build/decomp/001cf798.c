// OoT3D decomp @ 001cf798  name=FUN_001cf798  size=52

void FUN_001cf798(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00363c10(param_2 + 0x3a58,0xa1);
  if (-1 < iVar1) {
    *(char *)(param_1 + 0x16b0) = (char)iVar1;
  }
  *(undefined4 *)(param_1 + 0x16b4) = DAT_001cf7cc;
  return;
}
