// OoT3D decomp @ 0041753c  name=FUN_0041753c  size=64

void FUN_0041753c(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  iVar3 = 0xb;
  puVar1 = param_1;
  do {
    iVar3 = iVar3 + -1;
    *(undefined4 *)(param_1 + iVar2 * 8 + 4) = 0;
    puVar1[8] = 3;
    *(undefined4 *)(param_1 + iVar2 * 8 + 0xc) = 0;
    iVar2 = iVar2 + 2;
    puVar1 = puVar1 + 0x10;
    *puVar1 = 3;
  } while (iVar3 != 0);
  return;
}
