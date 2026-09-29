// OoT3D decomp @ 00353dd0  name=FUN_00353dd0  size=152

undefined4 FUN_00353dd0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;

  uVar2 = DAT_00353e68[1];
  uVar3 = DAT_00353e68[2];
  uVar4 = DAT_00353e68[3];
  uVar5 = DAT_00353e68[4];
  uVar6 = DAT_00353e68[5];
  *param_2 = *DAT_00353e68;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar5;
  param_2[5] = uVar6;
  puVar1 = DAT_00353e6c;
  uVar2 = DAT_00353e6c[1];
  uVar3 = DAT_00353e6c[2];
  uVar4 = DAT_00353e6c[3];
  puVar7 = DAT_00353e6c + 4;
  param_2[6] = *DAT_00353e6c;
  param_2[7] = uVar2;
  param_2[8] = uVar3;
  param_2[9] = uVar4;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  uVar4 = puVar1[7];
  param_2[10] = *puVar7;
  param_2[0xb] = uVar2;
  param_2[0xc] = uVar3;
  param_2[0xd] = uVar4;
  uVar2 = puVar1[9];
  param_2[0xe] = puVar1[8];
  param_2[0xf] = uVar2;
  uVar2 = *(undefined4 *)(DAT_00353e70 + 0x14);
  param_2[7] = *(undefined4 *)(DAT_00353e70 + 0x18);
  puVar1 = DAT_00353e74;
  param_2[6] = uVar2;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_2[8] = *puVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return 1;
}
