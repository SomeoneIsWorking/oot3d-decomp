// OoT3D decomp @ 0035e6a0  name=FUN_0035e6a0  size=60

float FUN_0035e6a0(void)

{
  float fVar1;
  undefined4 *extraout_r3;
  float fVar2;
  float fVar3;
  float extraout_s7;
  undefined4 extraout_s8;

  fVar2 = (float)FUN_0036e168();
  fVar1 = DAT_0035e6dc;
  fVar3 = fVar2;
  if (fVar2 < DAT_0035e6dc) {
    fVar3 = -fVar2;
  }
  if (fVar3 < extraout_s7) {
    *extraout_r3 = extraout_s8;
    fVar2 = fVar1;
  }
  return fVar2;
}
