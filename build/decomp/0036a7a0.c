// OoT3D decomp @ 0036a7a0  name=FUN_0036a7a0  size=144

undefined4 FUN_0036a7a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(DAT_0036a830 + param_1);
  bVar4 = (DAT_0036a834 & *(uint *)(iVar2 + 0x1710)) == 0;
  uVar3 = DAT_0036a834;
  if (bVar4) {
    uVar3 = (uint)*(byte *)(iVar2 + 0x12bc);
  }
  if ((bVar4 && uVar3 == 0) && (*(char *)(param_1 + 0x5c2d) != '\x14')) {
    bVar4 = (*(uint *)(iVar2 + 0x1710) & 1) == 0;
    if (bVar4) {
      bVar4 = (*(byte *)(iVar2 + 0x172a) & 0x80) == 0;
    }
    if (((bVar4) &&
        ((((*(short *)(DAT_0036a838 + 0x80) == 0 ||
           (iVar1 = *(char *)(iVar2 + 0x1ac) + -0x15, iVar1 < 0)) || (5 < iVar1)) || (iVar1 < 0))))
       && (*(char *)(iVar2 + 0x1749) != '\x04')) {
      return 0;
    }
  }
  return 1;
}

