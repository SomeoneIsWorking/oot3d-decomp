// OoT3D decomp @ 003fa5d0  name=FUN_003fa5d0  size=1608

void FUN_003fa5d0(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  fVar1 = DAT_003fa9dc;
  if (*(char *)*param_2 != '\0') {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + param_3 * 0x124) == '\0') {
      local_38 = (float)VectorUnsignedToFloat
                                  ((uint)(byte)((char *)*param_2)[0xa8],(byte)(in_fpscr >> 0x15) & 3
                                  );
      local_38 = local_38 * DAT_003fa9dc;
      local_34 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(*param_2 + 0xa9),(byte)(in_fpscr >> 0x15) & 3);
      local_34 = local_34 * DAT_003fa9dc;
      local_30 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(*param_2 + 0xaa),(byte)(in_fpscr >> 0x15) & 3);
      local_30 = local_30 * DAT_003fa9dc;
      local_2c = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(*param_2 + 0xab),(byte)(in_fpscr >> 0x15) & 3);
      local_2c = local_2c * DAT_003fa9dc;
    }
    else {
      FUN_00333abc(*(int *)(param_1 + 0xc),param_3,&local_38);
    }
    fVar5 = DAT_003fa9ec;
    fVar4 = DAT_003fa9e8;
    fVar3 = DAT_003fa9e4;
    fVar2 = DAT_003fa9e0;
    iVar6 = *param_2;
    piVar8 = param_2 + 4;
    iVar10 = 0;
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xa4),(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xa5),(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xa6),(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xac),(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xad),(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xae),(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xb0),(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xb1),(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(iVar6 + 0xb2),(byte)(in_fpscr >> 0x15) & 3);
    do {
      iVar6 = *(int *)(param_1 + 0x10) + iVar10 * 0x60;
      if (*(int *)(iVar6 + 0xe4) == 0x3f800000) {
        fVar20 = -*(float *)(iVar6 + 0xd8);
        fVar21 = -*(float *)(iVar6 + 0xdc);
        fVar22 = -*(float *)(iVar6 + 0xe0);
        *(undefined1 *)((int)piVar8 + iVar10 + 0x164) = 1;
        iVar6 = 0;
        if (ABS(fVar20) != 0.0) {
          iVar6 = ((uint)((int)fVar20 << 1) >> 0x18) - 0x70;
        }
        if (iVar6 < 0) {
          uVar9 = ((uint)fVar20 >> 0x1f) << 0xf;
        }
        else {
          uVar9 = (((uint)fVar20 & 0xe07fffff) >> 0xd | iVar6 << 10) & 0xffff |
                  ((uint)fVar20 >> 0x1f) << 0xf;
        }
        iVar6 = 0;
        if (ABS(fVar21) != 0.0) {
          iVar6 = ((uint)((int)fVar21 << 1) >> 0x18) - 0x70;
        }
        if (iVar6 < 0) {
          uVar7 = ((uint)fVar21 >> 0x1f) << 0xf;
        }
        else {
          uVar7 = (((uint)fVar21 & 0xe07fffff) >> 0xd | iVar6 << 10) & 0xffff |
                  ((uint)fVar21 >> 0x1f) << 0xf;
        }
        piVar8[iVar10 * 0xb + 5] = uVar9 | uVar7 << 0x10;
        iVar6 = 0;
        if (ABS(fVar22) != 0.0) {
          iVar6 = ((uint)((int)fVar22 << 1) >> 0x18) - 0x70;
        }
        if (iVar6 < 0) {
          uVar9 = ((uint)fVar22 >> 0x1f) << 0xf;
        }
        else {
          uVar9 = (((uint)fVar22 & 0xe07fffff) >> 0xd | iVar6 << 10) & 0xffff |
                  ((uint)fVar22 >> 0x1f) << 0xf;
        }
        piVar8[iVar10 * 0xb + 6] = uVar9;
        *(undefined1 *)(piVar8 + iVar10 * 0xb + 7) = 1;
        iVar6 = *(int *)(param_1 + 0x10) + iVar10 * 0x60;
        fVar21 = *(float *)(iVar6 + 0x88) * local_38;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)(piVar8 + iVar10 * 0xb + 2) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0x8c) * local_34;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 9) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0x90) * local_30;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 10) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0x98) * fVar11 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 0xb) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0x9c) * fVar12 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)(piVar8 + iVar10 * 0xb + 3) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0xa0) * fVar13 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 0xd) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0xa8) * fVar14 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 0xe) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0xac) * fVar15 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 0xf) = (char)uVar23;
        fVar21 = *(float *)(iVar6 + 0xb0) * fVar16 * fVar1;
        fVar20 = fVar2;
        if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
          fVar20 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
        *(char *)(piVar8 + iVar10 * 0xb + 4) = (char)uVar23;
        fVar20 = *(float *)(iVar6 + 0xb8);
        if (*(char *)((int)param_2 + 0x1a1) == '\0') {
          fVar20 = fVar20 * fVar17 * fVar1;
          fVar21 = fVar2;
          if ((fVar2 <= fVar20) && (fVar21 = fVar20, 0x3f800000 < (int)fVar20)) {
            fVar21 = fVar3;
          }
          uVar23 = VectorFloatToUnsigned(fVar5 + fVar21 * fVar4,3);
          *(char *)((int)piVar8 + iVar10 * 0x2c + 0x11) = (char)uVar23;
          fVar21 = *(float *)(iVar6 + 0xbc) * fVar18 * fVar1;
          fVar20 = fVar2;
          if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
            fVar20 = fVar3;
          }
          uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
          *(char *)((int)piVar8 + iVar10 * 0x2c + 0x12) = (char)uVar23;
          fVar20 = *(float *)(iVar6 + 0xc0) * fVar19 * fVar1;
        }
        else {
          fVar21 = fVar2;
          if ((fVar2 <= fVar20) && (fVar21 = fVar20, 0x3f800000 < (int)fVar20)) {
            fVar21 = fVar3;
          }
          uVar23 = VectorFloatToUnsigned(fVar5 + fVar21 * fVar4,3);
          *(char *)((int)piVar8 + iVar10 * 0x2c + 0x11) = (char)uVar23;
          fVar21 = *(float *)(iVar6 + 0xbc);
          fVar20 = fVar2;
          if ((fVar2 <= fVar21) && (fVar20 = fVar21, 0x3f800000 < (int)fVar21)) {
            fVar20 = fVar3;
          }
          uVar23 = VectorFloatToUnsigned(fVar5 + fVar20 * fVar4,3);
          *(char *)((int)piVar8 + iVar10 * 0x2c + 0x12) = (char)uVar23;
          fVar20 = *(float *)(iVar6 + 0xc0);
        }
        fVar21 = fVar2;
        if ((fVar2 <= fVar20) && (fVar21 = fVar20, 0x3f800000 < (int)fVar20)) {
          fVar21 = fVar3;
        }
        uVar23 = VectorFloatToUnsigned(fVar5 + fVar21 * fVar4,3);
        *(char *)((int)piVar8 + iVar10 * 0x2c + 0x13) = (char)uVar23;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 3);
    FUN_004093f8(param_1 + 0x24,piVar8);
  }
  return;
}

