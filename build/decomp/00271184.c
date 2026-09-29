// OoT3D decomp @ 00271184  name=FUN_00271184  size=772

void FUN_00271184(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float extraout_s0;
  float fVar6;
  float fVar7;
  float extraout_s1;
  float fVar8;
  float extraout_s2;
  undefined1 auStack_7c [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;

  iVar4 = *(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54);
  local_3c = *(float *)(iVar4 + 0x8c);
  local_38 = *(float *)(iVar4 + 0x90);
  local_34 = *(float *)(iVar4 + 0x94);
  FUN_0032e648(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar6 = (float)FUN_0032c7a8(DAT_0027148c,DAT_00271488,param_2);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a4),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00271490 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * fVar8 * DAT_00271494;
  if ((int)fVar7 < 0x42000000) {
    fVar8 = (float)FUN_002cfca0((int)(short)(int)(fVar7 * DAT_00271498));
    fVar6 = fVar8 * fVar6;
  }
  fVar8 = DAT_002714ac;
  uVar1 = DAT_002714a8;
  if ((int)fVar7 < DAT_0027149c) {
    uVar5 = 0xff;
  }
  else {
    uVar5 = VectorFloatToUnsigned((DAT_002714a0 - fVar7) * DAT_002714a4,3);
    uVar5 = uVar5 & 0xff;
  }
  local_78 = local_3c + extraout_s0;
  local_70 = local_34 + extraout_s2;
  local_74 = local_38 + extraout_s1;
  local_6c = DAT_002714b0 * 1.0;
  local_5c = DAT_002714b0 * 0.0;
  local_4c = DAT_002714b0 * 0.0;
  local_68 = DAT_002714b0 * 0.0;
  local_58 = DAT_002714b0 * 1.0;
  local_48 = DAT_002714b0 * 0.0;
  local_64 = DAT_002714b0 * 0.0;
  local_54 = DAT_002714b0 * 0.0;
  local_44 = DAT_002714b0 * 1.0;
  local_60 = local_78;
  local_50 = local_74;
  local_40 = local_70;
  FUN_00371fac(&local_6c,param_2 + 0x2fc);
  local_70 = -fVar6;
  local_78 = fVar8;
  local_74 = fVar8;
  FUN_00372070(&local_6c,&local_6c,&local_78);
  *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1a8),&local_6c);
  iVar4 = *(int *)(param_1 + 0x1a8);
  *(float *)(iVar4 + 0x24) = local_3c + extraout_s0;
  *(float *)(iVar4 + 0x28) = local_38 + extraout_s1;
  *(float *)(iVar4 + 0x2c) = local_34 + extraout_s2;
  *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xad) = 1;
  iVar2 = FUN_003695f8();
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0xc);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
  }
  else {
    *(float *)(iVar3 + 0xc) = fVar8;
  }
  fVar6 = DAT_002714b4;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x1ac) + 8) + 8)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
      FUN_00333abc(iVar3,iVar4,auStack_7c);
      local_70 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      local_70 = local_70 * fVar6;
      FUN_00333a38(iVar3,iVar4,auStack_7c);
      iVar2 = iVar4 + 1;
      *(undefined1 *)(*(int *)(iVar3 + 4) + iVar4 * 0x124) = 1;
      iVar4 = iVar2;
    } while (iVar2 < *(int *)(**(int **)(*(int *)(param_1 + 0x1ac) + 8) + 8));
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1a8),0);
  return;
}
