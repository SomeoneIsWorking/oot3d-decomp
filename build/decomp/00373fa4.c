// OoT3D decomp @ 00373fa4  name=FUN_00373fa4  size=324

uint FUN_00373fa4(float *param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;

  fVar4 = param_1[1];
  fVar3 = DAT_003740e8;
  if (DAT_003740ec <= (int)fVar4) {
    fVar3 = DAT_003740f0;
  }
  if (param_2 != 0xffffffff) {
    pfVar1 = (float *)(DAT_003740f8 + param_2 * 0xc);
    if ((pfVar1[1] - DAT_003740f4 <= fVar4) && (fVar4 <= pfVar1[1] + DAT_003740f4)) {
      if ((*pfVar1 - fVar3 <= *param_1) && (*param_1 <= *pfVar1 + fVar3)) {
        if ((pfVar1[2] - fVar3 <= param_1[2]) && (param_1[2] <= pfVar1[2] + fVar3)) {
          return param_2;
        }
      }
    }
  }
  uVar2 = 0x17;
  do {
    pfVar1 = (float *)(DAT_003740f8 + uVar2 * 0xc);
    if ((pfVar1[1] - DAT_003740f4 <= fVar4) && (fVar4 <= pfVar1[1] + DAT_003740f4)) {
      if ((*pfVar1 - fVar3 <= *param_1) && (*param_1 <= *pfVar1 + fVar3)) {
        if ((pfVar1[2] - fVar3 <= param_1[2]) && (param_1[2] <= pfVar1[2] + fVar3)) {
          return uVar2;
        }
      }
    }
    uVar2 = (uint)(short)((short)uVar2 + -1);
    if (0x7fffffff < uVar2) {
      return uVar2;
    }
  } while( true );
}
