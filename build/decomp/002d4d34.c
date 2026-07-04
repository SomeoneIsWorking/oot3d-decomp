// OoT3D decomp @ 002d4d34  name=FUN_002d4d34  size=460

void FUN_002d4d34(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  puVar1 = UNK_002d4f00;
  if (((*UNK_002d4f00 & 1) == 0) && (iVar2 = FUN_003679b4(UNK_002d4f00), iVar2 != 0)) {
    FUN_0036788c(UNK_002d4f04);
  }
  *(undefined4 *)*param_1 = *(undefined4 *)(UNK_002d4f04 + 0x174);
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003679b4(UNK_002d4f00), iVar2 != 0)) {
    FUN_0036788c(UNK_002d4f04);
  }
  uVar7 = 0;
  piVar8 = *(int **)(UNK_002d4f04 + 0x17c);
  piVar8[2] = *param_1;
  if (param_5 != 0) {
    do {
      iVar2 = FUN_00358ef8(param_2,param_4 + uVar7);
      param_1[uVar7 + param_3 * 4 + 0x65] = *(int *)(*(int *)(iVar2 + 0xc) + 0x10);
      if (uVar7 == 0) {
        param_1[param_3 + 9] = iVar2;
        iVar3 = (**(code **)(*piVar8 + 8))(piVar8,iVar2,1);
        param_1[param_3 + 0x15] = iVar3;
        FUN_0047d548(iVar3,2);
        puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar2 + 4) + 0xc) + 0x10);
        piVar6 = (int *)puVar4[1];
        param_1[param_3 + 0x35] =
             (uint)*(ushort *)((uint)*(ushort *)(piVar6[1] + *(short *)*puVar4 * 2) + *piVar6 + 100)
        ;
        piVar6 = *(int **)(iVar2 + 0xc);
        param_1[param_3 + 0x41] = *(int *)(*piVar6 + 0x1c);
        iVar2 = FUN_0035010c();
        param_1[param_3 + 0x29] = iVar2;
        FUN_0034338c(iVar2,piVar6[4],param_1[param_3 + 0x41]);
      }
      else {
        FUN_00358ef8(param_2,param_4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_5);
  }
  uVar5 = FUN_00372f0c(param_2,param_6);
  FUN_00372d94(*(undefined4 *)(param_1[param_3 + 0x15] + 0xc),uVar5);
  *(undefined1 *)(*(int *)(param_1[param_3 + 0x15] + 0xc) + 0x10) = 1;
  piVar8[2] = 0;
  return;
}

