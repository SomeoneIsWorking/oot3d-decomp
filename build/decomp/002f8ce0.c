// OoT3D decomp @ 002f8ce0  name=FUN_002f8ce0  size=96

void FUN_002f8ce0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;

  iVar1 = FUN_002fc3e4(*(undefined4 *)(param_2 + 0x10c));
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x2c) = param_1;
  *(undefined4 *)(iVar1 + 0x3c) = param_1;
  bVar2 = *(char *)(param_2 + param_3 + 0x434) != '\0';
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_2 + param_3 * 4 + 0xc);
  }
  if (!bVar2 || iVar1 == 0) {
    return;
  }
  FUN_002db368(param_1);
  return;
}
