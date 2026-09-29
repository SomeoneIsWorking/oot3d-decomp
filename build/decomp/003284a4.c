// OoT3D decomp @ 003284a4  name=FUN_003284a4  size=72

undefined4 FUN_003284a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0x20000) {
    iVar1 = FUN_0030dd88();
    uVar2 = DAT_003284f4;
    if (iVar1 == 0) {
      uVar2 = 0x1f000000;
    }
    return uVar2;
  }
  if (param_1 == 0x30000) {
    iVar1 = FUN_0030dd88();
    uVar2 = DAT_003284ec;
    if (iVar1 != 0) {
      uVar2 = DAT_003284f0;
    }
    return uVar2;
  }
  return 0;
}
