// OoT3D decomp @ 00489b84  name=FUN_00489b84  size=92

void FUN_00489b84(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = DAT_00489be0;
  if (*(char *)(DAT_00489be0 + 1) == '\0' && *(char *)(DAT_00489be0 + 3) == '\0') {
    FUN_0049357c(DAT_00489be4);
    uVar2 = *(int *)(iVar1 + 8) + 1U & 0x1f;
    *(uint *)(iVar1 + 8) = uVar2;
    if (uVar2 == 0) {
      iVar3 = FUN_002fa25c(iVar1 + 4);
      if (iVar3 < 0) {
        *(undefined1 *)(iVar1 + 4) = 0;
      }
      FUN_002fa24c(DAT_00489be8,(int)*(char *)(iVar1 + 4));
      return;
    }
  }
  return;
}
