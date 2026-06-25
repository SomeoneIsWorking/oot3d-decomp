// OoT3D decomp @ 0035e330  name=FUN_0035e330  size=116

void FUN_0035e330(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_003695f8();
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2) != '\0') {
      if (iVar1 != 0) {
        *(undefined *)(param_1 + uVar2 * 0x98 + 0x15) = 1;
      }
      iVar3 = param_1 + uVar2 * 0x98;
      FUN_00373bec(iVar3 + 4);
      if (iVar1 != 0) {
        *(undefined *)(iVar3 + 0x15) = 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

