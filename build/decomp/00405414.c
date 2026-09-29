// OoT3D decomp @ 00405414  name=FUN_00405414  size=220

undefined4 FUN_00405414(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;

  iVar3 = (uint)*(byte *)(param_2 + 0x98) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  if (param_1[3] != 0) {
    while( true ) {
      if (*param_1 < param_1[3]) {
        FUN_0030cab0(param_1,param_1 + 1,param_2 + 0xec);
        *(int **)(param_2 + 0x18) = param_1;
        return 1;
      }
      piVar5 = (int *)param_1[1];
      piVar4 = (int *)0x0;
      iVar3 = 0x80;
      while (piVar5 != param_1 + 1) {
        iVar2 = UnsignedSaturate((uint)*(byte *)(piVar5 + -0x15) + piVar5[-0x27],7);
        UnsignedDoesSaturate((uint)*(byte *)(piVar5 + -0x15) + piVar5[-0x27],7);
        if (iVar2 < iVar3) {
          piVar4 = piVar5 + -0x3b;
        }
        piVar5 = (int *)*piVar5;
        if (iVar2 < iVar3) {
          iVar3 = iVar2;
        }
      }
      if (piVar4 == (int *)0x0) break;
      iVar3 = UnsignedSaturate((uint)*(byte *)(piVar4 + 0x26) + piVar4[0x14],7);
      UnsignedDoesSaturate((uint)*(byte *)(piVar4 + 0x26) + piVar4[0x14],7);
      if (iVar1 < iVar3) {
        return 0;
      }
      (**(code **)(*piVar4 + 0x10))();
    }
  }
  return 0;
}
