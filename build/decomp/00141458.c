// OoT3D decomp @ 00141458  name=FUN_00141458  size=1256

void FUN_00141458(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;

  fVar18 = DAT_00141868;
  piVar2 = DAT_00141864;
  if (*(short *)(param_1 + 0x962) == 0) {
    *(undefined4 *)(param_1 + 0x9dc) = DAT_0014188c;
    *(undefined2 *)(param_1 + 0x962) = 0x18;
  }
  else {
    uVar10 = *(short *)(param_1 + 0x962) - 1;
    uVar11 = (uint)uVar10;
    *(ushort *)(param_1 + 0x962) = uVar10;
    fVar4 = DAT_00141884;
    fVar21 = DAT_0014187c;
    fVar3 = DAT_0014186c;
    iVar12 = *piVar2;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar12 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                       );
    if ((int)uVar11 < (int)(fVar18 / fVar16 + DAT_0014186c)) {
      uVar15 = 0x4000;
    }
    else {
      fVar16 = (float)VectorSignedToFloat(0xc - uVar11,(byte)(in_fpscr >> 0x15) & 3);
      uVar15 = (undefined2)(int)(fVar16 * DAT_00141870 * DAT_00141874 * DAT_00141878);
    }
    *(undefined2 *)(param_1 + 0xbc) = uVar15;
    fVar7 = DAT_001418a4;
    fVar6 = DAT_001418a0;
    fVar5 = DAT_0014189c;
    fVar17 = DAT_00141898;
    fVar16 = DAT_00141894;
    iVar12 = (int)*(short *)(iVar12 + 0x110);
    fVar19 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar11 < (int)(fVar21 / fVar19 + fVar3)) {
      iVar14 = DAT_00141890;
      if ((int)uVar11 < (int)(fVar18 / fVar20 + fVar3)) {
        fVar21 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)(fVar4 / fVar21 + fVar3) < (int)uVar11) {
          fVar21 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar21 = (float)VectorSignedToFloat(uVar11 - (int)(fVar4 / fVar21 + fVar3),
                                              (byte)(in_fpscr >> 0x15) & 3);
          iVar14 = (int)(short)(int)(fVar21 * DAT_00141880);
        }
        else {
          iVar14 = 0;
        }
      }
    }
    else {
      fVar21 = (float)VectorSignedToFloat((int)(DAT_00141888 / fVar20 + fVar3) - uVar11,
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar14 = (int)(short)(int)(fVar21 * DAT_00141880);
    }
    iVar12 = 1;
    do {
      fVar21 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0036c258(fVar21 * fVar17 * fVar5 * fVar6 * fVar5,&local_48,&local_4c);
      fVar21 = fVar16 - local_4c;
      iVar13 = param_1 + iVar12 * 0x34;
      local_7c = local_4c + fVar21 * fVar7;
      local_54 = local_4c + fVar21 * fVar16;
      local_78 = fVar21 * fVar7 * fVar7;
      local_64 = fVar21 * fVar7 * fVar16;
      local_6c = local_78 + local_48 * fVar16;
      local_78 = local_78 - local_48 * fVar16;
      local_74 = local_64 + local_48 * fVar7;
      local_5c = local_64 - local_48 * fVar7;
      local_58 = local_64 + local_48 * fVar7;
      local_64 = local_64 - local_48 * fVar7;
      local_70 = fVar7;
      local_60 = fVar7;
      local_50 = fVar7;
      local_68 = local_7c;
      FUN_0036c174(iVar13 + 0x228,iVar13 + 0x228,&local_7c);
      fVar19 = DAT_001418b4;
      fVar21 = DAT_001418b0;
      uVar9 = DAT_001418ac;
      uVar8 = DAT_001418a8;
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar18 / fVar17 + fVar3) == (uint)*(ushort *)(param_1 + 0x962)) {
      local_58 = fVar7;
      local_54 = fVar7;
      local_50 = fVar7;
      local_64 = fVar7;
      local_60 = fVar16;
      local_5c = fVar7;
      iVar12 = 0;
      do {
        local_6c = fVar7;
        fVar18 = (float)FUN_003738a8(uVar8);
        local_68 = (float)FUN_00371e50(uVar9);
        fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
        fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
        local_70 = fVar16 * fVar18 + fVar17 * local_68;
        fVar16 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
        fVar16 = fVar16 * local_68;
        fVar17 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
        fVar16 = fVar16 - fVar17 * fVar18;
        local_50 = fVar16 * fVar21;
        local_58 = local_70 * fVar21;
        local_64 = local_58 * fVar19;
        local_5c = local_50 * fVar19;
        local_70 = local_70 + *(float *)(param_1 + 0x28);
        local_6c = local_6c + *(float *)(param_1 + 0x2c);
        local_68 = fVar16 + *(float *)(param_1 + 0x30);
        local_7c = 4.2039e-44;
        FUN_00359b0c(param_2,&local_70,&local_58,&local_64,300);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
    }
    if ((*(ushort *)(param_1 + 0x960) & 1) == 0) {
      iVar12 = *(int *)(DAT_001418b8 + param_2);
      FUN_0036c5d8(param_1,&local_58,iVar12 + 0x28);
      if (((((int)ABS(local_54) < DAT_00141998) && ((int)ABS(local_58) < DAT_00141998)) &&
          ((int)local_50 < DAT_0014199c)) &&
         (uVar11 = in_fpscr & 0xfffffff | (uint)(local_50 < fVar7) << 0x1f |
                   (uint)(local_50 == fVar7) << 0x1e,
         in_fpscr = uVar11 | (uint)(NAN(local_50) || NAN(fVar7)) << 0x1c,
         bVar1 = (byte)(uVar11 >> 0x18),
         !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
        *(ushort *)(param_1 + 0x960) = *(ushort *)(param_1 + 0x960) | 1;
        FUN_00368fc0(fVar4,fVar4,param_2,param_1,(int)*(short *)(param_1 + 0x92),0x10);
        FUN_00375bcc(param_1,DAT_001419a0);
        FUN_0036f59c(iVar12,DAT_001419a4);
      }
      if (((*(ushort *)(param_1 + 0x960) & 1) == 0) &&
         (fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3),
         (int)(fVar4 / fVar18 + fVar3) == (uint)*(ushort *)(param_1 + 0x962))) {
        *(ushort *)(param_1 + 0x960) = *(ushort *)(param_1 + 0x960) | 1;
        FUN_00375bcc(param_1,DAT_001419a8);
        return;
      }
    }
  }
  return;
}
