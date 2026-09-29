// OoT3D decomp @ 0028c274  name=FUN_0028c274  size=96

void FUN_0028c274(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_0037322c(DAT_0028c2d4);
  if (0 < *(short *)(param_1 + 0x1c0)) {
    *(short *)(param_1 + 0x1c0) = *(short *)(param_1 + 0x1c0) + -1;
  }
  iVar1 = FUN_0032d8d8(param_1);
  if (iVar1 != 0) {
    FUN_0032b13c(param_2,6);
  }
  if (*(code **)(param_1 + 0x1bc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0028c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1bc))(param_1,param_2);
  return;
}
