// OoT3D decomp @ 00185964  name=FUN_00185964  size=196

int FUN_00185964(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = FUN_0036bba8(param_1,0x10);
  iVar1 = iRam00185a34;
  if ((iVar2 != 0) ||
     (iVar2 = iRam00185a30, (*(uint *)(iRam00185a2c + 0x38) & *(uint *)(iRam00185a28 + 0xbc)) != 0))
  {
    return iVar2;
  }
  if ((*(uint *)(iRam00185a2c + 0x48) & *(uint *)(iRam00185a28 + 0xbc)) != 0) {
    *(undefined1 *)(param_2 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x479) = 0;
    iVar2 = iRam00185a38;
    if ((*(ushort *)(iVar1 + 0x10) & 0x20) != 0) {
      iVar2 = iRam00185a3c;
    }
    return iVar2;
  }
  if ((*(ushort *)(iRam00185a40 + 0xec) & 4) != 0) {
    *(undefined1 *)(param_2 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x479) = 0;
    iVar2 = iRam00185a44;
    if ((*(ushort *)(iVar1 + 0x10) & 8) != 0) {
      iVar2 = iRam00185a48;
    }
    return iVar2;
  }
  if ((*(ushort *)(iRam00185a34 + 0x10) & 1) != 0) {
    *(undefined1 *)(param_2 + 0x478) = 0;
    *(undefined1 *)(param_2 + 0x479) = 0;
    iVar2 = iRam00185a4c;
    if ((*(ushort *)(iVar1 + 0x10) & 2) != 0) {
      iVar2 = iRam00185a50;
    }
    return iVar2;
  }
  return iRam00185a54;
}
