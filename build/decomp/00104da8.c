// OoT3D decomp @ 00104da8  name=FUN_00104da8  size=1240

undefined4
FUN_00104da8(float param_1,float param_2,float param_3,int param_4,int param_5,undefined4 *param_6,
            int param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined1 auStack_194 [192];
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;

  fVar4 = DAT_001051b0;
  local_8c = 0;
  local_a4 = *DAT_001051b4;
  uStack_a0 = DAT_001051b4[1];
  uStack_9c = DAT_001051b4[2];
  uStack_98 = DAT_001051b4[3];
  uStack_94 = DAT_001051b4[4];
  local_90 = DAT_001051b4[5];
  local_d4 = (float)DAT_001051b4[6];
  local_d0 = (float)DAT_001051b4[7];
  local_cc = (float)DAT_001051b4[8];
  local_c8 = (float)DAT_001051b4[9];
  local_c4 = (float)DAT_001051b4[10];
  local_c0 = (float)DAT_001051b4[0xb];
  local_bc = (float)DAT_001051b4[0xc];
  local_b8 = (float)DAT_001051b4[0xd];
  local_b4 = (float)DAT_001051b4[0xe];
  local_b0 = (float)DAT_001051b4[0xf];
  local_ac = (float)DAT_001051b4[0x10];
  local_a8 = (float)DAT_001051b4[0x11];
  FUN_00371738(auStack_194,DAT_001051b8,0xc0);
  uVar6 = DAT_001051c0;
  fVar5 = DAT_001051bc;
  local_b0 = local_b0 * param_3;
  local_ac = local_ac * param_2;
  local_a8 = local_a8 * param_2;
  local_bc = local_bc * param_2;
  local_b8 = local_b8 * param_3;
  local_b4 = local_b4 * param_3;
  local_c8 = local_c8 * param_2;
  local_c4 = local_c4 * param_3;
  local_c0 = local_c0 * param_3;
  local_d4 = local_d4 * param_3;
  local_d0 = local_d0 * param_2;
  local_cc = local_cc * param_2;
  local_88 = 0;
  if (0 < param_7) {
    param_1 = param_1 * DAT_001051c4;
    local_78 = param_4 + 0x208c;
    local_198 = param_4;
    do {
      sVar7 = *(short *)(param_5 + 0x36);
      local_1d4 = *(undefined4 *)(param_5 + 0x28);
      local_1c4 = *(undefined4 *)(param_5 + 0x2c);
      local_1b4 = *(undefined4 *)(param_5 + 0x30);
      if (sVar7 < 0) {
        sVar7 = -sVar7;
      }
      sVar3 = (short)local_8c;
      local_1e0 = 1.0;
      local_1dc = 0.0;
      local_1c8 = 0.0;
      local_1d8 = 0.0;
      local_1d0 = 0.0;
      local_1c0 = 0.0;
      local_1bc = 0.0;
      local_1cc = 1.0;
      local_1b8 = 1.0;
      sVar1 = *(short *)(param_5 + 0x34);
      sVar2 = *(short *)(param_5 + 0x36);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_5 + 0x38),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * fVar5;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar4) << 0x1e;
      local_1a4 = local_1d4;
      local_1a0 = local_1c4;
      local_19c = local_1b4;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar12 = (float)FUN_003727f0(fVar11);
        fVar13 = (float)FUN_00372674(fVar11);
        fVar11 = local_1dc * fVar12;
        local_1dc = local_1dc * fVar13 - local_1e0 * fVar12;
        fVar14 = local_1cc * fVar12;
        local_1cc = local_1cc * fVar13 - local_1d0 * fVar12;
        fVar15 = local_1bc * fVar12;
        local_1bc = local_1bc * fVar13 - local_1c0 * fVar12;
        local_1e0 = local_1e0 * fVar13 + fVar11;
        local_1d0 = local_1d0 * fVar13 + fVar14;
        local_1c0 = local_1c0 * fVar13 + fVar15;
      }
      if (sVar2 != 0) {
        fVar11 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * fVar5;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar14 = (float)FUN_003727f0(fVar11);
          fVar11 = (float)FUN_00372674(fVar11);
          fVar15 = local_1e0 * fVar14;
          local_1e0 = local_1e0 * fVar11 - local_1d8 * fVar14;
          local_1d8 = fVar15 + local_1d8 * fVar11;
          fVar15 = local_1d0 * fVar14;
          local_1d0 = local_1d0 * fVar11 - local_1c8 * fVar14;
          local_1c8 = fVar15 + local_1c8 * fVar11;
          fVar15 = local_1c0 * fVar14;
          local_1c0 = local_1c0 * fVar11 - local_1b8 * fVar14;
          local_1b8 = fVar15 + local_1b8 * fVar11;
        }
      }
      if (sVar1 != 0) {
        fVar11 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * fVar5;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar12 = (float)FUN_003727f0(fVar11);
          fVar13 = (float)FUN_00372674(fVar11);
          fVar11 = local_1d8 * fVar12;
          local_1d8 = local_1d8 * fVar13 - local_1dc * fVar12;
          fVar14 = local_1c8 * fVar12;
          local_1c8 = local_1c8 * fVar13 - local_1cc * fVar12;
          fVar15 = local_1b8 * fVar12;
          local_1b8 = local_1b8 * fVar13 - local_1bc * fVar12;
          local_1dc = local_1dc * fVar13 + fVar11;
          local_1cc = local_1cc * fVar13 + fVar14;
          local_1bc = local_1bc * fVar13 + fVar15;
        }
      }
      local_1b0 = *param_6;
      local_1ac = param_6[1];
      local_1a8 = param_6[2];
      FUN_00372070(&local_1e0,&local_1e0,&local_1b0);
      uVar10 = 3;
      do {
        iVar9 = 3;
        do {
          FUN_003735ac(&local_84,&local_1e0,auStack_194 + (iVar9 + uVar10 * 4) * 0xc);
          fVar11 = (float)FUN_003738a8(uVar6);
          fVar11 = fVar11 + local_7c;
          fVar14 = (float)FUN_003738a8(uVar6);
          fVar14 = fVar14 + local_80;
          fVar15 = (float)FUN_003738a8(uVar6);
          iVar8 = iVar9 * 6;
          iVar8 = z_actor_003738d0(fVar15 + local_84,fVar14,fVar11,local_78,local_198,0x39,
                                   (int)*(short *)((int)&local_a4 + iVar8),
                                   (int)(short)(*(short *)((int)&local_a4 + iVar8 + 2) +
                                               sVar7 + sVar3),
                                   (int)*(short *)((int)&uStack_a0 + iVar8),0xb,1);
          if ((uVar10 & 1) == 0) {
            FUN_0037378c(param_1,param_4,&local_84,1,0x28a,0x96,1);
          }
          if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      local_88 = local_88 + 1;
      local_8c = (int)(short)((short)local_8c + 0x4000);
    } while (local_88 < param_7);
  }
  return 0;
}
