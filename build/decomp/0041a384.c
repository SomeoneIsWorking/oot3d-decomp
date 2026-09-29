// OoT3D decomp @ 0041a384  name=FUN_0041a384  size=256

void FUN_0041a384(float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;

  fVar1 = DAT_0041a488;
  iVar2 = *DAT_0041a484;
  fVar4 = DAT_0041a488;
  if ((DAT_0041a488 < param_1) && (fVar4 = param_1, 0x3f7fffff < (int)param_1)) {
    fVar4 = DAT_0041a48c;
  }
  if (*(float *)(iVar2 + 0x5a0) != fVar4) {
    fVar4 = DAT_0041a488;
    if ((DAT_0041a488 < param_1) && (fVar4 = param_1, 0x3f7fffff < (int)param_1)) {
      fVar4 = DAT_0041a48c;
    }
    *(float *)(iVar2 + 0x5a0) = fVar4;
    if ((fVar4 <= fVar1) || ((uint)((int)fVar4 << 1) >> 0x18 == 0xff)) {
      uVar3 = 0;
    }
    else if ((int)(fVar4 * DAT_0041a490) < DAT_0041a494) {
      uVar3 = VectorFloatToUnsigned(fVar4 * DAT_0041a490,3);
    }
    else {
      uVar3 = 0xffffff;
    }
    *(undefined4 *)(iVar2 + 0x5ac) = uVar3;
    fVar4 = *(float *)(iVar2 + 0x5a0);
    if ((fVar4 <= fVar1) || ((uint)((int)fVar4 << 1) >> 0x18 == 0xff)) {
      uVar3 = 0;
    }
    else {
      uVar3 = DAT_0041a4a0;
      if ((int)(fVar4 * DAT_0041a498) < DAT_0041a49c) {
        uVar3 = VectorFloatToUnsigned(fVar4 * DAT_0041a498,3);
      }
    }
    *(undefined4 *)(iVar2 + 0x5b0) = uVar3;
  }
  return;
}
