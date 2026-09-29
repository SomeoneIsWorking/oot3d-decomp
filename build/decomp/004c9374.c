// OoT3D decomp @ 004c9374  name=FUN_004c9374  size=420

undefined4 FUN_004c9374(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;

  if (((*(char *)(DAT_004c9518 + param_2) != '\0') || (*(char *)(param_1 + 0x1a6) == '\0')) ||
     ((**(uint **)(param_1 + 0x29c8) & 0x100) == 0)) {
    return 0;
  }
  iVar3 = FUN_0035d2d4(param_1);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x1710);
    bVar7 = (uVar4 & DAT_004c951c) != 0;
    if (!bVar7) {
      uVar4 = *(uint *)(param_1 + 0x16f8);
    }
    if (bVar7 || uVar4 != 0) {
      return 0;
    }
  }
  FUN_0034bbfc(param_1);
  FUN_0036b02c(param_2,param_1);
  iVar3 = FUN_0036055c(param_2,param_1,DAT_004c9520,0);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x400000;
    iVar5 = FUN_0035d2d4(param_1);
    iVar3 = DAT_004c9524;
    if (iVar5 == 0) {
      FUN_0033f860(param_1);
      iVar3 = *(int *)(DAT_004c9528 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 600);
    }
    uVar2 = DAT_004c9530;
    uVar1 = DAT_004c952c;
    if (*(int *)(param_1 + 0x284) != iVar3) {
      iVar5 = FUN_003518cc(param_1);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x2258) = uVar2;
        *(undefined4 *)(param_1 + 0x2260) = uVar2;
        *(undefined4 *)(param_1 + 0x225c) = uVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0x2258) = uVar1;
      }
      *(undefined2 *)(param_1 + 0x175a) = 0;
      *(undefined2 *)(param_1 + 0x1758) = 0;
      *(undefined2 *)(param_1 + 0x1756) = 0;
    }
    uVar6 = FUN_003603c0(param_1 + 0x254,iVar3);
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(uVar1,uVar6,uVar6,uVar2,param_1 + 0x254,param_2,iVar3,2);
    iVar3 = FUN_0035d2d4(param_1);
    if (iVar3 != 0) {
      FUN_003603f8(param_2,param_1,4);
    }
    FUN_0036f59c(param_1,DAT_004c9534);
  }
  return 1;
}
