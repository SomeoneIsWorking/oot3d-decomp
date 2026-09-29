// OoT3D decomp @ 00158718  name=FUN_00158718  size=136

void FUN_00158718(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  uint in_fpscr;
  float fVar6;

  fVar2 = DAT_001587a4;
  fVar1 = DAT_001587a0;
  sVar5 = *(short *)(param_1 + 0x1c) + 1;
  *(short *)(param_1 + 0x1c) = sVar5;
  fVar6 = (float)VectorSignedToFloat((int)sVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c(fVar6 * fVar1 * fVar2,param_1);
  fVar3 = DAT_001587a8;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar6 * fVar1 * DAT_001587a8;
  if (*(short *)(param_1 + 0x1c) == 0x14) {
    FUN_0037572c(fVar2,param_1);
    *(undefined2 *)(param_1 + 0xbc) = 0xc000;
    uVar4 = DAT_001587ac;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar3;
    *(undefined4 *)(param_1 + 0x228) = uVar4;
  }
  return;
}
