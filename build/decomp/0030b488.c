// OoT3D decomp @ 0030b488  name=FUN_0030b488  size=36

void FUN_0030b488(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  uVar1 = FUN_0030f0ec();
  iVar2 = FUN_0030f0c0(uVar1,param_1);
  piVar4 = *(int **)(iVar2 + 4);
  uVar1 = extraout_r2;
  uVar3 = extraout_r3;
  if (piVar4 != (int *)(iVar2 + 4)) {
    do {
      piVar5 = (int *)*piVar4;
      FUN_003102dc(piVar4 + -0x37,param_2,uVar1,uVar3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
      piVar4 = piVar5;
      uVar1 = extraout_r2_00;
      uVar3 = extraout_r3_00;
    } while (piVar5 != (int *)(iVar2 + 4));
  }
  return;
}
