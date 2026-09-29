// OoT3D decomp @ 002e1a5c  name=FUN_002e1a5c  size=128

void FUN_002e1a5c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;

  puVar1 = (undefined4 *)FUN_002fc3e4(*(undefined4 *)(param_2 + 0x10c));
  *puVar1 = param_1;
  puVar1[1] = param_1;
  puVar1[2] = param_1;
  puVar1[4] = param_1;
  puVar1[5] = param_1;
  puVar1[6] = param_1;
  puVar1[8] = param_1;
  puVar1[9] = param_1;
  puVar1[10] = param_1;
  puVar1[0xc] = param_1;
  puVar1[0xd] = param_1;
  puVar1[0xe] = param_1;
  bVar3 = *(char *)(param_2 + param_3 + 0x434) != '\0';
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(param_2 + param_3 * 4 + 0xc);
  }
  if (!bVar3 || iVar2 == 0) {
    return;
  }
  FUN_002e6e58(param_1);
  return;
}
