// OoT3D decomp @ 00307d8c  name=FUN_00307d8c  size=60

undefined4 FUN_00307d8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (param_1 == 0x200) {
    return 0;
  }
  iVar2 = param_1 + -0x207;
  if (iVar2 != 0) {
    if (param_1 != 0x204) {
      iVar2 = param_1 + -0x200;
    }
    if (param_1 != 0x204 && iVar2 != 6) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 1;
}
