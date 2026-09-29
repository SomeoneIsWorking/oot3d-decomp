// OoT3D decomp @ 00225524  name=FUN_00225524  size=92

void FUN_00225524(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    iVar1 = *(int *)(iVar3 + 0x26c);
    if (iVar1 != 0) {
      FUN_003508b8(param_1,iVar1,0);
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar3 + 0x26c) = 0;
  } while (iVar2 < 3);
  return;
}
