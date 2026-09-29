// OoT3D decomp @ 0016da58  name=FUN_0016da58  size=440

undefined4 FUN_0016da58(ushort param_1,int param_2,int param_3,int param_4)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  fVar2 = DAT_0016dc10;
  if (param_2 == 1) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1352),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar2 * DAT_0016dc10,param_3,1);
  }
  else if (param_2 == 2) {
    fVar1 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_4 + 0x134c) -
                                                   *(short *)(param_4 + 0x1352)),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar1 * DAT_0016dc10,param_3,1);
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x1350),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar1 * fVar2;
    if (fVar1 != DAT_0016dc18) {
      fVar2 = (float)FUN_003727f0(fVar1);
      fVar1 = (float)FUN_00372674(fVar1);
      fVar3 = *(float *)(param_3 + 4);
      *(float *)(param_3 + 4) = fVar3 * fVar1 + *(float *)(param_3 + 8) * fVar2;
      *(float *)(param_3 + 8) = *(float *)(param_3 + 8) * fVar1 - fVar3 * fVar2;
      fVar3 = *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x14) = fVar3 * fVar1 + *(float *)(param_3 + 0x18) * fVar2;
      *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) * fVar1 - fVar3 * fVar2;
      fVar3 = *(float *)(param_3 + 0x24);
      *(float *)(param_3 + 0x24) = fVar3 * fVar1 + *(float *)(param_3 + 0x28) * fVar2;
      *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x28) * fVar1 - fVar3 * fVar2;
    }
  }
  else if (param_2 == 3) {
    if ((*(ushort *)(param_4 + 0x135c) & 8) == 0) {
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x134c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar2 = (float)VectorSignedToFloat((int)(short)-(short)(int)(fVar2 * DAT_0016dc14),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar2 * DAT_0016dc10,param_3,1);
    }
  }
  else {
    if (param_2 == 4) {
      param_1 = *(ushort *)(param_4 + 0x135c);
    }
    if (param_2 == 4 && (param_1 & 8) == 0) {
      fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0x134c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar2 = (float)VectorSignedToFloat((int)(short)(int)(fVar2 * DAT_0016dc14),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar2 * DAT_0016dc10,param_3,1);
    }
  }
  return 0;
}
