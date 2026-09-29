// OoT3D decomp @ 004a17e8  name=FUN_004a17e8  size=204

undefined4 FUN_004a17e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_r1;
  undefined4 *puVar6;
  bool bVar7;

  uVar4 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x38);
    bVar7 = *(int *)(param_1 + 0x28) != 0;
    iVar1 = 0;
    if (bVar7) {
      iVar1 = *(int *)(param_1 + 0x18);
      param_2 = *(int *)(param_1 + 0x20);
    }
    if (!bVar7 || iVar1 == param_2) {
      FUN_002beafc(param_1 + 4);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar6;
      puVar2[1] = puVar6[1];
      piVar5 = (int *)puVar6[2];
      puVar2[2] = piVar5;
      *piVar5 = *piVar5 + 1;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0xc;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xc;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    FUN_002bea70();
    bVar7 = *(int *)(param_1 + 0x58) != 0;
    iVar3 = 0;
    iVar1 = extraout_r1;
    if (bVar7) {
      iVar3 = *(int *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x40);
    }
    if (!bVar7 || iVar3 == iVar1) {
      FUN_002be9c8(param_1 + 0x34);
    }
    uVar4 = 1;
  }
  return uVar4;
}
