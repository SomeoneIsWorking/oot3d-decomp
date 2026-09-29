// OoT3D decomp @ 0025e6e8  name=FUN_0025e6e8  size=492

void FUN_0025e6e8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_fpscr;
  undefined4 local_30;

  FUN_003510b0(param_1,DAT_0025e8d4);
  FUN_003532e8(param_1,1);
  *(undefined4 *)(param_1 + 0xfc) = DAT_0025e8d8;
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x284,7,param_1 + 0x288,7,param_1 + 0x28c,7,
                       param_1 + 0x290,7,param_1 + 0x294,0x17,param_1 + 0x298,0x13,0);
  piVar1 = DAT_0025e8e0;
  uVar5 = DAT_0025e8dc;
  iVar7 = 0;
  do {
    iVar8 = param_1 + iVar7 * 4;
    uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x284) + 0xc);
    uVar3 = FUN_00372f0c(uVar2,0);
    FUN_00372d94(uVar9,uVar3);
    *(undefined1 *)(*(int *)(*(int *)(iVar8 + 0x284) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x284) + 0xc) + 0xc) = uVar5;
    iVar6 = *(int *)(*(int *)(iVar8 + 0x284) + 0xc);
    iVar4 = *piVar1;
    iVar8 = iVar4;
    if (iVar4 == 0) {
      iVar8 = iVar6;
    }
    uVar3 = VectorSignedToFloat((int)(iVar7 * 0x3c + ((uint)(iVar7 * 0x3c >> 0x1f) >> 0x1e)) >> 2,
                                (byte)(in_fpscr >> 0x15) & 3);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar6 + 8) = uVar3;
      FUN_003586ec(iVar8);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  if (*(short *)(param_1 + 0x1c) == 0) {
    local_30 = FUN_00353fd4(param_1,param_2,0x13);
  }
  else {
    local_30 = FUN_00353fd4(param_1,param_2,0x11);
  }
  uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_30);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  FUN_00350eb8(param_2,param_1 + 0x1c4);
  FUN_00350d48(param_2,param_1 + 0x1c4,param_1,DAT_0025e8e4,param_1 + 0x1e4);
  *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x44) =
       *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x34);
  *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x94) =
       *(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0x84);
  uVar5 = DAT_0025e8e8;
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar5 = DAT_0025e8ec;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  return;
}
