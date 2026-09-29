// OoT3D decomp @ 0018d61c  name=FUN_0018d61c  size=180

void FUN_0018d61c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_358 [48];
  undefined1 local_328 [784];

  iVar1 = DAT_0018d734;
  iVar6 = 8;
  puVar2 = auStack_358;
  puVar5 = (undefined4 *)(DAT_0018d734 + -0x30);
  *(undefined1 **)(DAT_0018d734 + 0xc) = local_328;
  do {
    uVar3 = *(undefined4 *)(iVar1 + -0x2c);
    uVar4 = *(undefined4 *)(iVar1 + -0x28);
    uVar7 = *(undefined4 *)(iVar1 + -0x24);
    uVar8 = *(undefined4 *)(iVar1 + -0x20);
    iVar6 = iVar6 + -1;
    *(undefined4 *)(puVar2 + 0x30) = *puVar5;
    *(undefined4 *)(puVar2 + 0x34) = uVar3;
    *(undefined4 *)(puVar2 + 0x38) = uVar4;
    *(undefined4 *)(puVar2 + 0x3c) = uVar7;
    *(undefined4 *)(puVar2 + 0x40) = uVar8;
    uVar3 = *(undefined4 *)(iVar1 + -0x18);
    uVar4 = *(undefined4 *)(iVar1 + -0x14);
    uVar7 = *(undefined4 *)(iVar1 + -0x10);
    uVar8 = *(undefined4 *)(iVar1 + -0xc);
    *(undefined4 *)(puVar2 + 0x44) = *(undefined4 *)(iVar1 + -0x1c);
    *(undefined4 *)(puVar2 + 0x48) = uVar3;
    *(undefined4 *)(puVar2 + 0x4c) = uVar4;
    *(undefined4 *)(puVar2 + 0x50) = uVar7;
    *(undefined4 *)(puVar2 + 0x54) = uVar8;
    uVar3 = *(undefined4 *)(iVar1 + -4);
    *(undefined4 *)(puVar2 + 0x58) = *(undefined4 *)(iVar1 + -8);
    *(undefined4 *)(puVar2 + 0x5c) = uVar3;
    uVar3 = *(undefined4 *)(iVar1 + -0x2c);
    uVar4 = *(undefined4 *)(iVar1 + -0x28);
    uVar7 = *(undefined4 *)(iVar1 + -0x24);
    uVar8 = *(undefined4 *)(iVar1 + -0x20);
    uVar9 = *(undefined4 *)(iVar1 + -0x1c);
    *(undefined4 *)(puVar2 + 0x60) = *puVar5;
    *(undefined4 *)(puVar2 + 100) = uVar3;
    *(undefined4 *)(puVar2 + 0x68) = uVar4;
    *(undefined4 *)(puVar2 + 0x6c) = uVar7;
    *(undefined4 *)(puVar2 + 0x70) = uVar8;
    *(undefined4 *)(puVar2 + 0x74) = uVar9;
    uVar3 = *(undefined4 *)(iVar1 + -0x14);
    uVar4 = *(undefined4 *)(iVar1 + -0x10);
    uVar7 = *(undefined4 *)(iVar1 + -0xc);
    uVar8 = *(undefined4 *)(iVar1 + -8);
    uVar9 = *(undefined4 *)(iVar1 + -4);
    *(undefined4 *)(puVar2 + 0x78) = *(undefined4 *)(iVar1 + -0x18);
    *(undefined4 *)(puVar2 + 0x7c) = uVar3;
    *(undefined4 *)(puVar2 + 0x80) = uVar4;
    *(undefined4 *)(puVar2 + 0x84) = uVar7;
    *(undefined4 *)(puVar2 + 0x88) = uVar8;
    *(undefined4 *)(puVar2 + 0x8c) = uVar9;
    puVar2 = puVar2 + 0x60;
  } while (iVar6 != 0);
  FUN_00350eb8(param_2,param_1 + 0x1a4);
  FUN_001a9dc8(param_2,param_1 + 0x1a4,param_1,DAT_0018d734);
  *(undefined1 *)(param_1 + 0x1c4) = 0x10;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
