// OoT3D decomp @ 00315350  name=FUN_00315350  size=224

void FUN_00315350(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  int iVar1;

  iVar1 = *(int *)(param_4 + 0x20ac);
  if (*(short *)(param_3 + 0x766) == 0) {
    if (*(short *)(param_3 + 0x768) == 0) {
      *(float *)(iVar1 + 0x12c8) = *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x818);
      *(undefined4 *)(iVar1 + 0x12cc) = *(undefined4 *)(iVar1 + 0x2c);
      *(float *)(iVar1 + 0x12d0) = *(float *)(param_3 + 0x30) + *(float *)(param_3 + 0x81c);
      FUN_0036e980(param_4,param_3,0x6e);
      *(short *)(param_3 + 0x768) = *(short *)(param_3 + 0x768) + 1;
    }
    else {
      param_1 = *(float *)(iVar1 + 0x28) - param_1;
      param_2 = *(float *)(iVar1 + 0x30) - param_2;
      if (((*(float *)(iVar1 + 0x221c) == DAT_00315430) || (param_5 < *(short *)(param_3 + 0x768)))
         || ((int)(param_1 * param_1 + param_2 * param_2) < DAT_00315434)) {
        FUN_0036e980(param_4,param_3,1);
        return;
      }
    }
  }
  else {
    *(short *)(param_3 + 0x766) = *(short *)(param_3 + 0x766) + -1;
  }
  return;
}
