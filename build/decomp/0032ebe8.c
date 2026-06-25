// OoT3D decomp @ 0032ebe8  name=FUN_0032ebe8  size=128

void FUN_0032ebe8(float param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = DAT_0032ec70;
  iVar1 = DAT_0032ec6c;
  fVar3 = param_1;
  if (DAT_0032ec6c < (int)param_1) {
    fVar3 = DAT_0032ec74;
  }
  if (DAT_0032ec6c < (int)param_1) {
    *(undefined4 *)(DAT_0032ec70 + 0xc0) = DAT_0032ec68;
  }
  if (iVar1 < (int)param_1) {
    *(float *)(iVar2 + 200) = fVar3;
  }
  else {
    fVar4 = DAT_0032ec88 + fVar3 * DAT_0032ec78 * DAT_0032ec84;
    *(float *)(iVar2 + 0xc0) = DAT_0032ec80 + fVar3 * DAT_0032ec78 * DAT_0032ec7c;
    *(float *)(iVar2 + 200) = fVar4;
  }
  FUN_0037547c(param_3,param_2,4,DAT_0032ec90 + 8,DAT_0032ec90,DAT_0032ec8c);
  return;
}

