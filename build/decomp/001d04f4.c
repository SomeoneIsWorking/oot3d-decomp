// OoT3D decomp @ 001d04f4  name=FUN_001d04f4  size=820

void FUN_001d04f4(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfStack_98;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [48];
  
  fVar16 = fRam001d082c;
  fVar19 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84);
  if (iRam001d0828 < (int)fVar19) {
    fVar20 = *(float *)(param_1 + 0xcc);
    bVar1 = *(byte *)(param_1 + 0xd0);
    fVar13 = fVar19 - fRam001d0834;
    *(float *)(param_1 + 0xcc) = fVar20 * fRam001d0830;
    fVar13 = fVar13 * fRam001d0838;
    fVar17 = (float)VectorUnsignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (0x3f800000 < (int)fVar13) {
      fVar13 = fVar16;
    }
    uVar14 = VectorFloatToUnsigned(fVar17 * fVar13,3);
    *(char *)(param_1 + 0xd0) = (char)uVar14;
    func_0x0033e800(param_1,param_2,param_3,0,0);
    *(float *)(param_1 + 0xcc) = fVar20;
    *(byte *)(param_1 + 0xd0) = bVar1;
  }
  fVar3 = fRam001d0850;
  fVar2 = fRam001d084c;
  fVar20 = fRam001d0848;
  fVar17 = fRam001d0844;
  fVar13 = fRam001d0840;
  if ((int)fVar19 < iRam001d083c) {
    iVar10 = *param_2 - 2;
    pfStack_98 = &fStack_90;
    if (1 < iVar10) {
      iVar10 = 1;
    }
    iVar11 = param_1 + 0xd4;
    iVar12 = 0;
    *(undefined1 *)(param_1 + 0xd1) = 0;
    do {
      *(float *)(iVar11 + 4) = *(float *)(iVar11 + 4) + fVar13;
      fVar15 = (float)func_0x0033e6c8(param_3,auStack_88,iVar11);
      fVar19 = fRam001d0854;
      *pfStack_98 = fVar15;
      *(float *)(iVar11 + 4) = *(float *)(iVar11 + 4) - fVar13;
      cVar4 = (char)(((uint)*(byte *)(param_1 + 0xd1) << 0x19) >> 0x18);
      *(char *)(param_1 + 0xd1) = cVar4;
      iVar6 = iRam001d085c;
      fVar15 = *(float *)(iVar11 + 4) - *pfStack_98;
      if (((uint)fVar15 <= (uint)fVar19) && ((int)fVar15 < iRam001d0858)) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar17) << 0x1e |
                   (uint)(fVar17 <= fVar15) << 0x1d;
        iVar9 = 0;
        iVar8 = 0;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
          *(char *)(param_1 + 0xd1) = cVar4 + '\x01';
        }
        if (iVar6 < (int)fVar15) {
          fVar15 = fVar2;
        }
        fVar18 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x15) & 3);
        fVar19 = fVar15;
        if (iVar6 < (int)fVar15) {
          fVar19 = fVar2;
        }
        fVar19 = fVar16 - fVar19 * fVar3;
        fVar18 = fVar18 * (fVar16 - fVar15 * fVar20);
        fVar15 = *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x54) * fVar19;
        pbVar7 = param_2 + 0x10;
        if (0 < iVar10) {
          do {
            if ((0 < (char)pbVar7[9]) &&
               (iVar6 = ((uint)*pbVar7 + (uint)pbVar7[1] + (uint)pbVar7[2]) * (int)(char)pbVar7[9],
               0 < iVar6)) {
              iVar9 = iVar9 + iVar6;
              func_0x0033e450(fVar18,fVar15,fVar19,iVar12 * 3 + 2,param_1,param_3,pbVar7,auStack_88,
                              iVar6);
            }
            iVar8 = iVar8 + 1;
            pbVar7 = pbVar7 + 0x10;
          } while (iVar8 < iVar10);
        }
        iVar6 = 0;
        do {
          if ((0 < (char)pbVar7[9]) &&
             (iVar8 = ((uint)*pbVar7 + (uint)pbVar7[1] + (uint)pbVar7[2]) * (int)(char)pbVar7[9] +
                      iVar9 * -8, 0 < iVar8)) {
            func_0x0033e450(fVar18,fVar15,fVar19,iVar12 * 3 + iVar6,param_1,param_3,pbVar7,
                            auStack_88,iVar8);
          }
          iVar6 = iVar6 + 1;
          pbVar7 = pbVar7 + 0x10;
        } while (iVar6 < 2);
      }
      iVar12 = iVar12 + 1;
      pfStack_98 = pfStack_98 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar12 < 2);
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      *(undefined1 *)(param_1 + 0xd1) = 0;
    }
    else if (*(char *)(param_1 + 0xd1) == '\x03') {
      fVar16 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xe4);
      if (fStack_8c - fVar16 <= fStack_90 + fVar16) {
        uVar5 = 1;
      }
      else {
        uVar5 = 2;
      }
      *(undefined1 *)(param_1 + 0xd1) = uVar5;
    }
  }
  return;
}

