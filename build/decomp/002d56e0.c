// OoT3D decomp @ 002d56e0  name=FUN_002d56e0  size=660

void FUN_002d56e0(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uStack_38;
  
  puVar2 = UNK_002d5974;
  param_1[0x75] = param_3;
  param_1[0x77] = param_4;
  param_1[0x78] = param_5;
  param_1[0x76] = (param_3 - 1 >> 2) + 1;
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(puVar2), iVar3 != 0)) {
    FUN_0036788c(UNK_002d5978);
  }
  *(undefined4 *)*param_1 = *(undefined4 *)(UNK_002d5978 + 0x174);
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(UNK_002d5974), iVar3 != 0)) {
    FUN_0036788c(UNK_002d5978);
  }
  iVar3 = 0;
  piVar11 = *(int **)(UNK_002d5978 + 0x17c);
  piVar11[2] = *param_1;
  uStack_38 = 0;
  if (param_1[0x77] != 0) {
    do {
      uVar9 = 0;
      if (param_3 != 0) {
        do {
          iVar4 = FUN_00358ef8(param_2,iVar3);
          param_1[uStack_38 * 0x10 + uVar9 + 0x45] = *(int *)(*(int *)(iVar4 + 0xc) + 0x10);
          if ((uVar9 & 3) == 0) {
            iVar1 = (int)(uVar9 + ((uint)((int)uVar9 >> 0x1f) >> 0x1e)) >> 2;
            param_1[uStack_38 * 4 + iVar1 + 1] = iVar4;
            iVar5 = (**(code **)(*piVar11 + 8))(piVar11,iVar4,1);
            param_1[uStack_38 * 4 + iVar1 + 0xd] = iVar5;
            FUN_0047d548(iVar5,2);
            puVar6 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + 0xc) + 0x10);
            piVar8 = (int *)puVar6[1];
            param_1[uStack_38 * 4 + iVar1 + 0x2d] =
                 (uint)*(ushort *)
                        ((uint)*(ushort *)(piVar8[1] + *(short *)*puVar6 * 2) + *piVar8 + 100);
            piVar8 = *(int **)(iVar4 + 0xc);
            param_1[uStack_38 * 4 + iVar1 + 0x39] = *(int *)(*piVar8 + 0x1c);
            iVar4 = FUN_0035010c();
            param_1[uStack_38 * 4 + iVar1 + 0x21] = iVar4;
            FUN_0034338c(iVar4,piVar8[4],param_1[uStack_38 * 4 + iVar1 + 0x39]);
          }
          else {
            FUN_00358ef8(param_2,iVar3 - (int)uVar9 % 4);
          }
          uVar9 = uVar9 + 1;
          iVar3 = iVar3 + 1;
        } while (uVar9 < param_3);
      }
      uStack_38 = uStack_38 + 1;
    } while (uStack_38 < (uint)param_1[0x77]);
  }
  if ((1 < (uint)param_1[0x77]) && (uVar9 = 0, param_1[0x76] != 0)) {
    do {
      uVar10 = *(undefined4 *)(param_1[uVar9 + 0x11] + 0xc);
      uVar7 = FUN_00372f0c(param_2,uVar9);
      FUN_00372d94(uVar10,uVar7);
      iVar3 = uVar9 + 0x11;
      uVar9 = uVar9 + 1;
      *(undefined1 *)(*(int *)(param_1[iVar3] + 0xc) + 0x10) = 1;
    } while (uVar9 < (uint)param_1[0x76]);
  }
  piVar11[2] = 0;
  return;
}

