// OoT3D decomp @ 00485a54  name=FUN_00485a54  size=52

undefined4 FUN_00485a54(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  iVar1 = FUN_002c48f8();
  if (iVar1 != 0) {
    uVar3 = *DAT_00485a88;
    uVar2 = FUN_0030dd98();
    uVar2 = FUN_0030dda4(uVar2,uVar3,0);
    return uVar2;
  }
  return DAT_00485a8c;
}
