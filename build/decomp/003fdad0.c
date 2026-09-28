// OoT3D decomp @ 003fdad0  name=FUN_003fdad0  size=420

undefined4
FUN_003fdad0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,float *param_5,
            undefined4 param_6,undefined4 *param_7,undefined4 *param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;

  uStack_34 = uRam003fdc7c;
  uVar3 = uRam003fdc78;
  iVar6 = param_2 + param_3 * 4;
  uVar2 = *(uint *)(iVar6 + 0x14);
  bVar10 = uVar2 < 0x18;
  if (bVar10) {
    uVar2 = *(uint *)(param_2 + 0x10);
  }
  if (bVar10 && uVar2 < 0x18) {
    iVar5 = *(int *)(param_2 + uVar2 * 4 + 0x1b4);
    fStack_30 = param_5[2] + (param_5[3] - param_5[2]) * fRam003fdc74;
    fStack_2c = *param_5 + (param_5[1] - *param_5) * fRam003fdc74;
    uStack_28 = uRam003fdc78;
    *(float *)(iVar5 + 0x3c) = fStack_30;
    *(float *)(iVar5 + 0x40) = fStack_2c;
    *(undefined4 *)(iVar5 + 0x44) = uVar3;
    fStack_3c = param_5[3] - param_5[2];
    fStack_38 = param_5[1] - *param_5;
    *(float *)(iVar5 + 0x48) = fStack_3c;
    *(float *)(iVar5 + 0x4c) = fStack_38;
    *(undefined4 *)(iVar5 + 0x50) = uStack_34;
    uVar4 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    *(undefined4 *)(iVar5 + 0xf0) = *param_4;
    *(undefined4 *)(iVar5 + 0xf4) = uVar4;
    *(undefined4 *)(iVar5 + 0xf8) = uVar7;
    *(undefined4 *)(iVar5 + 0xfc) = uVar8;
    func_0x003332b4(uVar3,uVar3,param_1,&uStack_6c);
    *(undefined4 *)(iVar5 + 0x54) = uStack_6c;
    *(undefined4 *)(iVar5 + 0x58) = uStack_68;
    *(undefined4 *)(iVar5 + 0x5c) = uStack_64;
    *(undefined4 *)(iVar5 + 0x60) = uStack_60;
    *(undefined4 *)(iVar5 + 100) = uStack_5c;
    *(undefined4 *)(iVar5 + 0x68) = uStack_58;
    *(undefined4 *)(iVar5 + 0x6c) = uStack_54;
    *(undefined4 *)(iVar5 + 0x70) = uStack_50;
    *(undefined4 *)(iVar5 + 0x74) = uStack_4c;
    *(undefined4 *)(iVar5 + 0x78) = uStack_48;
    *(undefined4 *)(iVar5 + 0x7c) = uStack_44;
    *(undefined4 *)(iVar5 + 0x80) = uStack_40;
    func_0x00348a64(*(undefined4 *)(param_2 + *(int *)(param_2 + 0x10) * 4 + 0x94),0,param_6,
                    param_7[1],*param_7,param_7[2],param_7[3]);
    uVar3 = param_8[1];
    uVar4 = param_8[2];
    uVar7 = param_8[3];
    uVar8 = param_8[4];
    uVar9 = param_8[5];
    *(undefined4 *)(iVar5 + 0x110) = *param_8;
    *(undefined4 *)(iVar5 + 0x114) = uVar3;
    *(undefined4 *)(iVar5 + 0x118) = uVar4;
    *(undefined4 *)(iVar5 + 0x11c) = uVar7;
    *(undefined4 *)(iVar5 + 0x120) = uVar8;
    *(undefined4 *)(iVar5 + 0x124) = uVar9;
    uVar3 = param_8[7];
    uVar4 = param_8[8];
    uVar7 = param_8[9];
    uVar8 = param_8[10];
    uVar9 = param_8[0xb];
    *(undefined4 *)(iVar5 + 0x128) = param_8[6];
    *(undefined4 *)(iVar5 + 300) = uVar3;
    *(undefined4 *)(iVar5 + 0x130) = uVar4;
    *(undefined4 *)(iVar5 + 0x134) = uVar7;
    *(undefined4 *)(iVar5 + 0x138) = uVar8;
    *(undefined4 *)(iVar5 + 0x13c) = uVar9;
    *(undefined4 *)(iVar5 + 0x170) = 0;
    iVar1 = param_2 + param_3 * 0x60;
    *(int *)(iVar1 + *(int *)(iVar6 + 0x14) * 4 + 0x214) = iVar5;
    *(undefined4 *)(iVar1 + *(int *)(iVar6 + 0x14) * 4 + 0x4b4) = param_9;
    *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    func_0x0030fda8(param_2,param_3);
    return 1;
  }
  return 0;
}
