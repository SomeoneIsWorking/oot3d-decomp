// OoT3D decomp @ 002f9430  name=FUN_002f9430  size=84

void FUN_002f9430(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0 < param_3 * 2) {
    uVar4 = *param_2;
    iVar3 = param_3 * 2 >> 1;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + param_4 * 8 + -4);
    puVar2 = param_2 + -1;
    do {
      uVar5 = puVar2[2];
      puVar1[1] = uVar4;
      uVar4 = puVar2[3];
      iVar3 = iVar3 + -1;
      puVar1[2] = uVar5;
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    } while (iVar3 != 0);
  }
  return;
}

