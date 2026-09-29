// OoT3D decomp @ 0046b9a0  name=FUN_0046b9a0  size=172

undefined4 FUN_0046b9a0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar4 = *(int *)(param_1 + 4) + param_2 * 0x124;
  iVar2 = 0;
  uVar3 = *(uint *)(iVar4 + 0x118);
  if ((int)uVar3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
  }
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(iVar4 + 0x11c) + iVar2 * 4) == param_3) {
        return *(undefined4 *)(*(int *)(iVar4 + 0x120) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  if ((int)uVar1 < (int)uVar3) {
    do {
      if (*(int *)(*(int *)(iVar4 + 0x11c) + uVar1 * 4) == param_3) {
        return *(undefined4 *)(*(int *)(iVar4 + 0x120) + uVar1 * 4);
      }
      if (*(int *)(*(int *)(iVar4 + 0x11c) + uVar1 * 4 + 4) == param_3) {
        return *(undefined4 *)(*(int *)(iVar4 + 0x120) + uVar1 * 4 + 4);
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar3);
  }
  return 0;
}
