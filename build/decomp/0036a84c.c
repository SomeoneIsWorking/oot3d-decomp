// OoT3D decomp @ 0036a84c  name=FUN_0036a84c  size=200

void FUN_0036a84c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;

  iVar3 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a,param_3,param_4,
                       param_4);
  if (iVar3 != 0) {
    return;
  }
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x1a) >> 0x1e;
  if (uVar1 != 1) {
    if (uVar1 == 3) {
      FUN_0036a2dc(param_2,param_1,DAT_0036a914,0,0);
      return;
    }
    if (*(char *)(DAT_0036a918 + 0xe) != '\0') {
      uVar2 = *(ushort *)(param_2 + 0x104);
      bVar4 = uVar2 == 6;
      if (bVar4) {
        uVar2 = (ushort)*(byte *)(DAT_0036a91c + param_2);
      }
      if (bVar4 && uVar2 == 4) {
        FUN_0036a2dc(param_2,param_1,0,DAT_0036a920,100);
        return;
      }
    }
  }
  FUN_0036a2dc(param_2,param_1,0,0,0);
  return;
}
