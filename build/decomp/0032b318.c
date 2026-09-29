// OoT3D decomp @ 0032b318  name=FUN_0032b318  size=280

void FUN_0032b318(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;

  *(undefined4 *)(param_2 + 0x70) = DAT_0032b430;
  *(undefined4 *)(param_2 + 0x74) = DAT_0032b434;
  fVar1 = (float)FUN_003738a8(param_1 * DAT_0032b438);
  if (DAT_0032b43c <= fVar1) {
    fVar1 = fVar1 + DAT_0032b440;
  }
  else {
    fVar1 = fVar1 - DAT_0032b440;
  }
  fVar2 = (float)FUN_00371e50(DAT_0032b444);
  *(float *)(param_2 + 100) = (fVar2 + DAT_0032b448) * param_1;
  uVar3 = FUN_00371e50(param_1 * DAT_0032b44c);
  *(undefined4 *)(param_2 + 0x68) = uVar3;
  fVar2 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x36));
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x36));
  *(float *)(param_2 + 0x60) = fVar2 * fVar1 + fVar4 * *(float *)(param_2 + 0x68);
  fVar2 = (float)FUN_00338f60((int)*(short *)(param_2 + 0x36));
  fVar5 = *(float *)(param_2 + 0x68);
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0x36));
  uVar3 = DAT_0032b450;
  *(float *)(param_2 + 0x68) = fVar2 * fVar5 - fVar4 * fVar1;
  fVar1 = (float)FUN_003738a8(uVar3);
  *(short *)(param_2 + 0x34) = (short)(int)(fVar1 * param_1);
  fVar1 = (float)FUN_003738a8(uVar3);
  *(short *)(param_2 + 0x36) = (short)(int)(fVar1 * param_1);
  fVar1 = (float)FUN_003738a8(uVar3);
  uVar3 = DAT_0032b454;
  *(short *)(param_2 + 0x38) = (short)(int)(fVar1 * param_1);
  fVar1 = (float)FUN_003738a8(uVar3);
  FUN_0037572c(fVar1 + DAT_0032b458,param_2);
  return;
}
