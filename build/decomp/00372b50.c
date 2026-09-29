// OoT3D decomp @ 00372b50  name=FUN_00372b50  size=280

int FUN_00372b50(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  *(undefined1 *)(param_1 + 0x28f) = 8;
  iVar2 = DAT_00372c70;
  if (*(short *)(param_1 + 0x1c) != 10) {
    return 0x9e;
  }
  uVar1 = *(ushort *)(DAT_00372c74 + 0xe);
  if (*(char *)((uint)*(byte *)(DAT_00372c68 + 0x21) + DAT_00372c6c) == ',') {
    if ((uVar1 & 0x800) == 0) {
      if ((uVar1 & 0x400) == 0) {
        if ((uVar1 & 0x200) == 0) {
          if ((uVar1 & 0x100) == 0) {
            return 0x9e;
          }
          if ((*(ushort *)(DAT_00372c74 - 4) & 0x1000) == 0) {
            *(undefined1 *)(param_1 + 0x28f) = 0;
            iVar2 = DAT_00372c80;
          }
        }
        else if ((*(ushort *)(DAT_00372c74 - 4) & 0x2000) == 0) {
          *(undefined1 *)(param_1 + 0x28f) = 2;
          iVar2 = DAT_00372c7c;
        }
      }
      else if ((*(ushort *)(DAT_00372c74 - 4) & 0x4000) == 0) {
        *(undefined1 *)(param_1 + 0x28f) = 1;
        iVar2 = DAT_00372c78;
      }
    }
    else if ((*(ushort *)(DAT_00372c74 - 4) & 0x8000) == 0) {
      *(undefined1 *)(param_1 + 0x28f) = 3;
      iVar2 = iVar2 + 0x1a;
    }
  }
  else if ((uVar1 & 0x800) == 0) {
    bVar4 = (uVar1 & 0x400) == 0;
    uVar3 = DAT_00372c74;
    if (bVar4) {
      uVar3 = (uint)*(ushort *)(DAT_00372c74 + 0xc);
    }
    if ((bVar4 && (uVar3 & 0x10) == 0) && (uVar1 & 0x100) == 0) {
      iVar2 = DAT_00372c88;
      if ((uVar3 & 8) != 0) {
        *(undefined1 *)(param_1 + 0x28f) = 4;
        iVar2 = DAT_00372c84;
      }
      return iVar2;
    }
    return DAT_00372c8c;
  }
  return iVar2;
}
