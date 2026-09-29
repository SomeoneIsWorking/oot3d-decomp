// OoT3D decomp @ 0025b530  name=FUN_0025b530  size=768

undefined4 FUN_0025b530(float *param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 extraout_s0;
  float fVar15;
  float fVar16;
  undefined4 extraout_s1;
  float fVar17;
  undefined4 extraout_s2;
  float fVar18;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [8];
  undefined4 local_94;
  short local_90;
  ushort local_8e;
  float local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [28];
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];

  pfVar12 = param_1 + 0x20;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  fVar5 = DAT_0025b8d0;
  fVar14 = DAT_0025b8cc;
  fVar4 = DAT_0025b8c8;
  fVar15 = DAT_0025b8c4;
  piVar3 = DAT_0025b8c0;
  psVar7 = *(short **)
            (*(int *)(DAT_0025b8b8 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  pfVar11 = param_1 + 7;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025b8c0 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025b8c0 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar17 * DAT_0025b8c4 * fVar13 *
             ((DAT_0025b8c8 + fVar18 * DAT_0025b8c4) -
             (DAT_0025b8bc / fVar13) * fVar16 * DAT_0025b8c4);
  fVar13 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar13;
  fVar13 = (float)VectorSignedToFloat((int)psVar7[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar13;
  *(short *)(param_1 + 5) = psVar7[6];
  fVar13 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)((int)param_1 + 0x16) = (short)(int)(fVar5 + fVar13 * fVar14);
  fVar14 = (float)VectorSignedToFloat((int)psVar7[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar14;
  fVar14 = (float)VectorSignedToFloat((int)psVar7[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar14 * fVar15;
  *(short *)(param_1 + 6) = psVar7[0xe];
  FUN_00372474(auStack_9c,pfVar12,param_1 + 0x23);
  FUN_00372474(auStack_a4,pfVar12,param_1 + 0x29);
  FUN_00342ec0(auStack_48,param_1[0x3c]);
  FUN_00371738(auStack_5c,auStack_48,0x12);
  *(int *)(DAT_0025b8d4 + 0x14) = (int)*(short *)(param_1 + 6);
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    *(short *)pfVar11 = *(short *)(param_1 + 5);
  }
  sVar6 = *(short *)pfVar11;
  if (sVar6 < 1) {
    if (sVar6 == 0) {
      fVar14 = param_1[0x3c];
      iVar10 = 0;
      if (fVar14 != 0.0) {
        iVar10 = *(int *)((int)fVar14 + 0x13c);
      }
      if (fVar14 == 0.0 || iVar10 == 0) {
        param_1[0x3c] = 0.0;
        return 1;
      }
      *(short *)pfVar11 = -1;
      fVar14 = (float)FUN_00338a90(auStack_5c,param_1 + 0x37);
      fVar13 = param_1[2];
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar13) << 0x1f |
              (uint)(fVar14 == fVar13) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_8e = *(ushort *)((int)param_1 + 0xea);
        local_90 = -*(short *)(param_1 + 0x3a);
        local_94 = DAT_0025b8d8;
        FUN_00372448(auStack_5c,&local_94);
        local_84 = extraout_s0;
        local_80 = extraout_s1;
        local_7c = extraout_s2;
        FUN_003553fc(param_1,pfVar12,&local_84);
        FUN_00342e8c(&local_94,auStack_78);
        local_8c = param_1[1];
                    /* WARNING: Subroutine does not return */
        FUN_003759d0((uint)*(ushort *)((int)param_1 + 0xea) - (uint)local_8e);
      }
    }
  }
  else {
    *(short *)pfVar11 = sVar6 + -1;
  }
  FUN_00338ac8(*param_1,param_1,auStack_a4,0);
  fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(param_1[3],param_1[0x51],param_1[0x52] * fVar14 * fVar15,fVar4);
  param_1[0x51] = fVar15;
  iVar8 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar10 = iVar8;
  if (iVar8 < 0) {
    iVar10 = -iVar8;
  }
  iVar9 = iVar10;
  if (iVar10 < 10) {
    iVar9 = 0;
  }
  sVar6 = (short)iVar9;
  fVar15 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar10) {
    sVar6 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar5 + fVar15 * fVar5);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar6;
  fVar15 = (float)FUN_003375bc(param_1[4],param_1);
  param_1[0x52] = fVar15;
  return 1;
}
