// OoT3D decomp @ 001401dc  name=FUN_001401dc  size=60

void FUN_001401dc(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x7e2));
  if (iVar1 != 0) {
    FUN_00359dd0(param_1,param_2);
    *(undefined2 *)(param_1 + 0x7e0) = 0x79;
  }
  return;
}
