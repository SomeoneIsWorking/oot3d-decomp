// OoT3D decomp @ 00423f54  name=FUN_00423f54  size=272

void FUN_00423f54(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;

  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_002f9ca0(DAT_00423ff0,param_1);
    iVar2 = 1 - *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_003120d4(*(undefined4 *)(param_1 + iVar2 * 4 + 4));
    FUN_003048d4();
    FUN_002f9c44(DAT_00423ff4);
    piVar1 = DAT_004479d4;
    iVar2 = DAT_004479d0;
    puVar3 = (undefined4 *)*DAT_004479d4;
    uVar5 = (int)puVar3 - *(int *)(*(int *)(DAT_004479d0 + 0x9c) + 4);
    *(uint *)(*(int *)(DAT_004479d0 + 0x9c) + 0xc) = uVar5;
    bVar6 = (uVar5 & 8) != 0;
    puVar4 = (undefined4 *)0x0;
    if (bVar6) {
      puVar4 = (undefined4 *)*DAT_004479d8;
    }
    if (bVar6 && puVar3 < puVar4) {
      *puVar3 = 0;
      puVar3[1] = DAT_004479dc;
      *piVar1 = (int)(puVar3 + 2);
    }
    *(undefined1 *)(iVar2 + 0x13) = 1;
    *(int *)(iVar2 + 0x168) = *piVar1 - *(int *)(*(int *)(iVar2 + 0x9c) + 4);
    *(undefined4 *)(iVar2 + 0x16c) = *(undefined4 *)(*(int *)(iVar2 + 0x9c) + 0x20);
    return;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_002f9ca0(DAT_00423ff0,param_1);
    iVar2 = 1 - *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_003120d4(*(undefined4 *)(param_1 + iVar2 * 4 + 4));
    FUN_003048d4();
  }
  FUN_002f9ca0(0x208,param_1 + 0x20);
  return;
}
