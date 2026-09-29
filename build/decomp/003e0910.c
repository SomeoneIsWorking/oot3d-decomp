// OoT3D decomp @ 003e0910  name=FUN_003e0910  size=656

void FUN_003e0910(int param_1,int param_2)

{
  byte bVar1;
  float *pfVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  pfVar2 = pfRam003e0bac;
  fVar11 = fRam003e0ba8;
  fVar10 = fRam003e0ba4;
  fVar12 = *(float *)(param_1 + 0x1a8);
  iVar7 = *(int *)(iRam003e0ba0 + param_2);
  uVar6 = in_fpscr & 0xfffffff;
  uVar8 = uVar6 | (uint)(fVar12 == fRam003e0ba4) << 0x1e;
  if (SUB41(uVar8 >> 0x1e,0)) {
    sVar4 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x1c2) == 0) {
      fVar9 = *pfRam003e0bac;
      uVar8 = uVar6 | (uint)(fVar9 == fRam003e0ba4) << 0x1e;
      if (SUB41(uVar8 >> 0x1e,0)) {
        uVar6 = uVar6 | (uint)(fVar12 < fRam003e0ba4) << 0x1f |
                (uint)(fVar12 == fRam003e0ba4) << 0x1e;
        uVar8 = uVar6 | (uint)(NAN(fVar12) || NAN(fRam003e0ba4)) << 0x1c;
        bVar1 = (byte)(uVar6 >> 0x18);
        if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
          fVar9 = fVar9 - fRam003e0bb0;
        }
        else {
          fVar9 = fVar9 + fRam003e0bb0;
        }
        *pfRam003e0bac = fVar9;
      }
      fVar12 = *(float *)(param_1 + 0x6c) + fRam003e0bb4;
      *(float *)(param_1 + 0x6c) = fVar12;
      if (0x40000000 < (int)fVar12) {
        fVar12 = fVar11;
      }
      *(float *)(param_1 + 0x6c) = fVar12;
      fVar12 = *pfVar2;
      uVar6 = uVar8 & 0xfffffff | (uint)(fVar12 < fVar10) << 0x1f | (uint)(fVar12 == fVar10) << 0x1e
      ;
      uVar8 = uVar6 | (uint)(NAN(fVar12) || NAN(fVar10)) << 0x1c;
      bVar1 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar8 >> 0x1c) & 1)) {
        iVar5 = FUN_003705a0(uRam003e0bbc,pfRam003e0bac);
      }
      else {
        iVar5 = FUN_003705a0(uRam003e0bb8,pfRam003e0bac);
      }
      fVar12 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1b0));
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + *pfVar2 * fVar12;
      fVar12 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1b0));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + *pfVar2 * fVar12;
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
        *(float *)(param_1 + 0x1a8) = fVar10;
        *pfVar2 = fVar10;
        *(float *)(param_1 + 0x6c) = fVar10;
        *(undefined2 *)(param_1 + 0x1c2) = 5;
      }
      FUN_00373264(param_1,uRam003e0bc0);
      goto LAB_003e0a8c;
    }
    *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
    *(float *)(param_1 + 0x1a8) = fVar10;
    if (*(short *)(param_1 + 0x1c2) == 0) goto LAB_003e0a8c;
    sVar4 = *(short *)(param_1 + 0x1c2) + -1;
  }
  *(short *)(param_1 + 0x1c2) = sVar4;
LAB_003e0a8c:
  puVar3 = puRam003e0bc4;
  fVar12 = *(float *)(param_1 + 0x30) - (float)puRam003e0bc4[2];
  if ((int)fVar12 < 0x3f000000) {
    FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1c));
    FUN_0036df4c(param_1 + 8,puVar3);
    *(undefined4 *)(param_1 + 0x28) = *puVar3;
    *(undefined4 *)(param_1 + 0x30) = puVar3[2];
    *(float *)(param_1 + 0x6c) = fVar10;
    *pfVar2 = fVar10;
    *(uint *)(iVar7 + 0x1714) = *(uint *)(iVar7 + 0x1714) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x1bc) = uRam003e0bc8;
  }
  fVar9 = fRam003e0bd0;
  uVar6 = *(uint *)(iRam003e0bcc + param_2) & 0xff;
  if ((*(uint *)(iRam003e0bcc + param_2) & 0x100) == 0) {
    if (uVar6 < 0x80) {
      fVar10 = (float)VectorSignedToFloat(uVar6,(byte)(uVar8 >> 0x15) & 3);
      fVar10 = (float)FUN_003727f0(fVar10 * fRam003e0bd4 * fVar11 * fRam003e0bd8);
      *(float *)(param_1 + 0x1c4) = fVar10 * fVar9;
    }
    else if (uVar6 < 0xe6) {
      *(float *)(param_1 + 0x1c4) = fRam003e0bd0;
    }
    else {
      fVar11 = *(float *)(param_1 + 0x1c4) - fRam003e0bdc;
      *(float *)(param_1 + 0x1c4) = fVar11;
      if (fVar11 < fVar10) {
        fVar11 = fVar10;
      }
      *(float *)(param_1 + 0x1c4) = fVar11;
    }
  }
  else {
    *(float *)(param_1 + 0x1c4) = fVar10;
  }
  if ((int)fVar12 < iRam003e0be0) {
    iVar7 = *(int *)(param_1 + 0x1c4);
    if (iRam003e0be0 + -0x2040000 < *(int *)(param_1 + 0x1c4)) {
      iVar7 = iRam003e0be4;
    }
    *(int *)(param_1 + 0x1c4) = iVar7;
  }
  return;
}
