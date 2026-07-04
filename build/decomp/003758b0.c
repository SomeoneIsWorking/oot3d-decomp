// OoT3D decomp @ 003758b0  name=FUN_003758b0  size=284

int FUN_003758b0(float param_1,float param_2)

{
  short sVar1;
  float fVar2;
  
  fVar2 = -param_1;
  if (param_2 < DAT_003759cc) {
    param_2 = -param_2;
    if (DAT_003759cc <= param_1) {
      if (param_2 <= param_1) {
        sVar1 = FUN_002bc718(param_2,param_1);
        sVar1 = -sVar1;
      }
      else {
        sVar1 = FUN_002bc718(param_1,param_2);
        sVar1 = sVar1 + -0x4000;
      }
    }
    else if (fVar2 < param_2) {
      sVar1 = FUN_002bc718(fVar2,param_2);
      sVar1 = -0x4000 - sVar1;
    }
    else {
      sVar1 = FUN_002bc718(param_2,fVar2);
      sVar1 = sVar1 + -0x8000;
    }
  }
  else if (param_1 < DAT_003759cc) {
    if (param_2 <= fVar2) {
      sVar1 = FUN_002bc718(param_2,fVar2);
      sVar1 = -0x8000 - sVar1;
    }
    else {
      sVar1 = FUN_002bc718(fVar2,param_2);
      sVar1 = sVar1 + 0x4000;
    }
  }
  else if (param_1 < param_2) {
    sVar1 = FUN_002bc718(param_1,param_2);
    sVar1 = 0x4000 - sVar1;
  }
  else {
    sVar1 = FUN_002bc718(param_2,param_1);
  }
  return (int)sVar1;
}

