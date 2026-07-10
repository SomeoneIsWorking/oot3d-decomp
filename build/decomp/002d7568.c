// OoT3D decomp @ 002d7568  name=FUN_002d7568  size=72

void FUN_002d7568(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_2 < 3) {
    uVar4 = *param_3;
    iVar2 = 2;
    puVar1 = (undefined4 *)(param_1 + param_2 * 0x60 + 0x84);
    puVar3 = param_3 + -1;
    do {
      uVar5 = puVar3[2];
      puVar1[1] = uVar4;
      uVar4 = puVar3[3];
      iVar2 = iVar2 + -1;
      puVar1[2] = uVar5;
      puVar1 = puVar1 + 2;
      puVar3 = puVar3 + 2;
    } while (iVar2 != 0);
  }
  return;
}

