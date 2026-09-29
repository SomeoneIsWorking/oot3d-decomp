// OoT3D decomp @ 0048b094  name=FUN_0048b094  size=68

void FUN_0048b094(int param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    FUN_00307840(param_1 + 0x2e0,1,iVar1 + 5,0x15,1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  return;
}
