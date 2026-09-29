// OoT3D decomp @ 004c4540  name=FUN_004c4540  size=32

int FUN_004c4540(int param_1)

{
  int iVar1;

  iVar1 = *(char *)(param_1 + 0x1a9) + -0x1e;
  if ((iVar1 < 0) || (0xc < iVar1)) {
    iVar1 = -1;
  }
  return iVar1;
}
