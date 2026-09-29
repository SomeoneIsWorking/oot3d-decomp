// OoT3D decomp @ 002d2e04  name=FUN_002d2e04  size=116

void FUN_002d2e04(int param_1)

{
  int iVar1;
  int iVar2;

  if (*(int *)(param_1 + 4) != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar1 = iVar2 + 0xc;
    while (iVar1 != *(int *)(iVar2 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 4);
      if (*(code **)(iVar1 + 0x10) != (code *)0x0) {
        (**(code **)(iVar1 + 0x10))
                  (*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                   *(undefined4 *)(iVar1 + 0x14));
      }
    }
    FUN_0030d538(iVar2 + 8,*(undefined4 *)(iVar2 + 0xc),iVar2 + 0xc);
                    /* WARNING: Subroutine does not return */
    FUN_0030c9b8(param_1 + 4,iVar2);
  }
  return;
}
