// OoT3D decomp @ 0010e2ec  name=FUN_0010e2ec  size=376

void FUN_0010e2ec(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_0036b96c();
  piVar4 = DAT_0010e46c;
  fVar3 = DAT_0010e468;
  fVar8 = DAT_0010e464;
  iVar1 = *(short *)(param_1 + 0x1a8) * 2;
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0010e46c + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (iVar1 < 1) {
    fVar6 = fVar6 * fVar7 * DAT_0010e464 - DAT_0010e468;
  }
  else {
    fVar6 = DAT_0010e468 + fVar6 * fVar7 * DAT_0010e464;
  }
  *(short *)(param_1 + 0xbc) = (short)(int)fVar6 + *(short *)(param_1 + 0xbc);
  iVar1 = *(short *)(param_1 + 0x1a8) * 3;
  fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if (iVar1 < 1) {
    fVar6 = fVar6 * fVar7 * fVar8 - fVar3;
  }
  else {
    fVar6 = fVar3 + fVar6 * fVar7 * fVar8;
  }
  *(short *)(param_1 + 0xbe) = (short)(int)fVar6 + *(short *)(param_1 + 0xbe);
  fVar7 = *(float *)(param_1 + 100);
  fVar6 = *(float *)(param_1 + 0x74);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar6) << 0x1f | (uint)(fVar7 == fVar6) << 0x1e;
  bVar2 = (byte)(uVar5 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar7) || NAN(fVar6))) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(uVar5 >> 0x15) & 3);
    fVar7 = fVar7 + *(float *)(param_1 + 0x70) * fVar9 * fVar8;
    *(float *)(param_1 + 100) = fVar7;
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar6) << 0x1f | (uint)(fVar7 == fVar6) << 0x1e;
    bVar2 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar7) || NAN(fVar6))) {
      fVar6 = fVar7;
    }
    *(float *)(param_1 + 100) = fVar6;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),(byte)(uVar5 >> 0x15) & 3);
  if ((int)(DAT_0010e470 / fVar8 + fVar3) == (uint)*(ushort *)(DAT_0010e474 + param_2)) {
    *(undefined4 *)(param_1 + 0x28) = DAT_0010e478;
    *(undefined4 *)(param_1 + 0x2c) = DAT_0010e47c;
    *(undefined4 *)(param_1 + 0x30) = DAT_0010e480;
    *(undefined4 *)(param_1 + 0x60) = DAT_0010e484;
    *(undefined4 *)(param_1 + 100) = DAT_0010e488;
    *(undefined4 *)(param_1 + 0x68) = DAT_0010e48c;
    *(undefined4 *)(param_1 + 0x70) = DAT_0010e490;
    *(undefined4 *)(param_1 + 0x74) = DAT_0010e494;
  }
  return;
}
