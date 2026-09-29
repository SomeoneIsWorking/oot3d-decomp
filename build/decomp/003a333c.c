// OoT3D decomp @ 003a333c  name=FUN_003a333c  size=164

void FUN_003a333c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_1c [12];

  uVar3 = *(uint *)(param_3 + 0x1c);
  uVar2 = uVar3 + *(int *)(param_3 + 0x18) * 0x5c;
  if (uVar3 < uVar2) {
    while( true ) {
      uVar1 = (uint)*(byte *)(uVar3 + 0x16);
      bVar4 = (*(byte *)(uVar3 + 0x16) & 0x80) != 0;
      if (bVar4) {
        uVar1 = *(uint *)(uVar3 + 0x24);
      }
      if ((bVar4 && uVar1 != 0) && ((*(byte *)(uVar1 + 0x15) & 0x40) == 0)) break;
      uVar3 = uVar3 + 0x5c;
      if (uVar2 <= uVar3) {
        return;
      }
    }
    FUN_0036ac0c(auStack_1c,uVar3 + 0xe);
    FUN_0031a604(param_1,*(undefined4 *)(uVar3 + 0x1c),*(undefined4 *)(uVar3 + 0x24),param_3,uVar3,
                 auStack_1c);
    *(byte *)(*(int *)(uVar3 + 0x24) + 0x15) = *(byte *)(*(int *)(uVar3 + 0x24) + 0x15) | 0x40;
  }
  return;
}
