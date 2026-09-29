// OoT3D decomp @ 001323c0  name=FUN_001323c0  size=1312

void FUN_001323c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_8c [4];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 auStack_58 [12];
  int local_4c;

  fVar2 = DAT_00132788;
  fVar13 = DAT_00132784;
  fVar1 = DAT_00132780;
  fVar11 = DAT_0013277c;
  fVar9 = DAT_00132778;
  if ((*(byte *)(*(int *)(param_1 + 0x1c4) + 0x66) & 2) != 0) {
    iVar3 = *(int *)(param_1 + 0x1b0);
    uVar5 = *(undefined4 *)(iVar3 + 100);
    uVar6 = *(undefined4 *)(iVar3 + 0x68);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(iVar3 + 0x60);
    *(undefined4 *)(param_1 + 700) = uVar5;
    *(undefined4 *)(param_1 + 0x2c0) = uVar6;
    fVar14 = *(float *)(param_1 + 0x2b8);
    fVar10 = *(float *)(param_1 + 700);
    fVar12 = *(float *)(param_1 + 0x2c0);
    fVar8 = SQRT(fVar14 * fVar14 + fVar10 * fVar10 + fVar12 * fVar12);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar1) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      *(float *)(param_1 + 0x2c0) = fVar1;
      *(float *)(param_1 + 700) = fVar1;
      *(float *)(param_1 + 0x2b8) = fVar1;
    }
    else {
      *(float *)(param_1 + 0x2b8) = fVar14 / fVar8;
      *(float *)(param_1 + 700) = fVar10 / fVar8;
      *(float *)(param_1 + 0x2c0) = fVar12 / fVar8;
    }
    *(float *)(param_1 + 0x2c4) =
         *(float *)(param_1 + 0x2c4) + *(float *)(param_1 + 0x2b8) * fVar11 * fVar9;
    *(float *)(param_1 + 0x2c8) =
         *(float *)(param_1 + 0x2c8) + *(float *)(param_1 + 700) * fVar11 * fVar9;
    *(float *)(param_1 + 0x2cc) =
         *(float *)(param_1 + 0x2cc) + *(float *)(param_1 + 0x2c0) * fVar11 * fVar9;
  }
  fVar11 = DAT_0013278c;
  local_84 = *(float *)(param_1 + 0x2d0) - DAT_0013278c;
  *(float *)(param_1 + 0x2d0) = local_84;
  if (local_84 <= *(float *)(param_1 + 0x74)) {
    local_84 = *(float *)(param_1 + 0x74);
  }
  *(float *)(param_1 + 0x2d0) = local_84;
  fVar10 = DAT_0013279c;
  uVar5 = DAT_00132798;
  fVar8 = DAT_00132794;
  local_88 = *(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2c4);
  local_84 = *(float *)(param_1 + 0x2b0) + *(float *)(param_1 + 0x2c8) + local_84;
  local_80 = *(float *)(param_1 + 0x2b4) + *(float *)(param_1 + 0x2cc);
  fVar12 = SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
  if (fVar12 == fVar1) {
    local_80 = fVar1;
    local_84 = fVar1;
    local_88 = fVar1;
  }
  else {
    local_88 = local_88 / fVar12;
    local_84 = local_84 / fVar12;
    local_80 = local_80 / fVar12;
  }
  local_64 = *(float *)(param_1 + 0x28);
  local_60 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xc4);
  local_5c = *(float *)(param_1 + 0x30);
  local_70 = local_64 + local_88 * DAT_00132790 * fVar9;
  local_6c = local_60 + local_84 * DAT_00132790 * fVar9;
  local_68 = local_5c + local_80 * DAT_00132790 * fVar9;
  uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2d8) == fVar1) << 0x1e;
  if (!SUB41(uVar7 >> 0x1e,0)) {
    *(float *)(param_1 + 0x2d8) = *(float *)(param_1 + 0x2d8) - DAT_00132794;
  }
  if (((*(byte *)(param_1 + 0x1ba) & 2) != 0) &&
     (uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2d8) == fVar1) << 0x1e,
     SUB41(uVar7 >> 0x1e,0))) {
    FUN_00375bcc(param_1,uVar5);
    psVar4 = *(short **)(param_1 + 0x1b4);
    if (*psVar4 != 0x2d) {
      fVar13 = *(float *)(param_1 + 0x28) - *(float *)(psVar4 + 0x14);
      fVar11 = *(float *)(param_1 + 0x30) - *(float *)(psVar4 + 0x18);
      fVar9 = SQRT(fVar13 * fVar13 + fVar11 * fVar11);
      if (fVar9 == fVar1) {
        fVar9 = DAT_001327b0;
      }
      *(float *)(param_1 + 0x2a0) =
           (fVar13 / fVar9) * (fVar8 + ABS(*(float *)(param_1 + 0x60)) * fVar10);
      *(float *)(param_1 + 0x2a4) = -*(float *)(param_1 + 0x2a4);
      *(float *)(param_1 + 0x2a8) =
           (fVar11 / fVar9) * (fVar8 + ABS(*(float *)(param_1 + 0x68)) * fVar10);
      *(char *)(param_1 + 0x286) = *(char *)(param_1 + 0x286) + '\x01';
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  iVar3 = FUN_00369f9c(param_2 + 0xa98,&local_64,&local_70,auStack_58,&local_4c,1,1,1,0,auStack_8c);
  if (iVar3 == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 0x20) == 0 || fVar1 <= local_84) {
      *(float *)(param_1 + 0x60) =
           (*(float *)(param_1 + 0x2ac) + *(float *)(param_1 + 0x2c4)) * fVar13 * fVar2;
      *(float *)(param_1 + 100) =
           (*(float *)(param_1 + 0x2b0) + *(float *)(param_1 + 0x2c8) + *(float *)(param_1 + 0x2d0))
           * fVar13 * fVar2;
      *(float *)(param_1 + 0x68) =
           (*(float *)(param_1 + 0x2b4) + *(float *)(param_1 + 0x2cc)) * fVar13 * fVar2;
      FUN_00373500(fVar1,fVar10,fVar11,param_1 + 0x2c4);
      FUN_00373500(fVar1,fVar10,fVar11,param_1 + 0x2c8);
      FUN_00373500(fVar1,fVar10,fVar11,param_1 + 0x2cc);
      return;
    }
    local_74 = fVar1;
    local_7c = fVar1;
    local_78 = fVar8;
    FUN_0035dba4(&local_88,&local_7c,&local_88);
    fVar9 = SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
    if (fVar9 == fVar1) {
      local_80 = fVar1;
      local_84 = fVar1;
      local_88 = fVar1;
    }
    else {
      local_88 = local_88 / fVar9;
      local_84 = local_84 / fVar9;
      local_80 = local_80 / fVar9;
    }
    *(float *)(param_1 + 0x2a0) = local_88;
    *(float *)(param_1 + 0x2a4) = local_84;
    *(float *)(param_1 + 0x2a8) = local_80;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  local_7c = (float)VectorSignedToFloat((int)*(short *)(local_4c + 10),(byte)(uVar7 >> 0x15) & 3);
  local_7c = local_7c * DAT_00132ac8;
  local_78 = (float)VectorSignedToFloat((int)*(short *)(local_4c + 0xc),(byte)(uVar7 >> 0x15) & 3);
  local_78 = local_78 * DAT_00132ac8;
  local_74 = (float)VectorSignedToFloat((int)*(short *)(local_4c + 0xe),(byte)(uVar7 >> 0x15) & 3);
  local_74 = local_74 * DAT_00132ac8;
  FUN_0035dba4(&local_88,&local_7c,&local_88);
  fVar9 = SQRT(local_88 * local_88 + local_84 * local_84 + local_80 * local_80);
  if (fVar9 == fVar1) {
    local_80 = fVar1;
    local_84 = fVar1;
    local_88 = fVar1;
  }
  else {
    local_88 = local_88 / fVar9;
    local_84 = local_84 / fVar9;
    local_80 = local_80 / fVar9;
  }
  *(float *)(param_1 + 0x2a0) = local_88;
  *(float *)(param_1 + 0x2a4) = local_84;
  *(float *)(param_1 + 0x2a8) = local_80;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
