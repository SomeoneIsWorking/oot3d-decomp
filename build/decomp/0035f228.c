// OoT3D decomp @ 0035f228  name=FUN_0035f228  size=40

bool FUN_0035f228(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;

  uVar1 = *(uint *)(*(int *)(param_1 + 0x20ac) + 0x1710);
  bVar2 = (uVar1 & 0x10) != 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_2 + 0x114);
  }
  return bVar2 && uVar1 != 0;
}
