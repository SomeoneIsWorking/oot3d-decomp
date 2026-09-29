// OoT3D decomp @ 002c5acc  name=FUN_002c5acc  size=192

void FUN_002c5acc(float param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  uVar3 = DAT_002c5b98;
  fVar2 = DAT_002c5b94;
  iVar1 = DAT_002c5b90;
  fVar5 = DAT_002c5b8c;
  fVar6 = param_1 + DAT_002c5b8c;
  fVar4 = fVar6 + DAT_002c5b8c;
  if (DAT_002c5b90 < (int)(fVar6 + DAT_002c5b8c)) {
    fVar4 = DAT_002c5b94;
  }
  fVar4 = (float)FUN_0033b5b0(fVar4,DAT_002c5b98,DAT_002c5b94,DAT_002c5b98,DAT_002c5b8c);
  *(float *)(param_3 + 0x52c) = fVar4 * param_2;
  fVar4 = param_1 + DAT_002c5b9c + fVar5;
  if (iVar1 < (int)fVar4) {
    fVar4 = fVar2;
  }
  fVar4 = (float)FUN_0033b5b0(fVar4,uVar3,fVar2,uVar3,fVar5);
  *(float *)(param_3 + 0x538) = fVar4 * param_2;
  if (iVar1 < (int)fVar6) {
    fVar6 = fVar2;
  }
  fVar5 = (float)FUN_0033b5b0(fVar6,uVar3,fVar2,uVar3,fVar5);
  *(float *)(param_3 + 0x544) = fVar5 * param_2;
  return;
}
