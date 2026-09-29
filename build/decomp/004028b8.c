// OoT3D decomp @ 004028b8  name=FUN_004028b8  size=76

undefined4 FUN_004028b8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (param_1[9] != 0) {
    if (*param_1 < param_1[9]) {
      return 1;
    }
    iVar1 = param_1[4];
    if (iVar1 != 0xe4) {
      iVar2 = *(int *)(iVar1 + -0x94) + (uint)*(byte *)(iVar1 + -0x4c);
      iVar1 = UnsignedSaturate(iVar2,7);
      UnsignedDoesSaturate(iVar2,7);
      if (iVar1 <= param_2) {
        return 1;
      }
    }
  }
  return 0;
}
