// OoT3D decomp @ 00344a64  name=FUN_00344a64  size=2220

uint FUN_00344a64(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;

  uVar7 = FUN_0033b5ec();
  FUN_0040c154();
  uVar8 = FUN_0033b5d0();
  iVar13 = DAT_00345350;
  fVar18 = DAT_00344e64;
  pfVar3 = DAT_00344e60;
  uVar2 = DAT_00344e5c;
  fVar17 = DAT_00344e58;
  fVar1 = DAT_00344e54;
  fVar16 = DAT_00344e50;
  iVar9 = *(int *)(param_1 + 0x118);
  bVar14 = iVar9 == 0;
  if (bVar14) {
    iVar9 = *(int *)(param_1 + 0x11c);
  }
  if (!bVar14 || iVar9 != 0) {
    iVar9 = *(int *)(param_1 + 0x11c);
    if (iVar9 == 0) {
      if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x134)) {
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x134);
        iVar13 = 0;
        iVar9 = 0;
        if (*(int *)(param_1 + 0x104) == 1) {
          iVar13 = 0xe;
        }
        do {
          if (*(int *)(param_1 + 0x17c) <= *(int *)(param_1 + 0x130) + iVar9) break;
          iVar12 = iVar9 * 0xf + 2;
          FUN_003446ac(*(undefined4 *)(param_1 + iVar12 * 4 + 0x43c),
                       *(undefined4 *)
                        (param_1 + (*(int *)(param_1 + 0x130) + iVar13 + iVar9) * 4 + 0x364));
          iVar11 = 0;
          do {
            FUN_003446ac(*(undefined4 *)(param_1 + (iVar12 + iVar11) * 4 + 0x440),
                         *(undefined4 *)
                          (param_1 + (*(int *)(param_1 + 0x130) + iVar13 + iVar9) * 4 + 0x364));
            iVar11 = iVar11 + 1;
          } while (iVar11 < 8);
          iVar9 = iVar9 + 1;
        } while (iVar9 < 3);
      }
      iVar9 = *(int *)(param_1 + 0x118);
      if (iVar9 < 0) {
        fVar15 = (float)VectorSignedToFloat(iVar9 + 5,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)FUN_0033b584(fVar15 + fVar18,fVar1,uVar2,fVar18,fVar1);
        pfVar4 = DAT_00344e68;
        fVar17 = fVar17 * fVar16;
        *(float *)(param_1 + 0x530) = fVar17;
        *(float *)(param_1 + 0x53c) = fVar17;
        *(float *)(param_1 + 0x548) = fVar17;
        fVar16 = *pfVar4;
        fVar17 = (float)FUN_0033b584(fVar15,fVar1,uVar2,fVar1,fVar18);
        fVar15 = (float)FUN_0033b584(fVar15 + fVar18,fVar1,uVar2,fVar1,fVar18);
        fVar16 = (fVar15 - fVar17) / fVar16;
        if (0x3f800000 < (int)fVar16) {
          fVar16 = fVar18;
        }
        fVar18 = fVar18 - fVar16;
        *(float *)(param_1 + 0x56c) = fVar18 + fVar16 * *pfVar3;
        *(float *)(param_1 + 0x570) = fVar18 + fVar16 * pfVar3[1];
        *(float *)(param_1 + 0x574) = fVar18 + fVar16 * pfVar3[2];
        *(float *)(param_1 + 0x578) = fVar18 + fVar16 * pfVar3[3];
        *(float *)(param_1 + 0x57c) = fVar18 + fVar16 * pfVar3[4];
        *(float *)(param_1 + 0x580) = fVar18 + fVar16 * pfVar3[5];
        iVar9 = *(int *)(param_1 + 0x118) + 1;
      }
      else {
        if (iVar9 < 1) goto LAB_00344f74;
        fVar15 = (float)VectorSignedToFloat(5 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = (float)FUN_0033b584(fVar15 + fVar18,fVar1,uVar2,fVar18,fVar1);
        pfVar4 = DAT_00344e68;
        fVar16 = fVar16 * fVar17;
        *(float *)(param_1 + 0x530) = fVar16;
        *(float *)(param_1 + 0x53c) = fVar16;
        *(float *)(param_1 + 0x548) = fVar16;
        fVar16 = *pfVar4;
        fVar17 = (float)FUN_0033b584(fVar15,fVar1,uVar2,fVar1,fVar18);
        fVar15 = (float)FUN_0033b584(fVar15 + fVar18,fVar1,uVar2,fVar1,fVar18);
        fVar16 = (fVar15 - fVar17) / fVar16;
        if (0x3f800000 < (int)fVar16) {
          fVar16 = fVar18;
        }
        fVar18 = fVar18 - fVar16;
        *(float *)(param_1 + 0x56c) = fVar18 + fVar16 * pfVar3[5];
        *(float *)(param_1 + 0x570) = fVar18 + fVar16 * pfVar3[4];
        *(float *)(param_1 + 0x574) = fVar18 + fVar16 * pfVar3[3];
        *(float *)(param_1 + 0x578) = fVar18 + fVar16 * pfVar3[2];
        *(float *)(param_1 + 0x57c) = fVar18 + fVar16 * pfVar3[1];
        *(float *)(param_1 + 0x580) = fVar18 + fVar16 * *pfVar3;
        iVar9 = *(int *)(param_1 + 0x118) + -1;
      }
      *(int *)(param_1 + 0x118) = iVar9;
    }
    else {
      if (iVar9 < 0) {
        fVar19 = (float)VectorSignedToFloat(iVar9 + 5,(byte)(in_fpscr >> 0x15) & 3);
        fVar15 = fVar19 + DAT_00344e64;
        fVar16 = (float)FUN_0033b5b0(fVar15,DAT_00344e54,DAT_00344e5c,DAT_00344e54,DAT_00344e64);
        pfVar4 = DAT_00344e68;
        fVar16 = fVar16 * fVar17;
        *(float *)(param_1 + 0x530) = fVar16;
        *(float *)(param_1 + 0x53c) = fVar16;
        *(float *)(param_1 + 0x548) = fVar16;
        fVar16 = *pfVar4;
        fVar17 = (float)FUN_0033b5b0(fVar19,fVar1,uVar2,fVar1,fVar18);
        fVar15 = (float)FUN_0033b5b0(fVar15,fVar1,uVar2,fVar1,fVar18);
        fVar16 = (fVar15 - fVar17) / fVar16;
        if (0x3f800000 < (int)fVar16) {
          fVar16 = fVar18;
        }
        fVar18 = fVar18 - fVar16;
        *(float *)(param_1 + 0x56c) = fVar18 + fVar16 * *pfVar3;
        *(float *)(param_1 + 0x570) = fVar18 + fVar16 * pfVar3[1];
        *(float *)(param_1 + 0x574) = fVar18 + fVar16 * pfVar3[2];
        *(float *)(param_1 + 0x578) = fVar18 + fVar16 * pfVar3[3];
        *(float *)(param_1 + 0x57c) = fVar18 + fVar16 * pfVar3[4];
        *(float *)(param_1 + 0x580) = fVar18 + fVar16 * pfVar3[5];
        iVar9 = *(int *)(param_1 + 0x11c) + 1;
      }
      else {
        fVar19 = (float)VectorSignedToFloat(5 - iVar9,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar19 + DAT_00344e64;
        fVar15 = (float)FUN_0033b5b0(fVar17,DAT_00344e54,DAT_00344e5c,DAT_00344e54,DAT_00344e64);
        pfVar4 = DAT_00344e68;
        fVar15 = fVar15 * fVar16;
        *(float *)(param_1 + 0x530) = fVar15;
        *(float *)(param_1 + 0x53c) = fVar15;
        *(float *)(param_1 + 0x548) = fVar15;
        fVar16 = *pfVar4;
        fVar15 = (float)FUN_0033b5b0(fVar19,fVar1,uVar2,fVar1,fVar18);
        fVar17 = (float)FUN_0033b5b0(fVar17,fVar1,uVar2,fVar1,fVar18);
        fVar16 = (fVar17 - fVar15) / fVar16;
        if (0x3f800000 < (int)fVar16) {
          fVar16 = fVar18;
        }
        fVar18 = fVar18 - fVar16;
        *(float *)(param_1 + 0x56c) = fVar18 + fVar16 * pfVar3[5];
        *(float *)(param_1 + 0x570) = fVar18 + fVar16 * pfVar3[4];
        *(float *)(param_1 + 0x574) = fVar18 + fVar16 * pfVar3[3];
        *(float *)(param_1 + 0x578) = fVar18 + fVar16 * pfVar3[2];
        *(float *)(param_1 + 0x57c) = fVar18 + fVar16 * pfVar3[1];
        *(float *)(param_1 + 0x580) = fVar18 + fVar16 * *pfVar3;
        iVar9 = *(int *)(param_1 + 0x11c) + -1;
      }
      *(int *)(param_1 + 0x11c) = iVar9;
    }
LAB_00344f74:
    fVar16 = *(float *)(param_1 + 0x56c);
    if (*(float *)(param_1 + 0x56c) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x56c) = fVar16;
    fVar16 = *(float *)(param_1 + 0x570);
    if (*(float *)(param_1 + 0x570) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x570) = fVar16;
    fVar16 = *(float *)(param_1 + 0x574);
    if (*(float *)(param_1 + 0x574) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x574) = fVar16;
    fVar16 = *(float *)(param_1 + 0x578);
    if (*(float *)(param_1 + 0x578) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x578) = fVar16;
    fVar16 = *(float *)(param_1 + 0x57c);
    if (*(float *)(param_1 + 0x57c) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x57c) = fVar16;
    fVar16 = *(float *)(param_1 + 0x580);
    if (*(float *)(param_1 + 0x580) <= fVar1) {
      fVar16 = fVar1;
    }
    *(float *)(param_1 + 0x580) = fVar16;
    return 0;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar7 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 0x188) == 0) goto switchD_00345078_default;
    iVar9 = 0;
    do {
      puVar10 = (undefined2 *)(iVar13 + iVar9 * 8);
      iVar11 = FUN_0033f428(*puVar10,puVar10[1],puVar10[2],puVar10[3],0xffffffff);
      if (iVar11 != 0) goto LAB_00345070;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 6);
    iVar9 = -1;
LAB_00345070:
    *(int *)(param_1 + 400) = iVar9;
    switch(iVar9) {
    case 0:
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x130);
      goto switchD_00345078_default;
    case 1:
      iVar9 = *(int *)(param_1 + 0x130) + 1;
      if (iVar9 < *(int *)(param_1 + 0x17c)) {
LAB_003450ac:
        *(int *)(param_1 + 300) = iVar9;
        goto switchD_00345078_default;
      }
      break;
    case 2:
      iVar9 = *(int *)(param_1 + 0x130) + 2;
      if (iVar9 < *(int *)(param_1 + 0x17c)) goto LAB_003450ac;
      break;
    default:
      goto switchD_00345078_default;
    }
    goto switchD_003451a4_default;
  }
  if (*(int *)(param_1 + 0x18c) == 0) goto switchD_003451a4_default;
  uVar7 = 0;
  uVar8 = 0;
  iVar9 = 0;
  do {
    puVar10 = (undefined2 *)(iVar13 + iVar9 * 8);
    iVar11 = FUN_0033f428(*puVar10,puVar10[1],puVar10[2],puVar10[3],0xffffffff);
    uVar6 = DAT_00345360;
    uVar2 = DAT_0034535c;
    if (iVar11 != 0) goto LAB_00345194;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 6);
  iVar9 = -1;
LAB_00345194:
  if (iVar9 != *(int *)(param_1 + 400)) goto switchD_003451a4_default;
  switch(*(int *)(param_1 + 400)) {
  case 0:
    uVar7 = 1;
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x130);
    break;
  case 1:
    iVar9 = *(int *)(param_1 + 0x130) + 1;
    goto LAB_003451f0;
  case 2:
    iVar9 = *(int *)(param_1 + 0x130) + 2;
LAB_003451f0:
    uVar7 = 1;
    *(int *)(param_1 + 300) = iVar9;
    break;
  case 3:
    if (-1 < *(int *)(param_1 + 0x130) + -3) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x130) + -3;
      FUN_0037547c(DAT_00345364,0,4,uVar6,uVar6,uVar2);
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -3;
      *(undefined4 *)(param_1 + 0x118) = 5;
      *(undefined4 *)(param_1 + 0x11c) = 5;
    }
    break;
  case 4:
    iVar9 = *(int *)(param_1 + 0x130) + 3;
    if (iVar9 < *(int *)(param_1 + 0x17c)) {
      *(int *)(param_1 + 0x134) = iVar9;
      FUN_0037547c(DAT_00345364,0,4,uVar6,uVar6,uVar2);
      iVar9 = *(int *)(param_1 + 300) + 3;
      *(int *)(param_1 + 300) = iVar9;
      if (*(int *)(param_1 + 0x17c) <= iVar9) {
        *(int *)(param_1 + 300) = *(int *)(param_1 + 0x17c) + -1;
      }
      *(undefined4 *)(param_1 + 0x118) = 0xfffffffb;
      *(undefined4 *)(param_1 + 0x11c) = 0xfffffffb;
    }
    break;
  case 5:
    uVar7 = 2;
  }
switchD_003451a4_default:
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
switchD_00345078_default:
  uVar5 = DAT_00345358;
  if ((DAT_00345354 & (uVar7 | uVar8)) == 0) {
    if (((uVar7 | uVar8) & DAT_00345368) == 0) {
      return uVar7;
    }
    if (*(int *)(param_1 + 0x17c) + -1 <= *(int *)(param_1 + 300)) {
      return uVar7;
    }
    iVar9 = *(int *)(param_1 + 300) + 1;
    *(int *)(param_1 + 300) = iVar9;
    uVar6 = DAT_00345360;
    uVar2 = DAT_0034535c;
    if (*(int *)(param_1 + 0x130) + 2 < iVar9) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x130) + 3;
      *(undefined4 *)(param_1 + 400) = 4;
      FUN_0037547c(DAT_00345364,0,4,uVar6,uVar6,uVar2);
      *(undefined4 *)(param_1 + 0x118) = 0xfffffffb;
      *(undefined4 *)(param_1 + 0x11c) = 0xfffffffb;
      return uVar7;
    }
  }
  else {
    if (*(int *)(param_1 + 300) < 1) {
      return uVar7;
    }
    iVar9 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 300) = iVar9;
    if (iVar9 < *(int *)(param_1 + 0x130)) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x130) + -3;
      uVar6 = DAT_00345360;
      uVar2 = DAT_0034535c;
      *(undefined4 *)(param_1 + 400) = 3;
      FUN_0037547c(uVar5 | 3,0,4,uVar6,uVar6,uVar2);
      *(undefined4 *)(param_1 + 0x118) = 5;
      *(undefined4 *)(param_1 + 0x11c) = 5;
      return uVar7;
    }
  }
  FUN_0037547c(uVar5,0,4,DAT_00345360,DAT_00345360,DAT_0034535c);
  return uVar7;
}
