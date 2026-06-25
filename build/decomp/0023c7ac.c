// OoT3D decomp @ 0023c7ac  name=FUN_0023c7ac  size=848

undefined4 FUN_0023c7ac(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = fRam0023caf4;
  uVar4 = *(uint *)(param_1 + 0x1710);
  if (((uVar4 & 0x800) != 0) || (uVar6 = (uint)*(byte *)(param_1 + 0x2278), uVar6 < 2)) {
LAB_0023ca74:
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x2278) == '\x01') {
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piRam0023caf0 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(fRam0023cb38 / fVar14 + fRam0023caf4) < (int)(uint)*(byte *)(param_1 + 0x2279)) {
        FUN_0034b3dc(fRam0023cb40 + *(float *)(param_1 + 0x2270) * fRam0023cb3c,param_1,0x95,param_2
                     ,uRam0023cb44);
        *(undefined4 *)(param_1 + 0x221c) = uRam0023cb48;
        return 1;
      }
      return 0;
    }
    return 0;
  }
  if ((uVar4 & 0x8000000) != 0) {
    uVar6 = *(uint *)(param_1 + 0x170c);
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(*(float *)(uVar6 + 0x14) <= *(float *)(param_1 + 0x2270)) << 0x1d;
    if (SUB41(in_fpscr >> 0x1d,0)) goto LAB_0023ca74;
  }
  bVar8 = (uVar4 & 0x8000000) == 0;
  if (!bVar8) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1a7);
  }
  if (bVar8 || uVar6 == 1) {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      return 0;
    }
    fVar10 = *(float *)(*(int *)(param_1 + 0x170c) + 0x14);
    uVar6 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2270) < fVar10) << 0x1f;
    uVar9 = uVar6 | (uint)(NAN(*(float *)(param_1 + 0x2270)) || NAN(fVar10)) << 0x1c;
    if (((byte)(uVar6 >> 0x1f) == ((byte)(uVar9 >> 0x1c) & 1)) && ((uVar4 & 0x8000000) != 0)) {
      return 0;
    }
  }
  else {
    if (iRam0023caf8 <= *(int *)(param_1 + 0x88)) {
      return 0;
    }
    fVar10 = *(float *)(param_1 + 0x2270);
    fVar11 = *(float *)(*(int *)(param_1 + 0x170c) + 0x10);
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar11) << 0x1f |
            (uint)(fVar10 == fVar11) << 0x1e;
    uVar9 = uVar4 | (uint)(NAN(fVar10) || NAN(fVar11)) << 0x1c;
    bVar1 = (byte)(uVar4 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
      return 0;
    }
  }
  uVar4 = *puRam0023cafc;
  if ((*(char *)(param_1 + 0x80) == '2') || ((*(uint *)(iRam0023cb00 + 0x34) & 0x40) == 0)) {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piRam0023caf0 + 0x110),
                                        (byte)(uVar9 >> 0x15) & 3);
    if ((int)(fRam0023cb04 / fVar10 + fRam0023caf4) < (int)(uint)*(byte *)(param_1 + 0x2279))
    goto LAB_0023c908;
    uVar6 = *(uint *)(*(int *)(param_1 + 0x29c8) + 4);
  }
  else {
    if (*(byte *)(param_1 + 0x2279) < 0xd) {
      return 0;
    }
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 4;
    uVar6 = *(uint *)(*(int *)(param_1 + 0x29c8) + 4);
  }
  if ((uVar4 & uVar6) == 0) {
    return 0;
  }
LAB_0023c908:
  FUN_0036055c(param_2,param_1,uRam0023cb08,0);
  uVar6 = *(uint *)(param_1 + 0x1710) | 0x40000;
  *(uint *)(param_1 + 0x1710) = uVar6;
  iVar5 = *(int *)(param_1 + 0x170c);
  fVar10 = *(float *)(param_1 + 0x2270);
  uVar4 = uVar9 & 0xfffffff | (uint)(*(float *)(iVar5 + 0x14) == fVar10) << 0x1e |
          (uint)(fVar10 <= *(float *)(iVar5 + 0x14)) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  bVar8 = (bool)(bVar1 >> 6);
  bVar7 = (bool)(bVar1 >> 5 & 1);
  if (!bVar7 || bVar8) {
    uVar6 = 0xe6;
    fVar10 = fRam0023cb0c;
  }
  if (!bVar7 || bVar8) {
    *(float *)(param_1 + 0x221c) = fVar10;
  }
  else {
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x78) + 10),
                                        (byte)(uVar4 >> 0x15) & 3);
    fVar12 = fVar12 * fRam0023cb10;
    bVar8 = (uVar6 & 0x8000000) == 0;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x78) + 0xe),
                                        (byte)(uVar4 >> 0x15) & 3);
    fVar13 = fVar13 * fRam0023cb10;
    *(uint *)(param_1 + 0x1710) = uVar6 | 0x4000;
    fVar11 = fRam0023cb14;
    uVar4 = uVar6;
    if (!bVar8) {
      uVar4 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    fVar14 = *(float *)(param_1 + 0x2274) + fVar14;
    if (bVar8 || uVar4 == 1) {
      if (fVar10 < *(float *)(iVar5 + 0x18)) {
        uVar6 = 0xe8;
        fVar15 = fRam0023cb18;
      }
      else {
        uVar6 = 0xe7;
        fVar15 = fRam0023cb1c;
      }
      fVar15 = *(float *)(iVar5 + 8) * fVar15;
    }
    else {
      fVar15 = *(float *)(iVar5 + 8);
      uVar4 = uVar6 & 0xf7ffffff;
      uVar6 = 0x3a;
      *(uint *)(param_1 + 0x1710) = uVar4 | 0x4000;
      fVar15 = fVar15 * fVar11;
    }
    iVar5 = iRam0023cb2c;
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - (fVar10 - fVar15) * fRam0023cb20;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - fVar14 * fVar12;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar10;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - fVar14 * fVar13;
    uVar2 = uRam0023cb24;
    *(undefined4 *)(param_1 + 0x6c) = uRam0023cb24;
    *(undefined4 *)(param_1 + 0x221c) = uVar2;
    uVar2 = uRam0023cb28;
    *(undefined *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = uVar2;
    *(undefined *)(iVar5 + 0xd4) = 0;
  }
  uVar2 = uRam0023cb30;
  *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) | 1;
  FUN_00358dfc(uVar2,param_1 + 0x254,param_2,uVar6);
  FUN_00330ed8(param_2);
  sVar3 = *(short *)(param_1 + 0x82) + -0x8000;
  *(short *)(iRam0023cb34 + param_1) = sVar3;
  *(short *)(param_1 + 0xbe) = sVar3;
  return 1;
}

