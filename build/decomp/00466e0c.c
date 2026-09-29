// OoT3D decomp @ 00466e0c  name=FUN_00466e0c  size=116

void FUN_00466e0c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_10;

  local_10 = param_4;
  FUN_002f9ca0(0x208,&local_10);
  puVar1 = *(undefined4 **)(param_1 + *(int *)(param_1 + 0x14) * 4 + 8);
  iVar3 = (int)(*(int *)(param_1 + 0x10) + ((uint)(*(int *)(param_1 + 0x10) >> 0x1f) >> 0x1d)) >> 3;
  if (0 < iVar3 * 2) {
    uVar4 = *puVar1;
    puVar2 = (undefined4 *)(local_10 + -4);
    puVar1 = puVar1 + -1;
    do {
      uVar5 = puVar1[2];
      puVar2[1] = uVar4;
      uVar4 = puVar1[3];
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 2;
      *puVar2 = uVar5;
      puVar1 = puVar1 + 2;
    } while (iVar3 != 0);
  }
  FUN_002f9c88(*(undefined4 *)(param_1 + 0x10));
  return;
}
