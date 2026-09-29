// OoT3D decomp @ 003b96d8  name=FUN_003b96d8  size=204

void FUN_003b96d8(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;

  iVar1 = FUN_003731e0(param_1 + 0x1bc);
  if (iVar1 != 0) {
    FUN_00370350(uRam003b97a4,param_1 + 0x1bc,1);
    *(undefined2 *)(param_1 + 0x4ba) = 8000;
    *(short *)(param_1 + 0x4b8) = (short)uRam003b97a8;
    *(undefined4 *)(param_1 + 0x4b4) = uRam003b97ac;
    return;
  }
  if (*(int *)(param_1 + 0x1f8) < 0x41000000) {
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 + fRam003b97b0);
    return;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),(byte)(in_fpscr >> 0x15) & 3);
  if (*(int *)(param_1 + 0x1f8) < iRam003b97b4) {
    *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 + fRam003b97b8);
    return;
  }
  *(short *)(param_1 + 0x4ba) = (short)(int)(fVar2 - fRam003b97b8);
  return;
}
