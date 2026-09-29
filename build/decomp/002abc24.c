// OoT3D decomp @ 002abc24  name=FUN_002abc24  size=656

void FUN_002abc24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;

  uVar6 = 0;
  FUN_003510b0(param_1,DAT_002abeb4);
  FUN_003532e8(param_1,0);
  uVar6 = FUN_00372f38(param_1,param_2,param_1 + 0x3c0,7,param_1 + 0x3c4,7,param_1 + 0x3c8,7,
                       param_1 + 0x3cc,7,param_1 + 0x3d0,7,param_1 + 0x3d4,7,param_1 + 0x3d8,7,
                       param_1 + 0x3dc,7,param_1 + 0x3e0,0x14,0,uVar6);
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3c0) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c0) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c4) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3c8) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3c8) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3cc) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3cc) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3d0) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3d0) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3d4) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3d4) + 0xc) + 0x10) = 1;
  uVar1 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3d8) + 0xc),uVar1);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3d8) + 0xc) + 0x10) = 1;
  uVar6 = FUN_00372f0c(uVar6,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x3dc) + 0xc),uVar6);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x3dc) + 0xc) + 0x10) = 1;
  uVar6 = FUN_00353fd4(param_1,param_2,0x12);
  uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar6);
  *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  FUN_00350eb8(param_2,param_1 + 0x1c0);
  FUN_00350d48(param_2,param_1 + 0x1c0,param_1,DAT_002abeb8,param_1 + 0x1e0);
  iVar3 = *(int *)(param_1 + 0x1dc);
  iVar5 = 3;
  uVar6 = *(undefined4 *)(iVar3 + 0x34);
  puVar2 = (undefined4 *)(iVar3 + -0x1c);
  puVar4 = (undefined4 *)(iVar3 + -0xc);
  do {
    uVar1 = puVar2[0x28];
    puVar4[0x14] = uVar6;
    uVar6 = puVar2[0x3c];
    iVar5 = iVar5 + -1;
    puVar4[0x28] = uVar1;
    puVar2 = puVar2 + 0x28;
    puVar4 = puVar4 + 0x28;
  } while (iVar5 != 0);
  *(undefined2 *)(param_1 + 0x1be) = 0;
  *(undefined2 *)(param_1 + 0x1bc) = 0;
  return;
}
