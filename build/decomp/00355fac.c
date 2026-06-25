// OoT3D decomp @ 00355fac  name=FUN_00355fac  size=96

void FUN_00355fac(int param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float *pfVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar1 = DAT_00356014;
  bVar3 = param_4 == 0.0;
  fVar4 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  pfVar2 = (float *)(DAT_00356010 + param_1 * 0x50 + param_2 * 0x10);
  if (bVar3) {
    param_4 = 1.401298e-45;
  }
  fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0035600c * fVar4 * DAT_0035600c;
  if (bVar3) {
    *pfVar2 = fVar4;
  }
  pfVar2[1] = fVar4;
  pfVar2[2] = (fVar4 - *pfVar2) / fVar5;
  pfVar2[3] = param_4;
  *(undefined *)(iVar1 + param_1) = 1;
  return;
}

