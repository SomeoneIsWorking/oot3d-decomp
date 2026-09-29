// OoT3D decomp @ 00340218  name=FUN_00340218  size=208

void FUN_00340218(float param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;

  pfVar5 = (float *)(DAT_003402e8 + param_2 * 0xc);
  pfVar4 = (float *)(DAT_003402e8 + 0x60 + param_2 * 0xc);
  if (param_2 != 0) {
    FUN_0036df4c(DAT_003402ec,pfVar5 + -3);
    FUN_0036df4c(DAT_003402f0,pfVar4 + -3);
  }
  pfVar1 = DAT_003402ec;
  pfVar2 = DAT_003402ec + 3;
  pfVar3 = DAT_003402ec + 9;
  DAT_003402ec[6] = (*pfVar5 - *DAT_003402ec) * param_1;
  pfVar1[7] = (pfVar5[1] - pfVar1[1]) * param_1;
  pfVar1[8] = (pfVar5[2] - pfVar1[2]) * param_1;
  *pfVar3 = (*pfVar4 - *pfVar2) * param_1;
  pfVar1[10] = (pfVar4[1] - pfVar1[4]) * param_1;
  pfVar1[0xb] = (pfVar4[2] - pfVar1[5]) * param_1;
  return;
}
