// OoT3D decomp @ 002c2e4c  name=FUN_002c2e4c  size=312

float FUN_002c2e4c(float param_1,byte *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;

  fVar3 = DAT_002c2f8c;
  fVar1 = DAT_002c2f88;
  fVar4 = DAT_002c2f88;
  if ((param_1 <= DAT_002c2f88) && (fVar4 = param_1, param_1 < DAT_002c2f84)) {
    fVar4 = DAT_002c2f84;
  }
  fVar4 = (fVar4 + DAT_002c2f88) * DAT_002c2f8c;
  if (((*DAT_002c2f90 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002c2f90), iVar2 != 0)) {
    FUN_0030c5b8(DAT_002c2f94);
  }
  iVar2 = DAT_002c2fa0;
  if (*(char *)(DAT_002c2f94 + 1) == '\x02') {
    iVar2 = DAT_002c2fa4;
  }
  iVar2 = *(int *)(iVar2 + (uint)*param_2 * 4);
  fVar3 = *(float *)(iVar2 + (int)(fVar3 + fVar4 * DAT_002c2fac) * 4);
  if (param_2[1] != 0) {
    fVar3 = fVar3 / *(float *)(iVar2 + 0x200);
  }
  if (param_2[2] == 0) {
    if (DAT_002c2fb0 < fVar3) {
      return DAT_002c2fb0;
    }
  }
  else if (fVar1 < fVar3) {
    return fVar1;
  }
  if (DAT_002c2fa8 <= fVar3) {
    return fVar3;
  }
  return DAT_002c2fa8;
}
