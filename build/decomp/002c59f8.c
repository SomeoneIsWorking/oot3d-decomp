// OoT3D decomp @ 002c59f8  name=FUN_002c59f8  size=192

void FUN_002c59f8(float param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  uVar3 = DAT_002c5ac4;
  fVar2 = DAT_002c5ac0;
  iVar1 = DAT_002c5abc;
  fVar5 = DAT_002c5ab8;
  fVar6 = param_1 + DAT_002c5ab8;
  fVar4 = fVar6 + DAT_002c5ab8;
  if (DAT_002c5abc < (int)(fVar6 + DAT_002c5ab8)) {
    fVar4 = DAT_002c5ac0;
  }
  fVar4 = (float)FUN_0033b584(fVar4,DAT_002c5ac4,DAT_002c5ac0,DAT_002c5ab8,DAT_002c5ac4);
  *(float *)(param_3 + 0x52c) = fVar4 * param_2;
  fVar4 = param_1 + DAT_002c5ac8 + fVar5;
  if (iVar1 < (int)fVar4) {
    fVar4 = fVar2;
  }
  fVar4 = (float)FUN_0033b584(fVar4,uVar3,fVar2,fVar5,uVar3);
  *(float *)(param_3 + 0x538) = fVar4 * param_2;
  if (iVar1 < (int)fVar6) {
    fVar6 = fVar2;
  }
  fVar5 = (float)FUN_0033b584(fVar6,uVar3,fVar2,fVar5,uVar3);
  *(float *)(param_3 + 0x544) = fVar5 * param_2;
  return;
}
