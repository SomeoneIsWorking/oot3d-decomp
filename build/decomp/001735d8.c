// OoT3D decomp @ 001735d8  name=FUN_001735d8  size=264

int FUN_001735d8(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = FUN_0036bba8(param_1,0x1e);
  iVar1 = DAT_001736e4;
  if (iVar2 == 0) {
    if (*(int *)(DAT_001736e0 + 4) != 0) {
      iVar2 = DAT_00173704;
      if (((*(uint *)(DAT_001736e0 + 0xbc) & *(uint *)(DAT_001736e8 + 0x50)) == 0) &&
         (iVar2 = DAT_0017370c, (*(ushort *)(DAT_00173708 + 0xf2) & 8) == 0)) {
        *(undefined1 *)(*(int *)(param_1 + 0x20ac) + 0x172b) = 0x1d;
        iVar2 = iVar1;
      }
      return iVar2;
    }
    iVar2 = DAT_001736e4 + -8;
    if (*(byte *)((uint)*(byte *)(DAT_001736ec + 0x2d) + DAT_001736e0 + 0x8c) < 0x35) {
      *(undefined1 *)(*(int *)(param_1 + 0x20ac) + 0x172b) = 0xc;
    }
    else {
      if ((*(ushort *)(DAT_001736f0 + 0x36) & 0x200) != 0) {
        if (((*(uint *)(DAT_001736e0 + 0xbc) & *(uint *)(DAT_001736e8 + 8)) == 0) &&
           (((uint)*(ushort *)(DAT_001736e0 + 0xb6) &
            *(uint *)(DAT_001736e8 + 8) << *(sbyte *)(DAT_001736f4 + 2)) == 0)) {
          return DAT_001736fc;
        }
        if ((*(uint *)(DAT_001736e0 + 0xbc) & *(uint *)(DAT_001736e8 + 0x20)) == 0) {
          return DAT_001736e4;
        }
        return DAT_00173700;
      }
      if (((uint)*(ushort *)(DAT_001736e0 + 0xb6) &
          *(int *)(DAT_001736e8 + 8) << *(sbyte *)(DAT_001736f4 + 2)) != 0) {
        iVar2 = DAT_001736f8;
      }
    }
  }
  return iVar2;
}
