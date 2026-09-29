// OoT3D decomp @ 00339890  name=FUN_00339890  size=984

void FUN_00339890(int param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [8];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;

  fVar8 = DAT_00339c80;
  fVar7 = DAT_00339c7c;
  fVar17 = DAT_00339c78;
  fVar6 = DAT_00339c74;
  piVar5 = DAT_00339c70;
  iVar12 = DAT_00339c6c;
  pfVar4 = DAT_00339c68;
  local_50 = *DAT_00339c68 - *(float *)(param_1 + 0x28);
  local_4c = DAT_00339c68[1] - *(float *)(param_1 + 0x2c);
  local_48 = DAT_00339c68[2] - *(float *)(param_1 + 0x30);
  fVar19 = local_50 * local_50 + local_4c * local_4c + local_48 * local_48;
  if (*(short *)(DAT_00339c6c + 0x1e) == 3) {
    uVar10 = *(ushort *)(param_1 + 0x1fa);
    bVar14 = uVar10 == 0;
    if (bVar14) {
      uVar10 = (ushort)*(byte *)(DAT_00339c6c + 5);
    }
    if (bVar14 && uVar10 == 0) {
      fVar15 = (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar15 * DAT_00339c84 * DAT_00339c88,auStack_8c,0);
      FUN_003735ac(auStack_5c,auStack_8c,&local_50);
      iVar11 = DAT_00339ca8;
      fVar13 = DAT_00339ca4;
      uVar9 = DAT_00339ca0;
      fVar15 = DAT_00339c8c;
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_54 < DAT_00339c8c) << 0x1f |
              (uint)(local_54 == DAT_00339c8c) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(local_54) || NAN(DAT_00339c8c)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) ||
         (*(int *)(param_1 + 0x204) < DAT_00339c90)) {
        if ((*(short *)(param_1 + 0x1b0) == 7) && ((int)fVar19 < DAT_00339c94)) {
          *(undefined2 *)(param_1 + 0x1b0) = 4;
          uVar9 = DAT_00339c98;
          fVar15 = pfVar4[1];
          fVar13 = pfVar4[2];
          *(float *)(param_1 + 0x20c) = *pfVar4;
          *(float *)(param_1 + 0x210) = fVar15;
          *(float *)(param_1 + 0x214) = fVar13;
          *(undefined4 *)(param_1 + 0x208) = uVar9;
          *(undefined4 *)(param_1 + 0x1e0) = DAT_00339c9c;
        }
        else {
          if ((((*param_2 & 1) != 0) || (0x3f800000 < *(int *)(iVar12 + 0xe8))) &&
             ((int)fVar19 < DAT_00339cac)) {
            *(undefined2 *)(param_1 + 0x1b0) = 2;
            *(undefined2 *)(param_1 + 0x1b6) = 0;
            *(undefined2 *)(param_1 + 0x1d2) = 0;
            fVar16 = (float)FUN_00371e50(uVar9);
            fVar16 = (float)VectorSignedToFloat((short)(int)fVar16 + 100,
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d6) = (short)(int)((fVar16 * fVar13) / fVar18 + fVar6);
            *(undefined4 *)(param_1 + 0x200) =
                 *(undefined4 *)(iVar11 + *(short *)(param_1 + 0x1c) * 0x10 + -0x634);
            *(float *)(param_1 + 0x208) = fVar15;
          }
          if ((*(short *)(param_1 + 0x1d4) == 0) && ((int)fVar19 < DAT_00339cb0)) {
            *(undefined2 *)(param_1 + 0x1b0) = 2;
            *(undefined2 *)(param_1 + 0x1b6) = 0;
            *(undefined2 *)(param_1 + 0x1d2) = 0;
            fVar16 = (float)FUN_00371e50(uVar9);
            fVar16 = (float)VectorSignedToFloat((short)(int)fVar16 + 100,
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d6) = (short)(int)((fVar16 * fVar13) / fVar18 + fVar6);
            *(undefined4 *)(param_1 + 0x200) =
                 *(undefined4 *)(iVar11 + *(short *)(param_1 + 0x1c) * 0x10 + -0x634);
            *(float *)(param_1 + 0x208) = fVar15;
          }
        }
      }
    }
  }
  else if (*(short *)(DAT_00339c6c + 0x1e) == 4) {
    bVar14 = *(char *)(DAT_00339c6c + 0x1a) != '\0';
    fVar15 = 0.0;
    if (bVar14) {
      fVar15 = fVar19;
      param_2 = DAT_00339cb4;
    }
    if ((bVar14 && (int)fVar15 < (int)param_2) && (9 < *(short *)(param_1 + 0x1b0))) {
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      *(undefined2 *)(param_1 + 0x1b0) = 1;
      iVar11 = *piVar5;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fc) = (short)(int)(fVar17 / fVar15 + fVar6);
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fa) = (short)(int)(fVar7 / fVar15 + fVar6);
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d4) = (short)(int)(fVar8 / fVar15 + fVar6);
    }
  }
  cVar2 = *(char *)(iVar12 + 0x16);
  bVar14 = cVar2 != '\x02';
  if (bVar14) {
    cVar2 = *(char *)(iVar12 + 0x17);
  }
  if (((bVar14 && cVar2 != '\0') && (DAT_00339cb8 < *(int *)(param_1 + 0x204))) &&
     (((int)fVar19 < DAT_00339cbc && (9 < *(short *)(param_1 + 0x1b0))))) {
    *(undefined2 *)(param_1 + 0x1b2) = 0;
    *(undefined2 *)(param_1 + 0x1b0) = 1;
    iVar12 = *piVar5;
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x1fc) = (short)(int)(fVar17 / fVar19 + fVar6);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x1fa) = (short)(int)(fVar7 / fVar17 + fVar6);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    *(short *)(param_1 + 0x1d4) = (short)(int)(fVar8 / fVar17 + fVar6);
  }
  return;
}
