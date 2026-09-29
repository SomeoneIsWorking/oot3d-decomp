// OoT3D decomp @ 001b342c  name=FUN_001b342c  size=888

void FUN_001b342c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;

  FUN_00372224(&local_4c,param_1 + 0x148);
  fVar1 = DAT_001b37a4;
  if ((*(byte *)(param_1 + 0x202) & 8) != 0) {
    return;
  }
  uVar4 = extraout_r1;
  if ((*(byte *)(param_1 + 0x202) & 1) != 0) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x206),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar7 * DAT_001b37a4,&local_4c,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x204),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar7 * fVar1,&local_4c,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x208),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar7 * fVar1,&local_4c,1);
    fVar7 = *(float *)(param_1 + 0x218);
    fVar8 = *(float *)(param_1 + 0x21c);
    fVar9 = *(float *)(param_1 + 0x220);
    local_4c = local_4c * fVar7;
    local_3c = local_3c * fVar7;
    local_2c = local_2c * fVar7;
    local_48 = local_48 * fVar8;
    local_38 = local_38 * fVar8;
    local_28 = local_28 * fVar8;
    local_44 = local_44 * fVar9;
    local_34 = local_34 * fVar9;
    local_24 = local_24 * fVar9;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar7 * fVar1,&local_4c,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20a),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00369014(fVar7 * fVar1,&local_4c,1);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x20e),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar7 * fVar1,&local_4c,1);
    uVar4 = extraout_r1_00;
  }
  if (*(int *)(param_1 + 0x26c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x26c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x26c),&local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x26c),0);
    uVar4 = extraout_r1_01;
  }
  fVar1 = DAT_001b37ac;
  uVar2 = DAT_001b37a8;
  if ((*(byte *)(param_1 + 0x202) & 4) != 0) {
    bVar5 = *(byte *)(param_1 + 0x248) == 0xff;
    if (bVar5) {
      uVar4 = (uint)*(byte *)(param_1 + 0x249);
    }
    bVar6 = bVar5 && uVar4 == 0xff;
    if (bVar5 && uVar4 == 0xff) {
      bVar6 = *(char *)(param_1 + 0x24a) == -1;
    }
    if (!bVar6) {
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x248),(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x24a),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x249),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar9 * DAT_001b37b0,fVar8 * DAT_001b37b0,fVar7 * DAT_001b37b0,DAT_001b37b4,
                   *(undefined4 *)(param_1 + 0x270),0,5);
      goto LAB_001b365c;
    }
  }
  FUN_003695cc(DAT_001b37a8,DAT_001b37a8,DAT_001b37a8,DAT_001b37ac,*(undefined4 *)(param_1 + 0x270),
               0,5);
LAB_001b365c:
  if (*(int *)(param_1 + 0x270) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x270) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x270),&local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x270),0);
  }
  if (*(int *)(param_1 + 0x274) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x274) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x274),&local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x274),0);
  }
  local_4c = *(float *)(param_1 + 0x148);
  local_48 = *(float *)(param_1 + 0x14c);
  local_44 = *(float *)(param_1 + 0x150);
  uStack_40 = *(undefined4 *)(param_1 + 0x154);
  local_3c = *(float *)(param_1 + 0x158);
  local_38 = *(float *)(param_1 + 0x15c);
  local_34 = *(float *)(param_1 + 0x160);
  uStack_30 = *(undefined4 *)(param_1 + 0x164);
  local_2c = *(float *)(param_1 + 0x168);
  local_28 = *(float *)(param_1 + 0x16c);
  local_24 = *(float *)(param_1 + 0x170);
  uStack_20 = *(undefined4 *)(param_1 + 0x174);
  if ((*(byte *)(param_1 + 0x202) & 2) != 0) {
    iVar3 = FUN_003695f8();
    if (iVar3 == 0) {
      *(float *)(*(int *)(param_1 + 0x280) + 0xc) = fVar1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x280) + 0xc) = uVar2;
    }
    FUN_00371fac(&local_4c,param_2 + 0x2fc);
    local_4c = local_4c * DAT_001b37b8;
    local_3c = local_3c * DAT_001b37b8;
    local_2c = local_2c * DAT_001b37b8;
    local_48 = local_48 * DAT_001b37bc;
    local_38 = local_38 * DAT_001b37bc;
    local_28 = local_28 * DAT_001b37bc;
    local_44 = local_44 * fVar1;
    local_34 = local_34 * fVar1;
    local_24 = local_24 * fVar1;
    FUN_00373bec(*(undefined4 *)(param_1 + 0x280));
    *(undefined1 *)(*(int *)(param_1 + 0x278) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x278),&local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x278),0);
  }
  return;
}
