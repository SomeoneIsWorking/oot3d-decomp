// OoT3D decomp @ 00209588  name=FUN_00209588  size=76

void FUN_00209588(undefined4 param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (0x11 < param_2 - 0x13U) {
    return;
  }
  param_4 = param_4 + (param_2 + -0x13) * 0x30;
  if ((undefined4 *)(param_4 + 0x43c) == param_3) {
    return;
  }
  uVar1 = *(undefined4 *)(param_4 + 0x440);
  uVar2 = *(undefined4 *)(param_4 + 0x444);
  uVar3 = *(undefined4 *)(param_4 + 0x448);
  uVar4 = *(undefined4 *)(param_4 + 0x44c);
  uVar5 = *(undefined4 *)(param_4 + 0x450);
  uVar6 = *(undefined4 *)(param_4 + 0x454);
  uVar7 = *(undefined4 *)(param_4 + 0x458);
  uVar8 = *(undefined4 *)(param_4 + 0x45c);
  uVar9 = *(undefined4 *)(param_4 + 0x460);
  uVar10 = *(undefined4 *)(param_4 + 0x464);
  uVar11 = *(undefined4 *)(param_4 + 0x468);
  *param_3 = *(undefined4 *)(param_4 + 0x43c);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  param_3[6] = uVar6;
  param_3[7] = uVar7;
  param_3[8] = uVar8;
  param_3[9] = uVar9;
  param_3[10] = uVar10;
  param_3[0xb] = uVar11;
  return;
}

