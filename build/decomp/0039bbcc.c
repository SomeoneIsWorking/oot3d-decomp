// OoT3D decomp @ 0039bbcc  name=FUN_0039bbcc  size=84

void FUN_0039bbcc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  while( true ) {
    iVar2 = *(int *)(DAT_0039bc20 + iVar1 * 4 + 4);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0xc04) != DAT_0039bc24) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      FUN_0037073c(param_2,0x30);
      *(undefined4 *)(param_1 + 0xc04) = DAT_0039bc28;
      return;
    }
  }
  return;
}
