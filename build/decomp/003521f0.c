// OoT3D decomp @ 003521f0  name=FUN_003521f0  size=288

undefined4 FUN_003521f0(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == (float *)0x0) {
    return 0;
  }
  if (param_2 == 8) {
    if (*(short *)(param_1 + 0x18a) != 0x3c && *(short *)(param_1 + 0x18a) != 0x2b) {
      *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) & 0xffe6;
      *(float **)(param_1 + 0xf0) = param_3;
    }
  }
  else if (param_2 < 9) {
    if (param_2 == 1) {
      *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) & 0xffe6;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      *(float *)(param_1 + 0x80) = *param_3;
      *(float *)(param_1 + 0x84) = fVar1;
      *(float *)(param_1 + 0x88) = fVar2;
    }
    else if (param_2 == 2) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      *(float *)(param_1 + 0xa4) = *param_3;
      *(float *)(param_1 + 0xa8) = fVar1;
      *(float *)(param_1 + 0xac) = fVar2;
      *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
    }
    else {
      if (param_2 != 4) {
        return 0;
      }
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      *(float *)(param_1 + 0x98) = *param_3;
      *(float *)(param_1 + 0x9c) = fVar1;
      *(float *)(param_1 + 0xa0) = fVar2;
    }
  }
  else if (param_2 == 0x10) {
    *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) & 0xffe6;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    *(float *)(param_1 + 0xf4) = *param_3;
    *(float *)(param_1 + 0xf8) = fVar1;
    *(float *)(param_1 + 0xfc) = fVar2;
  }
  else if (param_2 == 0x20) {
    *(float *)(param_1 + 0x144) = *param_3;
  }
  else {
    if (param_2 != 0x40) {
      return 0;
    }
    *(short *)(param_1 + 0x1a2) = (short)(int)(fRam00352314 + *param_3 * fRam00352310);
  }
  *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) | (ushort)param_2;
  return 1;
}

