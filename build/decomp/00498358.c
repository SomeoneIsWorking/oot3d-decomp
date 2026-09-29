// OoT3D decomp @ 00498358  name=FUN_00498358  size=112

void FUN_00498358(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      FUN_00303b14(*(undefined4 *)(param_1 + iVar2 * 0xa8 + iVar1 * 0x54 + 0x238),0x60000,0xff);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_00306a34(param_1 + 0x16c);
  *(undefined1 *)(param_1 + 8) = 7;
  FUN_003069cc(param_1 + 0x16c);
  return;
}
