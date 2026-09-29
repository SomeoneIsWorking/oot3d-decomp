// OoT3D decomp @ 0031f978  name=FUN_0031f978  size=948

void FUN_0031f978(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float local_84;
  undefined4 uStack_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;

  if (param_4 < 4) {
    local_60 = 4;
    param_4 = 4 - param_4;
  }
  else {
    local_60 = 0x36 - param_4;
    if (4 < local_60) {
      local_60 = 4;
    }
    param_4 = 0;
  }
  fVar15 = (float)FUN_002cfca0(param_3);
  fVar16 = (float)FUN_00338f60(param_3);
  uVar3 = DAT_0031fd34;
  uVar2 = DAT_0031fd30;
  if (((*DAT_0031fd2c & 1) == 0) &&
     (iVar12 = FUN_003679b4(DAT_0031fd2c), puVar4 = DAT_0031fd38, iVar12 != 0)) {
    *DAT_0031fd38 = uVar2;
    puVar4[1] = uVar3;
    puVar4[2] = uVar3;
    puVar4[3] = uVar3;
    puVar4[4] = uVar3;
    puVar4[5] = uVar2;
    puVar4[6] = uVar3;
    puVar4[7] = uVar3;
    puVar4[8] = uVar3;
    puVar4[9] = uVar3;
    puVar4[10] = uVar2;
    puVar4[0xb] = uVar3;
  }
  FUN_00372224(&local_90,DAT_0031fd38);
  sVar11 = FUN_0036e70c(*(undefined4 *)(param_1 + *(short *)(DAT_0031fd3c + param_1) * 4 + 0xa54));
  fVar10 = DAT_0031fd58;
  fVar9 = DAT_0031fd54;
  fVar8 = DAT_0031fd50;
  fVar7 = DAT_0031fd4c;
  fVar6 = DAT_0031fd48;
  fVar5 = DAT_0031fd44;
  if (DAT_0031fd40 < (int)(short)(sVar11 - (short)param_3) + 0x3fffU) {
    if (param_4 < local_60) {
      local_5c = param_2 + 0x100;
      do {
        iVar12 = FUN_003695f8();
        uVar1 = uVar2;
        if (iVar12 != 0) {
          uVar1 = uVar3;
        }
        iVar12 = (int)(short)((short)param_4 + 1);
        if (iVar12 != 4) {
          iVar13 = param_2 + (param_5 + param_4) * 4;
          fVar18 = (float)VectorSignedToFloat(4 - *(short *)(local_5c + 200),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar17 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar17 = fVar17 + fVar18 * fVar5;
          local_90 = fVar7 + fVar17 * fVar6;
          fVar18 = fVar9 + local_90 * fVar17 * fVar8;
          local_84 = *(float *)(param_2 + 0x28) + fVar18 * fVar15;
          local_74 = *(float *)(param_2 + 0x2c) + fVar10 + fVar17 * fVar6;
          local_64 = *(float *)(param_2 + 0x30) + fVar18 * fVar16;
          local_7c = local_90;
          local_68 = local_90;
          if (*(int *)(iVar13 + 0x3cc) != 0) {
            uStack_bc = uStack_8c;
            uStack_b8 = uStack_88;
            uStack_b0 = uStack_80;
            local_a8 = local_78;
            uStack_a0 = uStack_70;
            uStack_9c = uStack_6c;
            local_c0 = local_90;
            fStack_b4 = local_84;
            fStack_ac = local_90;
            local_a4 = local_74;
            fStack_98 = local_90;
            fStack_94 = local_64;
            FUN_00371fac(&local_c0,param_1 + 0x2fc);
            *(undefined1 *)(*(int *)(iVar13 + 0x3cc) + 0xac) = 1;
            FUN_003721e0(*(undefined4 *)(iVar13 + 0x3cc),&local_c0);
            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x3cc) + 0xc) + 0xc) = uVar1;
            FUN_00372170(*(undefined4 *)(iVar13 + 0x3cc),0);
          }
        }
        param_4 = param_4 + 1;
      } while (param_4 < local_60);
      return;
    }
  }
  else {
    iVar12 = local_60 + -1;
    if (param_4 <= iVar12) {
      local_58 = param_2 + 0x100;
      do {
        iVar13 = FUN_003695f8();
        uVar1 = uVar2;
        if (iVar13 != 0) {
          uVar1 = uVar3;
        }
        iVar13 = (int)(short)((short)iVar12 + 1);
        if (iVar13 != 4) {
          iVar14 = param_2 + (param_5 + iVar12) * 4;
          fVar18 = (float)VectorSignedToFloat(4 - *(short *)(local_58 + 200),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar17 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
          fVar17 = fVar17 + fVar18 * fVar5;
          local_90 = fVar7 + fVar17 * fVar6;
          fVar18 = fVar9 + local_90 * fVar17 * fVar8;
          local_84 = *(float *)(param_2 + 0x28) + fVar18 * fVar15;
          local_74 = *(float *)(param_2 + 0x2c) + fVar10 + fVar17 * fVar6;
          local_64 = *(float *)(param_2 + 0x30) + fVar18 * fVar16;
          local_7c = local_90;
          local_68 = local_90;
          if (*(int *)(iVar14 + 0x3cc) != 0) {
            uStack_bc = uStack_8c;
            uStack_b8 = uStack_88;
            uStack_b0 = uStack_80;
            local_a8 = local_78;
            uStack_a0 = uStack_70;
            uStack_9c = uStack_6c;
            local_c0 = local_90;
            fStack_b4 = local_84;
            fStack_ac = local_90;
            local_a4 = local_74;
            fStack_98 = local_90;
            fStack_94 = local_64;
            FUN_00371fac(&local_c0,param_1 + 0x2fc);
            *(undefined1 *)(*(int *)(iVar14 + 0x3cc) + 0xac) = 1;
            FUN_003721e0(*(undefined4 *)(iVar14 + 0x3cc),&local_c0);
            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x3cc) + 0xc) + 0xc) = uVar1;
            FUN_00372170(*(undefined4 *)(iVar14 + 0x3cc),0);
          }
        }
        iVar12 = iVar12 + -1;
      } while (param_4 <= iVar12);
    }
  }
  return;
}
