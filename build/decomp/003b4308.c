// OoT3D decomp @ 003b4308  name=FUN_003b4308  size=3148

void FUN_003b4308(int param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint in_fpscr;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [16];
  short local_cc;
  short local_ca;
  short local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  
  fVar2 = DAT_003b4700;
  if (*(short *)(param_2 + 0x886) != 0) {
    *(float *)(*(int *)(param_2 + 0x874) + 0xc) = DAT_003b4700;
    uVar16 = VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0x93d),(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_003b4704 == 0) {
      *(undefined4 *)(*(int *)(param_2 + 0x874) + 8) = uVar16;
      FUN_003586ec();
    }
    FUN_00373bec(*(undefined4 *)(param_2 + 0x874));
  }
  fVar20 = DAT_003b470c;
  FUN_00342be0(DAT_003b470c,DAT_003b470c,DAT_003b470c,*(float *)(param_2 + 0x8d8) * DAT_003b4708,
               param_2,4,0);
  iVar15 = DAT_003b4710;
  iVar7 = *(short *)(param_2 + 0x890) + 0x87;
  lVar1 = (longlong)DAT_003b4710 * (longlong)iVar7;
  iVar7 = param_2 + (short)((short)iVar7 +
                           ((short)(int)(lVar1 >> 0x24) - (short)(lVar1 >> 0x3f)) * -0x96) * 0xc;
  FUN_003713fc(*(undefined4 *)(iVar7 + 0x104c),*(undefined4 *)(iVar7 + 0x1050),
               *(undefined4 *)(iVar7 + 0x1054),&local_ac,0);
  FUN_003735e8(*(undefined4 *)(iVar7 + 0x948),&local_ac,1);
  FUN_00369014(-*(float *)(iVar7 + 0x944),&local_ac,1);
  FUN_003713fc(DAT_003b4714,fVar2,fVar2,&local_ac,1);
  fVar3 = DAT_003b4718;
  FUN_00371348(*(float *)(param_2 + 0x54) * DAT_003b4718,*(float *)(param_2 + 0x58) * DAT_003b4718,
               *(float *)(param_2 + 0x5c) * DAT_003b4718,&local_ac,1);
  uVar16 = DAT_003b471c;
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x2d4) + 0xc) + 0xc) =
       *(undefined4 *)(param_2 + 0x87c);
  FUN_0035e240(param_2 + 0x2ac,&local_ac,uVar16,0,param_2,1);
  iVar7 = *(short *)(param_2 + 0x890) + 0x87;
  lVar1 = (longlong)iVar15 * (longlong)iVar7;
  iVar7 = param_2 + (short)((short)iVar7 +
                           ((short)(int)(lVar1 >> 0x24) - (short)(lVar1 >> 0x3f)) * -0x96) * 0xc;
  FUN_003713fc(*(undefined4 *)(iVar7 + 0x104c),*(undefined4 *)(iVar7 + 0x1050),
               *(undefined4 *)(iVar7 + 0x1054),&local_ac,0);
  FUN_003735e8(*(undefined4 *)(iVar7 + 0x948),&local_ac,1);
  FUN_00369014(-*(float *)(iVar7 + 0x944),&local_ac,1);
  FUN_003713fc(DAT_003b4720,fVar2,fVar2,&local_ac,1);
  FUN_00371348(*(float *)(param_2 + 0x54) * fVar3,*(float *)(param_2 + 0x58) * fVar3,
               *(float *)(param_2 + 0x5c) * fVar3,&local_ac,1);
  uVar16 = DAT_003b4724;
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x358) + 0xc) + 0xc) =
       *(undefined4 *)(param_2 + 0x87c);
  FUN_0035e240(param_2 + 0x330,&local_ac,uVar16,0,param_2,1);
  FUN_003fc0c8(*(undefined4 *)(param_2 + 0x79c),*(undefined4 *)(param_2 + 0x178));
  FUN_00341c18(*(undefined4 *)(param_2 + 0x79c),4);
  iVar7 = DAT_003b4734;
  *(undefined1 *)(*(int *)(param_2 + 0x79c) + 0x1ba) = 0;
  uVar16 = DAT_003b4730;
  fVar5 = DAT_003b472c;
  fVar4 = DAT_003b4728;
  *(undefined1 *)(*(int *)(param_2 + 0x79c) + 0xb) = 1;
  fVar6 = DAT_003b473c;
  uVar13 = DAT_003b4738;
  local_60 = param_1 + 0x208c;
  local_64 = param_2 + 0x2314;
  uVar14 = 0;
  do {
    iVar8 = (int)*(short *)(param_2 + 0x890) + (int)*(short *)(iVar7 + uVar14 * 2);
    lVar1 = (longlong)iVar15 * (longlong)iVar8;
    iVar8 = param_2 + (short)((short)iVar8 +
                             ((short)(int)(lVar1 >> 0x24) - (short)(lVar1 >> 0x3f)) * -0x96) * 0xc;
    local_a0 = *(undefined4 *)(iVar8 + 0x104c);
    local_90 = *(undefined4 *)(iVar8 + 0x1050);
    local_80 = *(undefined4 *)(iVar8 + 0x1054);
    local_ac = 1.0;
    local_a8 = 0.0;
    local_a4 = 0.0;
    local_9c = 0.0;
    local_98 = 1.0;
    local_94 = 0.0;
    local_88 = 0.0;
    local_84 = 1.0;
    local_8c = 0.0;
    fVar24 = *(float *)(iVar8 + 0x948);
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar2) << 0x1e;
    local_70 = local_a0;
    local_6c = local_90;
    local_68 = local_80;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      fVar17 = (float)FUN_003727f0(fVar24);
      fVar24 = (float)FUN_00372674(fVar24);
      fVar21 = local_ac * fVar17;
      local_ac = local_ac * fVar24 - local_a4 * fVar17;
      local_a4 = fVar21 + local_a4 * fVar24;
      fVar21 = local_9c * fVar17;
      local_9c = local_9c * fVar24 - local_94 * fVar17;
      local_94 = fVar21 + local_94 * fVar24;
      fVar21 = local_8c * fVar17;
      local_8c = local_8c * fVar24 - local_84 * fVar17;
      local_84 = fVar21 + local_84 * fVar24;
    }
    fVar24 = -*(float *)(iVar8 + 0x944);
    in_fpscr = uVar10 & 0xfffffff | (uint)(fVar24 == fVar2) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar18 = (float)FUN_003727f0(fVar24);
      fVar19 = (float)FUN_00372674(fVar24);
      fVar24 = local_a4 * fVar18;
      local_a4 = local_a4 * fVar19 - local_a8 * fVar18;
      fVar17 = local_94 * fVar18;
      local_94 = local_94 * fVar19 - local_98 * fVar18;
      fVar21 = local_84 * fVar18;
      local_84 = local_84 * fVar19 - local_88 * fVar18;
      local_a8 = local_a8 * fVar19 + fVar24;
      local_98 = local_98 * fVar19 + fVar17;
      local_88 = local_88 * fVar19 + fVar21;
    }
    fVar24 = *(float *)(param_2 + 0x54);
    fVar17 = *(float *)(param_2 + 0x58);
    fVar21 = *(float *)(param_2 + 0x5c);
    local_ac = local_ac * fVar24;
    local_9c = local_9c * fVar24;
    local_8c = local_8c * fVar24;
    local_a8 = local_a8 * fVar17;
    local_98 = local_98 * fVar17;
    local_88 = local_88 * fVar17;
    local_a4 = local_a4 * fVar21;
    local_94 = local_94 * fVar21;
    local_84 = local_84 * fVar21;
    if ((int)uVar14 < (int)*(short *)(param_2 + 0x886)) {
      fVar17 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x890),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar24 = (float)FUN_002cfca0((int)(short)(int)(fVar24 * fVar4 + fVar17 * fVar5));
      fVar21 = *(float *)(param_2 + 0x8e8);
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0x890),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar18 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)FUN_002cfca0((int)(short)(int)(fVar17 * fVar4 + fVar18 * fVar5));
      FUN_00371348(fVar20 + fVar17 * *(float *)(param_2 + 0x8e8),fVar20 + fVar24 * fVar21,fVar20,
                   &local_ac,1);
      fVar24 = (float)FUN_003727f0(uVar16);
      fVar17 = (float)FUN_00372674(uVar16);
      fVar21 = local_ac * fVar24;
      iVar8 = param_2 + uVar14 * 0x30;
      local_ac = local_ac * fVar17 - local_a4 * fVar24;
      local_a4 = fVar21 + local_a4 * fVar17;
      fVar21 = local_9c * fVar24;
      local_9c = local_9c * fVar17 - local_94 * fVar24;
      local_94 = fVar21 + local_94 * fVar17;
      fVar21 = local_8c * fVar24;
      local_8c = local_8c * fVar17 - local_84 * fVar24;
      local_84 = fVar21 + local_84 * fVar17;
      *(float *)(iVar8 + 0x43c) = local_ac;
      *(float *)(iVar8 + 0x440) = local_a8;
      *(float *)(iVar8 + 0x444) = local_a4;
      *(undefined4 *)(iVar8 + 0x448) = local_a0;
      *(float *)(iVar8 + 0x44c) = local_9c;
      *(float *)(iVar8 + 0x450) = local_98;
      *(float *)(iVar8 + 0x454) = local_94;
      *(undefined4 *)(iVar8 + 0x458) = local_90;
      *(float *)(iVar8 + 0x45c) = local_8c;
      *(float *)(iVar8 + 0x460) = local_88;
      *(float *)(iVar8 + 0x464) = local_84;
      *(undefined4 *)(iVar8 + 0x468) = local_80;
    }
    else {
      iVar9 = param_2 + uVar14 * 2;
      local_b8 = fVar2;
      local_b4 = fVar2;
      local_b0 = fVar2;
      if (*(short *)(iVar9 + 0x226c) < 2) {
        uVar10 = uVar14;
        if (uVar14 != 0) {
          uVar10 = uVar14 - 1;
        }
        iVar11 = (int)*(short *)(iVar7 + uVar10 * 2) + (int)*(short *)(param_2 + 0x890);
        iVar12 = (int)((ulonglong)((longlong)iVar15 * (longlong)iVar11) >> 0x20);
        iVar11 = param_2 + (iVar11 + ((iVar12 >> 4) - (iVar12 >> 0x1f)) * -0x96) * 0xc;
        fVar21 = *(float *)(iVar8 + 0x104c) - *(float *)(iVar11 + 0x104c);
        fVar24 = *(float *)(iVar8 + 0x1050) - *(float *)(iVar11 + 0x1050);
        local_7c = fVar2;
        local_78 = fVar2;
        fVar17 = *(float *)(iVar8 + 0x1054) - *(float *)(iVar11 + 0x1054);
        local_74 = -SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar17 * fVar17);
        FUN_00372070(&local_ac,&local_ac,&local_7c);
        fVar24 = (float)FUN_003727f0(uVar13);
        fVar17 = (float)FUN_00372674(uVar13);
        fVar21 = local_ac * fVar24;
        local_ac = local_ac * fVar17 - local_a4 * fVar24;
        fVar18 = local_9c * fVar24;
        local_9c = local_9c * fVar17 - local_94 * fVar24;
        fVar19 = local_8c * fVar24;
        local_8c = local_8c * fVar17 - local_84 * fVar24;
        fVar24 = fVar3;
        if (0xd < (int)uVar14) {
          iVar8 = uVar14 - 0xe;
          fVar24 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = fVar20 - fVar24 * fVar6;
          fVar24 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          local_ac = local_ac * fVar22;
          fVar23 = fVar20 - fVar24 * fVar6;
          local_9c = local_9c * fVar22;
          fVar24 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
          local_8c = local_8c * fVar22;
          local_a8 = local_a8 * fVar23;
          fVar24 = (fVar20 - fVar24 * fVar6) * fVar3;
          local_98 = local_98 * fVar23;
          local_88 = local_88 * fVar23;
        }
        local_a4 = (fVar21 + local_a4 * fVar17) * fVar3;
        local_ac = local_ac * fVar3;
        local_9c = local_9c * fVar3;
        local_8c = local_8c * fVar3;
        local_a8 = local_a8 * fVar3;
        local_98 = local_98 * fVar3;
        local_88 = local_88 * fVar3;
        local_94 = (fVar18 + local_94 * fVar17) * fVar3;
        local_84 = (fVar19 + local_84 * fVar17) * fVar3;
        FUN_0036932c(*(undefined4 *)(param_2 + 0x1cc),*(undefined1 *)(DAT_003b4f94 + uVar14));
        iVar8 = param_2 + uVar14 * 4;
        FUN_003721e0(*(undefined4 *)(iVar8 + 0x7a4),&local_ac);
        *(undefined1 *)(*(int *)(iVar8 + 0x7a4) + 0xac) = 1;
        FUN_00372170(*(undefined4 *)(iVar8 + 0x7a4),0);
        if (*(short *)(iVar9 + 0x226c) == 1) {
          *(undefined2 *)(iVar9 + 0x226c) = 2;
          FUN_003735ac(&local_c4,&local_ac,&local_b8);
          FUN_003624c8(&local_ac,&local_cc,0);
          local_104 = (int)(short)((short)uVar14 + 200);
          iVar8 = FUN_0036aa20(local_c4,local_c0,local_bc,local_60,param_2,param_1,0xad,
                               (int)local_cc,(int)local_ca,(int)local_c8);
          *(float *)(iVar8 + 0x54) = *(float *)(param_2 + 0x54) * fVar24;
          *(float *)(iVar8 + 0x58) = *(float *)(param_2 + 0x58) * fVar24;
          *(float *)(iVar8 + 0x5c) = *(float *)(param_2 + 0x5c) * fVar3;
        }
      }
    }
    if (0 < (int)uVar14) {
      FUN_00357750(uVar14 + 1,local_64,&local_ac);
    }
    uVar14 = (uint)(short)((short)uVar14 + 1);
  } while (uVar14 < 0x12);
  *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x1cc) + 0xc) + 0xc) =
       *(undefined4 *)(param_2 + 0x87c);
  FUN_0035e240(param_2 + 0x1a4,param_2 + 0x148,0,DAT_003b4f98,param_2,1);
  lVar1 = (longlong)iVar15 * (longlong)(int)*(short *)(param_2 + 0x890);
  iVar15 = param_2 + (short)(*(short *)(param_2 + 0x890) +
                            ((short)(int)(lVar1 >> 0x24) - (short)(lVar1 >> 0x3f)) * -0x96) * 0xc;
  FUN_003713fc(*(undefined4 *)(iVar15 + 0x104c),*(undefined4 *)(iVar15 + 0x1050),
               *(undefined4 *)(iVar15 + 0x1054),&local_ac,0);
  FUN_003735e8(*(undefined4 *)(iVar15 + 0x948),&local_ac,1);
  FUN_00369014(-*(float *)(iVar15 + 0x944),&local_ac,1);
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar20 * DAT_003b4f9c * DAT_003b4fa0,&local_ac,1);
  FUN_00372224(auStack_dc,&local_ac);
  FUN_003713fc(fVar2,fVar2,DAT_003b4fa4,auStack_dc,1);
  FUN_00357750(0,local_64,auStack_dc);
  FUN_00371348(*(float *)(param_2 + 0x54) * fVar3,*(float *)(param_2 + 0x58) * fVar3,
               *(float *)(param_2 + 0x5c) * fVar3,&local_ac,1);
  if (*(short *)(param_2 + 0x88a) < 0xcc) {
    uVar16 = FUN_003687a8(*(undefined4 *)(param_2 + 0x250));
    if (*(char *)(param_2 + 0x93f) == '\0') {
      local_104 = *DAT_003b4fb4;
      iStack_100 = DAT_003b4fb4[1];
      iStack_fc = DAT_003b4fb4[2];
      iStack_f8 = DAT_003b4fb4[3];
      FUN_003589cc(uVar16,4);
      FUN_00358964(uVar16,4,&local_104);
    }
    else {
      FUN_00341c18(uVar16,4);
      FUN_00373bec(*(undefined4 *)(param_2 + 0x870));
    }
    uVar16 = DAT_003b4fbc;
    *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x250) + 0xc) + 0xc) =
         *(undefined4 *)(param_2 + 0x87c);
    iVar15 = param_2 + 0x228;
    uVar13 = DAT_003b4fb8;
  }
  else {
    uVar16 = FUN_003687a8(*(undefined4 *)(param_2 + 0x3dc));
    local_104 = *DAT_003b4fa8;
    iStack_100 = DAT_003b4fa8[1];
    iStack_fc = DAT_003b4fa8[2];
    iStack_f8 = DAT_003b4fa8[3];
    FUN_003589cc(uVar16,4);
    FUN_00358964(uVar16,4,&local_104);
    uVar16 = DAT_003b4fb0;
    *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x3dc) + 0xc) + 0xc) =
         *(undefined4 *)(param_2 + 0x87c);
    iVar15 = param_2 + 0x3b4;
    uVar13 = DAT_003b4fac;
  }
  FUN_0035e240(iVar15,&local_ac,uVar16,uVar13,param_2,1);
  local_e8 = fVar2;
  local_e4 = DAT_003b4fc0;
  local_e0 = DAT_003b4fc4;
  local_f4 = DAT_003b4fc8;
  local_f0 = DAT_003b4fc0;
  local_ec = DAT_003b4fc4;
  FUN_003735ac(param_2 + 0x1ca0,&local_ac,&local_e8);
  iVar15 = param_2 + 0x17b4;
  FUN_00316dc0(param_1,param_2,param_2 + 0x19d0,iVar15,param_2 + 0x1bec,0);
  FUN_003735ac(param_2 + 0x1f7c,&local_ac,&local_f4);
  FUN_00316dc0(param_1,param_2,param_2 + 0x1cac,iVar15,param_2 + 0x1ec8,1);
  local_f4 = -local_f4;
  FUN_003735ac(param_2 + 0x2258,&local_ac,&local_f4);
  FUN_00316dc0(param_1,param_2,param_2 + 0x1f88,iVar15,param_2 + 0x21a4,2);
  return;
}

