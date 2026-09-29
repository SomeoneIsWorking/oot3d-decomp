// OoT3D decomp @ 003a3254  name=FUN_003a3254  size=116

void FUN_003a3254(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_18 [12];

  uVar1 = (uint)*(byte *)(param_3 + 0x2e);
  bVar2 = (*(byte *)(param_3 + 0x2e) & 0x80) != 0;
  if (bVar2) {
    uVar1 = *(uint *)(param_3 + 0x3c);
  }
  if ((bVar2 && uVar1 != 0) && ((*(byte *)(uVar1 + 0x15) & 0x40) == 0)) {
    FUN_0036ac0c(auStack_18,param_3 + 0x26);
    FUN_0031a604(param_1,*(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x3c),param_3,
                 param_3 + 0x18,auStack_18);
    *(byte *)(*(int *)(param_3 + 0x3c) + 0x15) = *(byte *)(*(int *)(param_3 + 0x3c) + 0x15) | 0x40;
  }
  return;
}
