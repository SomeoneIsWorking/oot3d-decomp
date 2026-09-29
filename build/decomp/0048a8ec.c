// OoT3D decomp @ 0048a8ec  name=FUN_0048a8ec  size=120

void FUN_0048a8ec(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;

  param_1[3] = param_2;
  while (param_1[3] < *param_1) {
    piVar3 = (int *)param_1[1];
    piVar2 = (int *)0x0;
    iVar4 = 0x80;
    while (piVar3 != param_1 + 1) {
      iVar1 = UnsignedSaturate((uint)*(byte *)(piVar3 + -0x15) + piVar3[-0x27],7);
      UnsignedDoesSaturate((uint)*(byte *)(piVar3 + -0x15) + piVar3[-0x27],7);
      if (iVar1 < iVar4) {
        piVar2 = piVar3 + -0x3b;
      }
      piVar3 = (int *)*piVar3;
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
    }
    (**(code **)(*piVar2 + 0x10))();
  }
  return;
}
