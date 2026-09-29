// OoT3D decomp @ 0047a5cc  name=FUN_0047a5cc  size=752

void FUN_0047a5cc(int param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte *pbVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;

  fVar13 = DAT_0047a8ec;
  fVar12 = DAT_0047a8e8;
  fVar11 = DAT_0047a8e4;
  uVar10 = DAT_0047a8e0;
  fVar9 = DAT_0047a8dc;
  fVar8 = DAT_0047a8d8;
  fVar7 = DAT_0047a8d4;
  fVar6 = DAT_0047a8d0;
  fVar5 = DAT_0047a8cc;
  fVar4 = DAT_0047a8c8;
  fVar3 = DAT_0047a8c4;
  fVar2 = DAT_0047a8c0;
  iVar17 = 0;
  puVar16 = *(undefined4 **)(param_1 + 0xa70);
  local_90[0] = *DAT_0047a8bc;
  local_90[1] = DAT_0047a8bc[1];
  local_90[2] = DAT_0047a8bc[2];
  if (puVar16 != (undefined4 *)0x0) {
    do {
      pbVar14 = (byte *)*puVar16;
      if ((1 < *pbVar14) && (pbVar14[0x13] != 0)) {
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(pbVar14 + 0x14) *
                                            (int)*(short *)(pbVar14 + 0x14),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (0x47 < iVar17) break;
        local_b4 = *(float *)(pbVar14 + 4);
        local_b0 = *(float *)(pbVar14 + 8);
        local_ac = *(float *)(pbVar14 + 0xc);
        fVar21 = fVar18 * fVar7 * fVar8;
        fVar18 = (float)VectorUnsignedToFloat((uint)pbVar14[0x10],(byte)(in_fpscr >> 0x15) & 3);
        local_60 = uVar10;
        fVar19 = (float)VectorUnsignedToFloat((uint)pbVar14[0x11],(byte)(in_fpscr >> 0x15) & 3);
        fVar20 = (float)VectorUnsignedToFloat((uint)pbVar14[0x12],(byte)(in_fpscr >> 0x15) & 3);
        local_6c = fVar18 * fVar9 * fVar11;
        local_64 = fVar20 * fVar9 * fVar11;
        local_68 = fVar19 * fVar9 * fVar11;
        local_90[3] = *(float *)(param_1 + 0x1b8) - local_b4;
        local_80 = *(float *)(param_1 + 0x1bc) - local_b0;
        local_7c = *(float *)(param_1 + 0x1c0) - local_ac;
        fVar19 = local_90[3] * local_90[3] + local_80 * local_80;
        fVar18 = SQRT(fVar19 + local_7c * local_7c);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(fVar18 == fVar12) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar19 = fVar19 + local_7c * local_7c;
          in_fpscr = uVar1 | (uint)(fVar19 == fVar12) << 0x1e;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            local_90[3] = fVar12;
            local_80 = fVar12;
            local_7c = fVar12;
          }
          else {
            fVar19 = fVar6 / SQRT(fVar19);
            local_90[3] = local_90[3] * fVar19;
            local_80 = local_80 * fVar19;
            local_7c = local_7c * fVar19;
          }
          fVar19 = fVar3;
          if ((DAT_0047a8f0 <= (int)fVar18) && (fVar19 = fVar18, DAT_0047a8f4 < (int)fVar18)) {
            fVar19 = fVar4;
          }
          iVar15 = 0;
          fVar19 = fVar5 + (fVar19 - fVar3) * fVar13 * DAT_0047a8f8;
          fVar18 = (float)VectorSignedToFloat((int)*(short *)(pbVar14 + 0x14),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar18 = fVar18 * fVar2 * fVar19;
          local_90[3] = local_90[3] * fVar18;
          local_80 = local_80 * fVar18;
          local_7c = local_7c * fVar18;
          do {
            fStack_a0 = fVar6 - local_90[iVar15] * fVar19;
            local_a8 = fVar21 * fStack_a0;
            fStack_a4 = fVar21 * fStack_a0;
            fStack_a0 = fVar21 * fStack_a0;
            local_9c = local_a8;
            local_98 = fStack_a4;
            local_94 = fStack_a0;
            local_78 = local_a8;
            fStack_74 = fStack_a4;
            fStack_70 = fStack_a0;
            FUN_00371f1c(*(undefined4 *)(param_1 + 0xa8c),&local_b4,0,&local_78,&local_6c,0);
            iVar15 = iVar15 + 1;
            local_b4 = local_b4 + local_90[3];
            local_b0 = local_b0 + local_80;
            local_ac = local_ac + local_7c;
          } while (iVar15 < 3);
          iVar17 = iVar17 + 1;
        }
      }
      puVar16 = (undefined4 *)puVar16[2];
    } while (puVar16 != (undefined4 *)0x0);
    if (iVar17 != 0) {
      FUN_00371eac(*(undefined4 *)(param_1 + 0xa8c),0);
    }
  }
  return;
}
