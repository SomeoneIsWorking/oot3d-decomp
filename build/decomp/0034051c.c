// OoT3D decomp @ 0034051c  name=FUN_0034051c  size=140

void FUN_0034051c(undefined4 param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;

  if (((*DAT_003405cc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_003405cc), iVar1 != 0)) {
    FUN_0036788c(DAT_003405d0);
  }
  switch(*(undefined4 *)(DAT_003405dc + 0xf3c)) {
  case 0:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
    *(short *)(DAT_003405e0 + 0x96) = (short)param_1;
    return;
  case 1:
  case 2:
  case 5:
    fVar2 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = VectorFloatToUnsigned(DAT_003405e8 + fVar2 * fVar2 * DAT_003405e4,3);
    *(short *)(DAT_003405e0 + 0x96) = (short)uVar3;
    return;
  default:
    return;
  }
}
