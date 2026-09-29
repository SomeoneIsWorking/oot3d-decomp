// OoT3D decomp @ 00368280  name=FUN_00368280  size=484

undefined4 FUN_00368280(float *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_4c [48];
  float local_1c [2];
  float local_14;

  uVar2 = DAT_00368468;
  fVar4 = *param_1;
  fVar3 = ABS(fVar4);
  if ((((int)fVar3 < DAT_00368464) && ((int)ABS(param_1[2]) < DAT_00368464)) &&
     ((int)param_1[1] < DAT_0036846c)) {
    if (DAT_0036846c + -0x280000 < (int)param_1[1]) {
      return DAT_00368470;
    }
  }
  else if (((((int)fVar3 < DAT_00368474) &&
            (((int)ABS(param_1[2] - DAT_0036847c) < DAT_00368474 ||
             ((int)ABS(param_1[2] + DAT_0036847c) < DAT_00368474)))) &&
           (fVar5 = param_1[1], (int)fVar5 < DAT_00368474 + 0x8a0000)) ||
          (((fVar6 = ABS(param_1[2]), (int)fVar6 < DAT_00368474 &&
            (((int)ABS(fVar4 - DAT_0036847c) < DAT_00368474 ||
             ((int)ABS(fVar4 + DAT_0036847c) < DAT_00368474)))) &&
           (fVar5 = param_1[1], (int)fVar5 < DAT_00368474 + 0x8a0000)))) {
    if (DAT_00368474 + 0x620000 < (int)fVar5) {
      return DAT_00368478;
    }
  }
  else {
    if ((uint)DAT_00368480 < (uint)param_1[1]) {
      return DAT_00368484;
    }
    iVar1 = (int)fVar3 - (int)DAT_00368488;
    if ((int)fVar3 <= (int)DAT_00368488) {
      iVar1 = (int)fVar6 - (int)DAT_00368488;
      fVar3 = fVar6;
    }
    if (fVar3 == DAT_00368488 || iVar1 < 0 != SBORROW4((int)fVar3,(int)DAT_00368488)) {
      FUN_003735e8(DAT_0036848c,auStack_4c,0);
      FUN_003735ac(local_1c,auStack_4c,param_1);
      if (((int)ABS(local_1c[0]) <= DAT_00368490) && ((int)ABS(local_14) <= DAT_00368490)) {
        return DAT_00368494;
      }
    }
  }
  return uVar2;
}
