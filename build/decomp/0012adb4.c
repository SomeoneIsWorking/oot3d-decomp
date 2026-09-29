// OoT3D decomp @ 0012adb4  name=FUN_0012adb4  size=52

void FUN_0012adb4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;

  fVar1 = DAT_0012ae68;
  fVar4 = DAT_0012ae64;
  FUN_003600e4(DAT_0012ae70,DAT_0012ae6c,DAT_0012ae68,DAT_0012ae64,param_1 + 100);
  fVar3 = (float)FUN_003600e4(uRam0012ae7c,uRam0012ae78,*(undefined4 *)(param_1 + 100),DAT_0012ae74,
                              param_1 + 0x2c);
  uVar2 = uRam0012ae8c;
  if ((int)ABS(fVar3) < iRam0012ae80) {
    func_0x003600d4(param_1);
    FUN_0037547c(uRam0012ae84,param_1 + 0x28,4,DAT_00375c04,DAT_00375c04,DAT_00375c00);
    return;
  }
  fVar3 = ABS(fVar3) * fRam0012ae88;
  if ((fVar4 <= fVar3) && (fVar4 = fVar3, 0x3f800000 < (int)fVar3)) {
    fVar4 = fVar1;
  }
  if ((int)fVar4 < 0x3f400000) {
    fVar4 = DAT_0036ef88 + fVar4 * DAT_0036ef80 * DAT_0036ef84;
    *(float *)(DAT_0036ef7c + 100) = fVar4;
  }
  else {
    *(float *)(DAT_0036ef7c + 100) = fVar4;
  }
  if (0x3f000000 < (int)fVar4) {
    FUN_0037547c(uVar2,param_1 + 0x28,4,DAT_0036ef94,DAT_0036ef90,DAT_0036ef8c);
  }
  return;
}
