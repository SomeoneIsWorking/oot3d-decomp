// OoT3D decomp @ 0013f8dc  name=FUN_0013f8dc  size=156

void FUN_0013f8dc(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  uint in_fpscr;
  float fVar3;

  fVar1 = DAT_0013f978;
  sVar2 = *(short *)(param_1 + 0x1c) + 1;
  *(short *)(param_1 + 0x1c) = sVar2;
  fVar3 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c(fVar3 * fVar1 * DAT_0013f97c,param_1);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar3 * fVar1 * DAT_0013f980;
  if (*(short *)(param_1 + 0x1c) == 0x14) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef | 5;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,5);
    FUN_00362a74(param_1);
    return;
  }
  return;
}
