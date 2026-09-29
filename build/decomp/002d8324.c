// OoT3D decomp @ 002d8324  name=FUN_002d8324  size=216

void FUN_002d8324(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  iVar3 = *param_1;
  iVar1 = FUN_00368d94(param_2 - iVar3,param_3);
  iVar2 = (int)*(short *)(*DAT_002d83fc + 0x110);
  if (param_4 < iVar1) {
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    if (param_4 < 1) {
      fVar4 = fVar4 * fVar5 * DAT_002d8400 - DAT_002d8404;
    }
    else {
      fVar4 = DAT_002d8404 + fVar4 * fVar5 * DAT_002d8400;
    }
  }
  else {
    if (iVar1 < -param_4) {
      fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
      if (param_4 < 1) {
        fVar4 = fVar4 * fVar5 * DAT_002d8400 - DAT_002d8404;
      }
      else {
        fVar4 = DAT_002d8404 + fVar4 * fVar5 * DAT_002d8400;
      }
      iVar1 = -(int)fVar4;
      goto LAB_002d83c8;
    }
    fVar4 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar1 < 1) {
      fVar4 = fVar4 * fVar5 * DAT_002d8400 - DAT_002d8404;
    }
    else {
      fVar4 = DAT_002d8404 + fVar4 * fVar5 * DAT_002d8400;
    }
  }
  iVar1 = (int)fVar4;
LAB_002d83c8:
  *param_1 = iVar1 + iVar3;
  return;
}
