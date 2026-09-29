// OoT3D decomp @ 0038f320  name=FUN_0038f320  size=1500

void FUN_0038f320(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_68;
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

  fVar1 = DAT_0038f714;
  fVar10 = DAT_0038f710;
  iVar7 = 0xff;
  fVar5 = param_3[0xf];
  if (fVar5 == 0.0) {
    local_5c = *param_3;
    local_4c = param_3[1];
    local_3c = param_3[2];
  }
  else {
    fVar6 = *(float *)((int)fVar5 + 100);
    fVar8 = *(float *)((int)fVar5 + 0x68);
    param_3[0xb] = *(float *)((int)fVar5 + 0x60);
    param_3[0xc] = fVar6;
    param_3[0xd] = fVar8;
    sVar2 = *(short *)((int)param_3 + 0x4e);
    if (sVar2 < 0) {
      fVar5 = param_3[0xf];
      local_5c = *param_3 + *(float *)((int)fVar5 + 0x28);
      local_4c = param_3[1] + *(float *)((int)fVar5 + 0x2c);
      local_3c = param_3[2] + *(float *)((int)fVar5 + 0x30);
    }
    else {
      iVar4 = *(int *)(DAT_0038f718 + param_1);
      FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
      fVar6 = (float)FUN_002cfca0();
      fVar5 = DAT_0038f71c;
      iVar7 = iVar4 + sVar2 * 0xc;
      *param_3 = *(float *)(iVar7 + 0x2340) - fVar6 * DAT_0038f71c;
      param_3[1] = *(float *)(iVar7 + 0x2344);
      FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
      fVar6 = (float)FUN_00338f60();
      local_3c = *(float *)(iVar7 + 0x2348) - fVar6 * fVar5;
      param_3[2] = local_3c;
      local_5c = *param_3;
      local_4c = param_3[1];
      if ((*(char *)(DAT_0038f720 + iVar4) == '\0') && (5 < *(short *)(param_3 + 0x18))) {
        *(undefined2 *)(param_3 + 0x18) = 5;
      }
      iVar7 = 0xff;
      if (*(short *)(param_3 + 0x18) < 5) {
        fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x18),
                                           (byte)(in_fpscr >> 0x15) & 3);
        iVar7 = (int)(short)(int)(fVar5 * DAT_0038f724 * DAT_0038f728);
      }
    }
  }
  local_40 = 1.0;
  local_44 = 0.0;
  local_48 = 0.0;
  local_50 = 0.0;
  local_54 = 1.0;
  local_58 = 0.0;
  local_60 = 0.0;
  local_64 = 0.0;
  local_68 = 1.0;
  sVar2 = FUN_003758b0(param_3[0xd] - fVar10,param_3[0xb] - fVar10);
  sVar3 = FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
  fVar6 = (float)FUN_00338f60((int)(short)(sVar2 - sVar3));
  fVar8 = (float)FUN_002cfca0((int)(short)(sVar2 - sVar3));
  fVar5 = DAT_0038f72c;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = SQRT((param_3[0xb] - fVar10) * (param_3[0xb] - fVar10) +
                (param_3[0xd] - fVar10) * (param_3[0xd] - fVar10)) / (fVar13 * DAT_0038f72c);
  sVar2 = FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(param_1 + 0xa64) * 4 + 0xa54));
  fVar13 = (float)VectorSignedToFloat((int)(short)(sVar2 + -0x8000),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * DAT_0038f730;
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar10) << 0x1e;
  if (!SUB41(uVar9 >> 0x1e,0)) {
    fVar10 = (float)FUN_003727f0(fVar13);
    fVar13 = (float)FUN_00372674(fVar13);
    fVar14 = local_68 * fVar10;
    local_68 = local_68 * fVar13 - local_60 * fVar10;
    local_60 = fVar14 + local_60 * fVar13;
    fVar14 = local_58 * fVar10;
    local_58 = local_58 * fVar13 - local_50 * fVar10;
    local_50 = fVar14 + local_50 * fVar13;
    fVar14 = local_48 * fVar10;
    local_48 = local_48 * fVar13 - local_40 * fVar10;
    local_40 = fVar14 + local_40 * fVar13;
  }
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x12),(byte)(uVar9 >> 0x15) & 3);
  fVar8 = fVar13 * fVar8 * fVar15 * DAT_0038f734;
  uVar9 = uVar9 & 0xfffffff | (uint)(fVar8 == fVar10) << 0x1e;
  if (!SUB41(uVar9 >> 0x1e,0)) {
    fVar11 = (float)FUN_003727f0(fVar8);
    fVar12 = (float)FUN_00372674(fVar8);
    fVar8 = local_64 * fVar11;
    local_64 = local_64 * fVar12 - local_68 * fVar11;
    fVar13 = local_54 * fVar11;
    local_54 = local_54 * fVar12 - local_58 * fVar11;
    fVar14 = local_44 * fVar11;
    local_44 = local_44 * fVar12 - local_48 * fVar11;
    local_68 = local_68 * fVar12 + fVar8;
    local_58 = local_58 * fVar12 + fVar13;
    local_48 = local_48 * fVar12 + fVar14;
  }
  fVar8 = DAT_0038f930;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(uVar9 >> 0x15) & 3);
  fVar13 = fVar13 * DAT_0038f924 * fVar1;
  fVar14 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4a),(byte)(uVar9 >> 0x15) & 3
                                     );
  fVar6 = fVar1 + fVar14 * DAT_0038f928 * ABS(fVar6) * fVar15;
  local_68 = local_68 * fVar13 * fVar1;
  if ((int)fVar6 < DAT_0038f92c) {
    fVar6 = fVar5;
  }
  local_58 = local_58 * fVar13 * fVar1;
  local_48 = local_48 * fVar13 * fVar1;
  fVar5 = fVar1 / fVar6;
  local_64 = local_64 * fVar13 * fVar6;
  local_54 = local_54 * fVar13 * fVar6;
  local_44 = local_44 * fVar13 * fVar6;
  local_60 = local_60 * fVar13 * fVar5;
  local_50 = local_50 * fVar13 * fVar5;
  local_40 = local_40 * fVar13 * fVar5;
  iVar4 = FUN_003695f8();
  if (iVar4 != 0) {
    fVar8 = fVar10;
  }
  fVar5 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  *(float *)(*(int *)((int)param_3[0x1b] + 0xc) + 0xc) = fVar8;
  fVar10 = DAT_0038f934;
  fVar6 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  FUN_003695cc(fVar8 * DAT_0038f934,fVar6 * DAT_0038f934,fVar5 * DAT_0038f934,fVar1,param_3[0x1b],0,
               4,1);
  fVar5 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(uVar9 >> 0x15) & 3);
  FUN_003695cc(fVar8 * fVar10,fVar6 * fVar10,fVar5 * fVar10,fVar1,param_3[0x1b],1,4);
  *(undefined1 *)((int)param_3[0x1b] + 0xac) = 1;
  FUN_003721e0(param_3[0x1b],&local_68);
  FUN_00372170(param_3[0x1b],0);
  return;
}
