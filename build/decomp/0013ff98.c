// OoT3D decomp @ 0013ff98  name=FUN_0013ff98  size=520

void FUN_0013ff98(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  undefined4 uVar6;
  short sVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  uVar2 = DAT_001401a8;
  uVar1 = DAT_001401a0;
  FUN_0036e168(DAT_001401ac,DAT_001401a8,DAT_001401a4,DAT_001401a0,param_1 + 0x7d8);
  FUN_00370734(param_1 + 0x1a4);
  fVar4 = DAT_001401bc;
  fVar3 = DAT_001401b8;
  fVar8 = DAT_001401b4;
  uVar6 = DAT_001401b0;
  if (*(short *)(param_1 + 0x7aa) == 0) {
    sVar7 = 0;
    do {
      local_38 = (float)FUN_003738a8(uVar6);
      local_34 = (float)FUN_003738a8(uVar6);
      local_30 = (float)FUN_003738a8(uVar6);
      local_44 = local_38 * fVar8;
      local_40 = local_34 * fVar8;
      local_3c = local_30 * fVar8;
      local_50 = *(float *)(param_1 + 0x28) + local_38 * fVar3;
      local_4c = *(float *)(param_1 + 0x2c) + fVar4 + local_34 * fVar3;
      local_48 = *(float *)(param_1 + 0x30) + local_30 * fVar3;
      local_5c = 10;
      local_58 = 10;
      FUN_00365d20(param_2,&local_50,&local_38,&local_44,DAT_001401c0 + -4,DAT_001401c0,500);
      psVar5 = DAT_001401c4;
      sVar7 = sVar7 + 1;
    } while (sVar7 < 0x1e);
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_001401c4 + 0x16));
    fVar8 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar2,uVar1,fVar8,DAT_001401c8,param_1 + 0x1a4,psVar5 + 0x16,2);
    fVar8 = fVar8 + DAT_001401d0;
    *(undefined4 *)(param_1 + 0x760) = DAT_001401cc;
    FUN_00375ed8(param_1,0,0xff,0,(int)(short)(int)fVar8);
    FUN_00375bcc(param_1,DAT_001401d4);
    FUN_00375bcc(param_1,DAT_001401d8);
    FUN_0036fca8(param_1,param_2,4,10);
    sVar7 = *(short *)(param_1 + 0x764) + -2;
    *(short *)(param_1 + 0x764) = sVar7;
    if (sVar7 < 1) {
      *(undefined2 *)(param_1 + 0x764) = 1;
    }
    local_5c = *(undefined4 *)(param_1 + 0x3c);
    local_58 = *(undefined4 *)(param_1 + 0x40);
    local_54 = *(undefined4 *)(param_1 + 0x44);
    FUN_00365560(param_2,0,0,&local_5c,(int)*psVar5);
  }
  return;
}
