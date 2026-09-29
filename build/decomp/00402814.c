// OoT3D decomp @ 00402814  name=FUN_00402814  size=164

undefined4 FUN_00402814(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = (uint)*(byte *)(param_2 + 0x98) + *(int *)(param_2 + 0x50);
  iVar1 = UnsignedSaturate(iVar3,7);
  UnsignedDoesSaturate(iVar3,7);
  if (param_1[9] != 0) {
    while( true ) {
      if (*param_1 < param_1[9]) {
        FUN_0030cab0(param_1,param_1 + 1,param_2 + 0xdc);
        FUN_0030ca0c(param_1,param_2);
        *(int **)(param_2 + 0x10) = param_1;
        return 1;
      }
      iVar3 = param_1[4];
      if ((int *)(iVar3 + -0xe4) == (int *)0x0) break;
      iVar4 = (uint)*(byte *)(iVar3 + -0x4c) + *(int *)(iVar3 + -0x94);
      iVar2 = UnsignedSaturate(iVar4,7);
      UnsignedDoesSaturate(iVar4,7);
      if (iVar1 < iVar2) {
        return 0;
      }
      (**(code **)(*(int *)(iVar3 + -0xe4) + 0x10))();
    }
  }
  return 0;
}
