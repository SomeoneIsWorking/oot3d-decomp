// OoT3D decomp @ 002a3208  name=FUN_002a3208  size=1448

void FUN_002a3208(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r1;
  uint uVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;

  fVar13 = DAT_002a356c;
  fVar2 = DAT_002a3568;
  fVar14 = DAT_002a3564;
  FUN_0036e168(DAT_002a3570,param_1 + 0x55c);
  FUN_0036e168(DAT_002a3574,param_1 + 0x560);
  fVar3 = DAT_002a357c;
  if ((uint)*(float *)(param_1 + 0x84) < (uint)DAT_002a3578) {
    FUN_0036e168(*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x554) + DAT_002a3580,
                 param_1 + 0x2c);
  }
  FUN_003731e0(param_1 + 0x1a4);
  fVar11 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x548));
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar14) << 0x1e;
  if (SUB41(uVar7 >> 0x1e,0)) {
    if (*(short *)(param_1 + 0x53e) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar11 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x548));
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + fVar11 * (*(float *)(param_1 + 0x558) + fVar13);
  *(float *)(param_1 + 0x548) = *(float *)(param_1 + 0x548) + DAT_002a358c;
  FUN_0036e168(*(undefined4 *)(param_1 + 0x550),param_1 + 0x6c);
  uVar4 = DAT_002a35a8;
  fVar11 = DAT_002a35a4;
  iVar15 = DAT_002a3598;
  fVar16 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  sVar9 = (short)DAT_002a3594;
  fVar12 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
  if (DAT_002a3590 < (int)SQRT(fVar16 * fVar16 + fVar12 * fVar12)) {
    uVar4 = FUN_003758b0();
    *(short *)(param_1 + 0x542) = (short)uVar4;
    FUN_00375a18(param_1 + 0x36,uVar4,1,2000,0);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x534) + -1;
    *(int *)(param_1 + 0x534) = iVar5;
    if (iVar5 < 1) {
      *(ushort *)(param_1 + 0x53e) = *(ushort *)(param_1 + 0x53e) ^ 1;
      fVar13 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x548));
      uVar4 = VectorSignedToFloat((int)(short)(int)(fVar13 * fVar2),(byte)(uVar7 >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x554) = uVar4;
      *(float *)(param_1 + 0x6c) = fVar14;
      if ((*(short *)(param_1 + 0x53e) != 0) && (*(int *)(param_1 + 0x604) == 0)) {
        *(undefined2 *)(param_1 + 0x542) = *(undefined2 *)(param_1 + 0x36);
        if (*(int *)(param_1 + 0x98) < iVar15) {
          FUN_0036e734(param_1 + 0x1a4,1);
          *(undefined2 *)(param_1 + 0x542) = *(undefined2 *)(param_1 + 0x92);
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      FUN_0036e734(param_1 + 0x1a4,0);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if ((*(int *)(param_1 + 0x98) < DAT_002a39b8) && (*(short *)(param_1 + 0x53c) != 0)) {
      if (*(short *)(param_1 + 0x53e) == 0) {
        FUN_0036e734(param_1 + 0x1a4,1);
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    else if (*(int *)(param_1 + 0x98) < iVar15) {
      *(undefined2 *)(param_1 + 0x542) = *(undefined2 *)(param_1 + 0x92);
    }
    fVar12 = DAT_002a39bc;
    iVar15 = *(int *)(param_1 + 0x604);
    if (iVar15 == 0) {
      for (iVar15 = *(int *)(DAT_002a39c0 + param_2); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x130)
          ) {
        if (((*(short *)(iVar15 + 0x1c) == 0) &&
            (fVar16 = (float)FUN_003306c4(param_1,iVar15), *(short *)(iVar15 + 0x1c) == 0)) &&
           (fVar16 <= fVar12)) goto LAB_002a375c;
      }
      iVar15 = 0;
LAB_002a375c:
      if (iVar15 != 0) goto LAB_002a3774;
LAB_002a3824:
      *(undefined4 *)(param_1 + 0x604) = 0;
    }
    else {
      if (*(short *)(iVar15 + 0x1c) != 0) goto LAB_002a3824;
LAB_002a3774:
      uVar6 = FUN_0036e800(param_1,iVar15);
      *(short *)(param_1 + 0x542) = (short)uVar6;
      if ((*(short *)(param_1 + 0x540) == 0) && (*(int *)(param_1 + 0x604) != iVar15)) {
        *(short *)(param_1 + 0x540) = sVar9;
        *(int *)(param_1 + 0x604) = iVar15;
        *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar3;
      }
      FUN_00375a18(param_1 + 0x36,uVar6,1,DAT_002a39c4,0);
      FUN_0036e168(*(undefined4 *)(iVar15 + 0x28),fVar13,uVar4,fVar14,param_1 + 0x28);
      FUN_0036e168(*(float *)(iVar15 + 0x2c) + fVar11,fVar13,uVar4,fVar14,param_1 + 0x2c);
      FUN_0036e168(*(undefined4 *)(iVar15 + 0x30),fVar13,uVar4,fVar14,param_1 + 0x30);
    }
    if (*(short *)(param_1 + 0x540) != 0) {
      fVar14 = (float)FUN_00338f60();
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar14 * fVar2;
      *(short *)(param_1 + 0x540) = *(short *)(param_1 + 0x540) + 0x1000;
      FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x542),1,2000,0);
    }
    sVar1 = *(short *)(param_1 + 0x82);
    sVar8 = sVar1 - *(short *)(param_1 + 0x36);
    if ((*(int *)(param_1 + 0x604) == 0) && ((*(ushort *)(param_1 + 0x90) & 8) != 0)) {
      uVar7 = (int)sVar8 + 0x4000;
      if (uVar7 < 0x8001) {
        uVar7 = (int)(short)(sVar1 - *(short *)(param_1 + 0x542)) + 0x4000;
      }
      if (0x8000 < uVar7) {
        sVar1 = sVar1 + sVar8 + -0x8000;
        *(short *)(param_1 + 0x542) = sVar1;
        FUN_00375a18(param_1 + 0x36,(int)sVar1,1,DAT_002a39c8,0);
      }
    }
  }
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x542),1,1000,0);
  bVar10 = (*(byte *)(param_1 + 0x591) & 2) == 0;
  uVar7 = extraout_r1;
  if (bVar10) {
    uVar7 = (uint)*(byte *)(param_1 + 0x590);
  }
  if (!bVar10 || (uVar7 & 2) != 0) {
    bVar10 = (*(byte *)(param_1 + 0x591) & 2) != 0;
    sVar8 = 0x4000;
    if (bVar10) {
      sVar8 = sVar9;
    }
    *(short *)(param_1 + 0x542) = *(short *)(param_1 + 0x92) + -0x8000;
    if ((!bVar10) &&
       (FUN_00375bcc(param_1,DAT_002a39cc), (*(uint *)(DAT_002a39d0 + param_2) & 1) != 0)) {
      sVar8 = (short)DAT_002a39d4;
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x92) + sVar8;
    *(byte *)(param_1 + 0x591) = *(byte *)(param_1 + 0x591) & 0xfd;
    *(byte *)(param_1 + 0x590) = *(byte *)(param_1 + 0x590) & 0xfd;
  }
  iVar15 = (int)*(float *)(param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x550) < DAT_002a39d8) {
    if (iVar15 != 5) goto LAB_002a3a0c;
  }
  else {
    if (iVar15 == 0 || iVar15 == 5) {
      FUN_00375bcc(param_1,DAT_002a39e0);
      goto LAB_002a3a0c;
    }
    if (iVar15 != 2 && iVar15 != 7) goto LAB_002a3a0c;
  }
  FUN_00375bcc(param_1,DAT_002a39dc);
LAB_002a3a0c:
  if ((int)*(float *)(param_1 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  return;
}
