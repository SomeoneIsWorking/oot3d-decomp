// OoT3D decomp @ 0035db20  name=FUN_0035db20  size=124

undefined4 FUN_0035db20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = (DAT_0035db9c & *(uint *)(param_2 + 0x1710)) == 0;
  uVar2 = DAT_0035db9c;
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_2 + 0x12bc);
  }
  if ((bVar3 && uVar2 == 0) && (*(char *)(param_1 + 0x5c2d) != '\x14')) {
    bVar3 = (*(uint *)(param_2 + 0x1710) & 1) == 0;
    if (bVar3) {
      bVar3 = (*(byte *)(param_2 + 0x172a) & 0x80) == 0;
    }
    if ((bVar3) &&
       ((((*(short *)(DAT_0035dba0 + 0x80) == 0 ||
          (iVar1 = *(char *)(param_2 + 0x1ac) + -0x15, iVar1 < 0)) || (5 < iVar1)) || (iVar1 < 0))))
    {
      return 0;
    }
  }
  return 1;
}

