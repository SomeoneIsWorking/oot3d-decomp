// OoT3D decomp @ 002c0804  name=FUN_002c0804  size=272

void FUN_002c0804(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_002c0914;
  *(undefined *)(param_1 + 0x48) = 1;
  puVar2 = DAT_002c091c;
  uVar5 = DAT_002c0918;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(puVar1), iVar3 != 0)) {
    *puVar2 = uVar5;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
  }
  uVar4 = puVar2[1];
  uVar6 = puVar2[2];
  *(undefined4 *)(param_1 + 4) = *puVar2;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002c0914), iVar3 != 0)) {
    *puVar2 = uVar5;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
  }
  uVar4 = puVar2[1];
  uVar6 = puVar2[2];
  *(undefined4 *)(param_1 + 0x10) = *puVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002c0914), iVar3 != 0)) {
    *puVar2 = uVar5;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
  }
  uVar5 = puVar2[1];
  uVar4 = puVar2[2];
  *(undefined4 *)(param_1 + 0x34) = *puVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_00301a30(param_1);
  return;
}

