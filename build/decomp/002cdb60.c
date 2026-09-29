// OoT3D decomp @ 002cdb60  name=FUN_002cdb60  size=132

undefined4 FUN_002cdb60(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;

  if (param_1 == DAT_002cdbe4 || (uint)((int)param_1 << 1) >> 0x18 == 0xff) {
    uVar1 = 0;
  }
  else {
    fVar2 = (param_1 + DAT_002cdbe8) * DAT_002cdbec;
    fVar3 = DAT_002cdbe4;
    if ((DAT_002cdbe4 <= fVar2) && (fVar3 = fVar2, 0x45ffffff < (int)fVar2)) {
      fVar3 = DAT_002cdbf0;
    }
    if ((int)fVar3 < DAT_002cdbf4) {
      uVar1 = VectorFloatToUnsigned(fVar3 + DAT_002cdbf8,3);
      return uVar1;
    }
    uVar1 = VectorFloatToUnsigned(fVar3 - DAT_002cdbf8,3);
  }
  return uVar1;
}
