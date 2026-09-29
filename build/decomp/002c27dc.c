// OoT3D decomp @ 002c27dc  name=FUN_002c27dc  size=312

int FUN_002c27dc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  cVar1 = *(char *)(param_1 + 0x18);
  bVar4 = cVar1 != '\0';
  if (bVar4) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  iVar2 = 0;
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  iVar3 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
  iVar3 = iVar3 + *(int *)(param_1 + 0xdc);
  if (cVar1 != '\0' && iVar2 != 0) {
    iVar2 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x14));
    iVar3 = iVar2 + iVar3 + *(int *)(param_1 + 0xe8);
  }
  iVar2 = *(int *)(param_1 + 0x114) * iVar3 - *(int *)(param_1 + 0xdc);
  switch(*(undefined1 *)(param_1 + 0xec)) {
  case 0:
    goto switchD_002c2858_caseD_0;
  case 2:
  case 5:
    return (*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x10c)) - iVar2;
  case 3:
    if ((bVar4 && param_2 != 0) && (*(char *)(param_1 + 0x3c8) == '\0')) {
      iVar3 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x14));
      iVar3 = iVar3 + *(int *)(param_1 + 0xe8);
      iVar2 = (*(int *)(param_1 + 0x10c) / 2 - (iVar2 - iVar3) / 2) + *(int *)(param_1 + 0x104);
LAB_002c2908:
      return iVar2 - iVar3;
    }
switchD_002c2858_caseD_0:
    return (*(int *)(param_1 + 0x10c) / 2 - iVar2 / 2) + *(int *)(param_1 + 0x104);
  case 4:
    if ((bVar4 && param_2 != 0) && (*(char *)(param_1 + 0x3c8) == '\0')) {
      iVar3 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x14));
      iVar3 = iVar3 + *(int *)(param_1 + 0xe8);
      iVar2 = *(int *)(param_1 + 0x104);
      goto LAB_002c2908;
    }
  default:
    return *(int *)(param_1 + 0x104);
  }
}
