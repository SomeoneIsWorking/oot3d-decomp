// OoT3D decomp @ 002d3f2c  name=FUN_002d3f2c  size=348

undefined4
FUN_002d3f2c(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,float *param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;

  local_2c = DAT_002d4090;
  uVar1 = DAT_002d408c;
  iVar7 = param_2 + param_3 * 4;
  uVar3 = *(uint *)(iVar7 + 0x14);
  bVar9 = uVar3 < 0x18;
  if (bVar9) {
    uVar3 = *(uint *)(param_2 + 8);
  }
  if (bVar9 && uVar3 < 0x18) {
    iVar6 = *(int *)(param_2 + uVar3 * 4 + 0xf4);
    local_28 = param_5[2] + (param_5[3] - param_5[2]) * DAT_002d4088;
    local_24 = *param_5 + (param_5[1] - *param_5) * DAT_002d4088;
    local_20 = DAT_002d408c;
    *(float *)(iVar6 + 0x3c) = local_28;
    *(float *)(iVar6 + 0x40) = local_24;
    *(undefined4 *)(iVar6 + 0x44) = uVar1;
    local_34 = param_5[3] - param_5[2];
    local_30 = param_5[1] - *param_5;
    *(float *)(iVar6 + 0x48) = local_34;
    *(float *)(iVar6 + 0x4c) = local_30;
    *(undefined4 *)(iVar6 + 0x50) = local_2c;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar8 = param_4[3];
    *(undefined4 *)(iVar6 + 0xf0) = *param_4;
    *(undefined4 *)(iVar6 + 0xf4) = uVar4;
    *(undefined4 *)(iVar6 + 0xf8) = uVar5;
    *(undefined4 *)(iVar6 + 0xfc) = uVar8;
    FUN_003332b4(uVar1,uVar1,param_1,&local_64);
    *(undefined4 *)(iVar6 + 0x54) = local_64;
    *(undefined4 *)(iVar6 + 0x58) = uStack_60;
    *(undefined4 *)(iVar6 + 0x5c) = uStack_5c;
    *(undefined4 *)(iVar6 + 0x60) = uStack_58;
    *(undefined4 *)(iVar6 + 100) = uStack_54;
    *(undefined4 *)(iVar6 + 0x68) = local_50;
    *(undefined4 *)(iVar6 + 0x6c) = uStack_4c;
    *(undefined4 *)(iVar6 + 0x70) = uStack_48;
    *(undefined4 *)(iVar6 + 0x74) = uStack_44;
    *(undefined4 *)(iVar6 + 0x78) = uStack_40;
    *(undefined4 *)(iVar6 + 0x7c) = local_3c;
    *(undefined4 *)(iVar6 + 0x80) = uStack_38;
    *(undefined4 *)(iVar6 + 0x170) = 0;
    iVar2 = param_2 + param_3 * 0x60;
    *(int *)(iVar2 + *(int *)(iVar7 + 0x14) * 4 + 0x214) = iVar6;
    *(undefined4 *)(iVar2 + *(int *)(iVar7 + 0x14) * 4 + 0x4b4) = param_6;
    *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    FUN_0030fda8(param_2,param_3);
    return 1;
  }
  return 0;
}
