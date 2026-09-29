// OoT3D decomp @ 00434c5c  name=FUN_00434c5c  size=232

void FUN_00434c5c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar1 = DAT_00434d44;
  if ((*(int *)(DAT_00434d44 + 0x34) != 0) &&
     ((**(code **)(**(int **)(DAT_00434d44 + 0x20) + 0xc))(), *(int *)(iVar1 + 0x60) == 0)) {
    iVar2 = *(int *)(iVar1 + 0x84);
    if (iVar2 == 0) {
      FUN_002f780c(*(undefined4 *)(iVar1 + 0x3c));
    }
    else if (0 < iVar2) {
      *(int *)(iVar1 + 0x84) = iVar2 + -1;
    }
    iVar2 = DAT_00434d48;
    iVar3 = 0;
    do {
      FUN_002fb934(*(undefined4 *)(iVar2 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    FUN_002fb934(*(undefined4 *)(iVar1 + 0x30));
    FUN_00441fcc(*(undefined4 *)(iVar1 + 0x4c));
    FUN_002f780c(*(undefined4 *)(iVar1 + 0x40));
    FUN_002f780c(*(undefined4 *)(iVar1 + 0x44));
    FUN_002f780c(*(undefined4 *)(iVar1 + 0x48));
    bVar4 = *(int *)(DAT_00434d4c + 4) != 1;
    iVar2 = 1;
    if (bVar4) {
      iVar2 = *(int *)(DAT_00434d4c + 8);
    }
    iVar3 = DAT_00434d4c;
    if (bVar4 && iVar2 != 1) {
      iVar3 = *(int *)(DAT_00434d4c + 0xc);
    }
    if ((!bVar4 || iVar2 == 1) || iVar3 == 1) {
      FUN_002fb934(*(undefined4 *)(iVar1 + 0x2c));
    }
    if (1 < *(int *)(iVar1 + 0x38)) {
      FUN_002fb934(*(undefined4 *)(iVar1 + 0x28));
      return;
    }
  }
  return;
}
