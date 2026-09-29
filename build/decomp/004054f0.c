// OoT3D decomp @ 004054f0  name=FUN_004054f0  size=84

undefined4 FUN_004054f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_1[3] != 0) {
    if (*param_1 < param_1[3]) {
      return 1;
    }
    iVar1 = FUN_00405544();
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x50) + (uint)*(byte *)(iVar1 + 0x98);
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      if (iVar1 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}
