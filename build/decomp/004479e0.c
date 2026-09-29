// OoT3D decomp @ 004479e0  name=FUN_004479e0  size=156

void FUN_004479e0(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;

  piVar2 = DAT_00447a80;
  iVar1 = DAT_00447a7c;
  *(undefined1 *)(DAT_00447a7c + 0x13) = 0;
  puVar6 = (undefined4 *)*piVar2;
  uVar5 = (int)puVar6 - *(int *)(*(int *)(iVar1 + 0x9c) + 4);
  *(uint *)(*(int *)(iVar1 + 0x9c) + 0xc) = uVar5;
  uVar3 = DAT_00447a88;
  bVar7 = (uVar5 & 8) != 0;
  puVar4 = (undefined4 *)0x0;
  if (bVar7) {
    puVar4 = (undefined4 *)*DAT_00447a84;
  }
  if (bVar7 && puVar6 < puVar4) {
    *puVar6 = 0;
    puVar6[1] = uVar3;
    *piVar2 = (int)(puVar6 + 2);
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x168);
  *param_2 = (*piVar2 - *(int *)(*(int *)(iVar1 + 0x9c) + 4)) - *(int *)(iVar1 + 0x168);
  *param_3 = *(undefined4 *)(iVar1 + 0x16c);
  *param_4 = *(int *)(*(int *)(iVar1 + 0x9c) + 0x20) - *(int *)(iVar1 + 0x16c);
  return;
}
