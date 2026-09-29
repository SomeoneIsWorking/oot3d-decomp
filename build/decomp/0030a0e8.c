// OoT3D decomp @ 0030a0e8  name=FUN_0030a0e8  size=720

void FUN_0030a0e8(int param_1)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float local_44 [2];

  bVar14 = *(char *)(param_1 + 5) != '\0';
  iVar6 = 0;
  if (bVar14) {
    iVar6 = *(int *)(param_1 + 0xc4);
  }
  if (bVar14 && iVar6 != 0) {
    if ((int)*(short *)(param_1 + 0x70) < (int)*(short *)(param_1 + 0x6e)) {
      bVar1 = *(byte *)(param_1 + 0x6c);
      iVar6 = FUN_00368d94(((uint)*(byte *)(param_1 + 0x6d) - (uint)bVar1) *
                           (int)*(short *)(param_1 + 0x70));
      uVar7 = iVar6 + (uint)bVar1 & 0xff;
    }
    else {
      uVar7 = (uint)*(byte *)(param_1 + 0x6d);
    }
    iVar11 = *(int *)(param_1 + 0xc0);
    fVar35 = *(float *)(param_1 + 8);
    iVar8 = (int)*(short *)(param_1 + 0x82);
    iVar6 = iVar8;
    if (*(short *)(param_1 + 0x80) <= iVar8) {
      iVar6 = (int)*(char *)(param_1 + 0x7f);
    }
    fVar26 = (float)VectorUnsignedToFloat
                              (uVar7 * (int)(short)(ushort)*(byte *)(iVar11 + 0x6c) *
                                       (int)(short)(ushort)*(byte *)(param_1 + 0x84),
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar26 = fVar26 * DAT_0030a3b8;
    fVar27 = *(float *)(iVar11 + 0xc);
    if (iVar8 < *(short *)(param_1 + 0x80)) {
      cVar2 = *(char *)(param_1 + 0x7e);
      cVar5 = FUN_00368d94(((int)*(char *)(param_1 + 0x7f) - (int)cVar2) * iVar6);
      iVar6 = (int)(char)(cVar5 + cVar2);
    }
    fVar37 = *(float *)(iVar11 + 0x14);
    fVar17 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar17 * DAT_0030a3bc;
    iVar8 = (int)*(short *)(param_1 + 0x76);
    iVar6 = iVar8;
    if (*(short *)(param_1 + 0x74) <= iVar8) {
      iVar6 = (int)*(char *)(param_1 + 0x73);
    }
    fVar28 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x86),(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = *(float *)(iVar11 + 0x10);
    fVar29 = *(float *)(param_1 + 0xc);
    if (iVar8 < *(short *)(param_1 + 0x74)) {
      cVar2 = *(char *)(param_1 + 0x72);
      cVar5 = FUN_00368d94(((int)*(char *)(param_1 + 0x73) - (int)cVar2) * iVar6);
      iVar6 = (int)(char)(cVar5 + cVar2);
    }
    fVar3 = DAT_0030a3c8;
    fVar22 = DAT_0030a3c0;
    fVar19 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = fVar19 * DAT_0030a3c0;
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 < DAT_0030a3c8) << 0x1f |
            (uint)(fVar19 == DAT_0030a3c8) << 0x1e;
    uVar15 = uVar7 | (uint)(NAN(fVar19) || NAN(DAT_0030a3c8)) << 0x1c;
    bVar1 = (byte)(uVar7 >> 0x18);
    fVar20 = DAT_0030a3c8;
    if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar15 >> 0x1c) & 1)) &&
       (uVar15 = in_fpscr & 0xfffffff | (uint)(DAT_0030a3c4 <= fVar19) << 0x1d, fVar20 = fVar19,
       !SUB41(uVar15 >> 0x1d,0))) {
      fVar20 = DAT_0030a3c4;
    }
    fVar19 = *(float *)(iVar11 + 0x58);
    fVar36 = *(float *)(param_1 + 0x10);
    iVar8 = (int)*(short *)(param_1 + 0x7c);
    fVar30 = *(float *)(param_1 + 0x18);
    iVar6 = iVar8;
    if (*(short *)(param_1 + 0x7a) <= iVar8) {
      iVar6 = (int)*(char *)(param_1 + 0x79);
    }
    if (iVar8 < *(short *)(param_1 + 0x7a)) {
      cVar2 = *(char *)(param_1 + 0x78);
      cVar5 = FUN_00368d94(((int)*(char *)(param_1 + 0x79) - (int)cVar2) * iVar6);
      iVar6 = (int)(char)(cVar5 + cVar2);
    }
    fVar4 = DAT_0030a3d4;
    fVar21 = (float)VectorSignedToFloat(iVar6,(byte)(uVar15 >> 0x15) & 3);
    fVar21 = fVar21 * fVar22;
    uVar7 = uVar15 & 0xfffffff | (uint)(fVar21 < DAT_0030a3d0) << 0x1f |
            (uint)(fVar21 == DAT_0030a3d0) << 0x1e;
    uVar16 = uVar7 | (uint)(NAN(fVar21) || NAN(DAT_0030a3d0)) << 0x1c;
    bVar1 = (byte)(uVar7 >> 0x18);
    fVar22 = DAT_0030a3d0;
    if (((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar16 >> 0x1c) & 1)) &&
       (uVar16 = uVar15 & 0xfffffff | (uint)(DAT_0030a3cc <= fVar21) << 0x1d, fVar22 = fVar21,
       !SUB41(uVar16 >> 0x1d,0))) {
      fVar22 = DAT_0030a3cc;
    }
    fVar21 = *(float *)(iVar11 + 0x18);
    cVar2 = *(char *)(iVar11 + 0x24);
    fVar31 = *(float *)(param_1 + 0x14);
    cVar5 = *(char *)(param_1 + 0x95);
    if (cVar2 != '\0') {
      cVar5 = cVar2;
    }
    uVar38 = *(undefined4 *)(param_1 + 0x9c);
    if (cVar2 != '\0') {
      uVar38 = *(undefined4 *)(iVar11 + 0x20);
    }
    fVar23 = *(float *)(iVar11 + 0x1c);
    fVar32 = *(float *)(param_1 + 0x98);
    fVar24 = *(float *)(iVar11 + 0x28);
    uVar7 = 0;
    fVar33 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x92),(byte)(uVar16 >> 0x15) & 3);
    fVar33 = fVar33 * DAT_0030a3d4;
    do {
      fVar25 = (float)FUN_0030a024(*(undefined4 *)(param_1 + 0xc0),uVar7 & 0xff);
      iVar6 = param_1 + uVar7;
      pfVar9 = local_44 + uVar7;
      uVar7 = uVar7 + 1;
      fVar34 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(iVar6 + 0x93),(byte)(uVar16 >> 0x15) & 3);
      *pfVar9 = fVar25 + fVar34 * fVar4;
    } while ((int)uVar7 < 2);
    for (iVar6 = *(int *)(param_1 + 0xc4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x138)) {
      *(float *)(iVar6 + 0xcc) = fVar27 * fVar26 * fVar35 * fVar26;
      *(float *)(iVar6 + 0xf0) = fVar17 * fVar28;
      *(float *)(iVar6 + 0xd0) = fVar18 * fVar29;
      *(float *)(iVar6 + 0xd4) = fVar37 + fVar30 * fVar20 * fVar19 + fVar36;
      *(float *)(iVar6 + 0xd8) = fVar22 + fVar21 + fVar31;
      *(float *)(iVar6 + 0xdc) = fVar23 + fVar32;
      FUN_0030a018(uVar38,iVar6,cVar5);
      *(float *)(iVar6 + 0xe4) = fVar24 + (fVar33 - fVar3);
      *(float *)(iVar6 + 0xe8) = local_44[0];
      *(float *)(iVar6 + 0xec) = local_44[1];
      uVar10 = *(undefined4 *)(param_1 + 0x58);
      uVar12 = *(undefined4 *)(param_1 + 0x5c);
      uVar13 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar6 + 0xb0) = uVar10;
      *(undefined4 *)(iVar6 + 0xb4) = uVar12;
      *(undefined4 *)(iVar6 + 0xb8) = uVar13;
      *(undefined1 *)(iVar6 + 0xc4) = *(undefined1 *)(param_1 + 100);
    }
  }
  return;
}
