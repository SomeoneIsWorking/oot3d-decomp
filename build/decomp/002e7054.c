// OoT3D decomp @ 002e7054  name=FUN_002e7054  size=84

void FUN_002e7054(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (0 < param_3 * 0x10) {
    uVar4 = *param_2;
    iVar3 = param_3 * 0x10 >> 1;
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + param_4 * 0x40 + -4);
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
