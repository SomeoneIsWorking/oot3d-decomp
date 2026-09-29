// OoT3D decomp @ 003a9658  name=FUN_003a9658  size=1204

void FUN_003a9658(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
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
  float fStack_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;

  (**(code **)(DAT_003a9a9c + (uint)*(byte *)(param_2 + 0x261) * 4))(param_1,param_2);
  local_48 = 0;
  if ((*(ushort *)(param_2 + 0x248) & 4) != 0) {
    pfVar6 = (float *)FUN_00333270(*(undefined4 *)(param_2 + 0x26c));
    puVar7 = DAT_003a9aa0;
    if (*(char *)(param_2 + 0x282) == '\0') {
      puVar7 = (undefined4 *)FUN_003331ec(*(undefined4 *)(param_2 + 0x26c));
    }
    fVar5 = DAT_003a9ab0;
    uVar4 = DAT_003a9aac;
    fVar3 = DAT_003a9aa8;
    fVar2 = DAT_003a9aa4;
    iVar12 = 0;
    local_48 = (uint)*(byte *)(param_2 + 0x25e) * 8 + -8;
    if (0 < (int)(*(byte *)(param_2 + 0x25e) - 1)) {
      do {
        fVar17 = (pfVar6[1] + pfVar6[4]) * fVar2;
        fVar16 = (*pfVar6 + pfVar6[3]) * fVar2;
        fVar18 = (pfVar6[2] + pfVar6[5]) * fVar2;
        local_60 = (pfVar6[6] + pfVar6[9]) * fVar2 - fVar16;
        fStack_5c = (pfVar6[7] + pfVar6[10]) * fVar2 - fVar17;
        fStack_58 = (pfVar6[8] + pfVar6[0xb]) * fVar2 - fVar18;
        fVar13 = local_60 * local_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58;
        local_54 = local_60;
        local_50 = fStack_5c;
        local_4c = fStack_58;
        if (DAT_003a9ab4 < (int)ABS(fVar13)) {
          local_6c = fVar3 / SQRT(fVar13);
          local_74 = local_60 * local_6c;
          local_70 = fStack_5c * local_6c;
          local_6c = fStack_58 * local_6c;
          FUN_0036c258(uVar4,&local_64,&local_68);
          iVar11 = 0;
          fVar13 = fVar3 - local_68;
          local_98 = fVar3 / SQRT(local_74 * local_74 + local_70 * local_70 + local_6c * local_6c);
          fVar15 = local_74 * local_98;
          fVar14 = local_70 * local_98;
          local_98 = local_6c * local_98;
          local_ac = fVar13 * fVar15 * fVar14;
          local_9c = local_68 + fVar13 * fVar14 * fVar14;
          local_b0 = local_68 + fVar13 * fVar15 * fVar15;
          local_a8 = fVar13 * fVar15 * local_98;
          local_88 = local_68 + fVar13 * local_98 * local_98;
          local_a0 = local_ac + local_64 * local_98;
          local_ac = local_ac - local_64 * local_98;
          local_98 = fVar13 * fVar14 * local_98;
          local_90 = local_a8 - local_64 * fVar14;
          local_a8 = local_a8 + local_64 * fVar14;
          local_8c = local_98 + local_64 * fVar15;
          local_a4 = fVar5;
          local_98 = local_98 - local_64 * fVar15;
          local_94 = fVar5;
          local_84 = fVar5;
          do {
            local_80 = *pfVar6 - fVar16;
            pfVar8 = pfVar6 + 1;
            pfVar1 = pfVar6 + 2;
            pfVar6 = pfVar6 + 3;
            local_7c = *pfVar8 - fVar17;
            local_78 = *pfVar1 - fVar18;
            FUN_003735ac(&local_80,&local_b0,&local_80);
            iVar11 = iVar11 + 1;
            local_80 = local_80 + fVar16;
            local_7c = local_7c + fVar17;
            local_78 = local_78 + fVar18;
            **(float **)(param_2 + 0x274) = local_80;
            pfVar8 = (float *)(*(int *)(param_2 + 0x274) + 4);
            *(float **)(param_2 + 0x274) = pfVar8;
            *pfVar8 = local_7c;
            pfVar8 = (float *)(*(int *)(param_2 + 0x274) + 4);
            *(float **)(param_2 + 0x274) = pfVar8;
            *pfVar8 = local_78;
            *(int *)(param_2 + 0x274) = *(int *)(param_2 + 0x274) + 4;
            **(undefined4 **)(param_2 + 0x278) = *puVar7;
            puVar9 = (undefined4 *)(*(int *)(param_2 + 0x278) + 4);
            *(undefined4 **)(param_2 + 0x278) = puVar9;
            *puVar9 = puVar7[1];
            puVar9 = (undefined4 *)(*(int *)(param_2 + 0x278) + 4);
            *(undefined4 **)(param_2 + 0x278) = puVar9;
            *puVar9 = puVar7[2];
            puVar10 = (undefined4 *)(*(int *)(param_2 + 0x278) + 4);
            *(undefined4 **)(param_2 + 0x278) = puVar10;
            puVar9 = puVar7 + 3;
            puVar7 = puVar7 + 4;
            *puVar10 = *puVar9;
            *(int *)(param_2 + 0x278) = *(int *)(param_2 + 0x278) + 4;
            *(short *)(param_2 + 0x280) = *(short *)(param_2 + 0x280) + 1;
          } while (iVar11 < 4);
        }
        else {
          pfVar6 = pfVar6 + 0xc;
          puVar7 = puVar7 + 0x10;
          local_74 = local_60;
          local_70 = fStack_5c;
          local_6c = fStack_58;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)(*(byte *)(param_2 + 0x25e) - 1));
    }
  }
  if (3 < *(ushort *)(param_2 + 0x280)) {
    if (*(char *)(param_2 + 0x282) != '\0') {
      if ((*(ushort *)(param_2 + 0x248) & 4) != 0) {
        local_88 = *DAT_003a9ab8;
        local_84 = DAT_003a9ab8[1];
        local_80 = DAT_003a9ab8[2];
        local_7c = DAT_003a9ab8[3];
        FUN_00317d1c(*(undefined4 *)(param_2 + 0x26c),(uint)*(ushort *)(param_2 + 0x280) << 3,
                     DAT_003a9abc);
        FUN_0040fdf8(*(undefined4 *)(param_2 + 0x26c),0x10,&local_88,local_48 << 2);
      }
      local_78 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0x262),(byte)(in_fpscr >> 0x15) & 3);
      local_74 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0x263),(byte)(in_fpscr >> 0x15) & 3);
      local_70 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0x264),(byte)(in_fpscr >> 0x15) & 3);
      local_6c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_2 + 0x265),(byte)(in_fpscr >> 0x15) & 3);
      local_78 = local_78 * DAT_003a9ac0;
      local_74 = local_74 * DAT_003a9ac0;
      local_70 = local_70 * DAT_003a9ac0;
      local_6c = local_6c * DAT_003a9ac0;
      iVar12 = *(int *)(param_2 + 0x270);
      *(float *)(iVar12 + 0xf0) = local_78;
      *(float *)(iVar12 + 0xf4) = local_74;
      *(float *)(iVar12 + 0xf8) = local_70;
      *(float *)(iVar12 + 0xfc) = local_6c;
    }
    FUN_00333294(*(undefined4 *)(param_2 + 0x270),(uint)(*(ushort *)(param_2 + 0x280) >> 2) * 6 + -2
                );
    *(undefined4 *)(*(int *)(param_2 + 0x270) + 0x170) = 1;
    FUN_003330d4(param_2);
    return;
  }
  FUN_00333294(*(undefined4 *)(param_2 + 0x270),0);
  *(undefined4 *)(*(int *)(param_2 + 0x270) + 0x170) = 0;
  return;
}
