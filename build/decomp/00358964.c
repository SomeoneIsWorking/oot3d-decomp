// OoT3D decomp @ 00358964  name=FUN_00358964  size=104

void FUN_00358964(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = param_1 + param_2 * 0x10;
  uVar5 = *param_3;
  iVar3 = 2;
  puVar1 = (undefined4 *)(iVar4 + 8);
  puVar2 = param_3 + -1;
  do {
    uVar6 = puVar2[2];
    puVar1[1] = uVar5;
    uVar5 = puVar2[3];
    iVar3 = iVar3 + -1;
    puVar1[2] = uVar6;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  if (*(char *)(param_1 + 0x1b6) != '\0') {
    *(bool *)(param_1 + 0xb) = *(int *)(iVar4 + 0x18) < 0x3f800000;
  }
  return;
}

