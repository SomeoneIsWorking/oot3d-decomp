// OoT3D decomp @ 00418694  name=FUN_00418694  size=64

void FUN_00418694(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 * 3 + 1] = 0;
    *(undefined *)(param_1 + iVar1 * 3 + 2) = 2;
    *(undefined *)((int)param_1 + iVar1 * 0xc + 9) = 0xff;
    iVar1 = iVar2;
  } while (iVar2 < 0x100);
  return;
}

