// OoT3D decomp @ 0027bb30  name=FUN_0027bb30  size=736

void FUN_0027bb30(int param_1,int param_2)

{
  undefined4 *puVar1;
  short sVar2;
  uint in_fpscr;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;

  fVar5 = DAT_0027be10;
  fVar7 = *(float *)(param_1 + 0x80c);
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_0027be10) << 0x1e;
  if (!SUB41(uVar3 >> 0x1e,0)) {
    fVar4 = (float)FUN_003727f0();
    fVar7 = (float)FUN_00372674(fVar7);
    fVar6 = *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0x148) = fVar6 * fVar7 + *(float *)(param_1 + 0x14c) * fVar4;
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x14c) * fVar7 - fVar6 * fVar4;
    fVar6 = *(float *)(param_1 + 0x158);
    *(float *)(param_1 + 0x158) = fVar6 * fVar7 + *(float *)(param_1 + 0x15c) * fVar4;
    *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x15c) * fVar7 - fVar6 * fVar4;
    fVar6 = *(float *)(param_1 + 0x168);
    *(float *)(param_1 + 0x168) = fVar6 * fVar7 + *(float *)(param_1 + 0x16c) * fVar4;
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) * fVar7 - fVar6 * fVar4;
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(DAT_0027be14 + param_1),
                                     (byte)(uVar3 >> 0x15) & 3);
  fVar7 = fVar7 * DAT_0027be18 * DAT_0027be1c;
  uVar3 = uVar3 & 0xfffffff | (uint)(fVar7 == fVar5) << 0x1e;
  if (!SUB41(uVar3 >> 0x1e,0)) {
    fVar5 = (float)FUN_003727f0(fVar7);
    fVar7 = (float)FUN_00372674(fVar7);
    fVar4 = *(float *)(param_1 + 0x14c);
    *(float *)(param_1 + 0x14c) = fVar4 * fVar7 + *(float *)(param_1 + 0x150) * fVar5;
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar7 - fVar4 * fVar5;
    fVar4 = *(float *)(param_1 + 0x15c);
    *(float *)(param_1 + 0x15c) = fVar4 * fVar7 + *(float *)(param_1 + 0x160) * fVar5;
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) * fVar7 - fVar4 * fVar5;
    fVar4 = *(float *)(param_1 + 0x16c);
    *(float *)(param_1 + 0x16c) = fVar4 * fVar7 + *(float *)(param_1 + 0x170) * fVar5;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) * fVar7 - fVar4 * fVar5;
  }
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_0027be24,DAT_0027be20,param_1,0);
  fVar5 = DAT_0027be2c;
  sVar2 = 0;
  puVar1 = *(undefined4 **)(DAT_0027be28 + param_2);
  do {
    if (*(char *)(puVar1 + 9) == '\x01') {
      local_70 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)puVar1 + 0x26),(byte)(uVar3 >> 0x15) & 3);
      local_70 = local_70 * fVar5;
      local_6c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)((int)puVar1 + 0x27),(byte)(uVar3 >> 0x15) & 3);
      local_6c = local_6c * fVar5;
      local_68 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(puVar1 + 10),(byte)(uVar3 >> 0x15) & 3);
      local_68 = local_68 * fVar5;
      local_64 = (float)VectorSignedToFloat((int)*(short *)((int)puVar1 + 0x2a),
                                            (byte)(uVar3 >> 0x15) & 3);
      local_64 = local_64 * fVar5;
      FUN_00358778(puVar1[0xc],0,0,&local_70,0);
      local_60 = *puVar1;
      local_5c = puVar1[1];
      local_58 = puVar1[2];
      local_4c = 0;
      local_50 = 0.0;
      local_44 = 0.0;
      local_3c = 0;
      local_34 = 0.0;
      local_30 = 0.0;
      local_54 = 1.0;
      local_40 = 1.0;
      local_2c = 0x3f800000;
      local_48 = local_60;
      local_38 = local_5c;
      local_28 = local_58;
      FUN_00371fac(&local_54,param_2 + 0x2fc);
      fVar7 = (float)puVar1[0xb];
      local_54 = local_54 * fVar7;
      local_44 = local_44 * fVar7;
      local_34 = local_34 * fVar7;
      local_50 = local_50 * fVar7;
      local_40 = local_40 * fVar7;
      local_30 = local_30 * fVar7;
      *(undefined1 *)(puVar1[0xc] + 0xac) = 1;
      FUN_003721e0(puVar1[0xc],&local_54);
      FUN_00372170(puVar1[0xc],0);
    }
    sVar2 = sVar2 + 1;
    puVar1 = puVar1 + 0xd;
  } while (sVar2 < 0x50);
  return;
}
