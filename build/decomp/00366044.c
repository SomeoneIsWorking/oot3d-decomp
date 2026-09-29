// OoT3D decomp @ 00366044  name=FUN_00366044  size=180

void FUN_00366044(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x262));
  fVar2 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x264));
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x266));
  fVar4 = DAT_003660f8;
  fVar5 = (fVar1 + fVar2 + fVar3) * DAT_003660f8;
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x3a0) * fVar1 * fVar5
  ;
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x262));
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x264));
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x266));
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x3a0) * (fVar1 + fVar2 + fVar3) * fVar4;
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0x30) =
       *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x3a0) * fVar4 * fVar5;
  return;
}
