// OoT3D decomp @ 0043dd94  name=FUN_0043dd94  size=388

void FUN_0043dd94(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  FUN_002e83ec();
  uVar3 = FUN_0033b5d0();
  iVar2 = DAT_0043df1c;
  uVar1 = DAT_0043df18;
  if (((uVar3 & 0x20) != 0) && (*(int *)(DAT_0043df1c + 0x2c) == 1)) {
    FUN_0037547c(DAT_0043df18,0,4,DAT_0043df24,DAT_0043df24,DAT_0043df20);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    return;
  }
  uVar3 = FUN_0033b5d0();
  if (((uVar3 & 0x10) != 0) && (*(int *)(iVar2 + 0x2c) == 0)) {
    FUN_0037547c(uVar1,0,4,DAT_0043df24,DAT_0043df24,DAT_0043df20);
    *(undefined4 *)(iVar2 + 0x2c) = 1;
    return;
  }
  uVar3 = FUN_0033b5ec();
  uVar1 = DAT_0043df28;
  if (((uVar3 & 1) == 0) && (*(int *)(iVar2 + 0x30) != 1)) {
    uVar3 = FUN_0033b5ec();
    if ((uVar3 & 2) == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    FUN_002e7d80();
  }
  else {
    *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
    FUN_002e7d80();
    if (*(int *)(iVar2 + 0x2c) != 0) {
      FUN_0037547c(DAT_0043df2c,0,4,DAT_0043df24,DAT_0043df24,DAT_0043df20);
      *(undefined4 *)(iVar2 + 4) = 9;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      return;
    }
  }
  FUN_0037547c(uVar1,0,4,DAT_0043df24,DAT_0043df24,DAT_0043df20);
  *(undefined4 *)(iVar2 + 4) = 7;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  return;
}
