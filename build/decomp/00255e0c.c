// OoT3D decomp @ 00255e0c  name=FUN_00255e0c  size=788

void FUN_00255e0c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float extraout_s0;
  float extraout_s1;
  float fVar5;
  float extraout_s2;
  float fVar6;
  float fVar7;
  undefined1 auStack_80 [4];
  float local_7c;
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

  iVar3 = *(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54);
  local_40 = *(float *)(iVar3 + 0x8c);
  local_3c = *(float *)(iVar3 + 0x90);
  local_38 = *(float *)(iVar3 + 0x94);
  FUN_0032e648(*(undefined4 *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54));
  fVar1 = DAT_00256124;
  fVar6 = *(float *)(param_2 + 0x198);
  fVar5 = DAT_0025612c;
  if ((DAT_00256128 <= (int)fVar6) && (fVar5 = fVar6, DAT_00256130 < (int)fVar6)) {
    fVar5 = DAT_00256134;
  }
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00256140 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = DAT_00256120 + DAT_0025613c * (fVar5 - DAT_0025612c) * DAT_00256138;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a4),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * fVar6 * DAT_00256144;
  if ((int)fVar5 < 0x42000000) {
    fVar5 = (float)FUN_002cfca0((int)(short)(int)(fVar5 * DAT_00256148));
    fVar7 = fVar5 * fVar7;
  }
  fVar5 = DAT_0025614c;
  fVar6 = DAT_0025614c;
  if (0xd1 < *(short *)(param_1 + 0x1a4)) {
    fVar6 = (float)VectorSignedToFloat(0xf0 - *(short *)(param_1 + 0x1a4),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar6 = fVar6 * DAT_00256150;
  }
  local_7c = local_40 + extraout_s0;
  local_74 = local_38 + extraout_s2;
  local_78 = local_3c + extraout_s1;
  local_70 = DAT_00256154 * 1.0;
  local_60 = DAT_00256154 * 0.0;
  local_50 = DAT_00256154 * 0.0;
  local_6c = DAT_00256154 * 0.0;
  local_5c = DAT_00256154 * 1.0;
  local_4c = DAT_00256154 * 0.0;
  local_68 = DAT_00256154 * 0.0;
  local_58 = DAT_00256154 * 0.0;
  local_48 = DAT_00256154 * 1.0;
  local_64 = local_7c;
  local_54 = local_78;
  local_44 = local_74;
  FUN_00371fac(&local_70,param_2 + 0x2fc);
  local_74 = -fVar7;
  local_7c = fVar1;
  local_78 = fVar1;
  FUN_00372070(&local_70,&local_70,&local_7c);
  *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1a8),&local_70);
  iVar3 = *(int *)(param_1 + 0x1a8);
  *(float *)(iVar3 + 0x24) = local_40 + extraout_s0;
  *(float *)(iVar3 + 0x28) = local_3c + extraout_s1;
  *(float *)(iVar3 + 0x2c) = local_38 + extraout_s2;
  *(undefined1 *)(*(int *)(param_1 + 0x1a8) + 0xad) = 1;
  iVar3 = FUN_003695f8();
  iVar2 = *(int *)(*(int *)(param_1 + 0x1a8) + 0xc);
  if (iVar3 == 0) {
    *(float *)(iVar2 + 0xc) = fVar5;
  }
  else {
    *(float *)(iVar2 + 0xc) = fVar1;
  }
  iVar3 = 0;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x1ac) + 8) + 8)) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
      FUN_00333abc(iVar4,iVar3,auStack_80);
      local_74 = fVar6;
      FUN_00333a38(iVar4,iVar3,auStack_80);
      iVar2 = iVar3 + 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar3 * 0x124) = 1;
      iVar3 = iVar2;
    } while (iVar2 < *(int *)(**(int **)(*(int *)(param_1 + 0x1ac) + 8) + 8));
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1a8),0);
  return;
}
