// OoT3D decomp @ 0035e04c  name=FUN_0035e04c  size=488

void FUN_0035e04c(float param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;

  uVar5 = DAT_0035e23c;
  fVar4 = DAT_0035e238;
  fVar3 = DAT_0035e234;
  if (param_5 != 0) {
    iVar8 = 0;
    do {
      local_64 = *param_4;
      local_54 = param_4[1];
      local_44 = param_4[2];
      local_68 = 0.0;
      local_6c = 0.0;
      local_70 = 1.0;
      local_60 = 0.0;
      local_5c = 1.0;
      local_58 = 0.0;
      local_50 = 0.0;
      local_4c = 0.0;
      local_48 = 1.0;
      local_40 = local_64;
      local_3c = local_54;
      local_38 = local_44;
      FUN_00371fac(&local_70,param_2 + 0x2fc);
      fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar3;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar10);
        fVar12 = (float)FUN_00372674(fVar10);
        fVar10 = local_6c * fVar11;
        local_6c = local_6c * fVar12 - local_70 * fVar11;
        fVar1 = local_5c * fVar11;
        local_5c = local_5c * fVar12 - local_60 * fVar11;
        fVar2 = local_4c * fVar11;
        local_4c = local_4c * fVar12 - local_50 * fVar11;
        local_70 = local_70 * fVar12 + fVar10;
        local_60 = local_60 * fVar12 + fVar1;
        local_50 = local_50 * fVar12 + fVar2;
      }
      local_70 = local_70 * param_1;
      local_60 = local_60 * param_1;
      local_50 = local_50 * param_1;
      local_6c = local_6c * param_1;
      local_5c = local_5c * param_1;
      local_4c = local_4c * param_1;
      local_68 = local_68 * param_1;
      local_58 = local_58 * param_1;
      local_48 = local_48 * param_1;
      iVar6 = FUN_003695f8();
      iVar9 = param_3 + iVar8 * 4;
      iVar7 = *(int *)(*(int *)(param_3 + iVar8 * 4 + 0x3a8) + 0xc);
      if (iVar6 == 0) {
        *(undefined4 *)(iVar7 + 0xc) = uVar5;
      }
      else {
        *(float *)(iVar7 + 0xc) = fVar4;
      }
      *(undefined1 *)(*(int *)(iVar9 + 0x3a8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar9 + 0x3a8),&local_70);
      FUN_00372170(*(undefined4 *)(iVar9 + 0x3a8),0);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    return;
  }
  return;
}
