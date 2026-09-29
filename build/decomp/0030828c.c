// OoT3D decomp @ 0030828c  name=FUN_0030828c  size=132

void FUN_0030828c(float param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;

  uVar1 = 0;
  if (param_1 != DAT_00308310 && (uint)((int)param_1 << 1) >> 0x18 != 0xff) {
    fVar2 = (param_1 + DAT_00308314) * DAT_00308318;
    fVar3 = DAT_00308310;
    if ((DAT_00308310 <= fVar2) && (fVar3 = fVar2, 0x45ffffff < (int)fVar2)) {
      fVar3 = DAT_0030831c;
    }
    if ((int)fVar3 < DAT_00308320) {
      uVar1 = VectorFloatToUnsigned(fVar3 + DAT_00308324,3);
    }
    else {
      uVar1 = VectorFloatToUnsigned(fVar3 - DAT_00308324,3);
    }
  }
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}
