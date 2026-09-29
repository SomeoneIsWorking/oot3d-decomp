// OoT3D decomp @ 002cddd4  name=FUN_002cddd4  size=172

float FUN_002cddd4(float *param_1)

{
  uint uVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  float fVar4;

  uVar1 = in_fpscr & 0xfffffff | (uint)(*param_1 == DAT_002cde80) << 0x1e;
  fVar4 = DAT_002cde80;
  if ((!SUB41(uVar1 >> 0x1e,0)) && ((uint)param_1[2] <= (uint)param_1[4])) {
    iVar2 = (int)(param_1[5] * DAT_002cde84);
    if (iVar2 < 0x20) {
      iVar2 = (int)*(char *)(DAT_002cde88 + iVar2);
    }
    else if (iVar2 < 0x40) {
      iVar2 = (int)*(char *)(DAT_002cde88 + (0x40 - iVar2));
    }
    else if (iVar2 < 0x60) {
      iVar2 = (int)-*(char *)(iVar2 + DAT_002cde88 + -0x40);
    }
    else {
      iVar2 = (int)-*(char *)(DAT_002cde88 + (0x80 - iVar2));
    }
    fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(uVar1 >> 0x15) & 3);
    fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 3),(byte)(uVar1 >> 0x15) & 3);
    fVar4 = fVar4 * *param_1 * fVar3 * DAT_002cde8c;
  }
  return fVar4;
}
