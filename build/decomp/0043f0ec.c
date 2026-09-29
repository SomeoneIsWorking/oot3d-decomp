// OoT3D decomp @ 0043f0ec  name=FUN_0043f0ec  size=1328

void FUN_0043f0ec(undefined4 param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint in_fpscr;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float unaff_s16;

  fVar13 = DAT_0043f450;
  fVar12 = DAT_0043f44c;
  fVar23 = DAT_0043f448;
  uVar11 = DAT_0043f444;
  uVar10 = DAT_0043f440;
  fVar21 = DAT_0043f43c;
  fVar9 = DAT_0043f438;
  uVar8 = DAT_0043f434;
  uVar7 = DAT_0043f430;
  fVar6 = DAT_0043f42c;
  uVar5 = DAT_0043f428;
  uVar4 = DAT_0043f420;
  uVar3 = DAT_0043f41c;
  uVar2 = DAT_0043f418;
  uVar22 = DAT_0043f414;
  puVar1 = DAT_0043f408;
  uVar15 = *DAT_0043f408;
  if (DAT_0043f408[1] != 4) {
LAB_0043f678:
    FUN_002f7af4(DAT_0043f410,DAT_0043f40c,uVar15);
    return;
  }
  iVar18 = DAT_0043f408[2];
  iVar16 = DAT_0043f408[4];
  iVar20 = iVar16 * 0x1a + 0x1f;
  iVar19 = DAT_0043f408[5] * 0x1a + 0x42;
  if (iVar18 < 2) {
    fVar21 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorSignedToFloat(iVar19,(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = fVar21 - DAT_0043f43c;
    FUN_002f7af4(fVar21,fVar23 - DAT_0043f43c,uVar15);
    FUN_002f79b4(uVar10,uVar10,*puVar1);
    iVar16 = puVar1[5];
    if (iVar16 == -1) goto LAB_0043f31c;
    if (puVar1[4] == 10) {
      if (iVar16 == 1 || iVar16 == 2) {
LAB_0043f5a4:
        FUN_002f7af4(fVar21,fVar9,*puVar1);
        FUN_002f79b4(uVar10,uVar5,*puVar1);
        return;
      }
      if (iVar16 == 3 || iVar16 == 4) {
LAB_0043f5d8:
        FUN_002f7af4(fVar21,fVar6,*puVar1);
        FUN_002f79b4(uVar10,uVar5,*puVar1);
        return;
      }
    }
    goto joined_r0x0043f1e0;
  }
  if (iVar18 != 2) {
    if (iVar18 != 3) {
      if (iVar18 == 4) {
        uVar22 = VectorSignedToFloat(DAT_0043f408[0xb] * 0x80 + 0x20,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f7af4(uVar22,DAT_0043f424,uVar15);
        FUN_002f79b4(DAT_0043f6ac,DAT_0043f6a8,*puVar1);
        return;
      }
      goto LAB_0043f678;
    }
    fVar21 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorSignedToFloat(iVar19,(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = fVar21 - DAT_0043f43c;
    FUN_002f7af4(fVar21,fVar23 - DAT_0043f43c,uVar15);
    FUN_002f79b4(uVar10,uVar10,*puVar1);
    iVar16 = puVar1[5];
    if (iVar16 == -1) goto LAB_0043f564;
    if (puVar1[4] == 10) {
      if (iVar16 == 1 || iVar16 == 2) goto LAB_0043f5a4;
      if (iVar16 == 3 || iVar16 == 4) goto LAB_0043f5d8;
    }
    goto joined_r0x0043f1e0;
  }
  switch(DAT_0043f408[5]) {
  case 0:
    param_3 = (float)VectorSignedToFloat(iVar16 * 0x1a + 5,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043f408[6] = (int)param_3;
    uVar17 = 0x40;
    break;
  case 1:
    param_3 = (float)VectorSignedToFloat(iVar16 * 0x1a + 0x13,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043f408[6] = (int)param_3;
    uVar17 = 0x5a;
    fVar23 = fVar9;
    break;
  case 2:
    param_3 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043f408[6] = (int)param_3;
    uVar17 = 0x74;
    fVar23 = fVar12;
    break;
  case 3:
    param_3 = (float)VectorSignedToFloat(iVar16 * 0x1a + 0x2b,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043f408[6] = (int)param_3;
    uVar17 = 0x8e;
    fVar23 = fVar6;
    break;
  case 4:
    param_3 = (float)VectorSignedToFloat(iVar16 * 0x1a + 0x39,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043f408[6] = (int)param_3;
    puVar1[7] = 0xa8;
    unaff_s16 = fVar13;
  default:
    goto switchD_0043f1fc_default;
  }
  puVar1[7] = uVar17;
  unaff_s16 = fVar23;
switchD_0043f1fc_default:
  FUN_002f7af4(param_3 - fVar21,unaff_s16 - fVar21,uVar15);
  FUN_002f79b4(uVar10,uVar10,*puVar1);
  uVar14 = DAT_0043f6a4;
  uVar17 = DAT_0043f690;
  uVar15 = DAT_0043f45c;
  iVar16 = puVar1[5];
  if (puVar1[0x10] == 0) {
    if (iVar16 == -1) {
LAB_0043f564:
      FUN_002f7af4(uVar11,uVar22,*puVar1);
      FUN_002f79b4(uVar4,uVar3,*puVar1);
      return;
    }
  }
  else if (iVar16 == -1) {
LAB_0043f31c:
    FUN_002f7af4(uVar2,uVar22,*puVar1);
    FUN_002f79b4(uVar4,uVar3,*puVar1);
    return;
  }
  if (iVar16 == 1) {
    if (puVar1[4] == 10) {
      FUN_002f7af4(DAT_0043f454,unaff_s16 - fVar21,*puVar1);
      FUN_002f79b4(uVar10,uVar5,*puVar1);
      return;
    }
  }
  else if (iVar16 == 2) {
    if (puVar1[4] == 9) {
      FUN_002f7af4(DAT_0043f454,DAT_0043f458,*puVar1);
      FUN_002f79b4(uVar10,uVar5,*puVar1);
      return;
    }
  }
  else if (iVar16 == 3) {
    if (puVar1[4] == -1) {
      puVar1[6] = 2;
      puVar1[7] = 0x8c;
      FUN_002f7af4(fVar21,DAT_0043f460,*puVar1);
      FUN_002f79b4(DAT_0043f464,uVar15,*puVar1);
      return;
    }
  }
  else if (iVar16 == 4) {
    iVar16 = puVar1[4];
    if (iVar16 == 2) {
      FUN_002f7af4(DAT_0043f694,DAT_0043f690,*puVar1);
      FUN_002f79b4(DAT_0043f698,uVar15,*puVar1);
      return;
    }
    if (iVar16 == 3) {
      puVar1[6] = 0xef;
      puVar1[7] = 0xa8;
      FUN_002f7af4(DAT_0043f69c,uVar17,*puVar1);
      FUN_002f79b4(uVar10,uVar10,*puVar1);
      return;
    }
    if (iVar16 == 4) {
      puVar1[6] = DAT_0043f6a0;
      puVar1[7] = 0xa8;
      FUN_002f7af4(uVar14,uVar17,*puVar1);
      FUN_002f79b4(uVar10,uVar10,*puVar1);
      return;
    }
  }
  else {
joined_r0x0043f1e0:
    if (iVar16 == 5) {
      uVar22 = VectorSignedToFloat(puVar1[10] * 0xd8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f7af4(uVar22,uVar7,*puVar1);
      FUN_002f79b4(fVar9,uVar8,*puVar1);
      return;
    }
  }
  return;
}
