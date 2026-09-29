// OoT3D decomp @ 0010ded0  name=FUN_0010ded0  size=1004

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010ded0(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;

  iVar5 = FUN_0037571c(param_2);
  fVar3 = DAT_0010e2c4;
  piVar2 = DAT_0010e2c0;
  fVar10 = DAT_0010e2bc;
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4), iVar5 != 0)) {
    if (*(char *)(param_1 + 0x289) == '\0') {
      uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      uVar12 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      uVar15 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar9;
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      *(undefined4 *)(param_1 + 0x30) = uVar15;
      *(undefined1 *)(param_1 + 0x289) = 1;
    }
    else {
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x1c),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x20),(byte)(in_fpscr >> 0x15) & 3
                                         );
      iVar5 = *DAT_0010e2c0;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x28) =
           *(float *)(param_1 + 0x28) +
           (fVar8 - *(float *)(param_1 + 0x28)) * DAT_0010e2bc * fVar14 * DAT_0010e2c4;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      *(float *)(param_1 + 0x2c) =
           *(float *)(param_1 + 0x2c) +
           (fVar11 - *(float *)(param_1 + 0x2c)) * fVar10 * fVar8 * fVar3;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      *(float *)(param_1 + 0x30) =
           *(float *)(param_1 + 0x30) +
           (fVar13 - *(float *)(param_1 + 0x30)) * fVar10 * fVar8 * fVar3;
    }
    fVar8 = DAT_0010e2c8;
    if (*(char *)(param_1 + 0x28b) == 'a') {
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xbe) =
           *(short *)(param_1 + 0xbe) + (short)(int)(DAT_0010e2c8 + fVar11 * DAT_0010e2d0 * fVar3);
    }
    else {
      *(short *)(param_1 + 0xbc) = (short)DAT_0010e2cc;
    }
    FUN_0037572c(DAT_0010e2d4,param_1);
    piVar4 = DAT_0010e2d8;
    if (*DAT_0010e2d8 == 0x53) {
      if (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == 2) {
        FUN_0036b9e0(param_1,param_2,0);
      }
      else if (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == 3) {
        FUN_0036b9e0(param_1,param_2,1);
      }
    }
    iVar5 = DAT_0010e2dc;
    iVar6 = DAT_0010e2dc + -2;
    sVar1 = **(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4);
    if (sVar1 == 2) {
      if (*piVar4 == 0x53) {
        FUN_00375bcc(param_1);
      }
      else {
        FUN_0037547c(iVar6,0,4,DAT_0010e2e4);
      }
      if (*(char *)(param_1 + 0x28b) != 'a') {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xbe) =
             *(short *)(param_1 + 0xbe) + (short)(int)(fVar8 + fVar10 * DAT_0010e2e8 * fVar3);
      }
      *(undefined2 *)(param_1 + 0x28e) = 16000;
    }
    else {
      if (sVar1 == 3) {
        iVar7 = *(short *)(param_1 + 0x28e) + -1000;
        fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = (float)VectorSignedToFloat((int)(short)(int)(fVar13 * fVar10),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((short)(int)(fVar11 * fVar10) < 1) {
          fVar10 = fVar13 * fVar14 * fVar3 - fVar8;
        }
        else {
          fVar10 = fVar8 + fVar13 * fVar14 * fVar3;
        }
        sVar1 = *(short *)(param_1 + 0x28e) - (short)(int)fVar10;
        *(short *)(param_1 + 0x28e) = sVar1;
        if (*(char *)(param_1 + 0x28b) != 'a') {
          fVar10 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          if (sVar1 < 1) {
            fVar8 = fVar10 * fVar11 * fVar3 - fVar8;
          }
          else {
            fVar8 = fVar8 + fVar10 * fVar11 * fVar3;
          }
          *(short *)(param_1 + 0xbe) = (short)(int)fVar8 + *(short *)(param_1 + 0xbe);
        }
        if (*piVar4 != 0x53) {
          FUN_0037547c(iVar6,0,4,DAT_0010e2e4);
          return;
        }
        FUN_0037547c(iVar5,param_1 + 0x28,4,DAT_00375c04);
        return;
      }
      if (sVar1 == 4) {
        FUN_00375bcc(param_1,iVar6);
        return;
      }
    }
  }
  return;
}
