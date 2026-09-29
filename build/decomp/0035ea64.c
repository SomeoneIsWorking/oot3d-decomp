// OoT3D decomp @ 0035ea64  name=FUN_0035ea64  size=268

undefined4
FUN_0035ea64(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float *param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = *param_7 - param_1;
  param_2 = param_7[1] - param_2;
  uVar1 = 0;
  fVar2 = param_7[2] - param_3;
  fVar3 = fVar4;
  if (fVar4 < DAT_0035eb70) {
    fVar3 = -fVar4;
  }
  if (fVar3 < param_4) {
    if (param_2 < DAT_0035eb70) {
      param_2 = -param_2;
    }
    if (param_2 < param_5) {
      fVar3 = fVar2;
      if (fVar2 < DAT_0035eb70) {
        fVar3 = -fVar2;
      }
      if (fVar3 < param_6) {
        fVar3 = fVar4 / param_4;
        if (fVar3 < DAT_0035eb70) {
          fVar3 = -fVar3;
        }
        fVar5 = fVar2 / param_6;
        if (fVar5 < DAT_0035eb70) {
          fVar5 = -fVar5;
        }
        if (fVar3 <= fVar5) {
          fVar3 = fVar2;
          if (fVar2 < DAT_0035eb70) {
            fVar3 = -fVar2;
          }
          if (fVar3 < param_6) {
            if (DAT_0035eb70 <= fVar2) {
              param_3 = param_3 + param_6;
            }
            else {
              param_3 = param_3 - param_6;
            }
            param_7[2] = param_3;
          }
        }
        else {
          fVar3 = fVar4;
          if (fVar4 < DAT_0035eb70) {
            fVar3 = -fVar4;
          }
          if (fVar3 < param_4) {
            if (DAT_0035eb70 <= fVar4) {
              param_1 = param_1 + param_4;
            }
            else {
              param_1 = param_1 - param_4;
            }
            *param_7 = param_1;
          }
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}
