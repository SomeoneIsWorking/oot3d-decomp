// OoT3D decomp @ 00183634  name=FUN_00183634  size=760

uint FUN_00183634(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  uint in_fpscr;
  float fVar12;
  float extraout_s0;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar6 = FUN_0036b4ec(param_1 + 0x254);
  uVar9 = uRam00183934;
  fVar5 = fRam00183930;
  iVar4 = iRam0018392c;
  if (*(int *)(param_1 + 0x284) == 0xe6) {
    *(float *)(param_1 + 0x221c) = fRam00183930;
    uVar7 = FUN_0036b1e0(uVar9,param_1 + 0x254);
    if (uVar7 != 0) {
      fVar13 = *(float *)(*(int *)(param_1 + 0x170c) + 0xc);
      fVar12 = *(float *)(param_1 + 0x2270);
      if (fVar13 < *(float *)(param_1 + 0x2270)) {
        fVar12 = fVar13;
      }
      fVar13 = fRam00183938;
      if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
        fVar13 = fRam0018393c;
      }
      fVar12 = fVar12 * fVar13;
      if (*(int *)(iVar4 + 4) != 0) {
        fVar12 = fVar12 + fVar5;
      }
      FUN_0034b3dc(fVar12,param_1,0xffffffff,param_2,uRam00183940);
      uVar7 = 0xffffffff;
      *(undefined2 *)(param_1 + 0x2238) = 0xffff;
    }
    return uVar7;
  }
  iVar8 = FUN_0034b33c(uRam00183944,param_2,param_1,param_1 + 0x254);
  uVar9 = uRam00183954;
  fVar5 = fRam0018394c;
  if (iVar8 != 0) {
    if ((iVar6 == 0) && (iVar8 < 1)) {
      iVar6 = *(int *)(param_1 + 0x284);
      bVar1 = true;
      if (iVar6 == 0x3a) {
        iVar6 = FUN_0036b1e0(fRam00183950,param_1 + 0x254);
        if (iVar6 != 0) {
          *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xf7ffffff | 0x40000;
          FUN_00355264(param_2,param_1);
          iVar6 = FUN_00358b3c(uVar9,param_2,param_1,500);
          if (iVar6 != 0) {
            FUN_0036f59c(param_1,uRam00183958);
          }
          FUN_003589dc(param_2,param_1);
        }
        fVar13 = *(float *)(param_1 + 0x290);
        fVar12 = fVar13;
        if (iRam0018395c <= (int)fVar13) {
          fVar12 = fRam00183960;
        }
        bVar1 = (int)fVar13 < iRam0018395c;
        if (bVar1) {
          fVar12 = fRam00183964;
        }
      }
      else {
        fVar12 = fRam00183950;
        if ((iVar6 != 0xe7) && (fVar12 = fRam0018394c, iVar6 == 0xe8)) {
          fVar12 = fRam00183968;
        }
      }
      iVar6 = FUN_0036b1e0(fVar12,param_1 + 0x254);
      if ((iVar6 != 0) && (FUN_0034bd3c(param_1), bVar1)) {
        if (*(char *)(param_1 + 2) == '\x02') {
          FUN_0036f59c(param_1,iRam0018396c + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
        }
        else {
          FUN_0036aeb4(param_1 + 0x28);
        }
      }
      if (*(int *)(param_1 + 0x284) != 0xe8) {
        uVar10 = FUN_0036b4d0(uVar9,param_1 + 0x254);
        uVar7 = in_fpscr & 0xfffffff | (uint)(extraout_s0 < fVar5) << 0x1f |
                (uint)(extraout_s0 == fVar5) << 0x1e;
        in_fpscr = uVar7 | (uint)(NAN(extraout_s0) || NAN(fVar5)) << 0x1c;
        bVar3 = (byte)(uVar7 >> 0x18);
        if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          return uVar10;
        }
      }
      if (*(short *)(param_1 + 0x2238) == 0) {
        iVar6 = iRam00183970;
        if (*(char *)(param_1 + 0x1a7) != '\x01') {
          cVar2 = *(char *)(iVar4 + 0x80);
          iVar6 = *(int *)(param_1 + 0x228c) + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf6)
                  + 0x1000011;
          if ((cVar2 == ';' || cVar2 == '<') || cVar2 == '=') {
            FUN_0036f59c(param_1,uRam00183974);
          }
        }
        FUN_0036f59c(param_1,iVar6);
        *(undefined2 *)(param_1 + 0x2238) = 1;
      }
      fVar12 = DAT_00370628;
      pfVar11 = (float *)(param_1 + 0xc4);
      fVar13 = *pfVar11;
      if (fRam00183978 == DAT_00370628) {
        if (fVar13 == fVar5) {
          return 1;
        }
      }
      else {
        uVar7 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar5) << 0x1f |
                (uint)(fVar13 == fVar5) << 0x1e;
        bVar3 = (byte)(uVar7 >> 0x18);
        fVar14 = fRam00183978;
        if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(fVar13) || NAN(fVar5))) {
          fVar14 = -fRam00183978;
        }
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037062c + 0x110),
                                            (byte)(uVar7 >> 0x15) & 3);
        fVar14 = fVar15 * fVar14 * DAT_00370630;
        fVar13 = fVar13 + fVar14;
        *pfVar11 = fVar13;
        fVar14 = (fVar13 - fVar5) * fVar14;
        if (fVar14 < fVar12 == (NAN(fVar14) || NAN(fVar12))) {
          *pfVar11 = fVar5;
          return 1;
        }
      }
      return 0;
    }
    FUN_0036055c(param_2,param_1,uRam00183948,1);
    uVar9 = FUN_0034d628(param_1);
    FUN_003604f0(param_1 + 0x254,param_2,uVar9);
    *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
  }
  uVar7 = *(uint *)(param_1 + 0x1710) & 0xfffbbfff;
  *(uint *)(param_1 + 0x1710) = uVar7;
  return uVar7;
}

