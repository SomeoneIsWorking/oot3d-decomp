// OoT3D decomp @ 0028b5d8  name=FUN_0028b5d8  size=328

void FUN_0028b5d8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;

  (**(code **)(param_1 + 0x1bc))();
  iVar2 = DAT_0028b720;
  if (*(short *)(param_1 + 0x1c) != 0) {
    iVar1 = (int)*(short *)(param_1 + 0x1c0);
    if (*(short *)(param_1 + 0x36) != *(short *)(param_1 + 0xbe)) {
      iVar1 = iVar1 + 0x78;
    }
    if (*(int *)(param_1 + 0x1bc) == DAT_0028b720) {
      iVar1 = iVar1 + 0x1e;
    }
    fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)FUN_00372674(fVar3 * DAT_0028b724);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - (DAT_0028b728 - fVar3) * DAT_0028b72c;
    if (*(int *)(param_1 + 0x1bc) == iVar2) {
      fVar3 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      fVar4 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x36) + -0x8000));
      iVar2 = *(int *)(param_1 + 0x1e0);
      *(float *)(iVar2 + 0x38) = *(float *)(param_1 + 0x28) + fVar4 * *(float *)(iVar2 + 0x30);
      *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 0x2c) + *(float *)(iVar2 + 0x2c);
      *(float *)(iVar2 + 0x40) = *(float *)(param_1 + 0x30) + fVar3 * *(float *)(iVar2 + 0x30);
      iVar2 = *(int *)(param_1 + 0x1e0);
      *(float *)(iVar2 + 0x88) = *(float *)(param_1 + 0x28) + fVar4 * *(float *)(iVar2 + 0x80);
      *(float *)(iVar2 + 0x8c) = *(float *)(param_1 + 0x2c) + *(float *)(iVar2 + 0x7c);
      *(float *)(iVar2 + 0x90) = *(float *)(param_1 + 0x30) + fVar3 * *(float *)(iVar2 + 0x80);
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
      return;
    }
  }
  return;
}
