// OoT3D decomp @ 0027ed40  name=FUN_0027ed40  size=740

void FUN_0027ed40(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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

  fVar1 = DAT_0027f034;
  fVar2 = DAT_0027f030;
  local_2c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x17),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_2c = local_2c * DAT_0027f024;
  if (*(short *)((int)param_3 + 0x5a) == 0) {
    iVar3 = (int)*(short *)(param_3 + 0x11);
    fVar9 = DAT_0027f028;
    if ((0 < iVar3) && ((int)*(short *)(param_3 + 0x18) < iVar3 >> 1)) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x18),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = ((fVar9 * DAT_0027f02c) / fVar5) * DAT_0027f028;
    }
  }
  else {
    fVar9 = (float)VectorSignedToFloat(*(short *)(param_3 + 0x18) * 0xc,(byte)(in_fpscr >> 0x15) & 3
                                      );
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
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_0027f034;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == DAT_0027f030) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar6 = (float)FUN_003727f0(fVar5);
    fVar5 = (float)FUN_00372674(fVar5);
    fVar8 = local_54 * fVar6;
    local_54 = local_54 * fVar5 - local_4c * fVar6;
    local_4c = fVar8 + local_4c * fVar5;
    fVar8 = local_44 * fVar6;
    local_44 = local_44 * fVar5 - local_3c * fVar6;
    local_3c = fVar8 + local_3c * fVar5;
    fVar8 = local_34 * fVar6;
    local_34 = local_34 * fVar5 - local_2c * fVar6;
    local_2c = fVar8 + local_2c * fVar5;
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x12),(byte)(uVar4 >> 0x15) & 3);
  fVar5 = fVar5 * fVar1;
  if (fVar5 != fVar2) {
    fVar8 = (float)FUN_003727f0(fVar5);
    fVar7 = (float)FUN_00372674(fVar5);
    fVar1 = local_4c * fVar8;
    local_4c = local_4c * fVar7 - local_50 * fVar8;
    fVar5 = local_3c * fVar8;
    local_3c = local_3c * fVar7 - local_40 * fVar8;
    fVar6 = local_2c * fVar8;
    local_2c = local_2c * fVar7 - local_30 * fVar8;
    local_50 = local_50 * fVar7 + fVar1;
    local_40 = local_40 * fVar7 + fVar5;
    local_30 = local_30 * fVar7 + fVar6;
  }
  FUN_003695cc(fVar2,fVar2,fVar2,fVar9 * DAT_0027f038,param_3[0x1b],0,4,2);
  *(undefined1 *)(param_3[0x1b] + 0xac) = 1;
  FUN_003721e0(param_3[0x1b],&local_54);
  *(undefined1 *)(param_3[0x1b] + 0xad) = 1;
  FUN_00372170(param_3[0x1b],0);
  return;
}
