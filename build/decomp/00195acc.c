// OoT3D decomp @ 00195acc  name=FUN_00195acc  size=52

void FUN_00195acc(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00363c10(param_2 + 0x3a58,DAT_00195b00);
  if (-1 < iVar1) {
    *(char *)(param_1 + 0x16b0) = (char)iVar1;
  }
  *(undefined4 *)(param_1 + 0x16b4) = DAT_00195b04;
  return;
}
