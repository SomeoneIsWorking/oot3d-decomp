// OoT3D decomp @ 0033ba54  name=FUN_0033ba54  size=752

void FUN_0033ba54(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short sVar7;
  float *pfVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  undefined4 *local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 *local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 *local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;

  uVar3 = DAT_0033bd48;
  fVar2 = DAT_0033bd44;
  local_70 = DAT_0033bd44;
  local_6c = DAT_0033bd44;
  local_68 = DAT_0033bd44;
  local_7c = DAT_0033bd44;
  local_78 = DAT_0033bd44;
  local_74 = DAT_0033bd44;
  local_58 = (float)FUN_003738a8(DAT_0033bd48);
  local_58 = local_58 + *(float *)(param_1 + 0x28);
  fVar10 = (float)FUN_003738a8(DAT_0033bd4c);
  local_54 = fVar10 + DAT_0033bd50 + *(float *)(param_1 + 0x2c);
  local_50 = (float)FUN_003738a8(uVar3);
  local_b8 = &local_64;
  local_50 = local_50 + *(float *)(param_1 + 0x30);
  local_64 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1fa),(byte)(in_fpscr >> 0x15) & 3);
  local_60 = VectorSignedToFloat((int)*(short *)(param_1 + 0x1fc),(byte)(in_fpscr >> 0x15) & 3);
  local_5c = VectorSignedToFloat((int)*(short *)(param_1 + 0x1fe),(byte)(in_fpscr >> 0x15) & 3);
  FUN_0034de2c(param_2,0,0,700);
  if (*(short *)(param_1 + 0x1a8) == 2) {
    local_78 = DAT_0033bd54;
    local_b8 = (undefined4 *)&DAT_00000005;
    local_b4 = 2.8026e-45;
    FUN_0034ddc8(param_2,&local_64,&local_7c,&local_70);
  }
  uVar6 = DAT_0033bd68;
  puVar5 = DAT_0033bd64;
  uVar4 = DAT_0033bd60;
  fVar10 = DAT_0033bd5c;
  uVar3 = DAT_0033bd58;
  if ((*(short *)(param_1 + 0x1a8) == 3) && (iVar9 = 0, 0 < *(short *)(param_1 + 0x1b4))) {
    do {
      uVar1 = *(undefined2 *)(param_1 + 0x1b0);
      pfVar8 = (float *)(param_1 + 0x22c);
      FUN_00372224(&local_b8,param_1 + 0x148);
      sVar7 = 0;
      if (0 < *(short *)(param_1 + 0x1b4)) {
        do {
          if (*(char *)((int)pfVar8 + 0x12) == '\0') {
            *pfVar8 = local_58;
            pfVar8[1] = local_54;
            pfVar8[2] = local_50;
            *(undefined2 *)(pfVar8 + 3) = 100;
            *(undefined2 *)(pfVar8 + 4) = uVar1;
            pfVar8[10] = fVar2;
            pfVar8[9] = fVar2;
            pfVar8[8] = fVar2;
            *(undefined2 *)((int)pfVar8 + 0xe) = 0x2d;
            fVar11 = (float)FUN_003738a8(uVar3);
            fVar11 = fVar11 - fVar10;
            fVar12 = (float)FUN_003738a8(uVar4);
            puVar14 = puVar5;
            fVar13 = fVar2;
            if (fVar12 != fVar2) {
              fVar13 = (float)FUN_003727f0(fVar12);
              puVar14 = (undefined4 *)FUN_00372674(fVar12);
            }
            local_b4 = fVar2;
            local_98 = -fVar13;
            local_ac = fVar2;
            local_a4 = puVar5;
            local_a8 = fVar2;
            local_a0 = fVar2;
            local_9c = fVar2;
            local_94 = fVar2;
            local_8c = fVar2;
            local_b8 = puVar14;
            local_b0 = fVar13;
            local_90 = puVar14;
            if (fVar11 != fVar2) {
              fVar15 = (float)FUN_003727f0(fVar11);
              fVar16 = (float)FUN_00372674(fVar11);
              fVar13 = local_b0 * fVar15;
              local_b0 = local_b0 * fVar16 - local_b4 * fVar15;
              fVar11 = local_a0 * fVar15;
              local_a0 = local_a0 * fVar16 - (float)local_a4 * fVar15;
              fVar12 = (float)local_90 * fVar15;
              local_90 = (undefined4 *)((float)local_90 * fVar16 - local_94 * fVar15);
              local_b4 = local_b4 * fVar16 + fVar13;
              local_a4 = (undefined4 *)((float)local_a4 * fVar16 + fVar11);
              local_94 = local_94 * fVar16 + fVar12;
            }
            local_84 = fVar2;
            local_88 = fVar2;
            local_80 = uVar6;
            FUN_003735ac(pfVar8 + 5,&local_b8,&local_88);
            *(undefined1 *)((int)pfVar8 + 0x12) = 1;
            break;
          }
          sVar7 = sVar7 + 1;
          pfVar8 = pfVar8 + 0xb;
        } while (sVar7 < *(short *)(param_1 + 0x1b4));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(short *)(param_1 + 0x1b4));
  }
  return;
}
