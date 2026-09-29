// OoT3D decomp @ 0033caf8  name=FUN_0033caf8  size=32

uint FUN_0033caf8(int param_1)

{
  uint uVar1;
  bool bVar2;

  uVar1 = param_1 + 0x1000;
  bVar2 = (*(uint *)(param_1 + 0x1710) & DAT_0033cb18) == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x12bc);
  }
  if (!bVar2 || uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}
