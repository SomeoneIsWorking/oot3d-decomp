// OoT3D decomp @ 002c008c  name=FUN_002c008c  size=148

void FUN_002c008c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if (((*DAT_002c0120 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002c0120), iVar1 != 0)) {
    FUN_0036788c(DAT_002c0124);
  }
  iVar1 = 0;
  uVar3 = *(undefined4 *)(DAT_002c0130 + 0x47c);
  do {
    iVar2 = param_1 + iVar1 * 4;
    if (*(int *)(iVar2 + 0x6fc) != 0) {
      FUN_00348904(uVar3);
      *(undefined4 *)(iVar2 + 0x6fc) = 0;
    }
    FUN_003445d4(param_1 + iVar1 * 0x1b8 + 0x33c);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}
