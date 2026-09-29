// OoT3D decomp @ 001f8f74  name=FUN_001f8f74  size=100

void FUN_001f8f74(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  FUN_00408aac(param_1 + 0x1a4);
  FUN_003501b8(param_1 + 0x28c);
  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18 == 5) {
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2 * 4;
      piVar1 = *(int **)(iVar3 + 0x23c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        *(undefined4 *)(iVar3 + 0x23c) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
  }
  return;
}
