// OoT3D decomp @ 003365b0  name=FUN_003365b0  size=1460

undefined4 FUN_003365b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int *piVar3;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(char *)(param_2 + 2) != '\x02') {
    return 0;
  }
  iVar5 = 0;
  if ((*(uint *)(param_2 + 0x1710) & 0x80) == 0) {
    if (*(char *)(param_1 + 0x5c2d) != '\0') {
      return 0;
    }
    bVar12 = *(char *)(param_2 + 0x12bc) == '\0';
    if (bVar12) {
      bVar12 = (*(uint *)(param_2 + 0x1710) & 1) == 0;
    }
    if (bVar12) {
      iVar11 = param_1 + 0xa98;
      if (((param_3 == 0) || (iVar5 = FUN_0049f95c(iVar11,param_3,param_4), iVar5 == 0)) &&
         ((iVar9 = *(int *)(DAT_00336aa4 + 0x28), (iVar9 != 4 && iVar9 != 7) && iVar9 != 0xc ||
          (*(char *)(param_2 + 0x248a) != '\f')))) goto LAB_003369f4;
      psVar2 = DAT_00336ab0;
      iVar9 = DAT_00336aac;
      iVar10 = (int)*(short *)(param_2 + 0x249c) - (int)*(float *)(param_2 + 0x2c);
      bVar12 = (*(uint *)(param_2 + 0x1710) & 0x28800000) == 0;
      if (bVar12) {
        bVar12 = (*(ushort *)(param_2 + 0x90) & 1) == 0;
      }
      if (((bVar12) && (iVar10 < 100)) && (DAT_00336aa8 < *(int *)(DAT_00336aa4 + 0x3c))) {
        return 0;
      }
      if (iVar5 == 0) {
        FUN_0036ebdc(param_1);
        FUN_0035da3c(param_1);
      }
      else {
        sVar1 = *(short *)(*(int *)(param_1 + 0x5c1c) + iVar5 * 2 + -2);
        iVar5 = (int)sVar1;
        if (iVar5 == 0x7fff) {
          *(undefined4 *)(DAT_00336aac + 0x4ec) = 2;
          FUN_003716f0(param_1,(int)psVar2[0xe],0x14,3);
          *(undefined *)(iVar9 + 0x5ab) = 3;
        }
        else if (iVar5 < DAT_00336ab4) {
          iVar6 = FUN_00331030(iVar11,param_3,param_4);
          if (iVar6 == 2) {
            *psVar2 = sVar1;
            FUN_0036ebdc(param_1);
            *(undefined4 *)(iVar9 + 0x4ec) = 0xfffffffe;
          }
          *(undefined *)(iVar9 + 0x54d) = 1;
          FUN_003348e8(param_1,iVar5,0x14);
          FUN_0035da3c(param_1);
        }
        else {
          FUN_003348e8(param_1,(int)*(short *)(DAT_00336abc +
                                              ((uint)*(byte *)(param_1 + 0x5c02) +
                                              (uint)*(byte *)(DAT_00336ab8 + iVar5 + -0x7ff9)) * 2),
                       0x14);
          FUN_0035da3c(param_1);
        }
      }
      fVar13 = DAT_00336ac0;
      uVar7 = *(uint *)(param_2 + 0x1710);
      bVar12 = (uVar7 & 0x20800000) == 0;
      if (bVar12) {
        bVar12 = (*(uint *)(param_2 + 0x1714) & 0x40000) == 0;
      }
      if (bVar12) {
        bVar12 = (uVar7 & 0x8000000) != 0;
        if (bVar12) {
          uVar7 = (uint)*(byte *)(param_2 + 0x1a7);
        }
        if ((bVar12 && uVar7 != 1) ||
           (iVar5 = FUN_0035ea34(iVar11,param_3,param_4), piVar3 = DAT_00336ac4, iVar5 == 10))
        goto LAB_00336980;
        bVar12 = iVar10 == 100;
        if (99 < iVar10) {
          bVar12 = (*(ushort *)(param_2 + 0x90) & 1) == 0;
        }
        if (!bVar12) {
          if (iVar5 == 0xb) {
            FUN_0037547c(DAT_00336ad0,0,4,DAT_00336acc,DAT_00336acc,DAT_00336ac8);
            fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            FUN_002e7248((int)(DAT_00336ad4 / fVar13 + DAT_00336ad8));
            *(undefined4 *)(iVar9 + 0x558) = 0xff;
            *(undefined *)(iVar9 + 0x56e) = 0xff;
          }
          else {
            fVar14 = *(float *)(param_2 + 0x221c);
            uVar7 = in_fpscr & 0xfffffff | (uint)(fVar13 <= fVar14) << 0x1d;
            if (!SUB41(uVar7 >> 0x1d,0)) {
              fVar14 = -fVar14;
              *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0x36) + -0x8000;
            }
            uVar8 = DAT_00336ae8;
            fVar13 = DAT_00336ae4;
            iVar5 = (int)*(short *)(*piVar3 + 0x6e);
            fVar15 = (float)VectorSignedToFloat(iVar5,(byte)(uVar7 >> 0x15) & 3);
            uVar7 = in_fpscr & 0xfffffff | (uint)(fVar14 <= fVar15 * DAT_00336adc) << 0x1d;
            if (!SUB41(uVar7 >> 0x1d,0)) {
              fVar14 = (float)VectorSignedToFloat(iVar5,(byte)(uVar7 >> 0x15) & 3);
              fVar14 = fVar14 * DAT_00336adc;
            }
            *(float *)(DAT_00336ae0 + 0x144) = fVar14;
            if (*(int *)(DAT_00336aa4 + 0x38) == 0) {
              sVar1 = *(short *)(param_2 + 0x36);
            }
            else {
              sVar1 = *(short *)(DAT_00336aa4 + 2);
            }
            FUN_0036055c(param_1,param_2,uVar8,0);
            FUN_0036b0fc(param_1,param_2);
            *(undefined *)(param_2 + 0x2237) = 1;
            *(undefined2 *)(param_2 + 0x2238) = 1;
            fVar14 = (float)FUN_002cfca0((int)sVar1);
            *(float *)(param_2 + 0x12c8) = *(float *)(param_2 + 0x28) + fVar13 * fVar14;
            fVar14 = (float)FUN_00338f60((int)sVar1);
            *(float *)(param_2 + 0x12d0) = *(float *)(param_2 + 0x30) + fVar13 * fVar14;
            uVar8 = FUN_0034d628(param_2);
            FUN_003604f0(param_2 + 0x254,param_1,uVar8);
          }
          goto LAB_00336994;
        }
      }
      else {
LAB_00336980:
        if ((*(ushort *)(param_2 + 0x90) & 1) != 0) goto LAB_00336994;
      }
      *(float *)(param_2 + 0x6c) = fVar13;
      *(float *)(param_2 + 0x221c) = fVar13;
LAB_00336994:
      *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x20000001;
      iVar5 = FUN_00334370(param_1);
      if (iVar5 == 0) {
        FUN_0034be04(2);
      }
      else {
        uVar8 = FUN_0036c5bc(param_1,0);
        FUN_0033885c(uVar8,0x2f);
      }
      return 1;
    }
  }
  else {
LAB_003369f4:
    if (*(char *)(param_1 + 0x5c2d) != '\0') {
      return 0;
    }
  }
  if (*(uint *)(param_2 + 0x2c) <= DAT_00336aec) {
    if (*(char *)(param_2 + 0x248a) == '\x05' || *(char *)(param_2 + 0x248a) == '\f') {
      if ((DAT_00336aa8 <= *(int *)(DAT_00336aa4 + 0x3c)) && (*(short *)(param_2 + 0x2282) < 0x191))
      {
        if (*(short *)(param_1 + 0x104) == 7) goto LAB_00336b98;
        if (*(short *)(param_2 + 0x2282) < 0xc9) goto LAB_00336a60;
      }
    }
    else {
LAB_00336a60:
      if ((*(short *)(param_1 + 0x104) != 0x1a) || (*(short *)(param_2 + 0x2282) < 0x141))
      goto LAB_00336b98;
    }
  }
  if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
    FUN_0036055c(param_1,param_2,DAT_00336bb4,0);
    *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0xa0000000;
    uVar8 = FUN_0036c5bc(param_1,0);
    FUN_0033885c(uVar8,0x21);
    FUN_0033f104(0);
    *(short *)(param_2 + 0x2238) = (short)DAT_00336bb8;
    if (*(char *)(param_2 + 0x248a) == '\x05') {
      uVar4 = 0xff;
    }
    else {
      uVar4 = 1;
    }
    *(undefined *)(param_2 + 0x2237) = uVar4;
  }
  else {
    if (*(char *)(param_2 + 0x248a) == '\x05') {
      FUN_0036f4f0();
    }
    else {
      FUN_0036ebdc(param_1);
    }
    *(undefined *)(param_1 + 0x5c76) = 4;
    if (*(short *)(param_1 + 0x104) != 0x5e) {
      FUN_0037547c(DAT_00336bb0,0,4,DAT_00336acc,DAT_00336acc,DAT_00336ac8);
    }
  }
LAB_00336b98:
  *(short *)(param_2 + 0x249c) = (short)(int)*(float *)(param_2 + 0x2c);
  return 0;
}

