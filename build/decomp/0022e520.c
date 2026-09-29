// OoT3D decomp @ 0022e520  name=FUN_0022e520  size=1856

void FUN_0022e520(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auStack_48 [4];

  fVar15 = DAT_0022e8f4;
  piVar3 = DAT_0022e8f0;
  fVar14 = DAT_0022e8ec;
  fVar13 = DAT_0022e8e8;
  iVar8 = DAT_0022e8e4;
  fVar10 = DAT_0022e8e0;
  fVar12 = DAT_0022e8dc;
  fVar11 = DAT_0022e8d8;
  piVar2 = DAT_0022e8d4;
  iVar5 = *DAT_0022e8d4;
  if (iVar5 == 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      iVar6 = FUN_0037571c(param_2);
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = *(int *)(&DAT_000022e0 + param_2);
      }
      if (iVar6 != 0 && iVar5 != 0) {
        iVar5 = *piVar2;
        if (iVar5 != 0) goto LAB_0022e638;
        *piVar2 = param_1;
        FUN_0037572c(fVar10,param_1);
        uVar4 = DAT_0022e900;
        *(undefined4 *)(param_1 + 0x140) = DAT_0022e8f8;
        uVar7 = DAT_0022e8fc;
        *(undefined2 *)(param_1 + 0xbc) = 0;
        *(short *)(param_1 + 0xbe) = (short)uVar7;
        *(undefined2 *)(param_1 + 0xc0) = 0x4000;
        *(undefined4 *)(param_1 + 0xc4) = uVar4;
        piVar2[1] = DAT_0022e904;
        piVar2[2] = iVar8;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
        uVar7 = FUN_0036ae18(param_1 + 0x214,4);
        uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        if (*(int *)(param_1 + 0x244) != 4) {
          FUN_00375c08(DAT_0022e908,iVar8,uVar7,fVar13,param_1 + 0x214,4,1);
        }
      }
      iVar5 = *piVar2;
      if (iVar5 != 0) goto LAB_0022e638;
    }
  }
  else {
LAB_0022e638:
    if (iVar5 == param_1) {
      psVar9 = *(short **)(&DAT_000022e0 + param_2);
      if (psVar9 == (short *)0x0) {
LAB_0022e6cc:
        *piVar2 = 0;
        piVar2[1] = iVar8;
        piVar2[2] = iVar8;
        FUN_00374428(param_1);
        return;
      }
      iVar6 = *piVar3;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5e0) =
           *(short *)(param_1 + 0x5e0) + (short)(int)(fVar15 + fVar10 * fVar11 * fVar14);
      iVar5 = DAT_0022e90c;
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x5e2) =
           (short)(int)(fVar15 + fVar11 * fVar12 * fVar14) + *(short *)(param_1 + 0x5e2);
      sVar1 = *psVar9;
      if (sVar1 == 1) {
        fVar11 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e0));
        fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e2));
        sVar1 = *(short *)(*piVar3 + 0x110);
        fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)piVar2[1] + fVar10 * (float)piVar2[2] * fVar14;
        piVar2[1] = (int)fVar10;
        if ((int)fVar10 < 0x3f800001) {
          piVar2[1] = iVar5;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        piVar2[2] = (int)((float)piVar2[2] - fVar10 * DAT_0022e91c * fVar14);
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x254) = (fVar13 + (fVar11 + fVar12) * fVar15) * fVar10 * fVar14;
        FUN_003731e0(param_1 + 0x214);
      }
      else if (sVar1 == 2) {
        fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e0));
        fVar10 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e2));
        fVar11 = DAT_0022e924;
        iVar6 = *piVar3;
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xbc) =
             *(short *)(param_1 + 0xbc) - (short)(int)(fVar15 + fVar16 * DAT_0022e920 * fVar14);
        fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xc0) =
             (short)(int)(fVar15 + fVar16 * fVar11 * fVar14) + *(short *)(param_1 + 0xc0);
        FUN_003705a0(iVar8,iVar5,DAT_0022e928);
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x254) = (fVar13 + (fVar12 + fVar10) * fVar15) * fVar11 * fVar14;
        FUN_003731e0(param_1 + 0x214);
      }
      else if (sVar1 == 3) goto LAB_0022e6cc;
      fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 6),(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 8),(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 10),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 0xe),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(psVar9 + 0x10),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar11 = (float)FUN_00361490(psVar9[2],psVar9[1],*(undefined2 *)(DAT_0022ecfc + param_2));
      *(float *)(param_1 + 0x28) = fVar12 + (fVar15 - fVar12) * fVar11;
      *(float *)(param_1 + 0x2c) = (float)piVar2[1] + (fVar16 - fVar10) * fVar11 + fVar10;
      *(float *)(param_1 + 0x30) = fVar13 + (fVar14 - fVar13) * fVar11;
      uVar7 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_48,param_1,param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x84) = uVar7;
      return;
    }
  }
  fVar13 = DAT_0022ed00;
  if (*(short *)(param_1 + 0x5de) < 1) {
    if (0 < *(short *)(param_1 + 0x5dc)) {
      *(short *)(param_1 + 0x5dc) = *(short *)(param_1 + 0x5dc) + -1;
    }
    iVar5 = *piVar3;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x5e0) =
         *(short *)(param_1 + 0x5e0) + (short)(int)(fVar15 + fVar16 * fVar11 * fVar14);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x5e2) =
         (short)(int)(fVar15 + fVar11 * fVar12 * fVar14) + *(short *)(param_1 + 0x5e2);
    iVar5 = *(int *)(param_1 + 0x128);
    if (((iVar5 != 0) && (*(int *)(iVar5 + 0x13c) == 0)) && (iVar5 != param_1)) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if ((*(code **)(param_1 + 0x5d8) == (code *)0x0) ||
       ((**(code **)(param_1 + 0x5d8))(param_1,param_2), *(int *)(param_1 + 0x13c) != 0)) {
      FUN_00376864(param_1);
      if (*(int *)(param_1 + 0x5e4) != 0) {
        FUN_00376340(DAT_0022ed10,DAT_0022ed0c,iVar8,param_2,param_1);
      }
      if (*(int *)(param_1 + 0x98) < DAT_0022ed14) {
        FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
      }
      FUN_0037322c(*(float *)(param_1 + 0xc4) * fVar10,param_1);
      uVar17 = FUN_00371e40(param_1,param_2);
      iVar8 = (int)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) {
        *(undefined4 *)(param_1 + 0x124) = 0;
        if (*(short *)(param_1 + 0x1c) != 0) {
          fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x5de) = (short)(int)(DAT_0022ed18 / fVar11 + fVar15);
          FUN_0037572c(fVar13,param_1);
          *(undefined4 *)(param_1 + 0x140) = 0;
          return;
        }
        goto LAB_0022ec08;
      }
      iVar8 = *(int *)(param_2 + 0x20ac);
      if (*(int *)(param_1 + 0x98) < 0x42000000) {
        fVar11 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x92) + -0x8000));
        fVar12 = DAT_0022ed1c;
        fVar13 = *(float *)(iVar8 + 0x28);
        fVar11 = fVar11 * DAT_0022ed1c;
        fVar10 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x92) + -0x8000));
        fVar13 = (fVar13 + fVar11) - *(float *)(param_1 + 0x28);
        fVar11 = (*(float *)(iVar8 + 0x30) + fVar10 * fVar12) - *(float *)(param_1 + 0x30);
        if ((int)(fVar13 * fVar13 + fVar11 * fVar11) <= DAT_0022ed20) {
          FUN_003724dc(DAT_0022ed28,DAT_0022ed24,param_1,param_2,0x7e);
          return;
        }
      }
    }
  }
  else {
    *(short *)(param_1 + 0x5de) = *(short *)(param_1 + 0x5de) + -1;
    iVar8 = param_2;
    if (*(short *)(param_1 + 0x1c) == 1) {
LAB_0022ec08:
      FUN_00374428(param_1,iVar8);
      return;
    }
    iVar8 = *(int *)(param_1 + 0x128);
    if (((iVar8 != 0) && (*(int *)(iVar8 + 0x13c) == 0)) && (iVar8 != param_1)) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
    if ((*(code **)(param_1 + 0x5d8) == (code *)0x0) ||
       ((**(code **)(param_1 + 0x5d8))(), *(int *)(param_1 + 0x13c) != 0)) {
      FUN_00376864(param_1);
      iVar8 = (int)*(short *)(param_1 + 0x5de);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_0022ed04 / fVar11 + fVar15) == iVar8) {
        *(undefined4 *)(param_1 + 0x140) = DAT_0022e8f8;
      }
      else {
        if (iVar8 == 0) {
          *(float *)(param_1 + 0x5c) = fVar10;
          *(float *)(param_1 + 0x58) = fVar10;
          *(float *)(param_1 + 0x54) = fVar10;
          return;
        }
        fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (iVar8 < (int)(DAT_0022ed04 / fVar11 + fVar15)) {
          fVar13 = *(float *)(param_1 + 0x54) + fVar13;
          if (DAT_0022ed08 < (int)fVar13) {
            fVar13 = fVar10;
          }
          FUN_0037572c(fVar13,param_1);
          return;
        }
      }
    }
  }
  return;
}
