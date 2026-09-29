// OoT3D decomp @ 001c3558  name=FUN_001c3558  size=2776

uint FUN_001c3558(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  undefined4 uVar12;
  float fVar13;

  iVar7 = DAT_001c3970;
  uVar5 = (uint)*(short *)(param_1 + 0x1b4);
  switch(uVar5) {
  case 0:
    if (*(short *)(DAT_001c3970 + 0x30) == 0) {
      if (((*(char *)(DAT_001c3970 + 0xd) == '\x01') ||
          ((*(uint *)(DAT_001c3974 + 0xed8) & 0x100) == 0)) ||
         ((*(uint *)(DAT_001c3974 + 0xed8) & 0x200) != 0)) {
        uVar4 = (undefined2)DAT_001c397c;
      }
      else {
        uVar4 = (undefined2)DAT_001c3978;
      }
    }
    else if (*(char *)(DAT_001c3970 + 5) == '\0') {
      uVar4 = (undefined2)DAT_001c3984;
    }
    else {
      uVar4 = (undefined2)DAT_001c3980;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar4;
    iVar8 = FUN_0036bc98(param_1,param_2);
    if (iVar8 == 0) {
      iVar7 = *(int *)(param_2 + 0x20ac);
      if ((*(uint *)(iVar7 + 4) & 0x100) != 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x114) == '\0') {
        if (DAT_001c3988 < ABS(*(float *)(param_1 + 0x9c))) {
          return 0;
        }
        fVar11 = *(float *)(param_1 + 0x98);
        fVar13 = *(float *)(iVar7 + 0x1730);
        bVar10 = NAN(fVar11) || NAN(fVar13);
        if (fVar11 <= fVar13) {
          bVar10 = NAN(fVar11) || NAN(DAT_001c3988);
          fVar13 = DAT_001c3988;
        }
        if (fVar11 != fVar13 && fVar11 < fVar13 == bVar10) {
          return 0;
        }
      }
      iVar8 = (int)(short)((*(short *)(param_1 + 0x92) - *(short *)(iVar7 + 0xbe)) + -0x8000);
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      if (iVar8 < 0x4001) {
        *(int *)(iVar7 + 0x172c) = param_1;
        *(undefined4 *)(iVar7 + 0x1730) = *(undefined4 *)(param_1 + 0x98);
        *(undefined1 *)(iVar7 + 0x172b) = 0;
      }
      return (uint)(iVar8 < 0x4001);
    }
    if (*(short *)(iVar7 + 0x30) == 0) {
      *(undefined2 *)(param_1 + 0x1b4) = 1;
      uVar5 = DAT_001c3974;
      if (*(char *)(iVar7 + 0xd) == '\x01') {
        uVar6 = *(uint *)(DAT_001c3974 + 0xed8) | 0x100;
      }
      else {
        uVar6 = *(uint *)(DAT_001c3974 + 0xed8) | 0x200;
      }
      *(uint *)(DAT_001c3974 + 0xed8) = uVar6;
      return uVar5;
    }
    uVar5 = 10;
    goto LAB_001c3fcc;
  case 1:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 == 4) {
      iVar7 = FUN_00346964(param_2);
      uVar5 = 0;
      if (iVar7 != 0) {
        FUN_003725e0(param_2);
        uVar5 = FUN_00369f3c(param_2);
        if (uVar5 == 0) {
          if (*(short *)(DAT_001c3974 + 0x48) < 0x14) {
            FUN_0036be34(param_2,DAT_001c3990);
            uVar5 = 3;
          }
          else {
            FUN_00376a60(0xffffffec);
            *(short *)(param_1 + 0x116) = (short)DAT_001c398c;
            FUN_0036be34(param_2);
            uVar5 = 2;
          }
        }
        else {
          if (uVar5 != 1) {
            return uVar5;
          }
          FUN_0036be34(param_2,0x2d);
          uVar5 = 3;
        }
        goto LAB_001c3fcc;
      }
    }
    break;
  case 2:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 == 5) {
      iVar7 = FUN_00346964(param_2);
      uVar5 = 0;
      if (iVar7 != 0) {
        FUN_003725e0(param_2);
        FUN_0036be34(param_2,DAT_001c3994);
        uVar5 = 4;
        goto LAB_001c3fcc;
      }
    }
    break;
  case 3:
    iVar7 = FUN_003769d8(param_2 + 0x28a0);
    if ((iVar7 == 5) && (iVar7 = FUN_00346964(param_2), iVar7 != 0)) {
      FUN_003725e0(param_2);
      *(undefined2 *)(param_1 + 0x1b4) = 0;
    }
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 != 6) {
      return uVar5;
    }
    goto LAB_001c3edc;
  case 4:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 == 4) {
      iVar7 = FUN_00346964(param_2);
      uVar5 = 0;
      if (iVar7 != 0) {
        FUN_003725e0(param_2);
        uVar5 = FUN_00369f3c(param_2);
        if (uVar5 == 0) {
          uVar5 = VectorFloatToUnsigned(*(undefined4 *)(DAT_001c3970 + 200),3);
          FUN_0034051c(uVar5 & 0xffff);
          FUN_0036be34(param_2,DAT_001c3998);
          uVar5 = 5;
          goto LAB_001c3fcc;
        }
        if (uVar5 == 1) {
          uVar5 = FUN_0036be34(param_2,DAT_001c3994);
          return uVar5;
        }
      }
    }
    break;
  case 5:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 == 5) {
      iVar7 = FUN_00346964(param_2);
      uVar5 = 0;
      if (iVar7 != 0) {
        FUN_003725e0(param_2);
        *(undefined1 *)(param_2 + 0x2e40) = 1;
        (**(code **)(DAT_001c399c + param_2))(param_2);
        iVar7 = DAT_001c3970;
        *(undefined2 *)(DAT_001c3970 + 0x30) = 1;
        *(undefined2 *)(iVar7 + 0x1c) = 0x14;
        uVar6 = DAT_001c3974;
        *(undefined2 *)(param_1 + 0x1b4) = 0;
        uVar5 = *(uint *)(uVar6 + 0xed8);
        if ((uVar5 & 0xff0000) < 0xff0000) {
          uVar5 = uVar5 + 0x10000;
          *(uint *)(uVar6 + 0xed8) = uVar5;
        }
        return uVar5;
      }
    }
    break;
  case 10:
    if (*(char *)(DAT_001c3970 + 5) == '\0') {
      uVar5 = FUN_003769d8(param_2 + 0x28a0);
      if (uVar5 != 4) {
        return uVar5;
      }
      iVar8 = FUN_00346964(param_2);
      if (iVar8 == 0) {
        return 0;
      }
      FUN_003725e0(param_2);
      uVar5 = FUN_00369f3c(param_2);
      uVar12 = DAT_001c3d4c;
      if (uVar5 == 0) {
        if (*(float *)(iVar7 + 0x54) == DAT_001c3d24) {
          *(short *)(param_1 + 0x116) = (short)DAT_001c3d28;
          uVar4 = 0x14;
        }
        else if (*(char *)(iVar7 + 0x10) == '\0') {
          uVar5 = VectorFloatToUnsigned(*(float *)(iVar7 + 0x54),3);
          FUN_0034051c(uVar5 & 0xffff);
          if ((short)(int)*(float *)(iVar7 + 200) < (short)(int)*(float *)(iVar7 + 0x54)) {
            if (*(char *)(iVar7 + 0x12) == '\x02') {
              uVar4 = (undefined2)DAT_001c3d38;
            }
            else {
              uVar4 = (undefined2)DAT_001c3d34;
            }
            *(undefined2 *)(param_1 + 0x116) = uVar4;
            uVar4 = 0xb;
          }
          else {
            *(short *)(param_1 + 0x116) = (short)DAT_001c3d30;
            uVar4 = 0x14;
          }
        }
        else {
          *(short *)(param_1 + 0x116) = (short)DAT_001c3d2c;
          uVar4 = 0xb;
        }
        *(undefined2 *)(param_1 + 0x1b4) = uVar4;
        uVar5 = FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
        return uVar5;
      }
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          return uVar5;
        }
        if (*(short *)(iVar7 + 0x28) == 0) goto LAB_001c3a28;
        cVar1 = *(char *)(iVar7 + 0xd);
joined_r0x001c3f50:
        if (cVar1 == '\x01') {
          FUN_0036be34(param_2,DAT_001c3d58);
        }
        goto LAB_001c3f54;
      }
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001c3d3c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_001c3d40 / fVar13 + DAT_001c3d44) < *(int *)(iVar7 + 0x58)) {
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001c3d3c + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(int *)(iVar7 + 0x58) = (int)(DAT_001c3d48 / fVar13 + DAT_001c3d44);
        FUN_0036be34(param_2,uVar12);
      }
      else {
        cVar1 = *(char *)(iVar7 + 0xe);
        bVar10 = cVar1 == '\0';
        if (bVar10) {
          cVar1 = *(char *)(iVar7 + 0x13);
        }
        if (bVar10 && cVar1 == '\0') {
          *(undefined1 *)(iVar7 + 0x13) = 1;
        }
        if ((*(char *)(iVar7 + 0x16) == '\x02') &&
           (*(short *)(DAT_001c3d50 + (uint)*(byte *)(iVar7 + 0x13) * 2) == 0x408d)) {
          FUN_0036be34(param_2,DAT_001c3d54);
        }
        else {
          FUN_0036be34(param_2,*(undefined2 *)(DAT_001c3d50 + (uint)*(byte *)(iVar7 + 0x13) * 2));
        }
        bVar3 = *(char *)(iVar7 + 0x13) + 1;
        *(byte *)(iVar7 + 0x13) = bVar3;
        if (*(char *)(iVar7 + 0xd) == '\x01') {
          if (3 < bVar3) goto LAB_001c3c00;
        }
        else if (5 < bVar3) {
LAB_001c3c00:
          *(undefined1 *)(iVar7 + 0x13) = 0;
        }
      }
    }
    else {
      uVar5 = FUN_003769d8(param_2 + 0x28a0);
      if (uVar5 != 4) {
        return uVar5;
      }
      iVar8 = FUN_00346964(param_2);
      if (iVar8 == 0) {
        return 0;
      }
      FUN_003725e0(param_2);
      uVar5 = FUN_00369f3c(param_2);
      if (uVar5 == 0) {
        FUN_0036be34(param_2,DAT_001c3d1c);
        *(undefined1 *)(iVar7 + 4) = 1;
        *(undefined1 *)(iVar7 + 5) = 0;
        uVar5 = 0x14;
        goto LAB_001c3fcc;
      }
      if (uVar5 != 1) {
        return uVar5;
      }
    }
    goto LAB_001c3edc;
  case 0xb:
    iVar7 = FUN_003769d8();
    if ((iVar7 != 5) && (uVar5 = FUN_003769d8(param_2 + 0x28a0), uVar5 != 0)) {
      return uVar5;
    }
    iVar7 = FUN_00346964(param_2);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_003725e0(param_2);
    fVar13 = DAT_001c3d24;
    uVar5 = DAT_001c3974;
    iVar7 = DAT_001c3970;
    if (*(char *)(DAT_001c3970 + 0x10) == '\0') {
      fVar11 = *(float *)(DAT_001c3970 + 0x54);
      *(float *)(DAT_001c3970 + 200) = fVar11;
      *(float *)(iVar7 + 0x54) = fVar13;
      cVar1 = *(char *)(iVar7 + 0xd);
      uVar6 = *(uint *)(uVar5 + 0xed8);
      if (cVar1 == '\x01') {
        uVar9 = (int)fVar11 & 0x7f;
        *(uint *)(uVar5 + 0xed8) = uVar6 & 0xffffff00 | uVar9;
        fVar13 = (float)VectorUnsignedToFloat
                                  ((uVar6 & 0x7f000000) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        if (fVar11 <= fVar13) {
          if (*(char *)(iVar7 + 0x12) == '\x02') {
            uVar6 = *(uint *)(uVar5 + 0xed8);
            goto LAB_001c3d6c;
          }
        }
        else {
          uVar6 = uVar6 & 0xffff00 | uVar9 | ((int)fVar11 & 0x7fU) << 0x18;
          *(uint *)(uVar5 + 0xed8) = uVar6;
          if (*(char *)(iVar7 + 0x12) == '\x02') {
            uVar6 = uVar6 | 0x80000000;
            *(uint *)(uVar5 + 0xed8) = uVar6;
LAB_001c3d6c:
            *(uint *)(uVar5 + 0xed8) = uVar6 | 0x80;
            *(undefined2 *)(param_1 + 0x1b4) = 0;
            return uVar6 | 0x80;
          }
        }
      }
      else {
        uVar6 = uVar6 & 0xffffff | ((int)fVar11 & 0x7fU) << 0x18;
        *(uint *)(uVar5 + 0xed8) = uVar6;
        if (*(char *)(iVar7 + 0x12) == '\x02') {
          *(uint *)(uVar5 + 0xed8) = uVar6 | 0x80000000;
          goto LAB_001c3edc;
        }
      }
      uVar12 = DAT_001c4064;
      if ((int)fVar11 < DAT_001c4058) {
        if ((int)fVar11 < DAT_001c405c) {
          if ((int)fVar11 < DAT_001c4060) {
            uVar4 = 0x4c;
          }
          else {
            uVar4 = 0x4d;
          }
        }
        else {
          uVar4 = 0x4e;
        }
      }
      else {
        uVar4 = 0x55;
      }
      if (cVar1 == '\x01') {
        if ((DAT_001c405c <= (int)fVar11) && ((*(uint *)(DAT_001c3974 + 0xed8) & 0x400) == 0)) {
          uVar4 = 0x3e;
          *(uint *)(DAT_001c3974 + 0xed8) = *(uint *)(DAT_001c3974 + 0xed8) | 0x400;
          uVar12 = FUN_00371e50(uVar12);
          uVar12 = VectorFloatToUnsigned(uVar12,3);
          *(char *)(iVar7 + 1) = (char)uVar12 + '\x01';
        }
      }
      else if ((DAT_001c4058 <= (int)fVar11) && ((*(uint *)(DAT_001c3974 + 0xed8) & 0x800) == 0)) {
        uVar4 = 0x38;
        *(uint *)(DAT_001c3974 + 0xed8) = *(uint *)(DAT_001c3974 + 0xed8) | 0x800;
        uVar12 = FUN_00371e50(uVar12);
        uVar12 = VectorFloatToUnsigned(uVar12,3);
        *(char *)(iVar7 + 1) = (char)uVar12 + '\x01';
      }
    }
    else {
      uVar4 = 0x55;
      *(float *)(DAT_001c3970 + 0x54) = DAT_001c3d24;
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
    uVar2 = DAT_001c406c;
    uVar12 = DAT_001c4068;
    *(undefined2 *)(param_1 + 0x1be) = uVar4;
    FUN_003724dc(uVar2,uVar12,param_1,param_2,uVar4);
    uVar5 = 0x17;
    goto LAB_001c3fcc;
  case 0x14:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 != 5) {
      return uVar5;
    }
    iVar7 = FUN_00346964(param_2);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_003725e0(param_2);
    goto LAB_001c3edc;
  case 0x15:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 != 4) {
      return uVar5;
    }
    iVar7 = FUN_00346964(param_2);
    if (iVar7 == 0) {
      return 0;
    }
    FUN_003725e0(param_2);
    uVar5 = FUN_00369f3c(param_2);
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        return uVar5;
      }
      if (*(short *)(DAT_001c3970 + 0x28) != 0) {
        cVar1 = *(char *)(DAT_001c3970 + 0xd);
        goto joined_r0x001c3f50;
      }
LAB_001c3a28:
      FUN_0036be34(param_2,DAT_001c3d20);
LAB_001c3f54:
      uVar5 = 0x16;
      goto LAB_001c3fcc;
    }
LAB_001c3edc:
    uVar5 = 0;
LAB_001c3fcc:
    *(short *)(param_1 + 0x1b4) = (short)uVar5;
    return uVar5;
  case 0x16:
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    iVar7 = DAT_001c3970;
    if (uVar5 == 0) {
      *(undefined2 *)(param_1 + 0x1b4) = 0;
      if (*(char *)(iVar7 + 5) != '\0') {
        *(undefined1 *)(iVar7 + 4) = 1;
        *(undefined1 *)(iVar7 + 5) = 0;
      }
      *(undefined2 *)(iVar7 + 0x30) = 0;
      *(undefined1 *)(param_2 + 0x2e40) = 0;
      return 0;
    }
    break;
  case 0x17:
    *(undefined1 *)(DAT_001c3970 + 2) = 0;
    iVar7 = FUN_00371e40(param_1,param_2);
    if (iVar7 == 0) {
      uVar5 = FUN_003724dc(DAT_001c406c,DAT_001c4068,param_1,param_2,
                           (int)*(short *)(param_1 + 0x1be));
      return uVar5;
    }
    uVar5 = 0x18;
    goto LAB_001c3fcc;
  case 0x18:
    *(undefined1 *)(DAT_001c3970 + 2) = 0;
    uVar5 = FUN_003769d8(param_2 + 0x28a0);
    if (uVar5 == 6) {
      iVar8 = FUN_00346964(param_2);
      uVar5 = 0;
      if (iVar8 != 0) {
        if (*(char *)(iVar7 + 0x10) != '\0') {
          FUN_00367c7c(param_2,DAT_001c4070,0);
          *(undefined2 *)(param_1 + 0x1b4) = 0x14;
          return 0x14;
        }
        *(undefined2 *)(param_1 + 0x1b4) = 0;
        return 0;
      }
    }
  }
  return uVar5;
}
