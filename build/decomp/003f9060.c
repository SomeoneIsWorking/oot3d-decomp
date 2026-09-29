// OoT3D decomp @ 003f9060  name=FUN_003f9060  size=228

float FUN_003f9060(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar2 = DAT_003f9164;
  fVar9 = DAT_003f9160;
  iVar5 = DAT_003f9158;
  iVar1 = DAT_003f9144;
  iVar4 = *(int *)(DAT_003f9144 + 0x38) * 0xab;
  iVar6 = (int)((ulonglong)((longlong)DAT_003f9148 * (longlong)iVar4) >> 0x20);
  iVar4 = DAT_003f914c * ((iVar6 >> 0xd) - (iVar6 >> 0x1f)) + iVar4;
  *(int *)(DAT_003f9144 + 0x38) = iVar4;
  iVar6 = *(int *)(iVar1 + 0x3c) * 0xac;
  fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = (int)((ulonglong)((longlong)DAT_003f9150 * (longlong)iVar6) >> 0x20);
  iVar6 = DAT_003f9154 * ((iVar4 >> 0xd) - (iVar4 >> 0x1f)) + iVar6;
  *(int *)(iVar1 + 0x3c) = iVar6;
  fVar3 = DAT_003f9168;
  uVar7 = *(int *)(iVar1 + 0x40) * 0xaa;
  fVar10 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  iVar5 = (int)((longlong)(int)uVar7 * (longlong)iVar5 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar5 = ((iVar5 >> 0xe) - (iVar5 >> 0x1f)) * DAT_003f915c + uVar7;
  *(int *)(iVar1 + 0x40) = iVar5;
  fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  for (fVar9 = fVar8 * fVar9 + fVar10 * fVar2 + fVar11 * fVar3; 0x3f7fffff < (int)fVar9;
      fVar9 = fVar9 - DAT_003f916c) {
  }
  return ABS(fVar9);
}
