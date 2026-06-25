// OoT3D decomp @ 0036ae48  name=FUN_0036ae48  size=100

int FUN_0036ae48(int param_1)

{
  int iVar1;
  
  *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 8;
  if (*(short *)(param_1 + 0x1ac) == 0) {
    iVar1 = (int)*(short *)(DAT_0036aeac + *(int *)(param_1 + 0xd4));
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0xd4) + DAT_0036aeb0 + iVar1 * 4);
      *(ushort *)(iVar1 + 0x194) = *(ushort *)(iVar1 + 0x194) | 8;
      return (int)*(short *)(*(int *)(param_1 + 0xd4) + 0xa64);
    }
  }
  return (int)*(short *)(param_1 + 0x1ac);
}

