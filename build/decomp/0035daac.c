// OoT3D decomp @ 0035daac  name=FUN_0035daac  size=112

undefined4 FUN_0035daac(int param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x20ac);
  uVar1 = FUN_0035db20(param_1,iVar3);
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(DAT_0035db1c + iVar3);
  }
  bVar5 = bVar4 && uVar1 == 0;
  if (bVar4 && uVar1 == 0) {
    bVar5 = *(char *)(iVar3 + 2) == '\x02';
  }
  if ((bVar5) && (iVar2 = FUN_00352dbc(param_1,(int)param_2), iVar2 == 0)) {
    *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) & 0xffffff7f;
    return 1;
  }
  return 0;
}

