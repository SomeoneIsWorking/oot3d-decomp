// OoT3D decomp @ 0035e414  name=FUN_0035e414  size=216

int FUN_0035e414(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = DAT_0035e4ec + 0x8c;
  if (*(int *)(DAT_0035e4ec + 4) == 0) {
    if (param_1 == 0x10) {
      param_1 = 8;
LAB_0035e48c:
      if (*(char *)((uint)*(byte *)(DAT_0035e4f0 + 3) + iVar3) == -1) {
        return -1;
      }
LAB_0035e49c:
      if ((param_1 == 0xe || param_1 == 0xf) && (*(char *)(DAT_0035e4ec + 0x46) == '\0')) {
        return -1;
      }
      if (param_1 == 0x10) goto LAB_0035e4bc;
      iVar4 = DAT_0035e4ec;
      if (param_1 == 3) {
        iVar3 = (int)*(short *)(DAT_0035e4ec + 0x42);
        iVar4 = (int)*(short *)(DAT_0035e4ec + 0x44);
      }
      if (param_1 != 3 || iVar3 != iVar4) {
        return param_1;
      }
    }
    else if (param_1 != 0xd) goto LAB_0035e45c;
    param_1 = 0;
  }
  else {
    bVar5 = param_1 == 8;
    bVar1 = param_1 == 9;
    bVar2 = param_1 != 10;
    if ((bVar5 || bVar1) || !bVar2) {
      param_1 = 0x10;
    }
    if ((!bVar5 && !bVar1) && bVar2) {
LAB_0035e45c:
      if (((param_1 == 4 || param_1 == 0x19) || param_1 == 0xb) &&
         (*(char *)((uint)*(byte *)(DAT_0035e4f0 + 2) + iVar3) == -1)) {
        return -1;
      }
      if ((param_1 == 8 || param_1 == 9) || param_1 == 10) goto LAB_0035e48c;
      goto LAB_0035e49c;
    }
LAB_0035e4bc:
    if (*(char *)((uint)*(byte *)(DAT_0035e4f0 + 6) + iVar3) == -1) {
      return -1;
    }
  }
  return param_1;
}

