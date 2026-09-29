// OoT3D decomp @ 00370084  name=FUN_00370084  size=224

void FUN_00370084(short *param_1,short param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  sVar1 = *param_1;
  sVar2 = FUN_00368d94((int)(short)(param_2 - sVar1),param_3);
  iVar4 = (int)sVar2;
  iVar3 = (int)*(short *)(*DAT_00370164 + 0x110);
  if (param_4 < iVar4) {
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    if (param_4 < 1) {
      fVar5 = fVar5 * fVar6 * DAT_00370168 - DAT_0037016c;
    }
    else {
      fVar5 = DAT_0037016c + fVar5 * fVar6 * DAT_00370168;
    }
    sVar2 = (short)(int)fVar5;
  }
  else if (iVar4 < -param_4) {
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    if (param_4 < 1) {
      fVar5 = fVar5 * fVar6 * DAT_00370168 - DAT_0037016c;
    }
    else {
      fVar5 = DAT_0037016c + fVar5 * fVar6 * DAT_00370168;
    }
    sVar2 = -(short)(int)fVar5;
  }
  else {
    fVar5 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar4 < 1) {
      fVar5 = fVar5 * fVar6 * DAT_00370168 - DAT_0037016c;
    }
    else {
      fVar5 = DAT_0037016c + fVar5 * fVar6 * DAT_00370168;
    }
    sVar2 = (short)(int)fVar5;
  }
  *param_1 = sVar2 + sVar1;
  return;
}
