// OoT3D decomp @ 00337200  name=FUN_00337200  size=408

void FUN_00337200(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint in_fpscr;

  *(int *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(**(int **)(param_3 + 0x18) + 8);
  puVar1 = DAT_00337398;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00337398), iVar4 != 0)) {
    FUN_0036788c(DAT_0033739c);
  }
  piVar7 = *(int **)(DAT_0033739c + 0x17c);
  piVar7[2] = param_4;
  uVar5 = (**(code **)(*piVar7 + 8))(piVar7,*(undefined4 *)(param_1 + 4),1);
  uVar2 = DAT_003373a8;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  piVar7[2] = 0;
  iVar4 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar4 + 0x40) = uVar2;
  *(undefined4 *)(iVar4 + 0x44) = uVar2;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  FUN_0030fd98(DAT_003373ac,*(undefined4 *)(param_1 + 0xc));
  fVar3 = DAT_003373b0;
  iVar4 = *(int *)(param_1 + 0xc);
  *(float *)(iVar4 + 0x24) = DAT_003373b0;
  *(float *)(iVar4 + 0x28) = fVar3;
  *(float *)(iVar4 + 0x2c) = fVar3;
  puVar6 = (undefined4 *)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = DAT_003373b4;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 **)(param_1 + 0x14) = puVar6;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_1;
  FUN_00347774(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x34) = param_5;
  piVar7 = (int *)0x0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar7 = (int *)FUN_0034807c(*(int *)(param_1 + 8),param_5);
  }
  if (piVar7 == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(*piVar7 + *(int *)(*piVar7 + 0x14) + 0x10) + -1;
  }
  uVar5 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x38) = fVar3 - *(float *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(float *)(param_1 + 0x44) = fVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_0030fa1c(param_1,param_5);
  return;
}
