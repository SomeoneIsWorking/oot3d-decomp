// OoT3D decomp @ 00405544  name=FUN_00405544  size=88

int FUN_00405544(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  piVar2 = *(int **)(param_1 + 4);
  iVar3 = 0;
  iVar4 = 0x80;
  while (piVar2 != (int *)(param_1 + 4)) {
    iVar1 = UnsignedSaturate((uint)*(byte *)(piVar2 + -0x15) + piVar2[-0x27],7);
    UnsignedDoesSaturate((uint)*(byte *)(piVar2 + -0x15) + piVar2[-0x27],7);
    if (iVar1 < iVar4) {
      iVar3 = (int)(piVar2 + -0x3b);
    }
    piVar2 = (int *)*piVar2;
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
  }
  return iVar3;
}
