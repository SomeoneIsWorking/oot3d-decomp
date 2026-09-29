// OoT3D decomp @ 0038f93c  name=FUN_0038f93c  size=712

void FUN_0038f93c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  fVar1 = DAT_0038fc18;
  fVar2 = DAT_0038fc14;
  iVar3 = (int)*(short *)(param_3 + 0x11);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3);
  local_2c = fVar7 * DAT_0038fc04 * DAT_0038fc08;
  fVar7 = DAT_0038fc0c;
  if ((0 < iVar3) && ((int)*(short *)(param_3 + 0x18) < iVar3 >> 1)) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = ((fVar7 * DAT_0038fc10) / fVar9) * DAT_0038fc0c;
  }
  local_48 = *param_3;
  local_38 = param_3[1];
  local_28 = param_3[2];
  local_54 = local_2c * 1.0;
  local_44 = local_2c * 0.0;
  local_34 = local_2c * 0.0;
  local_50 = local_2c * 0.0;
  local_40 = local_2c * 1.0;
  local_30 = local_2c * 0.0;
  local_4c = local_2c * 0.0;
  local_3c = local_2c * 0.0;
  local_2c = local_2c * 1.0;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_0038fc18;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar9 == DAT_0038fc14) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar5 = (float)FUN_003727f0(fVar9);
    fVar9 = (float)FUN_00372674(fVar9);
    fVar8 = local_54 * fVar5;
    local_54 = local_54 * fVar9 - local_4c * fVar5;
    local_4c = fVar8 + local_4c * fVar9;
    fVar8 = local_44 * fVar5;
    local_44 = local_44 * fVar9 - local_3c * fVar5;
    local_3c = fVar8 + local_3c * fVar9;
    fVar8 = local_34 * fVar5;
    local_34 = local_34 * fVar9 - local_2c * fVar5;
    local_2c = fVar8 + local_2c * fVar9;
  }
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x12),(byte)(uVar4 >> 0x15) & 3);
  fVar9 = fVar9 * fVar1;
  if (fVar9 != fVar2) {
    fVar8 = (float)FUN_003727f0(fVar9);
    fVar6 = (float)FUN_00372674(fVar9);
    fVar1 = local_4c * fVar8;
    local_4c = local_4c * fVar6 - local_50 * fVar8;
    fVar9 = local_3c * fVar8;
    local_3c = local_3c * fVar6 - local_40 * fVar8;
    fVar5 = local_2c * fVar8;
    local_2c = local_2c * fVar6 - local_30 * fVar8;
    local_50 = local_50 * fVar6 + fVar1;
    local_40 = local_40 * fVar6 + fVar9;
    local_30 = local_30 * fVar6 + fVar5;
  }
  FUN_003695cc(fVar2,fVar2,fVar2,fVar7 * DAT_0038fc1c,param_3[0x1b],0,4,2);
  *(undefined1 *)(param_3[0x1b] + 0xac) = 1;
  FUN_003721e0(param_3[0x1b],&local_54);
  *(undefined1 *)(param_3[0x1b] + 0xad) = 1;
  FUN_00372170(param_3[0x1b],1);
  return;
}
