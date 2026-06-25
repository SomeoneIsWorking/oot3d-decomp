// OoT3D decomp @ 003048d4  name=FUN_003048d4  size=120

void FUN_003048d4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(DAT_0030494c + 0x9c);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      iVar2 = *(int *)(iVar3 + 0x18);
    }
    if (!bVar4 || iVar2 != 0) {
      FUN_00343280(*(undefined4 *)(iVar3 + 0x18),*(int *)(iVar3 + 0x20) * 0x1c);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      piVar1 = DAT_00304950;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      iVar2 = *(int *)(iVar3 + 4);
      *piVar1 = iVar2;
      *DAT_00304954 = iVar2 + *(int *)(iVar3 + 8);
    }
  }
  return;
}

