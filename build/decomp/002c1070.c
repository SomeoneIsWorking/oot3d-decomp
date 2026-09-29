// OoT3D decomp @ 002c1070  name=FUN_002c1070  size=68

undefined4 FUN_002c1070(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_002bfffc(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    iVar1 = FUN_004a17e8();
    if (iVar1 == 0) {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xe;
}
