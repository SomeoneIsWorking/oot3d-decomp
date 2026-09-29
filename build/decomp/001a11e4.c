// OoT3D decomp @ 001a11e4  name=FUN_001a11e4  size=88

void FUN_001a11e4(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  if (*(short *)(param_1 + 0x28e) < (short)(ushort)*(byte *)(param_1 + 0x289)) {
    FUN_00374428(param_1);
    sVar2 = 0;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x28e) - (ushort)*(byte *)(param_1 + 0x289);
  }
  *(short *)(param_1 + 0x28e) = sVar2;
  fVar1 = DAT_001a1304;
  iVar3 = *DAT_001a12fc;
  iVar4 = (int)*(short *)(param_1 + 0x28e);
  iVar6 = (int)*(short *)(iVar3 + 0x110);
  fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  if (iVar4 < (int)(DAT_001a1300 / fVar8 + DAT_001a1304)) {
    fVar8 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fRam001a1308 / fVar8 + DAT_001a1304) < iVar4) {
      fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      if (iVar4 < 1) {
        fVar8 = fVar8 * fVar9 * fRam001a130c - DAT_001a1304;
      }
      else {
        fVar8 = DAT_001a1304 + fVar8 * fVar9 * fRam001a130c;
      }
      cVar5 = (char)(int)fVar8 * -8;
    }
    else {
      cVar5 = -1;
    }
    *(char *)(param_1 + 0x28a) = cVar5;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = (int)(fRam001a1310 / fVar8 + fVar1);
  bVar7 = iVar3 == iVar4;
  if (iVar4 <= iVar3) {
    bVar7 = *(char *)(param_1 + 0x28b) == '\0';
  }
  if (!bVar7) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28b) = 1;
  if (*DAT_00367514 == '\x01') {
    return;
  }
  FUN_0036ec40(3,DAT_00367518 + 5,0);
  return;
}
