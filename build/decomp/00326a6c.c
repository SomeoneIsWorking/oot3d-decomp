// OoT3D decomp @ 00326a6c  name=FUN_00326a6c  size=164

void FUN_00326a6c(float *param_1,float *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  float fVar3;

  iVar2 = DAT_00326b10;
  fVar3 = SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
  *param_2 = fVar3;
  if (iVar2 < (int)fVar3) {
    fVar3 = DAT_00326b14;
  }
  *param_2 = fVar3;
  fVar3 = (float)FUN_003696ec(-*param_1,param_1[1]);
  sVar1 = (short)(int)(fVar3 * DAT_00326b18);
  iVar2 = (int)sVar1;
  *param_3 = sVar1;
  if ((iVar2 != 0) &&
     ((*DAT_00326b1c * -0xb6 + 0x8000 < iVar2 || (iVar2 < *DAT_00326b1c * 0xb6 + -0x8000)))) {
    *param_3 = -0x8000;
  }
  return;
}
