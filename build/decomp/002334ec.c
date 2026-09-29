// OoT3D decomp @ 002334ec  name=FUN_002334ec  size=188

undefined4 FUN_002334ec(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_2 == 8) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(DAT_002335a8 + param_4),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar2 * DAT_002335ac;
    if (fVar2 != DAT_002335b0) {
      fVar1 = (float)FUN_003727f0();
      fVar2 = (float)FUN_00372674(fVar2);
      fVar3 = *(float *)(param_3 + 4);
      *(float *)(param_3 + 4) = fVar3 * fVar2 + *(float *)(param_3 + 8) * fVar1;
      *(float *)(param_3 + 8) = *(float *)(param_3 + 8) * fVar2 - fVar3 * fVar1;
      fVar3 = *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x14) = fVar3 * fVar2 + *(float *)(param_3 + 0x18) * fVar1;
      *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) * fVar2 - fVar3 * fVar1;
      fVar3 = *(float *)(param_3 + 0x24);
      *(float *)(param_3 + 0x24) = fVar3 * fVar2 + *(float *)(param_3 + 0x28) * fVar1;
      *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x28) * fVar2 - fVar3 * fVar1;
    }
  }
  return 0;
}
