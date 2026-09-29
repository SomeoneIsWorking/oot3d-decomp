// OoT3D decomp @ 00309964  name=FUN_00309964  size=488

void FUN_00309964(int param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
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
  undefined4 uVar21;
  byte local_50 [4];
  float local_4c [2];

  fVar3 = DAT_00309b5c;
  fVar2 = DAT_00309b50;
  if (*(int *)(param_1 + 0x98) != 0) {
    fVar18 = *(float *)(param_1 + 0x88);
    uVar4 = (uint)*(byte *)(param_1 + 0x91);
    fVar19 = *(float *)(param_1 + 0xc) * DAT_00309b4c;
    fVar10 = *(float *)(param_1 + 0x10) * DAT_00309b4c;
    if (uVar4 < 2) {
      fVar11 = (float)VectorSignedToFloat(uVar4 - 0x3f,(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      fVar11 = (float)VectorSignedToFloat(uVar4 - 0x40,(byte)(in_fpscr >> 0x15) & 3);
    }
    fVar11 = DAT_00309b50 + fVar11 * DAT_00309b54;
    fVar12 = *(float *)(param_1 + 0x58);
    uVar4 = (uint)*(byte *)(param_1 + 0x92);
    fVar13 = *(float *)(param_1 + 0x14);
    if (uVar4 < 0x40) {
      fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = DAT_00309b54;
    }
    else {
      fVar14 = (float)VectorUnsignedToFloat(uVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = DAT_00309b58;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x24);
    uVar21 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = 0;
    fVar9 = DAT_00309b50 + fVar14 * fVar9;
    fVar15 = *(float *)(param_1 + 0x18);
    fVar20 = *(float *)(param_1 + 0x1c) + DAT_00309b50;
    fVar14 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x93),(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = *(float *)(param_1 + 0x28);
    local_50[0] = *(byte *)(param_1 + 0x94);
    local_50[1] = *(undefined1 *)(param_1 + 0x95);
    fVar14 = (fVar14 * DAT_00309b5c - DAT_00309b4c) + DAT_00309b50;
    do {
      pfVar7 = local_4c + uVar4;
      fVar17 = (float)VectorUnsignedToFloat((uint)local_50[uVar4],(byte)(in_fpscr >> 0x15) & 3);
      *pfVar7 = fVar2 + fVar17 * fVar3;
      fVar17 = (float)FUN_0030a024(param_1,uVar4 & 0xff);
      uVar4 = uVar4 + 1;
      *pfVar7 = fVar17 + *pfVar7;
    } while ((int)uVar4 < 2);
    *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x124) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x125) = *(undefined1 *)(param_1 + 0x2d);
    *(float *)(*(int *)(param_1 + 0x98) + 0xcc) = fVar19;
    *(float *)(*(int *)(param_1 + 0x98) + 0xd0) = fVar18 * fVar10;
    *(float *)(*(int *)(param_1 + 0x98) + 0xd4) = fVar13 + fVar12 * fVar11;
    *(float *)(*(int *)(param_1 + 0x98) + 0xdc) = fVar20;
    FUN_0030a018(uVar21,*(undefined4 *)(param_1 + 0x98),uVar1);
    *(float *)(*(int *)(param_1 + 0x98) + 0xe4) = fVar16 + fVar14;
    *(float *)(*(int *)(param_1 + 0x98) + 0xe8) = local_4c[0];
    *(float *)(*(int *)(param_1 + 0x98) + 0xec) = local_4c[1];
    *(float *)(*(int *)(param_1 + 0x98) + 0xd8) = fVar15 + fVar9;
    iVar5 = *(int *)(param_1 + 0x98);
    uVar21 = *(undefined4 *)(param_1 + 0x7c);
    uVar6 = *(undefined4 *)(param_1 + 0x80);
    uVar8 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar5 + 0xb0) = uVar21;
    *(undefined4 *)(iVar5 + 0xb4) = uVar6;
    *(undefined4 *)(iVar5 + 0xb8) = uVar8;
  }
  return;
}
