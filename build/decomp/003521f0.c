// OoT3D decomp @ 003521f0  name=FUN_003521f0  size=288

undefined4 FUN_003521f0(float param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  if (param_4 == (float *)0x0) {
    return 0;
  }
  if (param_3 == 8) {
    if (*(short *)(param_2 + 0x18a) != 0x3c && *(short *)(param_2 + 0x18a) != 0x2b) {
      *(ushort *)(param_2 + 0x1a4) = *(ushort *)(param_2 + 0x1a4) & 0xffe6;
      *(float **)(param_2 + 0xf0) = param_4;
    }
  }
  else if (param_3 < 9) {
    if (param_3 == 1) {
      *(ushort *)(param_2 + 0x1a4) = *(ushort *)(param_2 + 0x1a4) & 0xffe6;
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      *(float *)(param_2 + 0x80) = *param_4;
      *(float *)(param_2 + 0x84) = fVar1;
      *(float *)(param_2 + 0x88) = fVar2;
    }
    else if (param_3 == 2) {
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      *(float *)(param_2 + 0xa4) = *param_4;
      *(float *)(param_2 + 0xa8) = fVar1;
      *(float *)(param_2 + 0xac) = fVar2;
      *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0xa4);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0xa8);
      *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0xac);
    }
    else {
      if (param_3 != 4) {
        return 0;
      }
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      *(float *)(param_2 + 0x98) = *param_4;
      *(float *)(param_2 + 0x9c) = fVar1;
      *(float *)(param_2 + 0xa0) = fVar2;
    }
  }
  else if (param_3 == 0x10) {
    *(ushort *)(param_2 + 0x1a4) = *(ushort *)(param_2 + 0x1a4) & 0xffe6;
    fVar1 = param_4[1];
    fVar2 = param_4[2];
    *(float *)(param_2 + 0xf4) = *param_4;
    *(float *)(param_2 + 0xf8) = fVar1;
    *(float *)(param_2 + 0xfc) = fVar2;
  }
  else {
    if (param_3 == 0x20) {
      param_1 = *param_4;
    }
    if (param_3 == 0x20) {
      *(float *)(param_2 + 0x144) = param_1;
    }
    else {
      if (param_3 != 0x40) {
        return 0;
      }
      *(short *)(param_2 + 0x1a2) = (short)(int)(DAT_00352314 + *param_4 * DAT_00352310);
    }
  }
  *(ushort *)(param_2 + 0x1a4) = *(ushort *)(param_2 + 0x1a4) | (ushort)param_3;
  return 1;
}

