// OoT3D decomp @ 002d50e8  name=FUN_002d50e8  size=52

void FUN_002d50e8(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  
  uVar1 = UNK_002d511c;
  *(uint *)(param_1 + 4) = param_2 >> 2;
  *(uint *)(param_1 + 8) = param_3 >> 2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if (param_2 >> 2 != param_3 >> 2) {
    fVar2 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc) = fVar2 * UNK_002d5120;
  }
  return;
}

