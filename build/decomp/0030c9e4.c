// OoT3D decomp @ 0030c9e4  name=FUN_0030c9e4  size=200

void FUN_0030c9e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  func_0x0030c9b8(param_1 + 0xc,param_2 + 0xe4);
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 != (int *)(param_1 + 0x10)) {
    iVar6 = *(int *)(param_2 + 0x50) + (uint)*(byte *)(param_2 + 0x98);
    do {
      iVar1 = UnsignedSaturate(iVar6,7);
      UnsignedDoesSaturate(iVar6,7);
      iVar2 = UnsignedSaturate(piVar5[-0x25] + (uint)*(byte *)(piVar5 + -0x13),7);
      UnsignedDoesSaturate(piVar5[-0x25] + (uint)*(byte *)(piVar5 + -0x13),7);
      if (iVar1 < iVar2) break;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(param_1 + 0x10));
  }
  puVar3 = (undefined4 *)(param_2 + 0xe4);
  piVar4 = (int *)piVar5[1];
  *puVar3 = piVar5;
  *(int **)(param_2 + 0xe8) = piVar4;
  piVar5[1] = (int)puVar3;
  *piVar4 = (int)puVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

