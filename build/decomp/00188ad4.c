// OoT3D decomp @ 00188ad4  name=FUN_00188ad4  size=400

int FUN_00188ad4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;

  iVar2 = FUN_0036bba8(param_1,0x1d);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = DAT_00188c90 + 1;
  switch(*(ushort *)(param_2 + 0x1c) & 0x3f) {
  case 0:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return DAT_00188c90;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      return DAT_00188ca0;
    }
    break;
  case 1:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return iVar2;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      iVar2 = DAT_00188ca4;
      if ((*(ushort *)(DAT_00188c88 + 0xf34) & 0x10) != 0) {
        iVar2 = DAT_00188ca8;
      }
      return iVar2;
    }
    break;
  case 2:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return DAT_00188c90;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 2) != 0) {
      iVar2 = DAT_00188cac;
      if ((*(ushort *)(DAT_00188c88 + 0xf34) & 0x200) != 0) {
        iVar2 = DAT_00188cb0;
      }
      return iVar2;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      return DAT_00188cb4;
    }
    break;
  case 3:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return iVar2;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      return DAT_00188cb8;
    }
    break;
  case 4:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return DAT_00188c90;
    }
    uVar1 = *(ushort *)(DAT_00188c88 + 0xef2);
    if ((uVar1 & 8) != 0) {
      return DAT_00188cbc;
    }
    if ((uVar1 & 2) != 0) {
      return DAT_00188cbc + 1;
    }
    if ((uVar1 & 1) != 0) {
      return DAT_00188cbc;
    }
    return DAT_00188cc4;
  case 5:
    if ((*(uint *)(DAT_00188c88 + 0xbc) & *(uint *)(DAT_00188c8c + 0x50)) != 0) {
      return iVar2;
    }
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      return DAT_00188cc0;
    }
    break;
  case 6:
    return DAT_00188c98;
  case 7:
    return DAT_00188c9c;
  case 8:
    if ((*(ushort *)(DAT_00188c88 + 0xef2) & 1) != 0) {
      return DAT_00188c94;
    }
  }
  return DAT_00188cc4;
}
