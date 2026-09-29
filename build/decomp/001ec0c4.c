// OoT3D decomp @ 001ec0c4  name=FUN_001ec0c4  size=100

void FUN_001ec0c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x270);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xffffdfff;
  }
  iVar1 = 0;
  do {
    iVar3 = param_1 + iVar1 * 4;
    piVar2 = *(int **)(iVar3 + 0x28c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(iVar3 + 0x28c) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
