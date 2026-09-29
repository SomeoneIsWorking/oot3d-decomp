// OoT3D decomp @ 00347070  name=FUN_00347070  size=28

void FUN_00347070(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_0033579c(param_1 + 0x1a4);
  iVar2 = DAT_003470b4;
  sVar1 = *(short *)(DAT_003470b4 + 0x80);
  if (sVar1 != 8 && sVar1 != 9) {
    if (sVar1 == 10) {
      *(undefined2 *)(DAT_003470b4 + 0x82) = 10;
    }
    *(undefined2 *)(iVar2 + 0x80) = 5;
  }
  return;
}
