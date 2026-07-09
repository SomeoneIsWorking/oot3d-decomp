// OoT3D decomp @ 002de22c  name=FUN_002de22c  size=1096

void FUN_002de22c(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  ushort *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  uint uVar17;
  bool bVar18;
  uint in_fpscr;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  bVar14 = 0xff;
  bVar15 = 0xff;
  uVar16 = 0;
  uVar7 = FUN_003695f8();
  fVar6 = fRam002de570;
  fVar21 = fRam002de56c;
  iVar5 = iRam002de568;
  uVar17 = uRam002de564;
  iVar13 = iRam002de560;
  fVar20 = fRam002de55c;
  puVar4 = puRam002de558;
  bVar18 = uVar7 == 0;
  if (bVar18) {
    uVar7 = (uint)*(byte *)(param_2 + 0x1b);
  }
  if ((bVar18 && uVar7 == 0) || (param_5 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  puRam002de558[3] = 0;
  if (param_1 == 5) {
    *(undefined1 *)(param_2 + 0x18) = 3;
    uVar12 = (uint)*(ushort *)(iVar13 + 0xa8);
    uVar7 = 0;
    do {
      puVar10 = (ushort *)(iVar5 + 0xd8 + uVar7 * 8);
      if ((*puVar10 <= uVar12) && ((uVar12 < puVar10[1] || (puVar10[1] == uVar17)))) {
        bVar15 = (byte)puVar10[3];
        bVar14 = *(byte *)(iVar5 + 0xd8 + uVar7 * 8 + 5);
        if ((char)puVar10[2] == '\0') {
          *(undefined1 *)(param_2 + 0x13) = 0;
        }
        else {
          fVar22 = (float)VectorSignedToFloat((uint)puVar10[1] - (uint)*puVar10,
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar7 = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar20) << 0x1e;
          if (!SUB41(uVar7 >> 0x1e,0)) {
            fVar20 = (float)VectorSignedToFloat(puVar10[1] - uVar12,(byte)(uVar7 >> 0x15) & 3);
            fVar20 = fVar21 - fVar20 / fVar22;
            if ((int)fVar20 < 0x3f800000) {
              fVar21 = fVar20;
            }
          }
          uVar19 = VectorFloatToUnsigned(fVar21 * fVar6,3);
          *(char *)(param_2 + 0x13) = (char)uVar19;
        }
        break;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 9);
    FUN_002d5468(param_3 + 4,bVar14,bVar15,*(undefined1 *)(param_2 + 0x13),uVar8);
    bVar9 = bVar14;
    if (0xb < bVar14) {
      bVar9 = (bVar14 & 3) + 4;
    }
    bVar11 = bVar15;
    if (0xb < bVar15) {
      bVar11 = (bVar15 & 3) + 4;
    }
    FUN_002d50e8(param_2 + 0xec,bVar9,bVar11,*(undefined1 *)(param_2 + 0x13),uVar8);
    *(byte *)(param_2 + 0x1e0) = bVar14;
    *(byte *)(param_2 + 0x1e1) = bVar15;
    goto code_r0x002de684;
  }
  if (*(char *)(param_2 + 0x15) != '\0') goto code_r0x002de684;
  uVar12 = (uint)*(ushort *)(iVar13 + 0xa8);
  iVar13 = iVar5 + (uint)*(byte *)(param_2 + 0x18) * 0x48;
  uVar7 = 0;
  do {
    puVar10 = (ushort *)(iVar13 + uVar7 * 8);
    if ((*puVar10 <= uVar12) && ((uVar12 < puVar10[1] || (puVar10[1] == uVar17)))) {
      bVar15 = (byte)puVar10[3];
      bVar14 = *(byte *)(iVar13 + uVar7 * 8 + 5);
      uVar3 = puVar10[2];
      puVar4[3] = (char)uVar3;
      uVar17 = (uint)puVar10[1];
      fVar22 = (float)VectorSignedToFloat(uVar17 - *puVar10,(byte)(in_fpscr >> 0x15) & 3);
      if ((char)uVar3 == '\0') {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar20) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar20 = (float)VectorSignedToFloat(uVar17 - uVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar20 = fVar21 - fVar20 / fVar22;
          if ((int)fVar20 < 0x3f800000) {
            fVar21 = fVar20;
          }
        }
        uVar17 = VectorFloatToUnsigned(fVar21 * fVar6,3);
        bVar9 = *(byte *)(param_2 + 0x1a);
        uVar16 = 0;
        if ((uVar17 & 0xff) < 0x80) {
          uVar16 = 0xff;
        }
        if (bVar9 != 0 && bVar9 < 3) {
          uVar16 = 0;
          *(byte *)(param_2 + 0x1a) = bVar9 + 1;
        }
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar22 == fVar20) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar20 = (float)VectorSignedToFloat(uVar17 - uVar12,(byte)(in_fpscr >> 0x15) & 3);
          fVar20 = fVar21 - fVar20 / fVar22;
          if ((int)fVar20 < 0x3f800000) {
            fVar21 = fVar20;
          }
        }
        uVar19 = VectorFloatToUnsigned(fVar21 * fVar6,3);
        uVar16 = (undefined1)uVar19;
      }
      break;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 9);
  cVar1 = *(char *)(param_2 + 0xcd);
  if (cVar1 == '\0') {
code_r0x002de5b8:
    if (2 < *(byte *)(param_2 + 0x1a)) {
      bVar14 = *(byte *)(iVar13 + uVar7 * 8 + 5);
      bVar15 = *(byte *)(iVar5 + (uint)*(byte *)(param_2 + 0x19) * 0x48 + uVar7 * 8 + 6);
      uVar7 = *(ushort *)(param_2 + 0x1c) - 1;
      fVar21 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(param_2 + 0x26),(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(param_2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_2 + 0x1c) = (short)(uVar7 * 0x10000 >> 0x10);
      if ((uVar7 & 0xffff) == 0) {
        *(undefined1 *)(param_2 + 0x1a) = 0;
        *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x19);
      }
      fVar22 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(param_2 + 0x26),(byte)(in_fpscr >> 0x15) & 3);
      uVar19 = VectorFloatToUnsigned(((fVar21 - fVar20) / fVar22) * fVar6,3);
      uVar16 = (undefined1)uVar19;
    }
  }
  else {
    cVar2 = *(char *)(param_2 + 0xce);
    if (cVar2 == '\0') {
      bVar18 = cVar1 != '\x01';
      if (!bVar18) {
        cVar1 = puVar4[3];
      }
      if (bVar18 || cVar1 != '\0') goto code_r0x002de5b8;
      *(undefined1 *)(param_2 + 0x1a) = 1;
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x19) = 1;
      *(undefined2 *)(param_2 + 0x1c) = 100;
      *(undefined1 *)(param_2 + 0x23) = 1;
      *(undefined1 *)(param_2 + 0x21) = 0;
      *(undefined1 *)(param_2 + 0x22) = 2;
      puVar4[1] = 2;
      *(undefined2 *)(param_2 + 0x26) = 100;
      *(undefined2 *)(param_2 + 0x24) = 100;
      *(undefined1 *)(param_2 + 0xce) = 1;
    }
    else {
      bVar18 = cVar2 != '\x01';
      if (!bVar18) {
        cVar2 = puVar4[3];
      }
      if ((bVar18 || cVar2 != '\0') || cVar1 != '\x02') goto code_r0x002de5b8;
      *puVar4 = 0;
      *(undefined1 *)(param_2 + 0x1a) = 1;
      *(undefined1 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(param_2 + 0x19) = 0;
      *(undefined2 *)(param_2 + 0x1c) = 100;
      *(undefined1 *)(param_2 + 0x23) = 1;
      *(undefined1 *)(param_2 + 0x21) = 2;
      *(undefined1 *)(param_2 + 0x22) = 0;
      puVar4[1] = 0;
      *(undefined2 *)(param_2 + 0x26) = 100;
      *(undefined2 *)(param_2 + 0x24) = 100;
      *(undefined1 *)(param_2 + 0xde) = 0;
      *(undefined1 *)(param_2 + 0xcd) = 0;
      *(undefined1 *)(param_2 + 0xce) = 0;
    }
  }
  *(undefined1 *)(param_2 + 0x13) = uVar16;
  FUN_002d5468(param_3 + 4,bVar14,bVar15,*(undefined1 *)(param_2 + 0x13),uVar8);
  bVar9 = bVar14;
  if (0xb < bVar14) {
    bVar9 = (bVar14 & 3) + 4;
  }
  bVar11 = bVar15;
  if (0xb < bVar15) {
    bVar11 = (bVar15 & 3) + 4;
  }
  FUN_002d50e8(param_2 + 0xec,bVar9,bVar11,*(undefined1 *)(param_2 + 0x13),uVar8);
code_r0x002de684:
  *(byte *)(param_2 + 0x1e0) = bVar14;
  *(byte *)(param_2 + 0x1e1) = bVar15;
  return;
}

