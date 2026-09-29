// OoT3D decomp @ 0040335c  name=FUN_0040335c  size=512

void FUN_0040335c(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_34;
  float local_30;

  FUN_00403584(param_2,param_1,param_7,&local_30,&local_34);
  fVar1 = DAT_00403564;
  fVar3 = DAT_00403560;
  fVar5 = -param_5;
  fVar4 = -param_4;
  if (fVar5 <= local_30) {
    fVar2 = fVar3;
    if ((uint)DAT_0040356c < (uint)local_30) {
      fVar3 = (float)FUN_0030c034(local_30,fVar5,DAT_00403570,DAT_00403564,DAT_0040355c);
    }
    else if (fVar4 <= local_30) {
      if (param_4 <= local_30) {
        fVar2 = fVar1;
        if ((int)local_30 < DAT_00403574) {
          fVar3 = (float)FUN_0030c034(local_30,param_4,DAT_00403578,DAT_00403560,DAT_0040355c);
        }
        else if (param_5 <= local_30) {
          fVar2 = (float)FUN_0030c034(local_30,param_5,DAT_0040357c);
          fVar3 = fVar1;
        }
        else {
          fVar3 = (float)FUN_0030c034(local_30,DAT_00403578,param_5);
        }
      }
      else {
        fVar2 = (float)FUN_0030c034(local_30,fVar4,param_4);
      }
    }
    else {
      fVar3 = (float)FUN_0030c034(local_30,DAT_00403570,fVar4,DAT_0040355c,DAT_00403560);
    }
  }
  else {
    fVar2 = (float)FUN_0030c034(local_30,DAT_00403568,fVar5,DAT_0040355c,DAT_00403560);
    fVar3 = fVar1;
  }
  fVar4 = (float)FUN_00372674(param_4);
  fVar5 = (float)FUN_00372674(param_5);
  fVar5 = (fVar4 + fVar5) * DAT_00403580;
  fVar4 = (float)FUN_00372674(param_5);
  *param_8 = fVar2 * param_3 * local_34;
  *param_9 = fVar3 * param_3 * local_34 + (fVar5 / (fVar5 - fVar4)) * (fVar1 - local_34) + fVar1 +
             param_6;
  return;
}
