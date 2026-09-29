// OoT3D decomp @ 00309854  name=FUN_00309854  size=112

void FUN_00309854(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = (uint)(*(char *)(param_1 + 10) != '\0');
  if (*(char *)(param_1 + 0x85) != '\0') {
    uVar3 = 1;
  }
  if ((int)*(char *)(param_1 + 0x84) != uVar3) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xe18)) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 0x220 + 0xe4c);
        if (iVar1 != 0) {
          FUN_0030a3d8(iVar1,uVar3);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xe18));
    }
    *(char *)(param_1 + 0x84) = (char)uVar3;
  }
  return;
}
