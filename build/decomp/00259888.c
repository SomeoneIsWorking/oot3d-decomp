// OoT3D decomp @ 00259888  name=FUN_00259888  size=80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00259888(int param_1,undefined4 param_2)

{
  float fVar1;

  fVar1 = *(float *)(param_1 + 0x1e0);
  FUN_003731e0(param_1 + 0x1a4);
  if (*(float *)(param_1 + 0x8d4) <= fVar1) {
    FUN_0036e980(param_2,0,7);
    *(undefined4 *)(param_1 + 0x8a8) = _LAB_002598de_2;
  }
  return;
}
