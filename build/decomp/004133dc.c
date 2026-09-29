// OoT3D decomp @ 004133dc  name=FUN_004133dc  size=84

void FUN_004133dc(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;

  fVar4 = DAT_0041343c;
  pfVar2 = DAT_00413438;
  pfVar1 = DAT_00413430;
  fVar3 = *DAT_00413430 * DAT_00413434;
  *DAT_00413438 = fVar3;
  fVar4 = *pfVar1 * fVar4;
  pfVar2[1] = fVar4;
  pfVar2[3] = fVar4;
  pfVar2[4] = fVar4;
  pfVar2[6] = fVar3;
  pfVar2[9] = fVar4;
  pfVar2[0xc] = fVar3;
  pfVar2[0xf] = fVar4;
  pfVar2[0x12] = fVar3;
  pfVar2[0x13] = fVar3;
  pfVar2[0x15] = fVar4;
  pfVar2[0x16] = fVar3;
  return;
}
