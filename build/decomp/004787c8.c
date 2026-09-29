// OoT3D decomp @ 004787c8  name=FUN_004787c8  size=664

int FUN_004787c8(int param_1,float *param_2)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  short local_40;
  undefined2 local_3e;
  short local_3c;

  fVar4 = DAT_00478a60;
  sVar10 = 0;
  iVar11 = *(int *)(param_1 + 0xd4);
  local_64 = DAT_00478a60;
  local_60 = DAT_00478a60;
  local_5c = DAT_00478a60;
  *param_2 = DAT_00478a60;
  param_2[1] = fVar4;
  param_2[2] = fVar4;
  param_2[3] = fVar4;
  param_2[4] = fVar4;
  param_2[5] = fVar4;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined2 *)((int)param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  iVar9 = DAT_00478a64;
  param_2[8] = fVar4;
  fVar5 = DAT_00478a6c;
  fVar4 = DAT_00478a68;
  if (*(short *)(iVar9 + 2) == 0) {
    return 0;
  }
  iVar9 = 0;
  do {
    iVar8 = DAT_00478a70 + iVar9 * 0x24;
    if (*(byte *)(iVar8 + 8) != 0) {
      if (*(int *)(iVar11 + *(short *)(iVar8 + 0x1e) * 4 + 0xa54) != 0) {
        sVar6 = *(short *)(param_1 + 0x1ac);
        sVar2 = *(short *)(*(int *)(iVar8 + 4) + 0x1ac);
        iVar7 = (int)*(short *)(iVar8 + 0x18);
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 * fVar4;
        iVar7 = (**(code **)(DAT_00478a74 + (uint)*(byte *)(iVar8 + 8) * 4))(iVar8,&local_58);
        if (iVar7 != 0) {
          if (sVar6 == sVar2) {
            if (ABS(*param_2) < ABS(local_58)) {
              *param_2 = local_58;
            }
            if (ABS(param_2[1]) < ABS(local_54)) {
              param_2[1] = local_54;
            }
            if (ABS(param_2[2]) < ABS(local_50)) {
              param_2[2] = local_50;
            }
            if (ABS(param_2[3]) < ABS(local_4c)) {
              param_2[3] = local_4c;
            }
            if (ABS(param_2[4]) < ABS(local_48)) {
              param_2[4] = local_48;
            }
            uVar12 = in_fpscr & 0xfffffff | (uint)(ABS(local_44) <= ABS(param_2[5])) << 0x1d;
            if (!SUB41(uVar12 >> 0x1d,0)) {
              param_2[5] = local_44;
            }
            if (*(short *)(param_2 + 6) < local_40) {
              *(short *)(param_2 + 6) = local_40;
              *(undefined2 *)((int)param_2 + 0x1a) = local_3e;
            }
            sVar6 = local_3c;
            if (local_3c < *(short *)(param_2 + 7)) {
              sVar6 = *(short *)(param_2 + 7);
            }
            *(short *)(param_2 + 7) = sVar6;
            fVar14 = (float)FUN_00338a90(&local_58,&local_64);
            fVar15 = (float)FUN_00338a90(&local_4c,&local_64);
            sVar10 = sVar10 + 1;
            uVar12 = uVar12 & 0xfffffff;
            uVar1 = uVar12 | (uint)(fVar15 * fVar13 <= fVar14 * fVar13) << 0x1d;
            fVar14 = fVar14 * fVar13;
            if (!SUB41(uVar1 >> 0x1d,0)) {
              fVar14 = fVar15 * fVar13;
            }
            fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 6),
                                                (byte)(uVar1 >> 0x15) & 3);
            fVar15 = fVar15 * fVar5 * fVar13;
            uVar1 = uVar12 | (uint)(fVar15 <= fVar14) << 0x1d;
            if (!SUB41(uVar1 >> 0x1d,0)) {
              fVar14 = fVar15;
            }
            fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_2 + 7),
                                                (byte)(uVar1 >> 0x15) & 3);
            fVar13 = fVar15 * fVar5 * fVar13;
            if (fVar14 < fVar13) {
              fVar14 = fVar13;
            }
            fVar13 = param_2[8];
            uVar12 = uVar12 | (uint)(fVar13 < fVar14) << 0x1f | (uint)(fVar13 == fVar14) << 0x1e;
            in_fpscr = uVar12 | (uint)(NAN(fVar13) || NAN(fVar14)) << 0x1c;
            bVar3 = (byte)(uVar12 >> 0x18);
            if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar14 = fVar13;
            }
            param_2[8] = fVar14;
          }
          goto LAB_00478a44;
        }
      }
      *(undefined1 *)(iVar8 + 8) = 0;
      *(undefined2 *)(iVar8 + 0x1c) = 0xffff;
      *(short *)(DAT_00478a64 + 2) = *(short *)(DAT_00478a64 + 2) + -1;
    }
LAB_00478a44:
    iVar9 = iVar9 + 1;
    if (3 < iVar9) {
      return (int)sVar10;
    }
  } while( true );
}
