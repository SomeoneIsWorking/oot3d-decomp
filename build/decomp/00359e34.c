// OoT3D decomp @ 00359e34  name=FUN_00359e34  size=424

void FUN_00359e34(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = DAT_00359fe0;
  iVar1 = *DAT_00359fdc;
  if (*(short *)(param_1 + 0x5da) == 0) {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5da) = (short)(int)(DAT_00359fe4 / fVar3 + DAT_00359fe0);
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(undefined4 *)(param_1 + 100) = DAT_00359fe8;
    }
  }
  fVar3 = DAT_00359fec;
  if (*(short *)(param_1 + 0x5d8) == 0) {
    *(ushort *)(param_1 + 0x61e) = *(short *)(param_1 + 0x61e) + 1U & 1;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5d8) = (short)(int)(fVar3 / fVar4 + fVar2);
  }
  fVar3 = *(float *)(DAT_00359ff0 + param_3 * 4);
  if (*(short *)(param_1 + 0x61e) != 0) {
    fVar3 = -fVar3;
  }
  if ((param_3 == 1) &&
     ((*(short *)(param_1 + 0x5de) == 0 || ((*(ushort *)(param_1 + 0x90) & 8) != 0)))) {
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5de) = (short)(int)(DAT_00359ff4 / fVar4 + fVar2);
    if (*(short *)(param_1 + 0x5e8) == 0) {
      fVar4 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                        );
      *(short *)(param_1 + 0x5e8) = (short)(int)(DAT_00359ff8 / fVar4 + fVar2);
      *(undefined2 *)(param_1 + 0x664) = *(undefined2 *)(param_1 + 0x92);
    }
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x664),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375a18(param_1 + 0x36,(int)(short)(int)(fVar2 + fVar3),3,
               (int)(short)(int)*(float *)(param_1 + 0x67c));
  FUN_00373500(DAT_0035a004,DAT_0035a000,DAT_00359ffc,param_1 + 0x67c);
  FUN_003631d0(param_1,param_2,5,0);
  return;
}
