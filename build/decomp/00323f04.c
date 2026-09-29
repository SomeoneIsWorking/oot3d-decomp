// OoT3D decomp @ 00323f04  name=FUN_00323f04  size=152

void FUN_00323f04(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;

  uVar1 = DAT_00323fa4;
  if (param_1 <= DAT_00323f9c) {
    param_1 = DAT_00323fa0;
  }
  iVar4 = FUN_004896d4(DAT_00323fa4);
  fVar3 = DAT_00323fac;
  pfVar2 = DAT_00323fa8;
  if (iVar4 == 0) {
    *DAT_00323fa8 = param_1;
  }
  else {
    fVar5 = *DAT_00323fa8;
    if (fVar5 != param_1) {
      DAT_00323fa8[1] = param_1;
      pfVar2[2] = (param_1 - fVar5) * fVar3;
      pfVar2[3] = 5.60519e-44;
    }
  }
  FUN_0037547c(uVar1,param_2,4,DAT_00323fa8,DAT_00323fa8,DAT_00323fb0);
  return;
}
