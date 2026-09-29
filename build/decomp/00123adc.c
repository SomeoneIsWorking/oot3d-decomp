// OoT3D decomp @ 00123adc  name=FUN_00123adc  size=936

void FUN_00123adc(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_40;
  undefined4 uStack_3c;
  float local_38;

  FUN_003731e0(param_1 + 0x1d4);
  uVar7 = DAT_00123e78;
  iVar9 = DAT_00123e70;
  uVar6 = DAT_00123e6c;
  uVar3 = DAT_00123e60;
  sVar2 = *(short *)(param_1 + 0x25e);
  iVar10 = param_1 + 0x262;
  iVar11 = param_1 + 0x266;
  if (sVar2 == 0) {
    FUN_00370378(param_1 + 0xbc,DAT_00123e44,DAT_00123e48);
    uVar3 = DAT_00123e4c;
    FUN_00370378(iVar10,DAT_00123e4c,0x16c);
    FUN_00370378(param_1 + 0x264,uVar3,0x16c);
    iVar9 = FUN_00370378(iVar11,uVar3,0x16c);
    if (iVar9 == 0) goto LAB_00123edc;
    fVar13 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar17 = DAT_00123e50;
    fVar15 = *(float *)(param_1 + 0x3a0);
    fVar13 = fVar13 * DAT_00123e50;
    fVar14 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    fVar5 = DAT_00123e58;
    fVar4 = DAT_00123e54;
    fVar16 = *(float *)(param_1 + 0x3a0);
    local_40 = *(float *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0xc);
    local_38 = *(float *)(param_1 + 0x10);
    iVar9 = 0;
    do {
      FUN_00363ec4(param_2,&local_40,DAT_00123e5c,DAT_00123e5c,
                   (int)(short)(int)(*(float *)(param_1 + 0x3a0) * fVar5),
                   (int)(short)(int)(*(float *)(param_1 + 0x3a0) * fVar4));
      iVar9 = iVar9 + 1;
      local_40 = local_40 + fVar13 * fVar15;
      local_38 = local_38 + fVar14 * fVar17 * fVar16;
    } while (iVar9 < 3);
    uVar8 = 1;
  }
  else {
    if (sVar2 != 0x11) {
      if (sVar2 == 0x1b) {
        FUN_00370378(param_1 + 0xbc,DAT_00123e70 << 2);
        iVar10 = FUN_00370378(iVar10,DAT_00123e74,0x5b0);
        if (iVar10 != 0) {
          *(undefined2 *)(param_1 + 0x25e) = 0x26;
        }
        FUN_00370378(param_1 + 0x264,uVar6,iVar9);
        FUN_00370378(iVar11,uVar3,0x2d8);
      }
      else if (sVar2 == 0x26) {
        FUN_00370378(param_1 + 0xbc,DAT_00123e7c);
        iVar9 = FUN_00370378(iVar10,DAT_00123e80,uVar7);
        if (iVar9 != 0) {
          *(undefined2 *)(param_1 + 0x25e) = 0x27;
        }
        FUN_00370378(param_1 + 0x264,DAT_00123e88,DAT_00123e84);
        FUN_00370378(iVar11,DAT_00123e90,DAT_00123e8c);
      }
      else if (sVar2 == 0x27) {
        FUN_00370378(param_1 + 0xbc,0x1800,DAT_00123e78);
        iVar9 = FUN_00370378(iVar10,DAT_00123e98,DAT_00123e94);
        if (iVar9 != 0) {
          *(undefined2 *)(param_1 + 0x25e) = 0x28;
        }
        FUN_00370378(param_1 + 0x264,uVar6,0x2d8);
        FUN_00370378(iVar11,uVar3,0x5b0);
      }
      else {
        sVar1 = sVar2 + 1;
        *(short *)(param_1 + 0x25e) = sVar1;
        if (sVar2 < 0x28) {
          if (sVar1 == 0xf) {
            FUN_00375bcc(param_1,DAT_00123ef0);
          }
          if (0x11 < *(short *)(param_1 + 0x25e)) {
            FUN_00370378(iVar11,uVar3,0x88);
          }
        }
        else if (0x2d < sVar1) {
          uVar12 = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(param_1 + 0x3a0) * DAT_00123e9c <= *(float *)(param_1 + 0x98))
                   << 0x1d;
          if (SUB41(uVar12 >> 0x1d,0)) {
            iVar9 = FUN_0036ae14(param_1 + 0x1d4,0);
            uVar3 = DAT_00123ea8;
            fVar17 = (float)VectorSignedToFloat(iVar9 * 2,(byte)(uVar12 >> 0x15) & 3);
            if (iVar9 * 2 < 1) {
              fVar17 = fVar17 * DAT_00123ea0 * DAT_00123ea4 - DAT_00123ea4;
            }
            else {
              fVar17 = DAT_00123ea4 + fVar17 * DAT_00123ea0 * DAT_00123ea4;
            }
            *(short *)(param_1 + 0x25e) = (short)(int)fVar17;
            FUN_00370350(uVar3,param_1 + 0x1d4,0);
            *(undefined4 *)(param_1 + 600) = DAT_00123eac;
          }
          else {
            FUN_00363e8c(param_1);
          }
        }
      }
      goto LAB_00123edc;
    }
    FUN_00370378(param_1 + 0xbc,DAT_00123e44,0x200);
    FUN_00370378(iVar10,DAT_00123e64,0x200);
    FUN_00370378(iVar11,uVar3,0x200);
    iVar9 = FUN_00370378(param_1 + 0x264,DAT_00123e68,0x200);
    if (iVar9 == 0) goto LAB_00123edc;
    uVar8 = 0x12;
  }
  *(undefined2 *)(param_1 + 0x25e) = uVar8;
LAB_00123edc:
  FUN_00366044(param_1);
  return;
}
