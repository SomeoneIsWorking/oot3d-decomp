// OoT3D decomp @ 003656fc  name=FUN_003656fc  size=96

undefined1 FUN_003656fc(int param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;

  uVar2 = (DAT_0036575c & param_2) != 0;
  if (!(bool)uVar2) {
    if ((DAT_00365760 & param_2) == 0) {
      if ((DAT_00365764 & param_2) == 0) {
        if ((param_2 & 0x4000000) != 0) {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  iVar1 = FUN_0040cc3c(*(undefined4 *)(param_1 + 0x20ac));
  if (iVar1 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}
