// OoT3D decomp @ 00422524  name=FUN_00422524  size=48

void FUN_00422524(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x458) = *param_2;
  *(undefined4 *)(param_1 + 0x45c) = uVar1;
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x468) = param_2[4];
  *(undefined4 *)(param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x470) = uVar2;
  *(undefined4 *)(param_1 + 0x474) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x478) = param_2[8];
  *(undefined4 *)(param_1 + 0x47c) = uVar1;
  *(undefined4 *)(param_1 + 0x480) = uVar2;
  *(undefined4 *)(param_1 + 0x484) = uVar3;
  return;
}
