// OoT3D decomp @ 001c7318  name=FUN_001c7318  size=108

void FUN_001c7318(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;

  fVar1 = DAT_001c7388;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_001c7384;
  iVar2 = FUN_003705a0(*(float *)(param_1 + 0xc) - fVar1,param_1 + 0x2c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_001c738c;
    iVar2 = FUN_0036a7a0(param_2);
    if (iVar2 != 0) {
      FUN_0036e980(param_2,param_1,7);
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001c7390;
  }
  return;
}
