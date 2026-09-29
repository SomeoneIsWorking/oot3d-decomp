// OoT3D decomp @ 00104474  name=FUN_00104474  size=128

void FUN_00104474(int param_1,int param_2)

{
  short sVar1;
  float fVar2;

  fVar2 = DAT_001044f4;
  *(float *)(param_1 + 0x298) = *(float *)(param_1 + 0x298) + DAT_001044f4;
  *(float *)(param_1 + 0x29c) = *(float *)(param_1 + 0x29c) + fVar2;
  if ((*(short *)(param_1 + 0x282) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x282) + -1, *(short *)(param_1 + 0x282) = sVar1, sVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001044f8;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  return;
}
