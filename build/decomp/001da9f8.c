// OoT3D decomp @ 001da9f8  name=FUN_001da9f8  size=1180

void FUN_001da9f8(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = fRam001dad04;
  uVar6 = uRam001dad00;
  iVar7 = iRam001dacfc;
  if (*(int *)(iRam001dacfc + 0x4dc) != 0xfedc) {
    uVar8 = *(ushort *)(param_1 + 0x1c8);
    iVar4 = *piRam001dad08;
    if ((short)uVar8 < 2) {
      if (*(char *)(iVar4 + 0xb) != '\0') {
        *(undefined4 *)(param_1 + 0x1d4) = uRam001dad00;
        *(undefined4 *)(param_1 + 0x1d8) = uVar6;
        *(undefined4 *)(param_1 + 0x1d0) = uVar6;
        *(undefined4 *)(param_1 + 0x1dc) = uVar6;
        if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
           (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
           *(int *)(iRam001dad0c + iVar4) != 0)) {
          iVar4 = iVar4 + 0x3a5c;
        }
        else {
          iVar4 = 0;
        }
        piVar5 = (int *)FUN_0034807c(iVar4 + 0x10,*(undefined1 *)(param_1 + 0x1ce));
        func_0x00348068(*(undefined4 *)(param_1 + 0x1a4),piVar5);
        uVar11 = VectorSignedToFloat(*(int *)(*(int *)(*piVar5 + 0x14) + *piVar5 + 0x10) + 1,
                                     (byte)(in_fpscr >> 0x15) & 3);
        func_0x00348054(uVar11,*(undefined4 *)(param_1 + 0x1a4));
        *(undefined1 *)(iVar7 + 0x5a6) = 1;
        *(undefined1 *)(iVar7 + 0x5a7) = 0xff;
        iVar4 = FUN_003487ec(uRam001dad10);
        if (iVar4 == 0) {
          if (*(char *)(param_2 + 0x5c2d) != '\x14') {
            FUN_0033d13c(0);
            FUN_0037547c(uRam001dad20,0,4,uRam001dad18,uRam001dad18,uRam001dad14);
          }
          if (*(short *)(param_1 + 0x1c8) < 2) {
            *(undefined2 *)(param_1 + 0x1c0) = 0x19;
            *(undefined2 *)(param_1 + 0x1c8) = 4;
          }
          piVar5 = piRam001dad08;
          *(undefined2 *)(param_1 + 0x1c2) = 1;
          func_0x0040a020(*piVar5);
        }
        else {
          FUN_0037547c(uRam001dad1c,0,4,uRam001dad18,uRam001dad18,uRam001dad14);
          piVar5 = piRam001dad08;
          *(undefined2 *)(param_1 + 0x1c8) = 2;
          *(undefined2 *)(param_1 + 0x1c0) = 0x14;
          func_0x00347fbc(*piVar5,1);
        }
      }
      goto LAB_001dac6c;
    }
    if (1 < (short)uVar8) {
      if (*(short *)(param_1 + 0x1c0) != 0) {
        *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
        goto LAB_001dac6c;
      }
      if (*(short *)(param_1 + 0x1c2) == 0) {
        bVar10 = uVar8 == 2;
        if (bVar10) {
          uVar8 = (ushort)*(byte *)(iVar4 + 8);
        }
        if (bVar10 && uVar8 == 0) {
          *(undefined1 *)(iVar4 + 7) = 1;
        }
        if (*(char *)(iVar4 + 8) != '\0') {
          if (*(char *)(param_2 + 0x5c2d) != '\x14') {
            FUN_0033d13c(0);
            FUN_0037547c(uRam001dad20,0,4,uRam001dad18,uRam001dad18,uRam001dad14);
          }
          sVar2 = *(short *)(param_1 + 0x1c8);
          if (sVar2 == 2 || sVar2 == 5) {
            *(undefined2 *)(param_1 + 0x1c0) = 0x19;
            *(undefined2 *)(param_1 + 0x1c8) = 4;
          }
          else if (sVar2 == 3) {
            *(undefined2 *)(param_1 + 0x1c0) = 0x19;
            *(undefined2 *)(param_1 + 0x1c8) = 6;
          }
          *(undefined2 *)(param_1 + 0x1c2) = 1;
        }
        goto LAB_001dac6c;
      }
      goto LAB_001dae38;
    }
LAB_001daee0:
    if (*(short *)(param_1 + 0x1c8) == 4) {
      if (0 < *(short *)(param_1 + 0x1c0)) {
        return;
      }
      if (*(char *)(param_2 + 0x5c2d) != '\x14') {
        *(undefined4 *)(iVar7 + 0x4e4) = 2;
        *(undefined1 *)(param_2 + 0x5c2d) = 0x14;
        *(undefined1 *)(param_2 + 0x5c76) = 2;
      }
      *(undefined2 *)(param_1 + 0x1ca) = 0xf;
      uVar3 = 3;
      *(undefined2 *)(param_1 + 0x1cc) = 0x19;
      goto LAB_001daf20;
    }
    if (*(short *)(param_1 + 0x1c8) == 6) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = *(float *)(param_1 + 0x1d0) - fVar13;
      *(float *)(param_1 + 0x1d0) = fVar13;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        *(float *)(param_1 + 0x1d0) = fVar12;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(uVar1 >> 0x15) & 3
                                         );
      fVar13 = *(float *)(param_1 + 0x1d4) - fVar13;
      *(float *)(param_1 + 0x1d4) = fVar13;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        *(float *)(param_1 + 0x1d4) = fVar12;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(uVar1 >> 0x15) & 3
                                         );
      fVar13 = *(float *)(param_1 + 0x1d8) - fVar13;
      *(float *)(param_1 + 0x1d8) = fVar13;
      if (fVar13 < fVar12) {
        *(float *)(param_1 + 0x1d8) = fVar12;
      }
      bVar10 = false;
      if (*(float *)(param_1 + 0x1d0) == fVar12) {
        bVar10 = *(float *)(param_1 + 0x1d4) == fVar12;
      }
      bVar9 = false;
      if (bVar10) {
        bVar9 = *(float *)(param_1 + 0x1d8) == fVar12;
      }
      if (!bVar9) {
        return;
      }
      if (*(short *)(param_1 + 0x1c0) != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x1c8) = 5;
      if (*(char *)(param_2 + 0x5c2d) == '\x14') {
        return;
      }
      *(undefined4 *)(iVar7 + 0x4e4) = 2;
      *(undefined1 *)(param_2 + 0x5c2d) = 0x14;
      *(undefined1 *)(param_2 + 0x5c76) = 2;
    }
    goto LAB_001daff8;
  }
LAB_001dac6c:
  iVar4 = iRam001db038;
  fVar13 = fRam001db034;
  if (*(short *)(param_1 + 0x1c8) != 1) {
LAB_001dae38:
    if (*(short *)(param_1 + 0x1c8) == 3) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = *(float *)(param_1 + 0x1d0) - fVar13;
      *(float *)(param_1 + 0x1d0) = fVar13;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        *(float *)(param_1 + 0x1d0) = fVar12;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(uVar1 >> 0x15) & 3
                                         );
      fVar13 = *(float *)(param_1 + 0x1d4) - fVar13;
      *(float *)(param_1 + 0x1d4) = fVar13;
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        *(float *)(param_1 + 0x1d4) = fVar12;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(uVar1 >> 0x15) & 3
                                         );
      fVar13 = *(float *)(param_1 + 0x1d8) - fVar13;
      *(float *)(param_1 + 0x1d8) = fVar13;
      if (fVar13 < fVar12) {
        *(float *)(param_1 + 0x1d8) = fVar12;
      }
      bVar10 = false;
      if (*(float *)(param_1 + 0x1d0) == fVar12) {
        bVar10 = *(float *)(param_1 + 0x1d4) == fVar12;
      }
      bVar9 = false;
      if (bVar10) {
        bVar9 = *(float *)(param_1 + 0x1d8) == fVar12;
      }
      if (!bVar9) {
        return;
      }
      uVar3 = 5;
      goto LAB_001daf20;
    }
    goto LAB_001daee0;
  }
  switch(*(undefined2 *)(param_1 + 0x1c4)) {
  case 0:
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar7 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(iRam001dad0c + iVar7) != 0)) {
      iVar7 = iVar7 + 0x3a5c;
    }
    else {
      iVar7 = 0;
    }
    uVar6 = FUN_0034807c(iVar7 + 0x10,*(undefined1 *)(param_1 + 0x1ce));
    func_0x00348068(*(undefined4 *)(param_1 + 0x1a4),uVar6);
    *(undefined2 *)(param_1 + 0x1c6) = 0x26;
    *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + 1;
    break;
  case 1:
    sVar2 = *(short *)(param_1 + 0x1c6) + -1;
    *(short *)(param_1 + 0x1c6) = sVar2;
    if (sVar2 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x1c6) = 0x51;
    *(undefined2 *)(param_1 + 0x1c4) = 2;
    return;
  case 2:
    *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1d4) + fRam001db030;
    sVar2 = *(short *)(param_1 + 0x1c6) + -1;
    *(short *)(param_1 + 0x1c6) = sVar2;
    if (sVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1d4) = uVar6;
    *(undefined2 *)(param_1 + 0x1c6) = 0x3c;
    *(undefined2 *)(param_1 + 0x1c4) = 3;
    return;
  case 3:
    *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x1d0) + fRam001db034;
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) + fVar13;
    sVar2 = *(short *)(param_1 + 0x1c6) + -1;
    *(short *)(param_1 + 0x1c6) = sVar2;
    piVar5 = piRam001dad08;
    if (sVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1d0) = uVar6;
    *(undefined4 *)(param_1 + 0x1dc) = uVar6;
    *(undefined2 *)(param_1 + 0x1c4) = 4;
    func_0x00347fbc(*piVar5,0);
    break;
  case 4:
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1ca),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar12 = *(float *)(param_1 + 0x1d8) + fVar12;
    *(float *)(param_1 + 0x1d8) = fVar12;
    if ((int)fVar12 < iVar4) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1d8) = uVar6;
    *(undefined2 *)(param_1 + 0x1c8) = 2;
    *(undefined2 *)(param_1 + 0x1c4) = 5;
    *(undefined2 *)(param_1 + 0x1c0) = 0x14;
    goto code_r0x001db044;
  }
LAB_001daff8:
  if (*(short *)(param_1 + 0x1c8) == 0) {
    iVar7 = FUN_0035a3c4(param_2,3);
    if (iVar7 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x1c6) = 0x28;
    uVar3 = 1;
  }
  else {
    if (*(short *)(param_1 + 0x1c8) != 2) {
      return;
    }
code_r0x001db044:
    iVar7 = FUN_0035a3c4(param_2,4);
    if (iVar7 == 0) {
      return;
    }
    uVar3 = 3;
  }
LAB_001daf20:
  *(undefined2 *)(param_1 + 0x1c8) = uVar3;
  return;
}

