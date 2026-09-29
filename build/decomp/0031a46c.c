// OoT3D decomp @ 0031a46c  name=FUN_0031a46c  size=368

void FUN_0031a46c(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar3 = DAT_0031a5e4;
  piVar2 = DAT_0031a5dc;
  fVar9 = *(float *)(param_1 + 0xbc0);
  iVar5 = (int)*(short *)(*DAT_0031a5dc + 0x110);
  fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = DAT_0031a5e0 / fVar10;
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar9) << 0x1f | (uint)(fVar10 == fVar9) << 0x1e;
  uVar7 = uVar8 | (uint)(NAN(fVar10) || NAN(fVar9)) << 0x1c;
  bVar1 = (byte)(uVar8 >> 0x18);
  if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
    *(float *)(param_1 + 0x6c) = DAT_0031a5e4;
  }
  else {
    fVar10 = (float)VectorSignedToFloat(iVar5,(byte)(uVar7 >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat(iVar5,(byte)(uVar7 >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(DAT_0031a5e8 + *DAT_0031a5dc),
                                        (byte)(uVar7 >> 0x15) & 3);
    *(float *)(param_1 + 0x6c) =
         (DAT_0031a5e0 / fVar10 - fVar9) *
         ((DAT_0031a5f0 + fVar11 * DAT_0031a5ec) / (DAT_0031a5e0 / fVar12));
  }
  FUN_00376864(param_1);
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_0031a5f8,DAT_0031a5f4,DAT_0031a5f4,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0031ebe4(param_1,param_2);
  FUN_0032cd68(param_1,param_2);
  fVar10 = DAT_0031a600;
  fVar9 = DAT_0031a5fc;
  pfVar6 = (float *)(param_1 + 0xbc0);
  fVar11 = *pfVar6 + DAT_0031a5fc;
  *pfVar6 = fVar11;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(uVar7 >> 0x15) & 3);
  uVar8 = uVar7 & 0xfffffff | (uint)(fVar10 / fVar12 == fVar11) << 0x1e |
          (uint)(fVar11 <= fVar10 / fVar12) << 0x1d;
  bVar1 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar8 >> 0x15) & 3);
    FUN_00375c08(fVar9,fVar3,uVar4,fVar3,param_1 + 0x1a4,3,2);
    *(undefined4 *)(param_1 + 3000) = 0x11;
    *pfVar6 = fVar3;
    *(float *)(param_1 + 0x6c) = fVar3;
  }
  return;
}
