// OoT3D decomp @ 0043f734  name=FUN_0043f734  size=596

undefined4 FUN_0043f734(void)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  iVar3 = FUN_0033f428(0x32,0x36,0x80,0x20,0);
  psVar1 = DAT_0043f988;
  if (iVar3 != 0) {
    psVar1[0x16] = 1;
    psVar1[0x17] = 0;
    *(undefined4 *)(psVar1 + 0x14) = *(undefined4 *)(psVar1 + 10);
    return 1;
  }
  iVar3 = FUN_0033f428(0x32,100,0x80,0x20,0);
  pfVar2 = DAT_0043f98c;
  pfVar6 = DAT_0043f98c + -6;
  pfVar4 = DAT_0043f98c + 6;
  pfVar5 = DAT_0043f98c + 9;
  if (iVar3 == 0) {
    iVar3 = FUN_0033f428(0x32,0x92,0x80,0x20,0);
    if (iVar3 != 0) {
      psVar1[0x16] = 4;
      psVar1[0x17] = 0;
      uVar7 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(psVar1 + 0x14) = uVar7;
      return 1;
    }
    iVar3 = FUN_0033f428(0x32,0xc0,0x80,0x20,0);
    if (iVar3 == 0) {
      iVar3 = FUN_0033f428(0xc0,0,0x80,0x80,0);
      if (iVar3 != 0) {
        psVar1[0x16] = 6;
        psVar1[0x17] = 0;
        *pfVar4 = *pfVar6;
        pfVar2[7] = pfVar2[-5];
        pfVar2[8] = pfVar2[-4];
        *pfVar5 = *pfVar2;
        pfVar2[10] = pfVar2[1];
        pfVar2[0xb] = pfVar2[2];
        FUN_002f43d8(1);
        psVar1[0x18] = 1;
        psVar1[0x19] = 0;
        return 1;
      }
      iVar3 = FUN_0033f428(0xc0,0x80,0x80,0x80,0);
      if (iVar3 != 0) {
        psVar1[0x16] = 7;
        psVar1[0x17] = 0;
        *pfVar4 = *pfVar6;
        pfVar2[7] = pfVar2[-5];
        pfVar2[8] = pfVar2[-4];
        *pfVar5 = *pfVar2;
        pfVar2[10] = pfVar2[1];
        pfVar2[0xb] = pfVar2[2];
        FUN_002f43d8(1);
        psVar1[0x18] = 1;
        psVar1[0x19] = 0;
        return 1;
      }
      psVar1[0x16] = 0;
      psVar1[0x17] = 0;
      return 0;
    }
    psVar1[0x16] = 5;
    psVar1[0x17] = 0;
    uVar7 = *(undefined4 *)(psVar1 + 0xe);
  }
  else {
    if (*(int *)(psVar1 + 0x18) == 1) {
      psVar1[0x16] = 3;
      psVar1[0x17] = 0;
      fVar10 = *pfVar2;
      fVar11 = *pfVar6;
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[-5];
      fVar15 = fVar10 - fVar11;
      fVar14 = pfVar2[2];
      fVar8 = fVar12 - fVar13;
      fVar16 = pfVar2[-4];
      fVar9 = fVar14 - fVar16;
      *(float *)(psVar1 + 0x20) = SQRT(fVar15 * fVar15 + fVar8 * fVar8 + fVar9 * fVar9);
      *pfVar4 = fVar11;
      pfVar2[7] = fVar13;
      pfVar2[8] = fVar16;
      *pfVar5 = fVar10;
      pfVar2[10] = fVar12;
      pfVar2[0xb] = fVar14;
      return 1;
    }
    psVar1[0x16] = 2;
    psVar1[0x17] = 0;
    uVar7 = *(undefined4 *)(psVar1 + 0xc);
  }
  *(undefined4 *)(psVar1 + 0x14) = uVar7;
  return 1;
}
