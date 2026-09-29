// OoT3D decomp @ 00481560  name=FUN_00481560  size=20

undefined4 FUN_00481560(int param_1)

{
  undefined4 uVar1;

  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  }
  return uVar1;
}
