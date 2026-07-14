// OoT3D decomp @ 001f1974  name=FUN_001f1974  size=920

void FUN_001f1974(int param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  sVar1 = *(short *)(param_3 + 0x17);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x52),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_001f1d0c;
  if (param_3[0x1b] != 0) {
    if (*(short *)(param_3 + 0x16) == 0xf1) {
      uVar2 = FUN_003687a8(param_3[0x1b]);
      FUN_00357fd0(*(undefined4 *)(DAT_001f1d10 + param_1),uVar2,param_3);
    }
    fVar12 = DAT_001f1d1c;
    fVar11 = DAT_001f1d18;
    uVar2 = DAT_001f1d14;
    local_68 = *param_3;
    local_64 = param_3[1];
    local_60 = (float)param_3[2];
    local_54 = 0.0;
    local_58 = 0.0;
    local_5c = 1.0;
    local_4c = 0.0;
    local_48 = 1.0;
    local_38 = 0.0;
    local_34 = 1.0;
    local_44 = 0.0;
    local_3c = 0.0;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4a),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_001f1d1c;
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_001f1d18) << 0x1e;
    local_50 = local_68;
    local_40 = local_64;
    local_30 = local_60;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      fVar8 = (float)FUN_003727f0(fVar7);
      fVar7 = (float)FUN_00372674(fVar7);
      fVar10 = local_5c * fVar8;
      local_5c = local_5c * fVar7 - local_54 * fVar8;
      local_54 = fVar10 + local_54 * fVar7;
      fVar10 = local_4c * fVar8;
      local_4c = local_4c * fVar7 - local_44 * fVar8;
      local_44 = fVar10 + local_44 * fVar7;
      fVar10 = local_3c * fVar8;
      local_3c = local_3c * fVar7 - local_34 * fVar8;
      local_34 = fVar10 + local_34 * fVar7;
    }
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x12),(byte)(uVar6 >> 0x15) & 3);
    fVar7 = fVar7 * fVar12;
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar7 == fVar11) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      fVar8 = (float)FUN_003727f0(fVar7);
      fVar10 = (float)FUN_00372674(fVar7);
      fVar11 = local_54 * fVar8;
      local_54 = local_54 * fVar10 - local_58 * fVar8;
      fVar12 = local_44 * fVar8;
      local_44 = local_44 * fVar10 - local_48 * fVar8;
      fVar7 = local_34 * fVar8;
      local_34 = local_34 * fVar10 - local_38 * fVar8;
      local_58 = local_58 * fVar10 + fVar11;
      local_48 = local_48 * fVar10 + fVar12;
      local_38 = local_38 * fVar10 + fVar7;
    }
    local_5c = local_5c * fVar9;
    local_4c = local_4c * fVar9;
    local_3c = local_3c * fVar9;
    local_58 = local_58 * fVar9;
    local_48 = local_48 * fVar9;
    local_38 = local_38 * fVar9;
    local_54 = local_54 * fVar9;
    local_44 = local_44 * fVar9;
    local_34 = local_34 * fVar9;
    if (-1 < sVar1) {
      iVar3 = sVar1 * 3;
      iVar4 = iVar3 + DAT_001f1d20;
      fVar12 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(DAT_001f1d20 + iVar3),(byte)(uVar6 >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 2),(byte)(uVar6 >> 0x15) & 3);
      fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar4 + 1),(byte)(uVar6 >> 0x15) & 3);
      FUN_003695cc(fVar12 * DAT_001f1d24,fVar11 * DAT_001f1d24,fVar9 * DAT_001f1d24,uVar2,
                   param_3[0x1b],0,4,1);
    }
    iVar3 = (uint)*(ushort *)(param_3 + 0x13) * 0x800000;
    bVar5 = iVar3 < 0;
    if (bVar5) {
      iVar3 = (int)*(short *)(param_3 + 0x18);
    }
    if (bVar5 && iVar3 < 10) {
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_60 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x18),
                                            (byte)(uVar6 >> 0x15) & 3);
      local_60 = local_60 * DAT_001f1d28;
      uVar2 = FUN_003687a8(param_3[0x1b]);
      FUN_00358964(uVar2,4,&local_6c);
      uVar2 = FUN_003687a8(param_3[0x1b]);
      FUN_003589cc(uVar2,4);
    }
    *(undefined1 *)(param_3[0x1b] + 0xac) = 1;
    FUN_003721e0(param_3[0x1b],&local_5c);
    iVar4 = param_3[0x1b];
    *(undefined4 *)(iVar4 + 0x24) = local_50;
    *(undefined4 *)(iVar4 + 0x28) = local_40;
    *(float *)(iVar4 + 0x2c) = local_30;
    *(undefined1 *)(param_3[0x1b] + 0xad) = 1;
    FUN_00372170(param_3[0x1b],bVar5 && iVar3 < 10);
  }
  return;
}

