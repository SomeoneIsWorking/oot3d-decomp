// OoT3D decomp @ 0012795c  name=FUN_0012795c  size=612

void FUN_0012795c(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_90 [12];
  float local_60;
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
  float local_30;
  undefined4 local_2c;
  float local_28;

  FUN_00372224(&local_54,param_1 + 0x148);
  fVar2 = DAT_00127bcc;
  pfVar1 = DAT_00127bc8;
  fVar11 = DAT_00127bc4;
  iVar7 = DAT_00127bc0;
  if (((*(uint *)(DAT_00127bc0 + 0x14) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00127bc0 + 0x14), iVar6 != 0)) {
    *pfVar1 = fVar11;
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar2;
  }
  if (((*(uint *)(iVar7 + 0x10) & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_00127bd0), puVar4 = DAT_00127be0, uVar3 = DAT_00127bdc,
     uVar8 = DAT_00127bd8, iVar7 != 0)) {
    *DAT_00127be0 = DAT_00127bd4;
    puVar4[1] = uVar8;
    puVar4[2] = uVar3;
  }
  uVar8 = DAT_00127be4;
  sVar5 = *(short *)(param_1 + 0x1c0) + 1;
  *(short *)(param_1 + 0x1c0) = sVar5;
  iVar7 = DAT_00127be8;
  if (sVar5 == 9) {
    *(undefined4 *)(param_1 + 0x1bc) = uVar8;
    uVar8 = FUN_0036f848(*(undefined4 *)(param_2 + *(short *)(iVar7 + param_2) * 4 + 0xa54),3);
    FUN_0036f7c0(uVar8,DAT_00127bec);
    local_90[0] = 0;
    FUN_0036f6b0(uVar8,4,0);
    FUN_0036f628(uVar8,2);
  }
  else if (sVar5 == 0) {
    *(undefined2 *)(param_1 + 0x1c0) = 9;
    *(undefined4 *)(param_1 + 0x1bc) = uVar8;
  }
  uVar8 = DAT_00127bfc;
  iVar7 = DAT_00127bf4;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar10 = fVar10 + DAT_00127bf0;
  *pfVar1 = fVar10;
  if (iVar7 < (int)fVar10) {
    fVar10 = fVar11;
  }
  *pfVar1 = fVar10;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = fVar11 * DAT_00127bf8;
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar2) << 0x1e;
  local_54 = uVar8;
  local_4c = fVar2;
  if (!SUB41(uVar9 >> 0x1e,0)) {
    fVar10 = (float)FUN_003727f0(fVar11);
    local_54 = FUN_00372674(fVar11);
    local_4c = fVar10;
  }
  local_50 = fVar2;
  local_48 = fVar2;
  local_34 = -local_4c;
  local_40 = uVar8;
  local_44 = fVar2;
  local_3c = fVar2;
  local_38 = fVar2;
  local_30 = fVar2;
  local_28 = fVar2;
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c0),(byte)(uVar9 >> 0x15) & 3);
  local_2c = local_54;
  FUN_003625f8(fVar11 * DAT_00127c00,local_90,DAT_00127be0);
  FUN_0036c174(&local_54,&local_54,local_90);
  FUN_003735ac(&local_60,&local_54,DAT_00127bc8);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + local_60;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + local_5c;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + local_58;
  FUN_003624c8(&local_54,param_1 + 0xbc,0);
  return;
}
