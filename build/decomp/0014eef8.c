// OoT3D decomp @ 0014eef8  name=FUN_0014eef8  size=136

void FUN_0014eef8(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float fVar5;

  uVar1 = DAT_0014ef80;
  iVar4 = FUN_004896d4(DAT_0014ef80);
  fVar3 = DAT_0014ef88;
  pfVar2 = DAT_0014ef84;
  if (iVar4 == 0) {
    *DAT_0014ef84 = param_1;
  }
  else {
    fVar5 = *DAT_0014ef84;
    if (fVar5 != param_1) {
      DAT_0014ef84[1] = param_1;
      pfVar2[2] = (param_1 - fVar5) * fVar3;
      pfVar2[3] = 5.60519e-44;
    }
  }
  FUN_0037547c(uVar1,param_2,4,DAT_0014ef84,DAT_0014ef90,DAT_0014ef8c);
  return;
}
