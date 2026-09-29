// OoT3D decomp @ 001b2354  name=FUN_001b2354  size=952

void FUN_001b2354(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  undefined4 local_50;

  *(short *)(param_1 + 0x7d2) = *(short *)(param_1 + 0x7d2) + 1;
  FUN_003731e0(param_1 + 0x1bc);
  (**(code **)(param_1 + 0x650))(param_1,param_2);
  *(undefined2 *)(DAT_001b278c + param_1) = *(undefined2 *)(param_1 + 2000);
  fVar3 = DAT_001b2794;
  local_88 = *(undefined4 *)(param_1 + 0x28);
  local_78 = *(undefined4 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x30);
  local_90 = 0.0;
  local_94 = 1.0;
  local_7c = 0.0;
  local_80 = 1.0;
  local_8c = 0.0;
  local_84 = 0.0;
  local_74 = 0.0;
  local_6c = 1.0;
  local_70 = 0.0;
  FUN_0036e88c(&local_94,(int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
               (int)*(short *)(param_1 + 0x38),1);
  local_54 = fVar3;
  local_58 = fVar3;
  local_50 = DAT_001b2798;
  FUN_003735ac(&local_64,&local_94,&local_58);
  iVar7 = DAT_001b27a0;
  fVar4 = DAT_001b279c;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x6a0) = local_64;
  *(undefined4 *)(param_1 + 0x6a4) = uStack_60;
  *(undefined4 *)(param_1 + 0x6a8) = uStack_5c;
  do {
    local_88 = *(undefined4 *)(param_1 + 0x28);
    local_78 = *(undefined4 *)(param_1 + 0x2c);
    local_68 = *(undefined4 *)(param_1 + 0x30);
    local_8c = 0.0;
    local_90 = 0.0;
    local_84 = 0.0;
    local_7c = 0.0;
    local_74 = 0.0;
    local_70 = 0.0;
    local_94 = 1.0;
    local_80 = 1.0;
    local_6c = 1.0;
    sVar1 = *(short *)(param_1 + 0x34);
    sVar2 = *(short *)(param_1 + 0x36);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = fVar8 * fVar4;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar3) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar9 = (float)FUN_003727f0(fVar8);
      fVar10 = (float)FUN_00372674(fVar8);
      fVar8 = local_90 * fVar9;
      local_90 = local_90 * fVar10 - local_94 * fVar9;
      fVar11 = local_80 * fVar9;
      local_80 = local_80 * fVar10 - local_84 * fVar9;
      fVar12 = local_70 * fVar9;
      local_70 = local_70 * fVar10 - local_74 * fVar9;
      local_94 = local_94 * fVar10 + fVar8;
      local_84 = local_84 * fVar10 + fVar11;
      local_74 = local_74 * fVar10 + fVar12;
    }
    if (sVar2 != 0) {
      fVar8 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * fVar4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar3) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar8);
        fVar8 = (float)FUN_00372674(fVar8);
        fVar12 = local_94 * fVar11;
        local_94 = local_94 * fVar8 - local_8c * fVar11;
        local_8c = fVar12 + local_8c * fVar8;
        fVar12 = local_84 * fVar11;
        local_84 = local_84 * fVar8 - local_7c * fVar11;
        local_7c = fVar12 + local_7c * fVar8;
        fVar12 = local_74 * fVar11;
        local_74 = local_74 * fVar8 - local_6c * fVar11;
        local_6c = fVar12 + local_6c * fVar8;
      }
    }
    if (sVar1 != 0) {
      fVar8 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * fVar4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar3) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar9 = (float)FUN_003727f0(fVar8);
        fVar10 = (float)FUN_00372674(fVar8);
        fVar8 = local_8c * fVar9;
        local_8c = local_8c * fVar10 - local_90 * fVar9;
        fVar11 = local_7c * fVar9;
        local_7c = local_7c * fVar10 - local_80 * fVar9;
        fVar12 = local_6c * fVar9;
        local_6c = local_6c * fVar10 - local_70 * fVar9;
        local_90 = local_90 * fVar10 + fVar8;
        local_80 = local_80 * fVar10 + fVar11;
        local_70 = local_70 * fVar10 + fVar12;
      }
    }
    FUN_003735ac(&local_64,&local_94,iVar7 + iVar6 * 0xc);
    iVar5 = param_1 + iVar6 * 0x58;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar5 + 0x6f8) = local_64;
    *(undefined4 *)(iVar5 + 0x6fc) = uStack_60;
    *(undefined4 *)(iVar5 + 0x700) = uStack_5c;
  } while (iVar6 < 3);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x654);
  iVar7 = 0;
  do {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + iVar7 * 0x58 + 0x6ac);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
