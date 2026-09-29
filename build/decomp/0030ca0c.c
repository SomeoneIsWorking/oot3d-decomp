// OoT3D decomp @ 0030ca0c  name=FUN_0030ca0c  size=120

void FUN_0030ca0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 != (int *)(param_1 + 0x10)) {
    iVar4 = *(int *)(param_2 + 0x50) + (uint)*(byte *)(param_2 + 0x98);
    do {
      iVar1 = UnsignedSaturate(iVar4,7);
      UnsignedDoesSaturate(iVar4,7);
      iVar2 = UnsignedSaturate(piVar3[-0x25] + (uint)*(byte *)(piVar3 + -0x13),7);
      UnsignedDoesSaturate(piVar3[-0x25] + (uint)*(byte *)(piVar3 + -0x13),7);
      if (iVar1 < iVar2) break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)(param_1 + 0x10));
  }
  FUN_0030cab0(param_1 + 0xc,piVar3,param_2 + 0xe4);
  return;
}
