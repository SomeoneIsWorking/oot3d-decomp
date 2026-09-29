// OoT3D decomp @ 0040950c  name=FUN_0040950c  size=216

void FUN_0040950c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint local_18 [4];

  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xd4) = param_2;
  iVar1 = 0;
  do {
    uVar4 = *(uint *)(param_3 + iVar1 * 4);
    bVar3 = (uVar4 & 0x7fffffff) != 0;
    uVar2 = 0;
    if (bVar3) {
      uVar2 = uVar4 << 1;
    }
    if (bVar3) {
      uVar2 = (uVar2 >> 0x18) - 0x40;
    }
    if ((int)uVar2 < 0) {
      uVar2 = (uVar4 >> 0x1f) << 0x17;
    }
    else {
      uVar2 = (uVar4 << 9) >> 0x10 | uVar2 << 0x10 | (uVar4 >> 0x1f) << 0x17;
    }
    local_18[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(uint *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xd8) =
       local_18[0] & 0xffffff | local_18[1] << 0x18;
  *(uint *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xdc) =
       (local_18[1] << 8) >> 0x10 | local_18[2] << 0x10;
  *(uint *)(param_1 + *(int *)(param_1 + 0x10) * 0x10 + 0xe0) =
       (local_18[2] << 8) >> 0x18 | local_18[3] << 8;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}
