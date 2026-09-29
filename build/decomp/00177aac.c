// OoT3D decomp @ 00177aac  name=FUN_00177aac  size=232

void FUN_00177aac(int param_1,int param_2)

{
  short sVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;

  fVar2 = (float)VectorSignedToFloat((uint)((ulonglong)(uint)*(ushort *)(param_1 + 0x1c6) *
                                            (ulonglong)DAT_00177b94 >> 0x26) * DAT_00177b98 +
                                     (uint)*(ushort *)(param_1 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3
                                    );
  fVar2 = (float)FUN_003727f0(fVar2 * DAT_00177b9c);
  fVar2 = fVar2 * DAT_00177ba0;
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar2 * fVar3;
  fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar2 * fVar3;
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                    0x12),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x2c) = fVar2 + DAT_00177ba4;
  if ((*(short *)(param_1 + 0x1c4) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x1c4) + -1, *(short *)(param_1 + 0x1c4) = sVar1, sVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x1c4) = 0x4b;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c4),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)FUN_003727f0(fVar2 * DAT_00177ba8);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar2 * DAT_00177bac;
  return;
}
