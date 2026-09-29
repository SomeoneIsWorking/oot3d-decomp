// OoT3D decomp @ 00341e1c  name=FUN_00341e1c  size=72

undefined4 FUN_00341e1c(uint param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;

  uVar1 = (uint)*(byte *)(DAT_00341e64 + 0x9e);
  bVar2 = uVar1 != param_1;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(DAT_00341e64 + 0x9f);
  }
  bVar3 = uVar1 != param_1;
  if (bVar2 && bVar3) {
    uVar1 = (uint)*(byte *)(DAT_00341e64 + 0xa0);
  }
  if (((bVar2 && bVar3) && uVar1 != param_1) && (*(byte *)(DAT_00341e64 + 0xa1) != param_1)) {
    return 0;
  }
  return 1;
}
