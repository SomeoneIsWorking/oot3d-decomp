// OoT3D decomp @ 00460474  name=FUN_00460474  size=152

void FUN_00460474(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;

  piVar1 = DAT_00460518;
  if (param_1 == 3) {
    iVar3 = 10;
  }
  else {
    fVar7 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)(DAT_00460514 + fVar7 * DAT_0046050c * DAT_00460510);
  }
  iVar2 = DAT_00460518[1];
  iVar4 = DAT_00460518[2];
  iVar5 = *DAT_00460518;
  if (iVar4 < iVar2) {
    iVar3 = iVar3 + iVar4;
    if (iVar5 != 1) {
      *DAT_00460518 = 1;
    }
    if (iVar2 <= iVar3) {
LAB_004604dc:
      piVar1[2] = iVar2;
      return;
    }
  }
  else {
    if (iVar4 <= iVar2) {
      *DAT_00460518 = 0;
      return;
    }
    bVar6 = iVar5 != 2;
    if (bVar6) {
      iVar5 = 2;
    }
    iVar3 = iVar4 - iVar3;
    if (bVar6) {
      *DAT_00460518 = iVar5;
    }
    if (iVar3 <= iVar2) goto LAB_004604dc;
  }
  piVar1[2] = iVar3;
  return;
}
