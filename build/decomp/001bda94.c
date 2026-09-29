// OoT3D decomp @ 001bda94  name=FUN_001bda94  size=1016

void FUN_001bda94(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 uVar14;
  uint in_fpscr;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  if ((int)*(float *)(param_1 + 0x1060) != 0) {
    FUN_00370734(param_1 + 0x1a4);
    if ((((*(short *)(param_1 + 0x106a) == 0) ||
         (sVar6 = *(short *)(param_1 + 0x106a) + -1, *(short *)(param_1 + 0x106a) = sVar6,
         sVar6 == 0)) && ((*(uint *)(param_2 + 0xf8) & 1) != 0)) &&
       (sVar6 = *(short *)(param_1 + 0x106c) + 1, *(short *)(param_1 + 0x106c) = sVar6, 2 < sVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e);
    }
  }
  FUN_00376864(param_1);
  uVar1 = DAT_001bdf08;
  FUN_00376340(*(undefined4 *)(param_1 + 0xcf8),*(float *)(param_1 + 0xcfc) * DAT_001bdf04,param_2,
               param_1,5);
  (**(code **)(param_1 + 0xc8c))(param_1,param_2);
  uVar15 = DAT_001bdf14;
  iVar9 = DAT_001bdf10;
  iVar7 = *(int *)(DAT_001bdf0c + param_2);
  uVar10 = *(undefined4 *)(iVar7 + 0x2c);
  uVar14 = *(undefined4 *)(iVar7 + 0x30);
  *(undefined4 *)(param_1 + 0xca8) = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(param_1 + 0xcac) = uVar10;
  *(undefined4 *)(param_1 + 0xcb0) = uVar14;
  if (*(int *)(param_1 + 0xc8c) == iVar9) {
    if (*(int *)(DAT_001bdf18 + 4) == 0) {
      uVar15 = DAT_001bdf1c;
    }
    *(undefined4 *)(param_1 + 0xca4) = uVar15;
  }
  else {
    *(undefined4 *)(param_1 + 0xcac) = *(undefined4 *)(param_1 + 0x2c);
  }
  FUN_0034c664(param_1,param_1 + 0xc90,0xb,(int)*(short *)(param_1 + 0x1064));
  if (*(char *)(param_1 + 0xd10) == '\x01') {
    FUN_00342714(*(undefined4 *)(param_1 + 0x105c),param_2,param_1,param_1 + 0xc90,DAT_001bdf24,
                 DAT_001bdf20);
  }
  uVar15 = DAT_001bdf2c;
  fVar18 = DAT_001bdf28;
  if ((*(uint *)(param_2 + 0xf8) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((int)*(float *)(param_1 + 0x1060) != 0) {
    FUN_0037632c(param_1);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xcb8);
  }
  fVar3 = DAT_001bdf50;
  piVar2 = DAT_001bdf4c;
  fVar17 = DAT_001bdf48;
  uVar14 = DAT_001bdf44;
  uVar10 = DAT_001bdf40;
  pcVar11 = (char *)(param_1 + 0xd14);
  sVar6 = 0;
  pcVar12 = pcVar11;
  do {
    if (*pcVar12 == '\x01') {
      FUN_00373500(*(undefined4 *)(pcVar12 + 8),uVar14,uVar10,pcVar12 + 4);
      iVar9 = (int)*(short *)(*piVar2 + 0x110);
      fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fVar18 + fVar16 * fVar17 * fVar3) < (int)(uint)(byte)pcVar12[0xf]) {
        fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        uVar8 = (uint)(byte)pcVar12[0xf] - (int)(fVar18 + fVar16 * fVar17 * fVar3);
      }
      else {
        uVar8 = 0;
      }
      pcVar12[0xf] = (char)uVar8;
      if ((uVar8 & 0xff) == 0) {
        *pcVar12 = '\0';
      }
    }
    uVar5 = DAT_001be0c4;
    fVar16 = DAT_001be0c0;
    uVar4 = DAT_001bdf54;
    sVar6 = sVar6 + 1;
    pcVar12 = pcVar12 + 0x38;
  } while (sVar6 < 0xf);
  sVar6 = 0;
  pcVar12 = pcVar11;
  do {
    if (*pcVar12 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar6 = sVar6 + 1;
    pcVar12 = pcVar12 + 0x38;
  } while (sVar6 < 0xf);
  sVar6 = 0;
  pcVar12 = pcVar11;
  do {
    if (*pcVar12 == '\x02') {
      iVar9 = *piVar2;
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar12 + 0x14) =
           *(float *)(pcVar12 + 0x14) + *(float *)(pcVar12 + 0x20) * fVar18 * fVar3;
      fVar17 = *(float *)(pcVar12 + 0x24);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar18 = *(float *)(pcVar12 + 0x18) + fVar17 * fVar18 * fVar3;
      *(float *)(pcVar12 + 0x18) = fVar18;
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(pcVar12 + 0x1c) =
           *(float *)(pcVar12 + 0x1c) + *(float *)(pcVar12 + 0x28) * fVar19 * fVar3;
      if ((uint)fVar16 < (uint)fVar17) {
        *(undefined4 *)(pcVar12 + 0x24) = uVar5;
        *(undefined4 *)(pcVar12 + 0x30) = uVar1;
      }
      else {
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(pcVar12 + 0x24) = fVar17 + *(float *)(pcVar12 + 0x30) * fVar19 * fVar3;
      }
      fVar17 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar17 <= fVar18) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        *pcVar12 = '\0';
        *(float *)(pcVar12 + 0x18) = fVar17;
        iVar9 = 0;
        pcVar13 = pcVar11;
        do {
          if (*pcVar13 == '\0') {
            *pcVar13 = '\x01';
            uVar10 = *(undefined4 *)(pcVar12 + 0x18);
            uVar14 = *(undefined4 *)(pcVar12 + 0x1c);
            *(undefined4 *)(pcVar13 + 0x14) = *(undefined4 *)(pcVar12 + 0x14);
            *(undefined4 *)(pcVar13 + 0x18) = uVar10;
            *(undefined4 *)(pcVar13 + 0x1c) = uVar14;
            *(undefined4 *)(pcVar13 + 4) = uVar4;
            *(undefined4 *)(pcVar13 + 8) = uVar15;
            pcVar13[0xf] = -0x38;
            break;
          }
          iVar9 = iVar9 + 1;
          pcVar13 = pcVar13 + 0x38;
        } while (iVar9 < 0xf);
      }
    }
    sVar6 = sVar6 + 1;
    pcVar12 = pcVar12 + 0x38;
    if (0xe < sVar6) {
      return;
    }
  } while( true );
}
