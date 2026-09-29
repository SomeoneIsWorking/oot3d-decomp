// OoT3D decomp @ 0028bcdc  name=FUN_0028bcdc  size=812

void FUN_0028bcdc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  undefined4 local_34;

  local_34 = 0;
  FUN_003510b0(param_1,DAT_0028c008);
  FUN_00372f38(param_1,param_2,param_1 + 0x1e4,
               *(undefined4 *)(DAT_0028c00c + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4),0);
  FUN_003532e8(param_1,1);
  local_34 = FUN_00353fd4(param_1,param_2,
                          *(undefined4 *)
                           (DAT_0028c010 + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 4));
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_34);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  if (*(ushort *)(param_1 + 0x1c) >> 0xc < 2) {
    puVar6 = (undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x1cc) = *puVar6;
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(uint *)(param_1 + 0x1c4) = (((uint)*(ushort *)(param_1 + 0x1c) << 0x14) >> 0x1a) * 0x1e;
    FUN_00372224(&local_64,param_1 + 0x148);
    local_50 = DAT_0028c01c;
    fVar2 = DAT_0028c018;
    fVar1 = DAT_0028c014;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = fVar8 * DAT_0028c014;
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar8 == DAT_0028c018) << 0x1e;
    local_64 = DAT_0028c01c;
    local_5c = DAT_0028c018;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      fVar9 = (float)FUN_003727f0(fVar8);
      local_64 = (float)FUN_00372674(fVar8);
      local_5c = fVar9;
    }
    local_60 = fVar2;
    local_58 = fVar2;
    local_44 = -local_5c;
    local_54 = fVar2;
    local_4c = fVar2;
    local_48 = fVar2;
    local_40 = fVar2;
    local_38 = fVar2;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(uVar7 >> 0x15) & 3);
    fVar8 = fVar8 * fVar1;
    uVar7 = uVar7 & 0xfffffff | (uint)(fVar8 == fVar2) << 0x1e;
    local_3c = local_64;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      fVar10 = (float)FUN_003727f0(fVar8);
      fVar11 = (float)FUN_00372674(fVar8);
      fVar8 = local_5c * fVar10;
      local_5c = local_5c * fVar11 - local_60 * fVar10;
      fVar9 = local_4c * fVar10;
      local_4c = local_4c * fVar11 - local_50 * fVar10;
      fVar12 = local_3c * fVar10;
      local_3c = local_3c * fVar11 - local_40 * fVar10;
      local_60 = local_60 * fVar11 + fVar8;
      local_50 = local_50 * fVar11 + fVar9;
      local_40 = local_40 * fVar11 + fVar12;
    }
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(uVar7 >> 0x15) & 3);
    fVar8 = fVar8 * fVar1;
    if (fVar8 != fVar2) {
      fVar9 = (float)FUN_003727f0(fVar8);
      fVar12 = (float)FUN_00372674(fVar8);
      fVar1 = local_60 * fVar9;
      local_60 = local_60 * fVar12 - local_64 * fVar9;
      fVar2 = local_50 * fVar9;
      local_50 = local_50 * fVar12 - local_54 * fVar9;
      fVar8 = local_40 * fVar9;
      local_40 = local_40 * fVar12 - local_44 * fVar9;
      local_64 = local_64 * fVar12 + fVar1;
      local_54 = local_54 * fVar12 + fVar2;
      local_44 = local_44 * fVar12 + fVar8;
    }
    FUN_003735ac(param_1 + 0x1d8,&local_64,
                 DAT_0028c020 + (uint)(*(ushort *)(param_1 + 0x1c) >> 0xc) * 0xc);
    *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x1d8) + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1e0) + *(float *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x1c4) != 0x762) {
      FUN_0036beac(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
      *puVar6 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x1d4);
    }
    iVar4 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    uVar3 = DAT_0028c028;
    uVar5 = DAT_0028c024;
    if (iVar4 != 0) {
      *puVar6 = *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x1e0);
      uVar5 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  }
  return;
}
