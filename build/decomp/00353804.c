// OoT3D decomp @ 00353804  name=FUN_00353804  size=320

void FUN_00353804(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;

  iVar1 = (uint)*(byte *)(param_1 + 0x929) + param_2;
  uVar5 = UnsignedSaturate(iVar1,8);
  UnsignedDoesSaturate(iVar1,8);
  *(char *)(param_1 + 0x929) = (char)uVar5;
  fVar3 = DAT_0035395c;
  fVar2 = DAT_00353954;
  fVar4 = DAT_00353950;
  if (param_2 < 0) {
    fVar2 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar2 * DAT_00353944;
    fVar3 = DAT_0035394c + fVar2 * DAT_00353948;
    fVar6 = DAT_00353950 - fVar2 * DAT_00353950;
    *(float *)(param_1 + 0x5c) = fVar3;
    *(float *)(param_1 + 0x54) = fVar3;
    *(float *)(param_1 + 0x58) = fVar6 + fVar4;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_00353958;
    fVar6 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5c) = fVar4;
    *(float *)(param_1 + 0x58) = fVar4;
    *(float *)(param_1 + 0x54) = fVar4;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar6 * fVar3;
  }
  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x933),(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorFloatToUnsigned(fVar4 * fVar2,3);
  *(char *)(param_1 + 0x926) = (char)uVar5;
  fVar4 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x934),(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorFloatToUnsigned(fVar4 * fVar2,3);
  *(char *)(param_1 + 0x927) = (char)uVar5;
  fVar4 = DAT_00353960;
  fVar3 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x935),(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorFloatToUnsigned(fVar3 * fVar2,3);
  *(char *)(param_1 + 0x928) = (char)uVar5;
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x929),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x95c,(uint)*(byte *)(param_1 + 0x933),
               (uint)*(byte *)(param_1 + 0x934),(uint)*(byte *)(param_1 + 0x935),
               (int)(short)(int)(fVar2 * fVar4),0);
  return;
}
