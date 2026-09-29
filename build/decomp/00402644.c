// OoT3D decomp @ 00402644  name=FUN_00402644  size=120

void FUN_00402644(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 0x55) == '\0') {
    iVar2 = 0;
    do {
      iVar3 = param_1 + iVar2 * 0x10;
      FUN_0030cb90(iVar3 + 8,0);
      FUN_0030cb3c(iVar3 + 8,param_1);
      FUN_0030cad8(iVar3 + 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    *(undefined1 *)(param_1 + 0x55) = 1;
    uVar1 = DAT_004026bc;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = DAT_004026c0;
  }
  return;
}
