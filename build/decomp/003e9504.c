// OoT3D decomp @ 003e9504  name=FUN_003e9504  size=1304

void FUN_003e9504(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;

  fVar16 = DAT_003e9844;
  fVar13 = (float)FUN_003738a8();
  fVar14 = (float)FUN_003738a8();
  fVar5 = DAT_003e9858;
  fVar4 = DAT_003e9854;
  piVar3 = DAT_003e9850;
  fVar17 = DAT_003e984c;
  uVar2 = DAT_003e9848;
  if (*(short *)(param_1 + 0x1c) == 10) {
    if (*(short *)(param_1 + 0x668) != 0) {
      *(undefined2 *)(param_1 + 0x624) = 1;
      if (*(short *)(param_1 + 0x5e4) == 0) {
        FUN_00375bcc(param_1,uVar2);
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5e4) = (short)(int)(DAT_003e9864 / fVar16 + fVar4);
      }
      fVar16 = (float)FUN_00371e50(DAT_003e9868);
      uVar2 = DAT_003e986c;
      fVar16 = (float)VectorSignedToFloat((int)(short)(int)fVar16,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x61e) = (short)(int)((fVar16 * fVar17) / fVar13 + fVar4);
      uVar10 = DAT_003e9870;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      *(float *)(param_1 + 0x680) = fVar5;
      *(float *)(param_1 + 0x67c) = fVar5;
      goto LAB_003e96b8;
    }
  }
  else {
    iVar9 = FUN_00371e40(param_1,param_2);
    if (iVar9 != 0) {
      FUN_00375bcc(param_1,uVar2);
      fVar16 = DAT_003e985c;
      iVar9 = *piVar3;
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5e0) = (short)(int)(DAT_003e985c / fVar17 + fVar4);
      *(undefined2 *)(param_1 + 0x668) = 0;
      *(float *)(param_1 + 0x6c) = fVar5;
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5da) = (short)(int)(fVar16 / fVar17 + fVar4);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      uVar10 = DAT_003e9860;
LAB_003e96b8:
      *(undefined4 *)(param_1 + 0x5d0) = uVar10;
      return;
    }
    FUN_0034df30(param_1,param_2);
  }
  fVar6 = DAT_003e987c;
  uVar10 = DAT_003e9878;
  uVar2 = DAT_003e9874;
  uVar11 = 0;
  if (*(short *)(param_1 + 0x5dc) == 0) {
LAB_003e9734:
    if (*(short *)(param_1 + 0x5da) == 0) {
      sVar8 = *(short *)(param_1 + 0x61c) + 1;
      *(short *)(param_1 + 0x61c) = sVar8;
      uVar7 = DAT_003e9884;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar6 / fVar15 + fVar4) < (int)sVar8) {
        fVar15 = (float)FUN_00371e50(DAT_003e9884);
        fVar15 = (float)VectorSignedToFloat((int)(short)(int)fVar15,(byte)(in_fpscr >> 0x15) & 3);
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5dc) = (short)(int)((fVar15 * fVar17) / fVar18 + fVar4);
        fVar15 = (float)FUN_00371e50(uVar2);
        fVar15 = (float)VectorSignedToFloat((int)(short)(int)fVar15,(byte)(in_fpscr >> 0x15) & 3);
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x61c) = (short)(int)((fVar15 * fVar17) / fVar18 + fVar4);
        if (*(short *)(param_1 + 0x1c) == 10 || *(short *)(param_1 + 0x1c) == 8) {
          fVar13 = (float)FUN_003738a8(uVar7);
          fVar14 = (float)FUN_003738a8(uVar7);
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar5 <= fVar14) << 0x1d;
          if (fVar5 <= fVar13) {
            fVar13 = fVar13 + DAT_003e9a60;
          }
          else {
            fVar13 = fVar13 - DAT_003e9a60;
          }
          if (SUB41(in_fpscr >> 0x1d,0)) {
            fVar14 = fVar14 + DAT_003e9a60;
          }
          else {
            fVar14 = fVar14 - DAT_003e9a60;
          }
        }
        else {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar5 <= fVar14) << 0x1d;
          if (fVar5 <= fVar13) {
            fVar13 = fVar13 + fVar16;
          }
          else {
            fVar13 = fVar13 - fVar16;
          }
          if (SUB41(in_fpscr >> 0x1d,0)) {
            fVar14 = fVar14 + fVar16;
          }
          else {
            fVar14 = fVar14 - fVar16;
          }
        }
        *(float *)(param_1 + 0x638) = *(float *)(param_1 + 0x62c) + fVar13;
        *(float *)(param_1 + 0x640) = *(float *)(param_1 + 0x634) + fVar14;
      }
      else {
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x5da) = (short)(int)(DAT_003e9a64 / fVar16 + fVar4);
        uVar2 = DAT_003e9a68;
        if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
          *(float *)(param_1 + 0x6c) = fVar5;
          *(undefined4 *)(param_1 + 100) = uVar2;
        }
      }
      goto LAB_003e9910;
    }
  }
  else {
    iVar9 = FUN_00371e50(DAT_003e9874);
    if (iVar9 < 0x3f800000) {
      *(ushort *)(param_1 + 0x666) = *(short *)(param_1 + 0x666) + 1U & 1;
    }
    FUN_00373500(*(undefined4 *)(DAT_003e9880 + *(short *)(param_1 + 0x666) * 4),fVar4,uVar10,
                 param_1 + 0x610);
    if (*(short *)(param_1 + 0x5dc) == 0) goto LAB_003e9734;
LAB_003e9910:
    if (*(short *)(param_1 + 0x5da) == 0) goto LAB_003e9a44;
  }
  FUN_0036fc20(fVar4,uVar10,param_1 + 0x610);
  uVar2 = DAT_003e9a6c;
  uVar11 = 1;
  FUN_00373500(*(undefined4 *)(param_1 + 0x638),DAT_003e9a6c,*(undefined4 *)(param_1 + 0x67c),
               param_1 + 0x28);
  FUN_00373500(*(undefined4 *)(param_1 + 0x640),uVar2,*(undefined4 *)(param_1 + 0x67c),
               param_1 + 0x30);
  FUN_00373500(fVar17,uVar2,DAT_003e9a70,param_1 + 0x67c);
  fVar16 = *(float *)(param_1 + 0x638) - *(float *)(param_1 + 0x28);
  fVar17 = *(float *)(param_1 + 0x640) - *(float *)(param_1 + 0x30);
  if ((int)ABS(fVar16) < DAT_003e9a74) {
    fVar16 = fVar5;
  }
  if ((int)ABS(fVar17) < DAT_003e9a74) {
    fVar17 = fVar5;
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar16 == fVar5) << 0x1e;
  bVar12 = false;
  if (SUB41(uVar1 >> 0x1e,0)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar5) << 0x1e;
    bVar12 = SUB41(uVar1 >> 0x1e,0);
  }
  if (bVar12) {
    *(undefined2 *)(param_1 + 0x5da) = 0;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),(byte)(uVar1 >> 0x15) & 3);
    *(short *)(param_1 + 0x61c) = (short)(int)(fVar6 / fVar16 + fVar4);
  }
  fVar16 = (float)FUN_003696ec();
  FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar16 * DAT_003e9a78),3,
               (int)(short)(int)*(float *)(param_1 + 0x680),0);
  FUN_00373500(DAT_003e9a80,uVar2,DAT_003e9a7c,param_1 + 0x680);
LAB_003e9a44:
  FUN_003631d0(param_1,param_2,uVar11);
  return;
}
