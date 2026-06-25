// OoT3D decomp @ 002eb304  name=FUN_002eb304  size=172

void FUN_002eb304(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar2 = DAT_002eb3d0;
  iVar3 = DAT_002eb3cc;
  fVar5 = DAT_002eb3c8;
  fVar1 = DAT_002eb3c4;
  if (param_1 != 0xb) {
    if (param_1 == 0x11) {
      *param_2 = DAT_002eb3b8;
      fVar5 = DAT_002eb3bc;
    }
    else if (param_1 == 5) {
      *param_2 = DAT_002eb3c0;
      fVar5 = fVar1;
    }
    else if (param_1 == 0x17) {
      *param_2 = DAT_002eb3c0;
    }
    else {
      iVar4 = (int)((ulonglong)((longlong)DAT_002eb3cc * (longlong)param_1) >> 0x20);
      fVar5 = (float)VectorSignedToFloat(param_1 + (iVar4 - (iVar4 >> 0x1f)) * -6,
                                         (byte)(in_fpscr >> 0x15) & 3);
      *param_2 = DAT_002eb3d4 + fVar5 * DAT_002eb3d0;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)param_1) >> 0x20);
      fVar5 = (float)VectorSignedToFloat(iVar3 - (iVar3 >> 0x1f),(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar1 + fVar5 * fVar2;
    }
    *param_3 = fVar5;
    return;
  }
  *param_2 = DAT_002eb3b0;
  *param_3 = DAT_002eb3b4;
  return;
}

