// OoT3D decomp @ 003658b8  name=FUN_003658b8  size=148

undefined4 FUN_003658b8(float param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar3 = *param_2;
  fVar5 = DAT_0036594c - param_1;
  bVar2 = NAN(ABS(fVar3)) || NAN(fVar5);
  bVar1 = false;
  fVar4 = DAT_0036594c;
  if (ABS(fVar3) < fVar5) {
    fVar4 = param_2[2];
    bVar1 = ABS(fVar4) < fVar5;
    bVar2 = NAN(ABS(fVar4)) || NAN(fVar5);
  }
  if ((bVar1 != bVar2) &&
     ((param_1 = param_1 + DAT_00365954,
      param_1 <= ABS(fVar3 - DAT_00365950) && param_1 <= ABS(fVar3 - DAT_00365958) ||
      (param_1 <= ABS(fVar4 - DAT_00365950) && param_1 <= ABS(fVar4 - DAT_00365958))))) {
    return 0;
  }
  return 1;
}
