// OoT3D decomp @ 002dc008  name=FUN_002dc008  size=120

void FUN_002dc008(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  if (param_1 == 0) {
    if (*(char *)(DAT_002dc080 + 4) != '\0') {
      *(undefined1 *)(DAT_002dc080 + 4) = 0;
      iVar2 = FUN_00485a90();
      bVar3 = DAT_002dc084 != iVar2 * 0x400000;
      iVar1 = DAT_002dc084;
      if (bVar3) {
        iVar1 = DAT_002dc088;
      }
      if ((bVar3 && iVar1 != iVar2 * 0x400000) && iVar2 < 0) goto LAB_002dc060;
    }
  }
  else {
    *(undefined1 *)(DAT_002dc080 + 4) = 1;
    iVar2 = FUN_00485a54();
    if (iVar2 < 0) {
LAB_002dc060:
      FUN_0030e3ac(iVar2,DAT_002dc08c,0);
      FUN_002fb928(0);
      return;
    }
  }
  return;
}
