// OoT3D decomp @ 004c4268  name=FUN_004c4268  size=328

void FUN_004c4268(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  bVar5 = *(char *)(param_1 + 0x18) != '\0';
  iVar1 = 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (!bVar5 || iVar1 == 0) {
    iVar1 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
    iVar2 = FUN_002da7d8(*(undefined4 *)(param_1 + 0x10));
    FUN_002b7d74(param_1 + 0x1c,
                 (int)(*(int *)(param_1 + 0x3e0) +
                      ((uint)(*(int *)(param_1 + 0x3e0) >> 0x1f) >> 0x1d)) >> 3,
                 (int)(*(int *)(param_1 + 0x3e4) +
                      ((uint)(*(int *)(param_1 + 0x3e4) >> 0x1f) >> 0x1d)) >> 3,
                 (0x80000000U >> (LZCOUNT(iVar2 + -1) - 1U & 0xff)) >> 3,
                 (0x80000000U >> (LZCOUNT(iVar1 + -1) - 1U & 0xff)) >> 3,1,1);
    return;
  }
  iVar1 = FUN_002da7c8();
  iVar2 = FUN_002da7d8(*(undefined4 *)(param_1 + 0x14));
  iVar3 = FUN_002da7c8(*(undefined4 *)(param_1 + 0x10));
  iVar4 = FUN_002da7d8(*(undefined4 *)(param_1 + 0x10));
  FUN_002b7d74(param_1 + 0x1c,
               (int)(*(int *)(param_1 + 0x3e0) + ((uint)(*(int *)(param_1 + 0x3e0) >> 0x1f) >> 0x1d)
                    ) >> 3,
               (int)(*(int *)(param_1 + 0x3e4) + ((uint)(*(int *)(param_1 + 0x3e4) >> 0x1f) >> 0x1d)
                    ) >> 3,(0x80000000U >> (LZCOUNT(iVar4 + -1) - 1U & 0xff)) >> 3,
               (0x80000000U >> (LZCOUNT(iVar3 + -1) - 1U & 0xff)) >> 3,
               (0x80000000U >> (LZCOUNT(iVar2 + -1) - 1U & 0xff)) >> 3,
               (0x80000000U >> (LZCOUNT(iVar1 + -1) - 1U & 0xff)) >> 3);
  return;
}
