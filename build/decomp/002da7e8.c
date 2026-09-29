// OoT3D decomp @ 002da7e8  name=FUN_002da7e8  size=344

undefined4 FUN_002da7e8(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  if ((param_2 != 0) && (param_2 == 1)) {
    iVar1 = FUN_002da7d8(*(undefined4 *)(param_1 + 0x10));
    param_3 = (0x80000000U >> (LZCOUNT(iVar1 + -1) - 1U & 0xff)) << 4;
    iVar1 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
    param_4 = (0x80000000U >> (LZCOUNT(iVar1 + -1) - 1U & 0xff)) << 4;
  }
  iVar1 = *(int *)(param_1 + 0x3e4);
  iVar4 = *(int *)(param_1 + 0x3e0);
  iVar2 = FUN_002da7b8(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 < 4) {
    iVar2 = 4;
  }
  iVar2 = iVar4 * iVar1 * iVar2;
  iVar1 = FUN_002da7b8(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 < 4) {
    iVar1 = 4;
  }
  iVar1 = iVar1 * param_3 * param_4;
  uVar3 = iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d);
  iVar1 = (int)uVar3 >> 3;
  if ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3 == iVar1) {
    iVar2 = *(int *)(param_1 + 0x3dc);
  }
  else {
    uVar3 = (uint)*(byte *)(param_1 + 8);
    if (uVar3 == 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),iVar1);
      if (iVar2 == 0) {
        iVar2 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0032b184(iVar2,iVar1);
      }
    }
    else {
      iVar2 = 0;
    }
  }
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x3dc) != iVar2 && *(int *)(param_1 + 0x3dc) != 0) {
      uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    *(int *)(param_1 + 0x3dc) = iVar2;
    *(int *)(param_1 + 0x3e0) = param_3;
    *(int *)(param_1 + 0x3e4) = param_4;
    if (param_2 == 1) {
      uVar3 = param_1;
    }
    *(char *)(param_1 + 0x19) = (char)param_2;
    if (param_2 == 1) {
      FUN_0046a738(uVar3);
    }
    *(undefined1 *)(param_1 + 9) = 1;
    return 1;
  }
  return 0;
}
