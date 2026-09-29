// OoT3D decomp @ 003cc884  name=FUN_003cc884  size=1480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003cc884(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 uStack_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 uStack_58;

  fVar3 = DAT_003ccb80;
  iVar2 = DAT_003ccb7c;
  if (((*(uint *)(DAT_003ccb7c + 0x88) & 1) == 0) &&
     (iVar10 = FUN_003679b4(DAT_003ccb7c + 0x88), pfVar12 = DAT_003ccb84, iVar10 != 0)) {
    *DAT_003ccb84 = fVar3;
    pfVar12[1] = fVar3;
    pfVar12[2] = fVar3;
  }
  iVar11 = *(int *)(DAT_003ccb88 + param_1);
  iVar10 = FUN_003695f8();
  uVar8 = DAT_003ccba0;
  uVar7 = DAT_003ccb9c;
  uVar6 = DAT_003ccb98;
  fVar5 = DAT_003ccb94;
  fVar4 = DAT_003ccb90;
  fVar1 = DAT_003ccb8c;
  if (iVar10 == 0) {
    if (*(char *)(iVar2 + 0x1b) == '\0') {
      iVar10 = 0;
      if ((*(short *)(iVar2 + 0x1e) == 4) && (*(char *)(iVar2 + 0x1a) != '\0')) {
        fVar14 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar2 + 0x32) * 0x6400));
        iVar10 = (int)(short)(int)(fVar14 * DAT_003ccbc0);
      }
      else {
        FUN_0036fc20(DAT_003ccb9c,DAT_003ccbc4,DAT_003ccbac);
        FUN_0036fc20(fVar4,uVar8,DAT_003ccbb4);
      }
      FUN_00370084(iVar11 + 0xbc,iVar10,5,1000);
    }
    else {
      *(char *)(iVar2 + 0x1b) = *(char *)(iVar2 + 0x1b) + -1;
      FUN_00373500(DAT_003ccba8,fVar4,DAT_003ccba4,DAT_003ccbac);
      FUN_00373500(DAT_003ccbb0,fVar4,uVar6,DAT_003ccbb4);
      FUN_00370084(iVar11 + 0xbc,DAT_003ccbbc,2,DAT_003ccbb8);
    }
    if (*(short *)(iVar2 + 0x1e) == 3 || *(short *)(iVar2 + 0x1e) == 4) {
      if (((int)*(float *)(param_1 + 0x3c) == 0) && (*(short *)(iVar2 + 0x20) != 0)) {
        *(float *)(iVar2 + 100) = fVar3;
      }
      fVar14 = *(float *)(param_1 + 0x40);
      if (((int)fVar14 == 0) && (*(short *)(iVar2 + 0x22) != 0)) {
        *(float *)(iVar2 + 0x68) = fVar3;
      }
      uVar9 = DAT_003ccbd0;
      uVar6 = DAT_003ccbcc;
      fVar16 = DAT_003ccbc8;
      fVar14 = (float)VectorSignedToFloat((int)fVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = *(float *)(iVar11 + 0x2244);
      FUN_0036e168(fVar14 * DAT_003ccbc8,DAT_003ccbd0,DAT_003ccbcc,fVar3,iVar11 + 0x2244);
      fVar15 = *(float *)(iVar11 + 0x2244);
      fVar22 = *(float *)(iVar11 + 0x2240);
      fVar14 = (float)VectorSignedToFloat((int)*(float *)(param_1 + 0x3c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_0036e168(fVar14 * fVar16,uVar9,uVar6,fVar3,iVar11 + 0x2240);
      fVar17 = fRam003ccbdc;
      fVar16 = fRam003ccbd8;
      fVar14 = fRam003ccbd4;
      fVar19 = *(float *)(iVar11 + 0x2240);
      fVar20 = fVar19;
      if (0x3f800000 < (int)fVar19) {
        fVar20 = fVar4;
      }
      *(float *)(iVar11 + 0x2240) = fVar20;
      fVar18 = *(float *)(iVar11 + 0x2244);
      if (0x3f800000 < (int)*(float *)(iVar11 + 0x2244)) {
        fVar18 = fVar4;
      }
      if ((uint)fVar14 <= (uint)fVar20) {
        fVar20 = fVar16;
      }
      *(float *)(iVar11 + 0x2244) = fVar18;
      uVar6 = DAT_003ccbe4;
      if ((uint)fVar14 <= (uint)fVar18) {
        fVar18 = fVar16;
      }
      *(float *)(iVar11 + 0x2240) = fVar20;
      fVar14 = fRam003ccbe0;
      *(float *)(iVar11 + 0x2244) = fVar18;
      FUN_00373500((fVar19 - fVar22) * fVar17 * fVar14,fVar4,*(undefined4 *)(iVar2 + 100),uVar6);
      FUN_00373500(fVar4,fVar4,uVar7,uRam003ccbe8);
      FUN_00373500((fVar15 - fVar21) * fVar17 * fVar1,fVar4,*(undefined4 *)(iVar2 + 0x68),
                   DAT_003ccbec);
      FUN_00373500(fVar4,fVar4,uVar7,uRam003ccbf0);
      FUN_0036fc20(fVar4,uVar8,DAT_003ccbf4);
    }
    else {
      FUN_0036fc20(fVar4,uVar7,iVar11 + 0x2244);
      FUN_0036fc20(fVar4,uVar7,iVar11 + 0x2240);
      fVar14 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar2 + 0x32) * (short)_LAB_003cd00a_2));
      FUN_00373500(_LAB_003cd014 + fVar14 * _LAB_003cd010,fVar4,uVar8,DAT_003ccbec);
      FUN_0036fc20(fVar4,uVar8,DAT_003ccbe4);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*_LAB_003cd018 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (((int)(_LAB_003cd01c / fVar14 + fVar5) < (int)*(short *)(iVar2 + 0x38)) &&
         (fVar14 = (float)VectorSignedToFloat((int)*(short *)(*_LAB_003cd018 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3),
         (int)*(short *)(iVar2 + 0x38) < (int)(_LAB_003cd020 / fVar14 + fVar5))) {
        FUN_00373500(_LAB_003cd028,fVar4,_LAB_003cd024,DAT_003ccbf4);
      }
      else {
        FUN_00373500(fVar3,fVar4,uVar6,DAT_003ccbf4);
      }
    }
  }
  if (((*(uint *)(_LAB_003cd02c + iVar11) & 0x100000) == 0) &&
     (iVar10 = FUN_00374be8(param_1,0x18), iVar10 == 0)) {
    FUN_003720a4(iVar11,&local_84);
    if (*(char *)(iVar2 + 0xd) == '\x01') {
      FUN_003713fc(fVar3,_LAB_003cd038,_LAB_003cd030,&local_84,1);
    }
    else {
      FUN_003713fc(fVar3,_LAB_003cd034,_LAB_003cd030,&local_84,1);
    }
    if (*(short *)(iVar2 + 0x1e) == 5) {
      FUN_003735e8(_LAB_003cd03c,&local_84,1);
    }
    else {
      FUN_003735e8(_LAB_003cd040,&local_84,1);
    }
    FUN_00369014(DAT_003cd044,&local_84,1);
    FUN_00371234(DAT_003cd048 + *(float *)(iVar11 + 0x2240) * fVar5,&local_84,1);
    fVar14 = DAT_003cd050;
    FUN_00369014((*(float *)(iVar2 + 0x74) + DAT_003cd04c) * fVar1 * DAT_003cd050,&local_84,1);
    FUN_00371348(DAT_003cd054,DAT_003cd054,DAT_003cd054,&local_84,1);
    fVar16 = *(float *)(iVar2 + 0x60);
    fVar20 = *(float *)(iVar2 + 0x6c);
    fVar1 = (*(float *)(iVar11 + 0x2244) - fVar4) * DAT_003cd058;
    fVar17 = *(float *)(iVar2 + 0x70);
    FUN_003713fc(fVar3,fVar3,DAT_003cd05c,&local_84,1);
    uVar7 = DAT_003cd06c;
    uVar6 = DAT_003cd068;
    fVar4 = DAT_003cd064;
    iVar10 = DAT_003cd060;
    iVar11 = 0;
    do {
      pfVar12 = (float *)(DAT_003cd070 + iVar11 * 4);
      fVar15 = *pfVar12 * *(float *)(iVar2 + 0x5c) * fVar5;
      if (fVar15 != fVar3) {
        fVar19 = (float)FUN_003727f0(fVar15);
        fVar15 = (float)FUN_00372674(fVar15);
        fVar21 = local_84 * fVar19;
        local_84 = local_84 * fVar15 - local_7c * fVar19;
        local_7c = fVar21 + local_7c * fVar15;
        fVar21 = local_74 * fVar19;
        local_74 = local_74 * fVar15 - local_6c * fVar19;
        local_6c = fVar21 + local_6c * fVar15;
        fVar21 = local_64 * fVar19;
        local_64 = local_64 * fVar15 - local_5c * fVar19;
        local_5c = fVar21 + local_5c * fVar15;
      }
      fVar15 = *pfVar12 * (fVar16 + fVar20 + fVar17 * (fVar5 + fVar1)) * fVar5;
      if (fVar15 != fVar3) {
        fVar22 = (float)FUN_003727f0(fVar15);
        fVar18 = (float)FUN_00372674(fVar15);
        fVar15 = local_7c * fVar22;
        local_7c = local_7c * fVar18 - local_80 * fVar22;
        fVar19 = local_6c * fVar22;
        local_6c = local_6c * fVar18 - local_70 * fVar22;
        fVar21 = local_5c * fVar22;
        local_5c = local_5c * fVar18 - local_60 * fVar22;
        local_80 = local_80 * fVar18 + fVar15;
        local_70 = local_70 * fVar18 + fVar19;
        local_60 = local_60 * fVar18 + fVar21;
      }
      uStack_a8 = uStack_78;
      local_98 = local_68;
      uStack_88 = uStack_58;
      fStack_90 = *(float *)(iVar10 + iVar11 * 4);
      local_b4 = local_84 * fStack_90;
      fStack_a4 = local_74 * fStack_90;
      fStack_94 = local_64 * fStack_90;
      fStack_b0 = local_80 * fStack_90;
      fStack_a0 = local_70 * fStack_90;
      fStack_90 = local_60 * fStack_90;
      fStack_ac = local_7c * fVar4;
      fStack_9c = local_6c * fVar4;
      iVar13 = param_2 + iVar11 * 4;
      fStack_8c = local_5c * fVar4;
      *(undefined1 *)(*(int *)(iVar13 + 0x730) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar13 + 0x730),&local_b4);
      FUN_00372170(*(undefined4 *)(iVar13 + 0x730),0);
      if (iVar11 == 4) {
        local_b4 = local_84;
        fStack_b0 = local_80;
        fStack_ac = local_7c;
        uStack_a8 = uStack_78;
        fStack_a4 = local_74;
        fStack_a0 = local_70;
        fStack_9c = local_6c;
        local_98 = local_68;
        fStack_94 = local_64;
        fStack_90 = local_60;
        fStack_8c = local_5c;
        uStack_88 = uStack_58;
        uStack_c0 = *(undefined4 *)(iVar2 + 0x8c);
        uStack_bc = *(undefined4 *)(iVar2 + 0x90);
        uStack_b8 = *(undefined4 *)(iVar2 + 0x94);
        FUN_00372070(&local_b4,&local_b4,&uStack_c0);
        fVar22 = (float)FUN_003727f0(fVar14);
        fVar18 = (float)FUN_00372674(fVar14);
        fVar15 = fStack_b0 * fVar22;
        fStack_b0 = fStack_b0 * fVar18 - local_b4 * fVar22;
        fVar19 = fStack_a0 * fVar22;
        fStack_a0 = fStack_a0 * fVar18 - fStack_a4 * fVar22;
        fVar21 = fStack_90 * fVar22;
        fStack_90 = fStack_90 * fVar18 - fStack_94 * fVar22;
        fStack_cc = fVar3;
        uStack_c8 = uVar6;
        fStack_c4 = fVar3;
        local_b4 = local_b4 * fVar18 + fVar15;
        fStack_a4 = fStack_a4 * fVar18 + fVar19;
        fStack_94 = fStack_94 * fVar18 + fVar21;
        FUN_00372070(&local_b4,&local_b4,&fStack_cc);
        *(undefined1 *)(*(int *)(param_2 + 0x72c) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_2 + 0x72c),&local_b4);
        FUN_00372170(*(undefined4 *)(param_2 + 0x72c),0);
      }
      fStack_d8 = fVar3;
      fStack_d4 = fVar3;
      uStack_d0 = uVar7;
      FUN_00372070(&local_84,&local_84,&fStack_d8);
      if (iVar11 == 0x15) {
        FUN_003735ac(DAT_003ccb84 + 0x24,&local_84);
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < 0x16);
  }
  return;
}
