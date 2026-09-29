// OoT3D decomp @ 0016dc98  name=FUN_0016dc98  size=1684

void FUN_0016dc98(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint in_fpscr;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined1 auStack_a4 [48];
  float local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;

  fVar4 = DAT_0016e098;
  fVar3 = DAT_0016e094;
  fVar2 = DAT_0016e090;
  fVar20 = *(float *)(param_1 + 3000);
  uVar16 = in_fpscr & 0xfffffff | (uint)(fVar20 < DAT_0016e090) << 0x1f |
           (uint)(fVar20 == DAT_0016e090) << 0x1e;
  uVar19 = uVar16 | (uint)(NAN(fVar20) || NAN(DAT_0016e090)) << 0x1c;
  bVar1 = (byte)(uVar16 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) {
    FUN_003695cc(DAT_0016e09c,DAT_0016e098,DAT_0016e090,*(float *)(param_1 + 0xbc4) * DAT_0016e094,
                 *(undefined4 *)(param_1 + 0x550),0,4);
    FUN_003713fc(*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                 *(undefined4 *)(param_1 + 0xbb4),auStack_a4,0);
    FUN_00371fac(auStack_a4,param_2 + 0x2fc);
    uVar21 = *(undefined4 *)(param_1 + 0xbc0);
    FUN_00371348(uVar21,uVar21,uVar21,auStack_a4,1);
    *(undefined1 *)(*(int *)(param_1 + 0x550) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x550),auStack_a4);
    FUN_00372170(*(undefined4 *)(param_1 + 0x550),0);
    FUN_003713fc(*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                 *(undefined4 *)(param_1 + 0xbb4),auStack_a4,0);
    FUN_00371fac(auStack_a4,param_2 + 0x2fc);
    uVar21 = *(undefined4 *)(param_1 + 3000);
    FUN_00371348(uVar21,uVar21,uVar21,auStack_a4,1);
    FUN_003695cc(fVar2,fVar2,fVar4,*(float *)(param_1 + 0xbbc) * fVar3,
                 *(undefined4 *)(param_1 + 0x554),0,4);
    *(undefined1 *)(*(int *)(param_1 + 0x554) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x554),auStack_a4);
    FUN_00372170(*(undefined4 *)(param_1 + 0x554),0);
    local_b4 = *DAT_0016e0a0;
    uStack_b0 = DAT_0016e0a0[1];
    uStack_ac = DAT_0016e0a0[2];
    local_a8 = *(float *)(param_1 + 0xbbc) * fVar3;
    FUN_00358778(*(undefined4 *)(param_1 + 0x558),0,0,&local_b4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x558) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x558),auStack_a4);
    FUN_00372170(*(undefined4 *)(param_1 + 0x558),0);
    FUN_003695cc(fVar4,fVar4,DAT_0016e0a4,fVar4,*(undefined4 *)(param_1 + 0x4f0),0,4);
    FUN_003713fc(*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                 *(undefined4 *)(param_1 + 0xbb4),auStack_a4,0);
    FUN_00371fac(auStack_a4,param_2 + 0x2fc);
    uVar21 = *(undefined4 *)(param_1 + 0xc04);
    FUN_00371348(uVar21,uVar21,uVar21,auStack_a4,1);
    local_68 = param_1 + 0xa00;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xace),(byte)(uVar19 >> 0x15) & 3)
    ;
    FUN_00371234(fVar20 * DAT_0016e0a8,auStack_a4,1);
    *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x4f0),auStack_a4);
    FUN_00372170(*(undefined4 *)(param_1 + 0x4f0),0);
    iVar5 = DAT_0016e0ac;
    *(int *)(DAT_0016e0ac + 0x50) = *(short *)(local_68 + 0xd6) + 1;
    *(undefined4 *)(iVar5 + 0x54) = DAT_0016e0b0;
    *(undefined4 *)(iVar5 + 0x58) = DAT_0016e0b4;
    FUN_003713fc(*(undefined4 *)(param_1 + 0xbac),*(undefined4 *)(param_1 + 0xbb0),
                 *(undefined4 *)(param_1 + 0xbb4),auStack_a4,0);
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(local_68 + 0xce),(byte)(uVar19 >> 0x15) & 3)
    ;
    FUN_003735e8(fVar20 * DAT_0016e0b8 * DAT_0016e0bc,auStack_a4,1);
    uVar21 = DAT_0016e0e8;
    fVar13 = DAT_0016e0e4;
    fVar12 = DAT_0016e0e0;
    fVar11 = DAT_0016e0dc;
    fVar10 = DAT_0016e0d8;
    iVar9 = DAT_0016e0d4;
    iVar8 = DAT_0016e0d0;
    iVar7 = DAT_0016e0cc;
    fVar6 = DAT_0016e0c8;
    fVar20 = DAT_0016e0c4;
    fVar22 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(uVar19 >> 0x15) & 3);
    fVar22 = fVar22 * DAT_0016e0c0 * DAT_0016e0c4;
    iVar18 = 0;
    if (0 < *(short *)(local_68 + 0xd8)) {
      fVar28 = *(float *)(param_1 + 0xbbc) * fVar3 * DAT_0016e0ec;
      do {
        iVar14 = *(int *)(iVar5 + 0x50) * 0xab;
        iVar15 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar14) >> 0x20);
        iVar14 = ((iVar15 >> 0xd) - (iVar15 >> 0x1f)) * DAT_0016e0f0 + iVar14;
        *(int *)(iVar5 + 0x50) = iVar14;
        iVar15 = *(int *)(iVar5 + 0x54) * 0xac;
        fVar23 = (float)VectorSignedToFloat(iVar14,(byte)(uVar19 >> 0x15) & 3);
        iVar14 = (int)((ulonglong)((longlong)iVar8 * (longlong)iVar15) >> 0x20);
        iVar15 = DAT_0016e0f4 * ((iVar14 >> 0xd) - (iVar14 >> 0x1f)) + iVar15;
        *(int *)(iVar5 + 0x54) = iVar15;
        uVar16 = *(int *)(iVar5 + 0x58) * 0xaa;
        fVar25 = (float)VectorSignedToFloat(iVar15,(byte)(uVar19 >> 0x15) & 3);
        iVar14 = (int)((longlong)(int)uVar16 * (longlong)iVar9 + ((ulonglong)uVar16 << 0x20) >> 0x20
                      );
        iVar14 = ((iVar14 >> 0xe) - (iVar14 >> 0x1f)) * DAT_0016e0f8 + uVar16;
        *(int *)(iVar5 + 0x58) = iVar14;
        fVar26 = (float)VectorSignedToFloat(iVar14,(byte)(uVar19 >> 0x15) & 3);
        for (fVar23 = fVar23 * fVar10 + fVar25 * fVar11 + fVar26 * fVar12; 0x3f7fffff < (int)fVar23;
            fVar23 = fVar23 - fVar4) {
        }
        iVar14 = param_1 + iVar18 * 4;
        fVar23 = (ABS(fVar23) - fVar13) * fVar20 * fVar6;
        FUN_003695cc(fVar4,fVar4,fVar4,*(float *)(iVar14 + 0xbc8) * fVar3,
                     *(undefined4 *)(iVar14 + 0x560),0,4,2);
        FUN_00372224(&local_e4,auStack_a4);
        fVar25 = fVar23 + fVar22;
        uVar16 = uVar19 & 0xfffffff | (uint)(fVar25 == fVar2) << 0x1e;
        if (!SUB41(uVar16 >> 0x1e,0)) {
          fVar26 = (float)FUN_003727f0(fVar25);
          fVar25 = (float)FUN_00372674(fVar25);
          fVar27 = local_e4 * fVar26;
          local_e4 = local_e4 * fVar25 - local_dc * fVar26;
          local_dc = fVar27 + local_dc * fVar25;
          fVar27 = local_d4 * fVar26;
          local_d4 = local_d4 * fVar25 - local_cc * fVar26;
          local_cc = fVar27 + local_cc * fVar25;
          fVar27 = local_c4 * fVar26;
          local_c4 = local_c4 * fVar25 - local_bc * fVar26;
          local_bc = fVar27 + local_bc * fVar25;
        }
        iVar15 = *(int *)(iVar5 + 0x50) * 0xab;
        iVar17 = (int)((ulonglong)((longlong)iVar7 * (longlong)iVar15) >> 0x20);
        iVar15 = ((iVar17 >> 0xd) - (iVar17 >> 0x1f)) * DAT_0016e0f0 + iVar15;
        *(int *)(iVar5 + 0x50) = iVar15;
        iVar17 = *(int *)(iVar5 + 0x54) * 0xac;
        fVar25 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
        iVar15 = (int)((ulonglong)((longlong)iVar8 * (longlong)iVar17) >> 0x20);
        iVar17 = DAT_0016e0f4 * ((iVar15 >> 0xd) - (iVar15 >> 0x1f)) + iVar17;
        *(int *)(iVar5 + 0x54) = iVar17;
        uVar19 = *(int *)(iVar5 + 0x58) * 0xaa;
        fVar26 = (float)VectorSignedToFloat(iVar17,(byte)(uVar16 >> 0x15) & 3);
        iVar15 = (int)((longlong)(int)uVar19 * (longlong)iVar9 + ((ulonglong)uVar19 << 0x20) >> 0x20
                      );
        iVar15 = ((iVar15 >> 0xe) - (iVar15 >> 0x1f)) * DAT_0016e0f8 + uVar19;
        *(int *)(iVar5 + 0x58) = iVar15;
        fVar27 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
        for (fVar25 = fVar25 * fVar10 + fVar26 * fVar11 + fVar27 * fVar12; 0x3f7fffff < (int)fVar25;
            fVar25 = fVar25 - fVar4) {
        }
        FUN_00369014((ABS(fVar25) - fVar13) * fVar20,&local_e4,1);
        uVar19 = uVar16 & 0xfffffff | (uint)(fVar23 == fVar2) << 0x1e;
        if (!SUB41(uVar19 >> 0x1e,0)) {
          fVar27 = (float)FUN_003727f0(fVar23);
          fVar24 = (float)FUN_00372674(fVar23);
          fVar23 = local_e0 * fVar27;
          local_e0 = local_e0 * fVar24 - local_e4 * fVar27;
          fVar25 = local_d0 * fVar27;
          local_d0 = local_d0 * fVar24 - local_d4 * fVar27;
          fVar26 = local_c0 * fVar27;
          local_c0 = local_c0 * fVar24 - local_c4 * fVar27;
          local_e4 = local_e4 * fVar24 + fVar23;
          local_d4 = local_d4 * fVar24 + fVar25;
          local_c4 = local_c4 * fVar24 + fVar26;
        }
        local_74 = fVar2;
        local_70 = fVar2;
        local_6c = uVar21;
        FUN_00372070(&local_e4,&local_e4,&local_74);
        local_e4 = local_e4 * fVar28;
        local_d4 = local_d4 * fVar28;
        local_c4 = local_c4 * fVar28;
        local_e0 = local_e0 * DAT_0016e0ec;
        local_d0 = local_d0 * DAT_0016e0ec;
        local_c0 = local_c0 * DAT_0016e0ec;
        *(undefined1 *)(*(int *)(iVar14 + 0x560) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar14 + 0x560),&local_e4);
        FUN_00372170(*(undefined4 *)(iVar14 + 0x560),0);
        iVar18 = (int)(short)((short)iVar18 + 1);
      } while (iVar18 < *(short *)(local_68 + 0xd8));
    }
  }
  return;
}
