// OoT3D decomp @ 00350eb8  name=FUN_00350eb8  size=56

undefined4 FUN_00350eb8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  puVar1 = DAT_00350ef0;
  uVar2 = DAT_00350ef0[1];
  uVar3 = DAT_00350ef0[2];
  uVar4 = DAT_00350ef0[3];
  puVar5 = DAT_00350ef0 + 4;
  *param_2 = *DAT_00350ef0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar2 = puVar1[5];
  param_2[4] = *puVar5;
  param_2[5] = uVar2;
  param_2[6] = 0;
  param_2[7] = 0;
  return 1;
}
