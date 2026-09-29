// OoT3D decomp @ 00494634  name=FUN_00494634  size=120

undefined4 FUN_00494634(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = DAT_004946ac;
  if (*DAT_004946ac == 0) {
    iVar2 = FUN_0035010c(DAT_004946b0);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      FUN_00306aa8();
    }
  }
  iVar2 = *piVar1;
  FUN_00306a34();
  uVar3 = FUN_003222dc(iVar2 + 0x17c,param_1,0x80,0,0,0);
  FUN_003069cc(iVar2 + 0x1d4);
  return uVar3;
}
