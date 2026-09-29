// OoT3D decomp @ 002e6e58  name=FUN_002e6e58  size=120

void FUN_002e6e58(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = FUN_002fc3e4(*(undefined4 *)(param_2 + 8),0);
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 4)) {
    do {
      puVar2 = (undefined4 *)(iVar1 + iVar3 * 0x40);
      iVar3 = iVar3 + 1;
      *puVar2 = param_1;
      puVar2[1] = param_1;
      puVar2[2] = param_1;
      puVar2[4] = param_1;
      puVar2[5] = param_1;
      puVar2[6] = param_1;
      puVar2[8] = param_1;
      puVar2[9] = param_1;
      puVar2[10] = param_1;
      puVar2[0xc] = param_1;
      puVar2[0xd] = param_1;
      puVar2[0xe] = param_1;
    } while (iVar3 < *(int *)(param_2 + 4));
  }
  return;
}
