// OoT3D decomp @ 003aabdc  name=FUN_003aabdc  size=1208

void FUN_003aabdc(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  int local_3c;
  int local_38;

  psVar9 = (short *)(param_1 + 0x616);
  sVar5 = *psVar9;
  fVar16 = *(float *)(param_1 + 0x624);
  sVar4 = FUN_003758b0(*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10),
                       *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8));
  iVar10 = (int)(short)(sVar4 + sVar5 * (short)DAT_003ab0a8 * 4);
  fVar14 = (float)FUN_002cfca0(iVar10);
  fVar17 = *(float *)(param_1 + 8);
  fVar15 = (float)FUN_00338f60(iVar10);
  local_38 = param_2 + 0xa98;
  local_5c = ((fVar17 + fVar16 * fVar14) - *(float *)(param_1 + 0x28)) + *(float *)(param_1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x2c);
  local_54 = ((*(float *)(param_1 + 0x10) + fVar16 * fVar15) - *(float *)(param_1 + 0x30)) +
             *(float *)(param_1 + 0x30);
  iVar10 = FUN_00369f9c(local_38,param_1 + 0x28,&local_5c,auStack_50,auStack_40,1,0,0,1,auStack_44);
  uVar2 = DAT_003ab0ac;
  if (iVar10 == 0) {
    if ((*(short *)(param_1 + 0x61c) == 0) &&
       ((*(short *)(param_1 + 0x61a) == 0 ||
        (sVar5 = *(short *)(param_1 + 0x61a) + -1, *(short *)(param_1 + 0x61a) = sVar5, sVar5 == 0))
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  else {
    *psVar9 = -*psVar9;
    uVar7 = DAT_003ab0b8;
    if (*(short *)(param_1 + 0x61e) == 0) {
      *(undefined4 *)(param_1 + 100) = DAT_003ab0b4;
      *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) ^ 0x8000;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      FUN_003717ac(param_1 + 0x1a4,uVar7,1);
      *(undefined4 *)(param_1 + 0x22c) = DAT_003ab0bc;
      return;
    }
  }
  sVar5 = FUN_003758b0(*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10),
                       *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8));
  uVar1 = sVar5 - *(short *)(param_1 + 0x612);
  if (*(short *)(param_1 + 0x616) < 1) {
    if (*(ushort *)(param_1 + 0x614) < uVar1) goto LAB_003aadcc;
  }
  else if (uVar1 < *(ushort *)(param_1 + 0x614)) {
LAB_003aadcc:
    *(short *)(param_1 + 0x61c) = *(short *)(param_1 + 0x61c) + -1;
  }
  if (*(short *)(param_1 + 0x61c) < 0) {
    *(undefined2 *)(param_1 + 0x61c) = 0;
  }
  *(ushort *)(param_1 + 0x614) = uVar1;
  uVar3 = DAT_003ab0c4;
  iVar10 = DAT_003ab0c0;
  local_3c = param_2 + 0x2000;
  for (psVar9 = *(short **)(param_2 + 0x20b4); psVar9 != (short *)0x0;
      psVar9 = *(short **)(psVar9 + 0x98)) {
    uVar6 = (uint)(ushort)psVar9[0xe];
    bVar12 = uVar6 == 0;
    if (bVar12) {
      uVar6 = *(uint *)(psVar9 + 0x92);
    }
    bVar13 = bVar12 && uVar6 == 0;
    if (bVar12 && uVar6 == 0) {
      bVar13 = *psVar9 == 0x10;
    }
    if ((bVar13) &&
       (fVar15 = *(float *)(psVar9 + 0x14) - *(float *)(param_1 + 0x28),
       fVar16 = *(float *)(psVar9 + 0x16) - *(float *)(param_1 + 0x2c),
       fVar14 = *(float *)(psVar9 + 0x18) - *(float *)(param_1 + 0x30),
       (int)SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar14 * fVar14) <= iVar10)) {
      uVar7 = FUN_003758b0();
      fVar14 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (((int)(short)(int)(fVar14 - fVar15) + 0x1c70U <= uVar3) &&
         (iVar8 = FUN_00369f9c(local_38,param_1 + 0x28,psVar9 + 0x14,auStack_50,auStack_40,1,0,0,1,
                               auStack_44), iVar8 == 0)) goto LAB_003aaef0;
    }
  }
  psVar9 = (short *)0x0;
LAB_003aaef0:
  if (psVar9 == (short *)0x0) {
    psVar11 = (short *)0x0;
    if (*(short *)(param_1 + 0x620) != 0) goto LAB_003aaf2c;
    psVar9 = *(short **)(local_3c + 0xac);
    iVar10 = FUN_00111374(param_1,psVar9,param_2);
    if (iVar10 == 0) goto LAB_003aaf2c;
  }
  psVar11 = psVar9;
LAB_003aaf2c:
  fVar14 = DAT_003ab0c8;
  if ((psVar11 != (short *)0x0) && (*(short *)(param_1 + 0x61e) == 0)) {
    fVar16 = *(float *)(psVar11 + 0x14) - *(float *)(param_1 + 8);
    fVar14 = *(float *)(psVar11 + 0x16) - *(float *)(param_1 + 0xc);
    fVar15 = *(float *)(psVar11 + 0x18) - *(float *)(param_1 + 0x10);
    fVar14 = SQRT(fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15);
  }
  FUN_0036e168(fVar14,DAT_003ab0d0,DAT_003ab0cc,uVar2,param_1 + 0x624);
  sVar5 = *(short *)(param_1 + 0x616);
  fVar16 = *(float *)(param_1 + 0x624);
  sVar4 = FUN_003758b0(*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10),
                       *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8));
  iVar10 = (int)(short)(sVar4 + sVar5 * (short)DAT_003ab0a8 * 4);
  fVar14 = (float)FUN_002cfca0(iVar10);
  fVar17 = *(float *)(param_1 + 8);
  fVar15 = (float)FUN_00338f60(iVar10);
  fVar14 = (float)FUN_003696ec((fVar17 + fVar16 * fVar14) - *(float *)(param_1 + 0x28),
                               (*(float *)(param_1 + 0x10) + fVar16 * fVar15) -
                               *(float *)(param_1 + 0x30));
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar14 * DAT_003ab0d4),4,4000,1);
  uVar7 = DAT_003ab0d8;
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
  FUN_00373264(param_1,uVar7);
  iVar10 = *(int *)(param_1 + 0x1e0);
  bVar12 = iVar10 == 0x40c00000 || iVar10 == 0x41500000;
  if (iVar10 != 0x40c00000 && iVar10 != 0x41500000) {
    bVar12 = iVar10 == 0x41e00000;
  }
  if (bVar12) {
    FUN_00375bcc(param_1,DAT_003ab0dc);
  }
  FUN_0036e168(DAT_003ab0e8,DAT_003ab0e4,DAT_003ab0e0,uVar2,param_1 + 0x6c);
  return;
}
