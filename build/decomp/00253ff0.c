// OoT3D decomp @ 00253ff0  name=FUN_00253ff0  size=588

void FUN_00253ff0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_6c [12];
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;

  if (*(short *)(param_1 + 0x208) < 1) {
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xad) = 0;
  }
  else {
    local_40 = *(undefined4 *)(param_1 + 0x154);
    local_30 = *(undefined4 *)(param_1 + 0x164);
    local_20 = *(undefined4 *)(param_1 + 0x174);
    local_4c = *(float *)(param_1 + 0x148) * DAT_0025423c;
    local_3c = *(float *)(param_1 + 0x158) * DAT_0025423c;
    local_2c = *(float *)(param_1 + 0x168) * DAT_0025423c;
    local_48 = *(float *)(param_1 + 0x14c) * DAT_0025423c;
    local_38 = *(float *)(param_1 + 0x15c) * DAT_0025423c;
    local_28 = *(float *)(param_1 + 0x16c) * DAT_0025423c;
    local_44 = *(float *)(param_1 + 0x150) * DAT_0025423c;
    local_34 = *(float *)(param_1 + 0x160) * DAT_0025423c;
    local_24 = *(float *)(param_1 + 0x170) * DAT_0025423c;
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x210),&local_4c);
    iVar2 = *(int *)(param_1 + 0x210);
    *(undefined4 *)(iVar2 + 0x24) = local_40;
    *(undefined4 *)(iVar2 + 0x28) = local_30;
    *(undefined4 *)(iVar2 + 0x2c) = local_20;
    *(undefined1 *)(*(int *)(param_1 + 0x210) + 0xad) = 1;
    iVar2 = FUN_003695f8();
    uVar1 = DAT_00254240;
    uVar5 = DAT_00254240;
    if (iVar2 == 0) {
      uVar5 = DAT_00254244;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x214) + 0xc) = uVar5;
    iVar2 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x210) + 0x10);
      FUN_00333abc(iVar4,iVar2,auStack_6c);
      local_60 = *(undefined4 *)(param_1 + 0x1fc);
      FUN_00333a38(iVar4,iVar2,auStack_6c);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar2 * 0x124) = 1;
      iVar2 = iVar3;
    } while (iVar3 < 2);
    FUN_00372170(*(undefined4 *)(param_1 + 0x210),0);
    fVar6 = *(float *)(param_1 + 0x200);
    local_54 = uVar1;
    local_5c = (float)VectorUnsignedToFloat
                                ((int)(fVar6 * DAT_00254248) & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    local_58 = (float)VectorUnsignedToFloat
                                ((int)(fVar6 * DAT_0025424c) & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    local_50 = (float)VectorUnsignedToFloat
                                ((int)(fVar6 * DAT_00254250) & 0xff,(byte)(in_fpscr >> 0x15) & 3);
    local_5c = local_5c * DAT_00254254;
    local_58 = local_58 * DAT_00254254;
    local_50 = local_50 * DAT_00254254;
    if (((*DAT_00254258 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00254258), iVar2 != 0)) {
      FUN_0036788c(DAT_0025425c);
    }
    FUN_003339e8(DAT_00254268,2,&local_5c,0);
  }
  return;
}
