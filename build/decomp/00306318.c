// OoT3D decomp @ 00306318  name=FUN_00306318  size=132

undefined4 FUN_00306318(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;

  if (*(int *)(param_1 + 0xd8) < 0x200) {
    iVar2 = *(int *)(param_1 + 0xe0);
    uVar3 = iVar2 + 0x10;
    if (uVar3 < 0x4001) {
      *(uint *)(param_1 + 0xe0) = uVar3;
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xdc) + iVar2);
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    uVar1 = DAT_0030639c;
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = 0;
      *puVar4 = uVar1;
      *(undefined1 *)((int)puVar4 + 5) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *param_2 = puVar4;
      *(undefined4 **)(*(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xd8) * 4) = puVar4;
      *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
      return 1;
    }
  }
  return 0;
}
