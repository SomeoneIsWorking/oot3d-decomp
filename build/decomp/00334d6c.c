// OoT3D decomp @ 00334d6c  name=FUN_00334d6c  size=244

void FUN_00334d6c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  uVar4 = (uint)*(byte *)(param_8 + 0x2c9);
  iVar6 = *(int *)(param_8 + 0x2cc) + uVar4 * 0x34;
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  uVar8 = *(undefined4 *)(iVar6 + 0x1c);
  uVar9 = *(undefined4 *)(iVar6 + 0x2c);
  if (((*DAT_00334e60 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_00334e60), puVar3 = DAT_00334e6c, uVar2 = DAT_00334e68,
     uVar1 = DAT_00334e64, param_1 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
     param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
     iVar5 != 0)) {
    *DAT_00334e6c = DAT_00334e64;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
    param_1 = uVar2;
    param_2 = uVar2;
    param_3 = uVar2;
    param_4 = uVar2;
    param_5 = uVar1;
    param_6 = uVar2;
    param_7 = uVar2;
  }
  FUN_00372224(param_1,param_2,param_3,param_4,param_5,param_6,param_7,iVar6,DAT_00334e6c);
  *(undefined4 *)(*(int *)(param_8 + 0x2cc) + uVar4 * 0x34 + 0xc) = uVar7;
  *(undefined4 *)(*(int *)(param_8 + 0x2cc) + uVar4 * 0x34 + 0x1c) = uVar8;
  *(undefined4 *)(*(int *)(param_8 + 0x2cc) + uVar4 * 0x34 + 0x2c) = uVar9;
  return;
}
