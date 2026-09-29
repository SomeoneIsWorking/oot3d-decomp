// OoT3D decomp @ 001cbf9c  name=FUN_001cbf9c  size=690

/* WARNING: Instruction at (ram,0x001cc224) overlaps instruction at (ram,0x001cc222)
    */

float FUN_001cbf9c(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_pc;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr9;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_9c;
  float local_98;
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
  float local_5c;
  float local_58;
  float local_54;
  int local_50 [3];

  fVar9 = DAT_001cc33c;
  fVar8 = DAT_001cc330;
  local_50[0] = *(int *)(param_1 + 0x5f8);
  local_50[1] = *(undefined4 *)(param_1 + 0x5fc);
  local_50[2] = *(undefined4 *)(param_1 + 0x600);
  local_8c = *(float *)(param_1 + 0x28);
  local_58 = *(float *)(param_1 + 0x3a0) * DAT_001cc338;
  local_88 = *(float *)(param_1 + 0x2c);
  local_84 = *(float *)(param_1 + 0x30);
  if (*(int *)(param_1 + 600) == DAT_001cc334) {
    iVar7 = 2;
  }
  else {
    iVar7 = 3;
  }
  local_80 = local_58 * 1.0;
  local_70 = local_58 * 0.0;
  local_60 = local_58 * 0.0;
  local_7c = local_58 * 0.0;
  local_6c = local_58 * 1.0;
  local_5c = local_58 * 0.0;
  local_78 = local_58 * 0.0;
  local_68 = local_58 * 0.0;
  local_58 = local_58 * 1.0;
  fVar4 = (float)(uint)*(ushort *)(param_1 + 0x11a);
  fVar12 = DAT_001cc330;
  if (fVar4 != 0.0) {
    fVar12 = *(float *)(param_1 + 0x3a0) * DAT_001cc33c;
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x28);
    *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x2c) - fVar12;
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x30);
  }
  fVar3 = DAT_001cc344;
  fVar2 = DAT_001cc340;
  iVar6 = 0;
  local_74 = local_8c;
  local_64 = local_88;
  local_54 = local_84;
  if (iVar7 != 0) {
    do {
      iVar5 = param_1 + iVar6 * 2;
      fVar4 = (float)FUN_002cfca0((int)*(short *)(iVar5 + 0x262));
      local_64 = local_64 + *(float *)(param_1 + 0x3a0) * fVar4 * fVar9;
      fVar4 = (float)FUN_00338f60((int)*(short *)(iVar5 + 0x262));
      fVar13 = fVar4 * fVar9 * *(float *)(param_1 + 0x3a0);
      fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      local_74 = local_74 - fVar13 * fVar4;
      fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      local_54 = local_54 - fVar13 * fVar4;
      FUN_00372224(&local_b0,&local_80);
      iVar5 = (int)*(short *)(iVar5 + 0x262);
      if (*(short *)(param_1 + 0xbe) != 0) {
        fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar4 = fVar4 * fVar2;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 == fVar8) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar8 = (float)FUN_003727f0(fVar4);
          fVar9 = (float)FUN_00372674(fVar4);
          coprocessor_storelong(0,in_cr0,&local_b0);
          coprocessor_loadlong(0,in_cr0,iVar5 + 0x1c);
          coprocessor_movefromRt(1,5,6,in_cr8,in_cr9);
          coprocessor_loadlong(3,in_cr0,unaff_pc + 0x3d8);
          return local_b0 * fVar9 - local_a8 * fVar8;
        }
      }
      if (iVar5 != 0) {
        fVar4 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar4 = fVar4 * fVar2;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 == fVar8) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar10 = (float)FUN_003727f0(fVar4);
          fVar11 = (float)FUN_00372674(fVar4);
          fVar4 = local_a8 * fVar10;
          local_a8 = local_a8 * fVar11 - fStack_ac * fVar10;
          fVar13 = local_98 * fVar10;
          local_98 = local_98 * fVar11 - fStack_9c * fVar10;
          fVar1 = local_88 * fVar10;
          local_88 = local_88 * fVar11 - local_8c * fVar10;
          fStack_ac = fStack_ac * fVar11 + fVar4;
          fStack_9c = fStack_9c * fVar11 + fVar13;
          local_8c = local_8c * fVar11 + fVar1;
        }
      }
      *(undefined1 *)(local_50[iVar6] + 0xac) = 1;
      FUN_003721e0(local_50[iVar6],&local_b0);
      FUN_00372170(local_50[iVar6],0);
      FUN_00357750(iVar6 * 2 + 0x33,param_1 + 0x3a8,&local_b0);
      fVar4 = (float)FUN_00357750(iVar6 * 2 + 0x34,param_1 + 0x3a8,&local_b0);
      if (iVar6 == 0) {
        if (*(int *)(param_1 + 600) == iRam001cc348) {
          *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
          *(float *)(param_1 + 0x40) =
               *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3a0) * fVar3;
          fVar4 = *(float *)(param_1 + 0x10);
        }
        else {
          *(float *)(param_1 + 0x3c) = local_74;
          *(float *)(param_1 + 0x40) = local_64;
          fVar4 = local_54;
        }
        *(float *)(param_1 + 0x44) = fVar4;
code_r0x001cc378:
        fVar4 = 0.0;
        if (*(short *)(param_1 + 0x11a) != 0) {
          fVar4 = (float)(param_1 + iVar6 * 0xc);
          *(float *)((int)fVar4 + 0x1a4) = local_74;
          *(float *)((int)fVar4 + 0x1a8) = local_64 - fVar12;
          *(float *)((int)fVar4 + 0x1ac) = local_54;
        }
      }
      else if (iVar6 < 2) goto code_r0x001cc378;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  return fVar4;
}
