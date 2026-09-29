// OoT3D decomp @ 001c7cf8  name=FUN_001c7cf8  size=168

undefined4 FUN_001c7cf8(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  if ((*(byte *)(param_1 + 0x1d5) & 2) == 0) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
  }
  else {
    *(byte *)(param_1 + 0x1d5) = *(byte *)(param_1 + 0x1d5) & 0xfd;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001c7da0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(undefined1 *)(param_1 + 3) = 0xff;
    }
    *(undefined2 *)(param_1 + 0x1c0) = 0x1e;
    FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c2));
  }
  iVar4 = FUN_0036adf4(param_1);
  fVar3 = DAT_00370628;
  fVar7 = *(float *)(param_1 + 0xc);
  if (iVar4 == 0) {
    pfVar5 = (float *)(param_1 + 0x2c);
    fVar9 = *pfVar5;
    if (DAT_001c7da4 == DAT_00370628) {
      if (fVar9 == fVar7) {
        return 1;
      }
    }
    else {
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar7) << 0x1f | (uint)(fVar9 == fVar7) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      fVar8 = DAT_001c7da4;
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(fVar7))) {
        fVar8 = -DAT_001c7da4;
      }
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037062c + 0x110),
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar8 = fVar10 * fVar8 * DAT_00370630;
      fVar9 = fVar9 + fVar8;
      *pfVar5 = fVar9;
      if (fVar3 <= (fVar9 - fVar7) * fVar8) {
        *pfVar5 = fVar7;
        return 1;
      }
    }
    return 0;
  }
  uVar6 = FUN_003705a0(fVar7 - DAT_001c7da8,param_1 + 0x2c);
  return uVar6;
}
