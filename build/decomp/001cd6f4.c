// OoT3D decomp @ 001cd6f4  name=FUN_001cd6f4  size=104

void FUN_001cd6f4(int param_1)

{
  FUN_00375a18(param_1 + 0xc0,200,5,(int)(short)(int)*(float *)(param_1 + 0x930));
  FUN_00373500(DAT_001cd764,DAT_001cd760,DAT_001cd75c,param_1 + 0x930);
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0xc0);
  if (0 < *(short *)(param_1 + 0xc0)) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
