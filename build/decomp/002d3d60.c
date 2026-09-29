// OoT3D decomp @ 002d3d60  name=FUN_002d3d60  size=448

undefined4
FUN_002d3d60(float param_1,undefined4 param_2,int param_3,int param_4,undefined4 *param_5,
            float *param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 param_10)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;

  fVar1 = DAT_002d3f20;
  iVar6 = param_3 + param_4 * 4;
  uVar3 = *(uint *)(iVar6 + 0x14);
  bVar11 = uVar3 < 0x18;
  if (bVar11) {
    uVar3 = *(uint *)(param_3 + 0xc);
  }
  if (!bVar11 || 0x17 < uVar3) {
    return 0;
  }
  iVar5 = *(int *)(param_3 + uVar3 * 4 + 0x154);
  if (param_1 == DAT_002d3f20) {
    uVar3 = *(uint *)(iVar5 + 0x178) & 0xffffffef;
  }
  else {
    uVar3 = *(uint *)(iVar5 + 0x178) | 0x10;
  }
  *(uint *)(iVar5 + 0x178) = uVar3;
  local_34 = DAT_002d3f28;
  local_30 = param_6[2] + (param_6[3] - param_6[2]) * DAT_002d3f24;
  local_2c = *param_6 + (param_6[1] - *param_6) * DAT_002d3f24;
  *(float *)(iVar5 + 0x3c) = local_30;
  *(float *)(iVar5 + 0x40) = local_2c;
  *(float *)(iVar5 + 0x44) = param_1;
  local_3c = param_6[3] - param_6[2];
  local_38 = param_6[1] - *param_6;
  *(float *)(iVar5 + 0x48) = local_3c;
  *(float *)(iVar5 + 0x4c) = local_38;
  *(undefined4 *)(iVar5 + 0x50) = local_34;
  uVar4 = param_5[1];
  uVar7 = param_5[2];
  uVar9 = param_5[3];
  *(undefined4 *)(iVar5 + 0xf0) = *param_5;
  *(undefined4 *)(iVar5 + 0xf4) = uVar4;
  *(undefined4 *)(iVar5 + 0xf8) = uVar7;
  *(undefined4 *)(iVar5 + 0xfc) = uVar9;
  local_28 = param_1;
  FUN_003332b4(fVar1,fVar1,param_2,&local_6c);
  *(undefined4 *)(iVar5 + 0x54) = local_6c;
  *(undefined4 *)(iVar5 + 0x58) = uStack_68;
  *(undefined4 *)(iVar5 + 0x5c) = uStack_64;
  *(undefined4 *)(iVar5 + 0x60) = uStack_60;
  *(undefined4 *)(iVar5 + 100) = local_5c;
  *(undefined4 *)(iVar5 + 0x68) = uStack_58;
  *(undefined4 *)(iVar5 + 0x6c) = uStack_54;
  *(undefined4 *)(iVar5 + 0x70) = uStack_50;
  *(undefined4 *)(iVar5 + 0x74) = local_4c;
  *(undefined4 *)(iVar5 + 0x78) = uStack_48;
  *(undefined4 *)(iVar5 + 0x7c) = uStack_44;
  *(undefined4 *)(iVar5 + 0x80) = uStack_40;
  FUN_00348a64(*(undefined4 *)(param_3 + *(int *)(param_3 + 0xc) * 4 + 0x34),0,param_7,param_8[1],
               *param_8,param_8[2],param_8[3]);
  uVar4 = param_9[1];
  uVar7 = param_9[2];
  uVar9 = param_9[3];
  uVar8 = param_9[4];
  uVar10 = param_9[5];
  *(undefined4 *)(iVar5 + 0x110) = *param_9;
  *(undefined4 *)(iVar5 + 0x114) = uVar4;
  *(undefined4 *)(iVar5 + 0x118) = uVar7;
  *(undefined4 *)(iVar5 + 0x11c) = uVar9;
  *(undefined4 *)(iVar5 + 0x120) = uVar8;
  *(undefined4 *)(iVar5 + 0x124) = uVar10;
  uVar4 = param_9[7];
  uVar7 = param_9[8];
  uVar9 = param_9[9];
  uVar8 = param_9[10];
  uVar10 = param_9[0xb];
  *(undefined4 *)(iVar5 + 0x128) = param_9[6];
  *(undefined4 *)(iVar5 + 300) = uVar4;
  *(undefined4 *)(iVar5 + 0x130) = uVar7;
  *(undefined4 *)(iVar5 + 0x134) = uVar9;
  *(undefined4 *)(iVar5 + 0x138) = uVar8;
  *(undefined4 *)(iVar5 + 0x13c) = uVar10;
  *(undefined4 *)(iVar5 + 0x170) = 0;
  iVar2 = param_3 + param_4 * 0x60;
  *(int *)(iVar2 + *(int *)(iVar6 + 0x14) * 4 + 0x214) = iVar5;
  *(undefined4 *)(iVar2 + *(int *)(iVar6 + 0x14) * 4 + 0x4b4) = param_10;
  *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  FUN_0030fda8(param_3,param_4);
  return 1;
}
