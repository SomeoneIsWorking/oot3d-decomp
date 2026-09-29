// OoT3D decomp @ 0032c66c  name=FUN_0032c66c  size=276

float FUN_0032c66c(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar2 = DAT_0032c780;
  if ((param_2 < param_3) && (fVar2 = DAT_0032c784, param_3 < param_1)) {
    fVar4 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 - fVar2;
    fVar5 = fVar5 - fVar2;
    fVar3 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = DAT_0032c780;
    if ((DAT_0032c780 < fVar4) && (fVar3 + fVar6 <= fVar4)) {
      fVar7 = DAT_0032c784 / ((fVar4 * DAT_0032c788 - fVar3) - fVar6);
      if (fVar3 != DAT_0032c780) {
        if (fVar5 <= fVar3) {
          return (fVar7 * fVar5 * fVar5) / fVar3;
        }
        fVar2 = fVar7 * fVar3;
      }
      if (fVar5 <= fVar4 - fVar6) {
        fVar2 = fVar2 + fVar7 * DAT_0032c788 * (fVar5 - fVar3);
      }
      else {
        bVar1 = DAT_0032c780 <= fVar6;
        fVar2 = fVar2 + fVar7 * DAT_0032c788 * ((fVar4 - fVar3) - fVar6);
        if (fVar6 != DAT_0032c780) {
          fVar2 = fVar2 + fVar7 * fVar6;
          bVar1 = fVar4 <= fVar5;
        }
        if (!bVar1) {
          return fVar2 - (fVar7 * (fVar4 - fVar5) * (fVar4 - fVar5)) / fVar6;
        }
      }
    }
  }
  return fVar2;
}
