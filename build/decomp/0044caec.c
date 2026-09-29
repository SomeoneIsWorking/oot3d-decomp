// OoT3D decomp @ 0044caec  name=FUN_0044caec  size=152

undefined4 FUN_0044caec(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar3 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(param_1 + 0xf4);
      uVar4 = *(undefined4 *)(param_2 + uVar3 * 4);
      if (0x1ff < uVar1) {
        return 0;
      }
      if ((uVar1 < 2) ||
         (iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xf0) + uVar1 * 8 + -8) + 0xc))(),
         iVar2 == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) * 8) = uVar4;
        *(undefined4 *)(*(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xf4) * 8 + 4) = 0;
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return 1;
}
