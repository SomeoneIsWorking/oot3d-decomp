// OoT3D decomp @ 00353694  name=FUN_00353694  size=332

void FUN_00353694(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;

  iVar2 = DAT_003537e0 + *(short *)(param_1 + 0x1c) * 0x10;
  iVar1 = (uint)*(byte *)(param_1 + 0x903) + param_2;
  uVar6 = UnsignedSaturate(iVar1,8);
  UnsignedDoesSaturate(iVar1,8);
  *(char *)(param_1 + 0x903) = (char)uVar6;
  fVar4 = DAT_003537fc;
  fVar3 = DAT_003537f4;
  fVar5 = DAT_003537f0;
  if (param_2 < 0) {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_003537e4;
    fVar4 = DAT_003537ec + fVar3 * DAT_003537e8;
    fVar7 = DAT_003537f0 - fVar3 * DAT_003537f0;
    *(float *)(param_1 + 0x5c) = fVar4;
    *(float *)(param_1 + 0x54) = fVar4;
    *(float *)(param_1 + 0x58) = fVar7 + fVar5;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_003537f8;
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x5c) = fVar5;
    *(float *)(param_1 + 0x58) = fVar5;
    *(float *)(param_1 + 0x54) = fVar5;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar7 * fVar4;
  }
  fVar5 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 3),(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned(fVar5 * fVar3,3);
  *(char *)(param_1 + 0x900) = (char)uVar6;
  fVar5 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 4),(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned(fVar5 * fVar3,3);
  *(char *)(param_1 + 0x901) = (char)uVar6;
  fVar5 = DAT_00353800;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 5),(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned(fVar4 * fVar3,3);
  *(char *)(param_1 + 0x902) = (char)uVar6;
  fVar3 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x903),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_1 + 0x920,*(undefined1 *)(iVar2 + 3),
               *(undefined1 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 5),
               (int)(short)(int)(fVar3 * fVar5),0);
  return;
}
