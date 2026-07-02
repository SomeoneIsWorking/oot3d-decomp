// OoT3D decomp @ 002e2e60  name=FUN_002e2e60  size=5372

/* WARNING: Removing unreachable block (ram,0x002e2eac) */

void FUN_002e2e60(float *param_1)

{
  char cVar1;
  short *psVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  byte bVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  int extraout_r1;
  int extraout_r1_00;
  float *pfVar16;
  code *pcVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float *local_50;
  float *local_4c;
  float *local_48;
  float *local_44;
  float *local_40;
  undefined4 local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  
  fVar3 = DAT_002e31a8;
  local_50 = param_1 + 5;
  local_30 = param_1 + 0x1fc0;
  if (*(char *)((int)param_1 + 0x7f25) == '\0') {
    return;
  }
  local_34 = param_1 + 0xc40;
  fVar19 = fVar3;
  if ((*(short *)(param_1 + 0xc63) == 0) && (iVar11 = FUN_003695f8(0,param_1 + 0x11), iVar11 == 0))
  {
    fVar19 = DAT_002e31ac;
  }
  local_38 = param_1 + 0x280;
  param_1[0x1fd1] = fVar19;
  iVar11 = DAT_002e31b8;
  fVar19 = DAT_002e31b0;
  local_3c = DAT_002e31b4;
  local_40 = param_1 + 0x1fc5;
  if (*(char *)((int)param_1 + 0x7f12) == '\0') {
    if (*(char *)((int)param_1 + 0x5c2d) != '\0') {
      if ((((*(int *)(DAT_002e31b8 + -0xff8) < DAT_002e31bc) &&
           (iVar12 = FUN_00357ea0(param_1), iVar12 == 0)) ||
          (*(char *)((int)param_1 + 0x5c2d) != -0x14)) ||
         ((iVar12 = FUN_0037571c(param_1), iVar12 != 0 ||
          (iVar12 = FUN_00315d44(param_1), 0 < iVar12)))) {
        FUN_002e461c(local_40,0);
        local_40[1] = 0.0;
        *(undefined1 *)((int)param_1 + 0x7f12) = 1;
      }
      else if (*(char *)((int)param_1 + 0x7f12) == '\0') goto code_r0x002e3c0c;
      goto LAB_002e2fb8;
    }
    goto code_r0x002e3c0c;
  }
LAB_002e2fb8:
  cVar1 = *(char *)((int)param_1 + 0x7f12);
  local_44 = param_1 + 0x1f42;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') goto LAB_002e3438;
    if (cVar1 == '\x03') {
      if (*(short *)(local_30 + 4) != 0) {
        *(short *)(local_30 + 4) = *(short *)(local_30 + 4) + -1;
      }
      iVar12 = (*(code *)param_1[0x1fc3])(local_44);
      if ((iVar12 == 0) || (*(short *)(local_30 + 4) != 0)) {
        if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
          (*(code *)param_1[0x1fc0])(local_44,1);
        }
        else {
          (*(code *)param_1[0x1fc0])(local_44,2);
        }
        (*(code *)param_1[0x1fbd])(local_44,(int)*(short *)(*DAT_002e3ba4 + 0x110));
      }
      else {
        if ((int)param_1[0x1fba] < 0x38) {
          if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
            (*(code *)param_1[0x1fbc])(local_44);
            param_1[0x1fba] = -NAN;
            *(undefined1 *)((int)param_1 + 0x7f12) = 0;
            uVar15 = *(ushort *)(param_1 + 0x41);
            bVar18 = uVar15 == 0x5e;
            if (bVar18) {
              uVar15 = (ushort)*(byte *)((int)param_1 + 0x3266);
            }
            if (bVar18 && uVar15 == 0) {
              *(undefined1 *)((int)param_1 + 0x3266) = 2;
              *(undefined1 *)((int)param_1 + 0x3267) = 0;
              *(undefined1 *)(param_1 + 0xc9a) = 0;
            }
          }
          else {
            *(undefined1 *)((int)param_1 + 0x101) = 0;
            iVar12 = *(int *)(iVar11 + 0x4e4);
            if (iVar12 == 2) {
              param_1[3] = DAT_002e3b80;
              param_1[4] = DAT_002e3b84;
              FUN_00331754(0);
            }
            else if (iVar12 == 4) {
              param_1[3] = DAT_002e3b88;
              param_1[4] = 3.69943e-43;
              FUN_00331754(0);
            }
            else if (iVar12 == 5) {
              if (((*DAT_002e3b8c & 1) == 0) && (iVar12 = FUN_003679b4(DAT_002e3b8c), iVar12 != 0))
              {
                FUN_0036788c(DAT_002e3b90);
              }
              FUN_0033430c(local_3c,param_1);
            }
            else if (iVar12 == 6) {
              *(undefined4 *)(iVar11 + 0x558) = 0xff;
              *(undefined1 *)(iVar11 + 0x56e) = 0xff;
              param_1[3] = DAT_002e3b7c;
              param_1[4] = 1.22754e-42;
              FUN_00331754(0);
            }
            else {
              param_1[3] = DAT_002e3b9c;
              param_1[4] = DAT_002e3ba0;
              FUN_00331754(0);
              piVar4 = DAT_002e31c0;
              *DAT_002e31c0 = (int)*(short *)((int)param_1 + 0x5c32);
              if ((short)piVar4[0x565] == 1) {
                *(undefined2 *)(piVar4 + 0x565) = 3;
              }
            }
          }
        }
        else if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
          (*(code *)param_1[0x1fbc])(local_44);
          param_1[0x1fba] = -NAN;
          *(undefined1 *)((int)param_1 + 0x7f12) = 0;
        }
        *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
      }
    }
    goto LAB_002e3828;
  }
  if (*(char *)((int)param_1 + 0x5c2d) != -0x14) {
    iVar12 = 0;
    FUN_0034be04(1);
    if (DAT_002e31bc <= DAT_002e31c0[2]) {
      iVar12 = (DAT_002e31c0[2] & 0xfU) + 4;
    }
    if ((((*(ushort *)(DAT_002e31c4 + (*(short *)((int)param_1 + 0x5c32) + iVar12) * 4 + 2) & 0x8000
          ) == 0) && (*(byte *)((int)param_1 + 0x5c76) < 0x38)) &&
       (iVar12 = FUN_00460e54(), iVar12 == 0)) {
      *(undefined2 *)(local_30 + 4) = 0x15;
      FUN_004623f0();
      *(undefined4 *)(iVar11 + 0x558) = 0xff;
      *(undefined1 *)(iVar11 + 0x56e) = 0xff;
    }
  }
  pfVar16 = local_44;
  local_54 = (float)(uint)*(byte *)((int)param_1 + 0x5c76);
  FUN_00343280(local_44,0x208);
  pfVar16[0x78] = local_54;
  if ((int)local_54 >> 5 == 1) {
    pfVar16[0x79] = DAT_002e31c8;
    pfVar16[0x7a] = DAT_002e31cc;
    pfVar16[0x7d] = DAT_002e31d0;
    pfVar16[0x81] = DAT_002e31d4;
    pfVar16[0x7c] = DAT_002e31d8;
    pfVar16[0x7b] = DAT_002e31dc;
    pfVar16[0x7e] = DAT_002e31e0;
    pfVar16[0x7f] = DAT_002e31e4;
    fVar23 = DAT_002e31e8;
LAB_002e32c8:
    pfVar16[0x80] = fVar23;
    goto switchD_002e3150_caseD_14;
  }
  switch(local_54) {
  case 0.0:
  case 1.12104e-44:
    pfVar16[0x79] = DAT_002e35d0;
    pfVar16[0x7a] = DAT_002e35d4;
    pfVar16[0x7d] = DAT_002e35d8;
    pfVar16[0x81] = DAT_002e35dc;
    pfVar16[0x7c] = DAT_002e35e0;
    pfVar16[0x7b] = DAT_002e35e4;
    pfVar16[0x7e] = DAT_002e35e8;
    pfVar16[0x7f] = DAT_002e35ec;
    pfVar16[0x80] = 0.0;
    break;
  case 1.4013e-45:
    pfVar16[0x79] = DAT_002e35b0;
    pfVar16[0x7a] = DAT_002e35b4;
    pfVar16[0x7d] = DAT_002e35b8;
    pfVar16[0x81] = DAT_002e35bc;
    pfVar16[0x7c] = DAT_002e35c0;
    pfVar16[0x7b] = DAT_002e35c4;
    pfVar16[0x7e] = DAT_002e35c8;
    pfVar16[0x7f] = DAT_002e35cc;
    pfVar16[0x80] = 0.0;
    break;
  case 2.8026e-45:
  case 4.2039e-45:
  case 5.60519e-45:
  case 7.00649e-45:
  case 8.40779e-45:
  case 9.80909e-45:
  case 1.82169e-44:
  case 2.38221e-44:
  case 2.52234e-44:
  case 2.66247e-44:
    pfVar16[0x79] = DAT_002e35f0;
    pfVar16[0x7a] = DAT_002e35f4;
    pfVar16[0x7d] = DAT_002e35f8;
    pfVar16[0x81] = DAT_002e35fc;
    pfVar16[0x7c] = DAT_002e3600;
    pfVar16[0x7b] = DAT_002e3604;
    pfVar16[0x7e] = DAT_002e3608;
    pfVar16[0x7f] = DAT_002e360c;
    fVar23 = 0.0;
    goto LAB_002e32c8;
  case 1.26117e-44:
  case 1.4013e-44:
    *(undefined1 *)((int)param_1 + 0x7f12) = 4;
    *(undefined4 *)(iVar11 + 0x5b8) = DAT_002e3610;
    *(undefined1 *)(iVar11 + 0x5bc) = 1;
    break;
  case 1.54143e-44:
    *(undefined4 *)(iVar11 + 0x5b8) = DAT_002e3610;
    uVar8 = 10;
    *(undefined1 *)(iVar11 + 0x5bc) = 1;
    goto LAB_002e3648;
  case 1.68156e-44:
    *(undefined4 *)(iVar11 + 0x5b8) = DAT_002e3610;
    uVar8 = 7;
    *(undefined1 *)(iVar11 + 0x5bc) = 1;
    goto LAB_002e3648;
  case 1.96182e-44:
    *(undefined1 *)((int)param_1 + 0x7f12) = 0xc;
    FUN_002e4660(param_1,&local_64);
    iVar12 = VectorFloatToUnsigned(local_64 * DAT_002e3614,3);
    uVar21 = VectorFloatToUnsigned(local_60 * DAT_002e3614,3);
    uVar22 = VectorFloatToUnsigned(local_5c * DAT_002e3614,3);
    uVar13 = VectorFloatToUnsigned(local_58 * DAT_002e3614,3);
    *(uint *)(iVar11 + 0x5b8) =
         iVar12 << 0x18 | (uVar21 & 0xff) << 0x10 | (uVar22 & 0xff) << 8 | uVar13 & 0xff;
    *(undefined1 *)(iVar11 + 0x5bc) = 3;
    break;
  case 2.10195e-44:
    *(undefined1 *)((int)param_1 + 0x7f12) = 0xe;
    FUN_002e4660(param_1,&local_64);
    iVar12 = VectorFloatToUnsigned(local_64 * DAT_002e3614,3);
    uVar21 = VectorFloatToUnsigned(local_60 * DAT_002e3614,3);
    uVar22 = VectorFloatToUnsigned(local_5c * DAT_002e3614,3);
    uVar13 = VectorFloatToUnsigned(local_58 * DAT_002e3614,3);
    *(uint *)(iVar11 + 0x5b8) =
         iVar12 << 0x18 | (uVar21 & 0xff) << 0x10 | (uVar22 & 0xff) << 8 | uVar13 & 0xff;
    *(undefined1 *)(iVar11 + 0x5bc) = 3;
    break;
  case 2.24208e-44:
    *(undefined1 *)((int)param_1 + 0x7f12) = 0x10;
    *(undefined4 *)(iVar11 + 0x5b8) = 0;
    *(undefined1 *)(iVar11 + 0x5bc) = 1;
  }
switchD_002e3150_caseD_14:
  if (*(byte *)((int)param_1 + 0x7f12) < 4) {
LAB_002e3438:
    (*(code *)param_1[0x1fbb])(local_44);
    if ((int)param_1[0x1fba] >> 5 == 1) {
      (*(code *)param_1[0x1fc0])(local_44,(uint)param_1[0x1fba] | 0x80);
    }
    *(undefined1 *)(iVar11 + 0x5a7) = 0xe;
    if (param_1[0x1fba] == 1.12104e-44 || param_1[0x1fba] == 1.26117e-44) {
      *(undefined1 *)(iVar11 + 0x5a7) = 0x1c;
    }
    *(undefined1 *)(iVar11 + 0x5a6) = 0x2a;
    fVar23 = param_1[0x1fba];
    if (fVar23 == 5.60519e-45 || fVar23 == 7.00649e-45) {
      *(undefined1 *)(iVar11 + 0x5a6) = 0x14;
    }
    else {
      if (fVar23 == 8.40779e-45 || fVar23 == 9.80909e-45) {
        uVar8 = 0x96;
      }
      else {
        if (fVar23 != 2.38221e-44) goto LAB_002e34c0;
        uVar8 = 2;
      }
      *(undefined1 *)(iVar11 + 0x5a6) = uVar8;
    }
LAB_002e34c0:
    uVar20 = 0;
    *(undefined1 *)(iVar11 + 0x5bc) = 0;
    uVar7 = DAT_002e361c;
    uVar6 = DAT_002e3618;
    uVar5 = DAT_002e3610;
    fVar23 = param_1[0x1fba];
    if ((((fVar23 == 4.2039e-45 || fVar23 == 7.00649e-45) || fVar23 == 9.80909e-45) ||
        fVar23 == 1.82169e-44) || fVar23 == 2.38221e-44) {
      (*(code *)param_1[0x1fc1])(local_44,DAT_002e3610);
      pcVar17 = (code *)param_1[0x1fc2];
      uVar20 = uVar5;
joined_r0x002e3538:
      if (pcVar17 != (code *)0x0) {
        (*pcVar17)(local_44,uVar20);
      }
    }
    else {
      if (fVar23 == 2.52234e-44) {
        (*(code *)param_1[0x1fc1])(local_44,DAT_002e3618);
        pcVar17 = (code *)param_1[0x1fc2];
        uVar20 = uVar6;
        goto joined_r0x002e3538;
      }
      if (fVar23 == 2.66247e-44) {
        (*(code *)param_1[0x1fc1])(local_44,DAT_002e361c);
        pcVar17 = (code *)param_1[0x1fc2];
        uVar20 = uVar7;
        goto joined_r0x002e3538;
      }
      (*(code *)param_1[0x1fc1])(local_44,0);
      if ((code *)param_1[0x1fc2] != (code *)0x0) {
        (*(code *)param_1[0x1fc2])(local_44,0);
      }
    }
    *(undefined4 *)(iVar11 + 0x5b8) = uVar20;
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
      (*(code *)param_1[0x1fc0])(local_44,1);
    }
    else {
      (*(code *)param_1[0x1fc0])(local_44,2);
    }
    (*(code *)param_1[0x1fbf])(local_44);
    if (param_1[0x1fba] == 1.82169e-44) {
      uVar8 = 0xb;
    }
    else {
      uVar8 = 3;
    }
LAB_002e3648:
    *(undefined1 *)((int)param_1 + 0x7f12) = uVar8;
  }
LAB_002e3828:
  psVar2 = DAT_002e3ba8;
  fVar23 = DAT_002e3b9c;
  switch(*(undefined1 *)((int)param_1 + 0x7f12)) {
  case 4:
    *DAT_002e3ba8 = 0;
    *(undefined1 *)((int)param_1 + 0x3261) = 1;
    *(undefined1 *)((int)param_1 + 0x3262) = 0xa0;
    *(undefined1 *)((int)param_1 + 0x3263) = 0xa0;
    *(undefined1 *)(param_1 + 0xc99) = 0xa0;
    if (*(char *)((int)param_1 + 0x5c2d) != -0x14) {
      *(undefined1 *)((int)param_1 + 0x3265) = 0;
      goto LAB_002e39d0;
    }
LAB_002e39d8:
    *(undefined1 *)((int)param_1 + 0x3265) = 0xff;
    uVar8 = 6;
    goto LAB_002e3b14;
  case 5:
    sVar10 = *DAT_002e3ba8;
    iVar12 = (int)sVar10;
    if (iVar12 < 0x14) {
      sVar10 = sVar10 + 1;
    }
    fVar19 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    uVar20 = VectorFloatToUnsigned(fVar19 * DAT_002e3bac * DAT_002e3614,3);
    *(char *)((int)param_1 + 0x3265) = (char)uVar20;
    if (iVar12 < 0x14) {
      *psVar2 = sVar10;
    }
    else {
LAB_002e38e8:
      fVar19 = DAT_002e3b9c;
      *(undefined1 *)((int)param_1 + 0x101) = 0;
      param_1[3] = fVar19;
      param_1[4] = DAT_002e3ba0;
      FUN_00331754(0);
      FUN_00331754(1);
      *DAT_002e31c0 = (int)*(short *)((int)param_1 + 0x5c32);
      *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
      *(undefined1 *)((int)param_1 + 0x7f12) = 0;
    }
    break;
  case 6:
    sVar10 = *DAT_002e3ba8;
    iVar12 = (int)sVar10;
    if (iVar12 < 0x14) {
      sVar10 = sVar10 + 1;
    }
    fVar23 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    uVar20 = VectorFloatToUnsigned((fVar19 - fVar23 * DAT_002e3bac) * DAT_002e3614,3);
    *(char *)((int)param_1 + 0x3265) = (char)uVar20;
    piVar4 = DAT_002e3ba4;
    if (iVar12 < 0x14) {
      *psVar2 = sVar10;
    }
    else {
      psVar2[10] = 0;
      psVar2[0xb] = 0;
      *(undefined2 *)(*piVar4 + 0x110) = 2;
      *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
      *(undefined1 *)((int)param_1 + 0x7f12) = 0;
      *(undefined1 *)((int)param_1 + 0x3261) = 0;
    }
    break;
  case 7:
    *DAT_002e3ba8 = 0;
    *(undefined1 *)((int)param_1 + 0x3261) = 1;
    *(undefined1 *)((int)param_1 + 0x3262) = 0xaa;
    *(undefined1 *)((int)param_1 + 0x3263) = 0xa0;
    *(undefined1 *)(param_1 + 0xc99) = 0x96;
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) goto LAB_002e39d8;
    *(undefined1 *)((int)param_1 + 0x3265) = 0;
LAB_002e39d0:
    uVar8 = 5;
    goto LAB_002e3b14;
  case 10:
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
LAB_002e3ab4:
      piVar4 = DAT_002e3ba4;
      uVar8 = 0;
      psVar2 = DAT_002e3ba8;
      psVar2[10] = 0;
      psVar2[0xb] = 0;
      *(undefined2 *)(*piVar4 + 0x110) = 2;
      *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
      goto LAB_002e3b14;
    }
    *(undefined1 *)((int)param_1 + 0x101) = 0;
    param_1[3] = fVar23;
    param_1[4] = DAT_002e3ba0;
    FUN_00331754(0);
    FUN_00331754(1);
    *DAT_002e31c0 = (int)*(short *)((int)param_1 + 0x5c32);
    *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
    *(undefined1 *)((int)param_1 + 0x7f12) = 0;
    break;
  case 0xb:
    if (*(char *)(iVar11 + 0x59d) != '\0') {
      uVar8 = 3;
      goto LAB_002e3b14;
    }
    break;
  case 0xc:
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
      *(undefined1 *)((int)param_1 + 0x3266) = 2;
      *(undefined1 *)((int)param_1 + 0x3267) = 0xff;
      *(undefined1 *)(param_1 + 0xc9a) = 0xff;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x3266) = 1;
    }
    uVar8 = 0xd;
    goto LAB_002e3b14;
  case 0xd:
    local_64 = DAT_002e3bb0;
    FUN_0037547c(DAT_002e3bb8,0,4,DAT_002e3bb4,DAT_002e3bb4);
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
      if (*(byte *)((int)param_1 + 0x3267) < 0x6e) goto LAB_002e3ab4;
    }
    else if (*(char *)(param_1 + 0xc9a) == -1) goto LAB_002e38e8;
    break;
  case 0xe:
    if (*(char *)((int)param_1 + 0x5c2d) == -0x14) {
      *(undefined1 *)((int)param_1 + 0x3266) = 4;
      *(undefined1 *)((int)param_1 + 0x3267) = 0xff;
      *(undefined1 *)(param_1 + 0xc9a) = 0xff;
      uVar8 = 0xf;
    }
    else {
      uVar8 = 0xc;
    }
    goto LAB_002e3b14;
  case 0xf:
    local_64 = DAT_002e3bb0;
    FUN_0037547c(DAT_002e3bb8,0,4,DAT_002e3bb4,DAT_002e3bb4);
    uVar13 = (uint)*(char *)((int)param_1 + 0x5c2d);
    bVar18 = uVar13 == 0xffffffec;
    if (bVar18) {
      uVar13 = (uint)*(byte *)((int)param_1 + 0x3267);
    }
    if (bVar18 && uVar13 == 0) {
LAB_002e3b50:
      piVar4 = DAT_002e3ba4;
      psVar2 = DAT_002e3ba8;
      psVar2[10] = 0;
      psVar2[0xb] = 0;
      *(undefined2 *)(*piVar4 + 0x110) = 2;
      *(undefined1 *)((int)param_1 + 0x5c2d) = 0;
      *(undefined1 *)((int)param_1 + 0x7f12) = 0;
    }
    break;
  case 0x10:
    *DAT_002e3ba8 = 0;
    *(undefined1 *)((int)param_1 + 0x3261) = 1;
    *(undefined1 *)((int)param_1 + 0x3262) = 0;
    *(undefined1 *)((int)param_1 + 0x3263) = 0;
    *(undefined1 *)(param_1 + 0xc99) = 0;
    *(undefined1 *)((int)param_1 + 0x3265) = 0xff;
    uVar8 = 0x11;
LAB_002e3b14:
    *(undefined1 *)((int)param_1 + 0x7f12) = uVar8;
    break;
  case 0x11:
    if ((*(char *)(iVar11 + 0x59d) != '\0') &&
       (*(char *)((int)param_1 + 0x3265) = *(char *)(iVar11 + 0x59d),
       *(byte *)(iVar11 + 0x59d) < 0x65)) goto LAB_002e3b50;
  }
code_r0x002e3c0c:
  uVar26 = FUN_002f43e8();
  if ((int)uVar26 == 1) {
    iVar12 = (int)((ulonglong)uVar26 >> 0x20);
    if ((*DAT_002e3b8c & 1) == 0) {
      uVar26 = FUN_003679b4(DAT_002e3b8c);
      iVar12 = (int)((ulonglong)uVar26 >> 0x20);
      if ((int)uVar26 != 0) {
        FUN_0036788c(DAT_002e3b90);
        iVar12 = DAT_002e3b98;
      }
    }
    uVar13 = *(byte *)(*(int *)(DAT_002e42ac + 0x2d4) + 8) - 3;
    if ((uVar13 < 0xd) || (iVar12 = FUN_0043c1ec(uVar13,iVar12), iVar12 != 0)) goto LAB_002e3c88;
    bVar18 = true;
  }
  else {
LAB_002e3c88:
    bVar18 = false;
  }
  iVar12 = DAT_002e42b0;
  if (bVar18) {
    if (*(char *)((int)param_1 + 0x6017) != '\0') goto LAB_002e3d3c;
    fVar23 = param_1[0x1fce];
    fVar25 = *(float *)(DAT_002e3ba8 + 8);
    if (fVar23 != 1.0) {
      fVar24 = *(float *)(DAT_002e3ba8 + 6);
      fVar19 = fVar23 + (fVar25 - fVar23) * fVar24;
      if (*(char *)(local_30 + 0x10) == '\0') {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar23 == fVar3) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          param_1[0x1fce] = fVar19;
          param_1[0x1fcf] = param_1[0x1fcf] + (fVar25 - param_1[0x1fcf]) * fVar24;
          goto LAB_002e3d84;
        }
        param_1[0x1fcf] = fVar19;
      }
      else {
        fVar23 = param_1[0x1fcf];
        if (DAT_002e42b0 < (int)fVar23) {
          param_1[0x1fcf] = fVar23 - fVar23 * fVar24;
        }
        else {
          param_1[0x1fcf] = fVar3;
        }
      }
      goto LAB_002e3d80;
    }
  }
  else {
    if (*(char *)(local_30 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x1fd0) = 0;
    }
LAB_002e3d3c:
    fVar19 = param_1[0x1fce];
    if (iVar12 < (int)fVar19) {
      fVar19 = fVar19 - fVar19 * *(float *)(DAT_002e3ba8 + 6);
      param_1[0x1fce] = fVar19;
      fVar23 = param_1[0x1fcf];
      uVar13 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar23) << 0x1f |
               (uint)(fVar19 == fVar23) << 0x1e;
      in_fpscr = uVar13 | (uint)(NAN(fVar19) || NAN(fVar23)) << 0x1c;
      bVar9 = (byte)(uVar13 >> 0x18);
      if (!(bool)(bVar9 >> 6 & 1) && bVar9 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar19 = fVar23;
      }
      param_1[0x1fcf] = fVar19;
    }
    else {
      param_1[0x1fcf] = fVar3;
      fVar19 = fVar3;
LAB_002e3d80:
      param_1[0x1fce] = fVar19;
    }
  }
LAB_002e3d84:
  iVar12 = FUN_0037571c(param_1);
  if ((iVar12 == 0) && (iVar12 = FUN_0036a7a0(param_1), iVar12 == 0)) {
    *(undefined1 *)((int)param_1 + 0x6017) = 0;
  }
  iVar12 = FUN_003695f8();
  *DAT_002e42b4 = (uint)(*(ushort *)(local_34 + 0x23) - 3 < 4);
  local_48 = param_1 + 0xd04;
  FUN_002e56fc(local_48,param_1);
  FUN_002e4ea0(param_1 + 0xe96);
  psVar2 = DAT_002e3ba8;
  if (param_1[0x16fe] == -NAN) {
    fVar19 = (float)(-2 - *(int *)(DAT_002e3ba8 + 4));
  }
  else {
    fVar19 = (float)((int)param_1[0x16fe] + 1);
  }
  param_1[0x16fe] = fVar19;
  FUN_00339384(fVar19,*(undefined4 *)(psVar2 + 4));
  iVar14 = extraout_r1;
  if (extraout_r1 == 0) {
    if (((*DAT_002e3b8c & 1) == 0) && (iVar14 = FUN_003679b4(DAT_002e3b8c), iVar14 != 0)) {
      FUN_0036788c(DAT_002e3b90);
    }
    FUN_002f5094(local_3c,param_1);
    iVar14 = extraout_r1_00;
  }
  if (param_1[0x16ff] == 0.0) {
    if ((*DAT_002e3b8c & 1) == 0) {
      uVar26 = FUN_003679b4(DAT_002e3b8c);
      iVar14 = (int)((ulonglong)uVar26 >> 0x20);
      if ((int)uVar26 != 0) {
        FUN_0036788c(DAT_002e3b90);
        iVar14 = DAT_002e3b98;
      }
    }
    iVar14 = FUN_00315738(local_3c,iVar14);
    if (iVar14 != 0) {
      param_1[0x16ff] = (float)((int)param_1[0x16ff] + 1);
    }
  }
  else {
    if ((*DAT_002e3b8c & 1) == 0) {
      uVar26 = FUN_003679b4(DAT_002e3b8c);
      iVar14 = (int)((ulonglong)uVar26 >> 0x20);
      if ((int)uVar26 != 0) {
        FUN_0036788c(DAT_002e3b90);
        iVar14 = DAT_002e3b98;
      }
    }
    iVar14 = FUN_00315738(local_3c,iVar14);
    fVar19 = 0.0;
    if (iVar14 != 0) {
      if (param_1[0x16ff] == -NAN) goto LAB_002e3f48;
      fVar19 = (float)((int)param_1[0x16ff] + 1);
    }
    param_1[0x16ff] = fVar19;
  }
LAB_002e3f48:
  if (*(int *)(iVar11 + 0x5b4) != -1) {
    fVar19 = (float)FUN_003102a0();
    bVar18 = fVar19 == 0.0;
    if (bVar18) {
      fVar19 = param_1[0x16fe];
    }
    if (!bVar18 || ((uint)fVar19 & 1) != 0) {
      *(int *)(iVar11 + 0x5b4) = *(int *)(iVar11 + 0x5b4) + 1;
    }
  }
  local_4c = param_1 + 0x130c;
  if ((iVar12 != 0) || (iVar11 = *DAT_002e3ba4, *(short *)(DAT_002e42b8 + iVar11) != 0))
  goto LAB_002e4138;
  param_1[0x16fd] = (float)((int)param_1[0x16fd] + 1);
  fVar19 = DAT_002e42bc;
  bVar9 = *(byte *)(param_1 + 0x823);
  if (bVar9 == 0) {
LAB_002e3ffc:
    FUN_002e5628(param_1,local_4c);
    pfVar16 = param_1 + 0x171e;
    FUN_00460528(param_1);
    FUN_0045dc14(param_1,pfVar16);
    FUN_00462930(param_1,pfVar16);
    FUN_002d8408(param_1,pfVar16);
    if (*(char *)((int)param_1 + 0x5c01) == '\0') {
      FUN_00461324(param_1,param_1 + 0x823);
    }
    FUN_004596b0(param_1);
    FUN_00460a70(param_1,param_1 + 0x8a6);
    FUN_004571a8(param_1);
    FUN_00461ec4(param_1);
  }
  else {
    sVar10 = *(short *)(iVar11 + 0x110);
    *(byte *)(param_1 + 0x823) = bVar9 - 1;
    fVar23 = (float)VectorSignedToFloat((int)sVar10,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar19 / fVar23 + DAT_002e42c0) < (int)(uint)bVar9) goto LAB_002e3ffc;
    *(undefined1 *)((int)param_1 + 0x3261) = 0;
  }
  iVar11 = FUN_0037571c(param_1);
  if (iVar11 == 0) {
    iVar11 = FUN_0036a7a0(param_1);
    bVar18 = false;
    if (iVar11 != 0) goto LAB_002e40b8;
  }
  else {
LAB_002e40b8:
    bVar18 = true;
  }
  if (*(char *)((int)param_1 + 0x107) == '\0') {
    iVar11 = FUN_0043c1ec();
    if (((iVar11 == 0) || (iVar11 = FUN_00462ab4(param_1), iVar11 == 0)) && (bVar18))
    goto LAB_002e4124;
LAB_002e412c:
    uVar8 = 0;
    iVar11 = (int)*(char *)(param_1 + 0x1806);
  }
  else {
    if ((0x23 < *(ushort *)(DAT_002e42c4 + (int)param_1)) &&
       ((int)(*(ushort *)(DAT_002e42c4 + (int)param_1) + 0x23) < (int)param_1[0x8ac]))
    goto LAB_002e412c;
LAB_002e4124:
    uVar8 = 1;
    iVar11 = 1;
  }
  FUN_003016e0(iVar11);
  *(undefined1 *)(param_1 + 0x1806) = uVar8;
LAB_002e4138:
  if (*(char *)(param_1 + 0x1fc9) != '\0') {
    iVar11 = FUN_003518bc(*(char *)(param_1 + 0x1fc9),param_1 + 0x1403,local_50 + 0xc,1);
    if (((iVar11 == 1) && (iVar11 = FUN_003695f8(), iVar11 == 0)) &&
       (iVar11 = FUN_0036a7a0(param_1), iVar11 == 0)) {
      iVar11 = *DAT_002e3ba4;
      if (*(short *)(iVar11 + 0x4b2) == 0x10) {
        local_64 = DAT_002e3bb0;
        FUN_0037547c(DAT_002e42c8,0,4,DAT_002e3bb4,DAT_002e3bb4);
      }
      else {
        bVar9 = *(byte *)(param_1 + 0x1fc9) ^ 3;
        *(byte *)(param_1 + 0x1fc9) = bVar9;
        if ((*(short *)(iVar11 + 0x4b2) != 0x10) && (*(int *)(DAT_002e42cc + 8) < DAT_002e42d0)) {
          uVar20 = 1;
          if (bVar9 != 1) {
            uVar20 = DAT_002e42d4;
          }
          local_64 = DAT_002e3bb0;
          if (bVar9 == 1) {
            uVar20 = DAT_002e42d8;
          }
          FUN_0037547c(uVar20,0,4,DAT_002e3bb4,DAT_002e3bb4);
        }
        FUN_003387a8(param_1[*(short *)(local_38 + 0x19) + 0x295],*(byte *)(param_1 + 0x1fc9) - 1);
      }
    }
    FUN_003387a8(param_1[*(short *)(local_38 + 0x19) + 0x295],*(byte *)(param_1 + 0x1fc9) - 1);
  }
  if (*(short *)(local_34 + 0x23) == 0) {
    FUN_00458440(param_1);
  }
  else {
    FUN_00458aa0();
  }
  FUN_0045acac(param_1);
  FUN_002e5428(local_48);
  FUN_00460810(param_1);
  piVar4 = DAT_002e3ba4;
  FUN_00460474((int)*(short *)(*DAT_002e3ba4 + 0x110));
  FUN_0045cea4(local_40,(int)*(short *)(*piVar4 + 0x110));
  if ((iVar12 == 0) || (*DAT_002e4508 != 0)) {
    fVar19 = 0.0;
    *(undefined2 *)((int)local_38 + 0x66) = *(undefined2 *)(local_38 + 0x19);
    do {
      fVar23 = (float)(int)*(short *)((int)local_38 + 0x66);
      bVar18 = fVar23 != fVar19;
      if (bVar18) {
        fVar23 = param_1[(int)fVar19 + 0x295];
      }
      if (bVar18 && fVar23 != 0.0) {
        FUN_002d84c4(&local_58,fVar23);
      }
      fVar19 = (float)((int)fVar19 + 1);
    } while ((int)fVar19 < 4);
    FUN_002d84c4(&local_58,param_1[*(short *)((int)local_38 + 0x66) + 0x295]);
  }
  local_64 = *param_1;
  FUN_0045dd30(param_1,param_1 + 0xc64,param_1 + 0x29c,param_1 + 0xa28,param_1 + 0xc63);
  FUN_002d8324(param_1 + 0x1fca,*(undefined2 *)(param_1 + 0x1400),5,0x28);
  FUN_002d8324(param_1 + 0x1fcb,*(undefined2 *)((int)param_1 + 0x5002),5,0x28);
  FUN_00370084(param_1 + 0x1fcc,*(undefined1 *)(DAT_002e450c + (int)param_1),5,3);
  iVar11 = FUN_002d8318();
  uVar20 = VectorSignedToFloat(param_1[0x1fca],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar11 + 0x4c) = uVar20;
  fVar19 = (float)VectorSignedToFloat(param_1[0x1fca],(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(iVar11 + 0x50) = fVar19 * DAT_002e4510;
  uVar20 = VectorSignedToFloat(param_1[0x1fcb],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar11 + 0x48) = uVar20;
  FUN_00458758((int)(char)*(undefined2 *)(local_30 + 0xc));
  if (fVar3 < param_1[0x1fd1]) {
    iVar11 = 0;
    do {
      if ((*(char *)((int)param_1 + iVar11 + 0x6008) != '\0') &&
         (sVar10 = *(short *)((int)param_1 + iVar11 * 2 + 0x5ff4) + -1,
         *(short *)((int)param_1 + iVar11 * 2 + 0x5ff4) = sVar10, sVar10 == 0)) {
        local_64 = DAT_002e3bb0;
        FUN_0037547c(param_1[iVar11 + 0x17f3],0,4,DAT_002e3bb4,DAT_002e3bb4);
        *(undefined1 *)((int)param_1 + iVar11 + 0x6008) = 0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 10);
  }
  return;
}

